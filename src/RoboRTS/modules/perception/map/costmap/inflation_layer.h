/****************************************************************************
 *  Copyright (C) 2018 RoboMaster.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of 
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program. If not, see <http://www.gnu.org/licenses/>.
 ***************************************************************************/
/*********************************************************************
 *
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2008, 2013, Willow Garage, Inc.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of Willow Garage, Inc. nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *
 *********************************************************************/
#ifndef MODULES_PERCEPTION_MAP_COSTMAP_INFLATION_LAYER_H
#define MODULES_PERCEPTION_MAP_COSTMAP_INFLATION_LAYER_H

#include <mutex>
#include "modules/perception/map/costmap/map_common.h"
#include "modules/perception/map/costmap/layer.h"
#include "modules/perception/map/costmap/layered_costmap.h"

namespace rrts {
namespace perception {
namespace map {

/**
 * @class CellData
 * @brief Storage for cell information used during obstacle inflation
 */
class CellData {
 public:
  /**
   * @brief  Constructor for a CellData objects
   * @param  i The index of the cell in the cost map
   * @param  x The x coordinate of the cell in the cost map
   * @param  y The y coordinate of the cell in the cost map
   * @param  sx The x coordinate of the closest obstacle cell in the costmap
   * @param  sy The y coordinate of the closest obstacle cell in the costmap
   * @return
   */
  CellData(double i, unsigned int x, unsigned int y, unsigned int sx, unsigned int sy) :
      index_(i), x_(x), y_(y), src_x_(sx), src_y_(sy) {
  }
  unsigned int index_;
  unsigned int x_, y_;
  unsigned int src_x_, src_y_;
};

class InflationLayer : public Layer {
 public:
  InflationLayer();

  virtual ~InflationLayer() {
    DeleteKernels();
  }

  virtual void OnInitialize();
  virtual void UpdateBounds(double robot_x, double robot_y, double robot_yaw, double *min_x, double *min_y,
                            double *max_x, double *max_y);
  virtual void UpdateCosts(Costmap2D &master_grid, int min_i, int min_j, int max_i, int max_j);
  virtual bool IsDiscretized() {
    return true;
  }
  virtual void MatchSize();

  virtual void Reset() { OnInitialize(); }

  /** @brief  Given a distance, compute a cost.
   * @param  distance The distance from an obstacle in cells
   * @return A cost value for the distance */
  inline unsigned char ComputeCost(unsigned distance_cell) const {
    unsigned char cost = 0;
    if (distance_cell == 0)
      cost = LETHAL_OBSTACLE;
    else if (distance_cell * resolution_ <= inscribed_radius_)
      cost = INSCRIBED_INFLATED_OBSTACLE;
    else {
      // make sure cost falls off by Euclidean distance
      double euclidean_distance = distance_cell * resolution_;
      double factor = exp(-1.0 * weight_ * (euclidean_distance - inscribed_radius_));
      cost = (unsigned char) ((INSCRIBED_INFLATED_OBSTACLE - 1) * factor);
    }
    return cost;
  }

  /**
   * @brief Change the values of the inflation radius parameters
   * @param inflation_radius The new inflation radius
   * @param cost_scaling_factor The new weight
   */
  void SetInflationParameters(double inflation_radius, double cost_scaling_factor);

 protected:
  virtual void OnFootprintChanged();
  std::recursive_mutex *inflation_access_;

 private:
  /**
   * @brief  Lookup pre-computed distances
   * @param mx The x coordinate of the current cell
   * @param my The y coordinate of the current cell
   * @param src_x The x coordinate of the source cell
   * @param src_y The y coordinate of the source cell
   * @return
   */
  inline double DistanceLookup(int mx, int my, int src_x, int src_y) {
    unsigned int dx = abs(mx - src_x);
    unsigned int dy = abs(my - src_y);
    return cached_distances_[dx][dy];
  }

  /**
   * @brief  Lookup pre-computed costs
   * @param mx The x coordinate of the current cell
   * @param my The y coordinate of the current cell
   * @param src_x The x coordinate of the source cell
   * @param src_y The y coordinate of the source cell
   * @return
   */
  inline unsigned char CostLookup(int mx, int my, int src_x, int src_y) {
    unsigned int dx = abs(mx - src_x);
    unsigned int dy = abs(my - src_y);
    return cached_costs_[dx][dy];
  }

  void ComputeCaches();
  void DeleteKernels();
  void InflateArea(int min_i, int min_j, int max_i, int max_j, unsigned char *master_grid);

  unsigned int CellDistance(double world_dist) {
    return layered_costmap_->GetCostMap()->World2Cell(world_dist);
  }

  inline void Enqueue(unsigned int index, unsigned int mx, unsigned int my,
                      unsigned int src_x, unsigned int src_y);

  double inflation_radius_, inscribed_radius_, weight_;
  bool inflate_unknown_;
  unsigned int cell_inflation_radius_;
  unsigned int cached_cell_inflation_radius_;
  std::map<double, std::vector<CellData> > inflation_cells_;

  double resolution_;

  bool* seen_;
  int seen_size_;

  unsigned char** cached_costs_;
  double** cached_distances_;
  double last_min_x_, last_min_y_, last_max_x_, last_max_y_;

  bool need_reinflation_;
};

} //namespace map
} //namespace perception
} //namespace rrts
#endif  //MODULES_PERCEPTION_MAP_COSTMAP_INFLATION_LAYER_H