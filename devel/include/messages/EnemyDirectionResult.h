// Generated by gencpp from file messages/EnemyDirectionResult.msg
// DO NOT EDIT!


#ifndef MESSAGES_MESSAGE_ENEMYDIRECTIONRESULT_H
#define MESSAGES_MESSAGE_ENEMYDIRECTIONRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace messages
{
template <class ContainerAllocator>
struct EnemyDirectionResult_
{
  typedef EnemyDirectionResult_<ContainerAllocator> Type;

  EnemyDirectionResult_()
    : result(0.0)  {
    }
  EnemyDirectionResult_(const ContainerAllocator& _alloc)
    : result(0.0)  {
  (void)_alloc;
    }



   typedef float _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::messages::EnemyDirectionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::messages::EnemyDirectionResult_<ContainerAllocator> const> ConstPtr;

}; // struct EnemyDirectionResult_

typedef ::messages::EnemyDirectionResult_<std::allocator<void> > EnemyDirectionResult;

typedef boost::shared_ptr< ::messages::EnemyDirectionResult > EnemyDirectionResultPtr;
typedef boost::shared_ptr< ::messages::EnemyDirectionResult const> EnemyDirectionResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::messages::EnemyDirectionResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::messages::EnemyDirectionResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace messages

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'messages': ['/home/dji/roborts_ws/devel/share/messages/msg', '/home/dji/roborts_ws/src/RoboRTS/modules/stream/messages/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::messages::EnemyDirectionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::messages::EnemyDirectionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::messages::EnemyDirectionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::messages::EnemyDirectionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::messages::EnemyDirectionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::messages::EnemyDirectionResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::messages::EnemyDirectionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "db954e5de3aba73b237d07575e5cac28";
  }

  static const char* value(const ::messages::EnemyDirectionResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdb954e5de3aba73bULL;
  static const uint64_t static_value2 = 0x237d07575e5cac28ULL;
};

template<class ContainerAllocator>
struct DataType< ::messages::EnemyDirectionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "messages/EnemyDirectionResult";
  }

  static const char* value(const ::messages::EnemyDirectionResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::messages::EnemyDirectionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
float32 result\n\
";
  }

  static const char* value(const ::messages::EnemyDirectionResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::messages::EnemyDirectionResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EnemyDirectionResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::messages::EnemyDirectionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::messages::EnemyDirectionResult_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<float>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MESSAGES_MESSAGE_ENEMYDIRECTIONRESULT_H
