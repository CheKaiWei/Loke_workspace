// Generated by gencpp from file messages/EnemyDirectionFeedback.msg
// DO NOT EDIT!


#ifndef MESSAGES_MESSAGE_ENEMYDIRECTIONFEEDBACK_H
#define MESSAGES_MESSAGE_ENEMYDIRECTIONFEEDBACK_H


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
struct EnemyDirectionFeedback_
{
  typedef EnemyDirectionFeedback_<ContainerAllocator> Type;

  EnemyDirectionFeedback_()
    : detected(false)
    , error_code(0)
    , error_msg()
    , direction(0)  {
    }
  EnemyDirectionFeedback_(const ContainerAllocator& _alloc)
    : detected(false)
    , error_code(0)
    , error_msg(_alloc)
    , direction(0)  {
  (void)_alloc;
    }



   typedef uint8_t _detected_type;
  _detected_type detected;

   typedef int32_t _error_code_type;
  _error_code_type error_code;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _error_msg_type;
  _error_msg_type error_msg;

   typedef int16_t _direction_type;
  _direction_type direction;





  typedef boost::shared_ptr< ::messages::EnemyDirectionFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::messages::EnemyDirectionFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct EnemyDirectionFeedback_

typedef ::messages::EnemyDirectionFeedback_<std::allocator<void> > EnemyDirectionFeedback;

typedef boost::shared_ptr< ::messages::EnemyDirectionFeedback > EnemyDirectionFeedbackPtr;
typedef boost::shared_ptr< ::messages::EnemyDirectionFeedback const> EnemyDirectionFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::messages::EnemyDirectionFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::messages::EnemyDirectionFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace messages

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'messages': ['/home/dji/roborts_ws/devel/share/messages/msg', '/home/dji/roborts_ws/src/RoboRTS/modules/stream/messages/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::messages::EnemyDirectionFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::messages::EnemyDirectionFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::messages::EnemyDirectionFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::messages::EnemyDirectionFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::messages::EnemyDirectionFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::messages::EnemyDirectionFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::messages::EnemyDirectionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "440f7111552dc10e9b2c64aef0b050b7";
  }

  static const char* value(const ::messages::EnemyDirectionFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x440f7111552dc10eULL;
  static const uint64_t static_value2 = 0x9b2c64aef0b050b7ULL;
};

template<class ContainerAllocator>
struct DataType< ::messages::EnemyDirectionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "messages/EnemyDirectionFeedback";
  }

  static const char* value(const ::messages::EnemyDirectionFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::messages::EnemyDirectionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback\n\
bool detected\n\
int32  error_code\n\
string error_msg\n\
# 0: not detected, 1: backward, 2: left, 3, right, 4, forward\n\
int16 direction\n\
";
  }

  static const char* value(const ::messages::EnemyDirectionFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::messages::EnemyDirectionFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.detected);
      stream.next(m.error_code);
      stream.next(m.error_msg);
      stream.next(m.direction);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EnemyDirectionFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::messages::EnemyDirectionFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::messages::EnemyDirectionFeedback_<ContainerAllocator>& v)
  {
    s << indent << "detected: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.detected);
    s << indent << "error_code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.error_code);
    s << indent << "error_msg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.error_msg);
    s << indent << "direction: ";
    Printer<int16_t>::stream(s, indent + "  ", v.direction);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MESSAGES_MESSAGE_ENEMYDIRECTIONFEEDBACK_H
