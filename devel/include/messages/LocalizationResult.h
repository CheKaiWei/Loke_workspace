// Generated by gencpp from file messages/LocalizationResult.msg
// DO NOT EDIT!


#ifndef MESSAGES_MESSAGE_LOCALIZATIONRESULT_H
#define MESSAGES_MESSAGE_LOCALIZATIONRESULT_H


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
struct LocalizationResult_
{
  typedef LocalizationResult_<ContainerAllocator> Type;

  LocalizationResult_()
    : error_code(0)
    , error_msg()  {
    }
  LocalizationResult_(const ContainerAllocator& _alloc)
    : error_code(0)
    , error_msg(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _error_code_type;
  _error_code_type error_code;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _error_msg_type;
  _error_msg_type error_msg;





  typedef boost::shared_ptr< ::messages::LocalizationResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::messages::LocalizationResult_<ContainerAllocator> const> ConstPtr;

}; // struct LocalizationResult_

typedef ::messages::LocalizationResult_<std::allocator<void> > LocalizationResult;

typedef boost::shared_ptr< ::messages::LocalizationResult > LocalizationResultPtr;
typedef boost::shared_ptr< ::messages::LocalizationResult const> LocalizationResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::messages::LocalizationResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::messages::LocalizationResult_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::messages::LocalizationResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::messages::LocalizationResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::messages::LocalizationResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::messages::LocalizationResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::messages::LocalizationResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::messages::LocalizationResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::messages::LocalizationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a8db3a24aeaa9eb2bfabe9e5577dcde1";
  }

  static const char* value(const ::messages::LocalizationResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa8db3a24aeaa9eb2ULL;
  static const uint64_t static_value2 = 0xbfabe9e5577dcde1ULL;
};

template<class ContainerAllocator>
struct DataType< ::messages::LocalizationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "messages/LocalizationResult";
  }

  static const char* value(const ::messages::LocalizationResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::messages::LocalizationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
int32 error_code\n\
string error_msg\n\
";
  }

  static const char* value(const ::messages::LocalizationResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::messages::LocalizationResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.error_code);
      stream.next(m.error_msg);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LocalizationResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::messages::LocalizationResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::messages::LocalizationResult_<ContainerAllocator>& v)
  {
    s << indent << "error_code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.error_code);
    s << indent << "error_msg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.error_msg);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MESSAGES_MESSAGE_LOCALIZATIONRESULT_H