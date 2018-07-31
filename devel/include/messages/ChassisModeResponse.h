// Generated by gencpp from file messages/ChassisModeResponse.msg
// DO NOT EDIT!


#ifndef MESSAGES_MESSAGE_CHASSISMODERESPONSE_H
#define MESSAGES_MESSAGE_CHASSISMODERESPONSE_H


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
struct ChassisModeResponse_
{
  typedef ChassisModeResponse_<ContainerAllocator> Type;

  ChassisModeResponse_()
    : received(false)  {
    }
  ChassisModeResponse_(const ContainerAllocator& _alloc)
    : received(false)  {
  (void)_alloc;
    }



   typedef uint8_t _received_type;
  _received_type received;





  typedef boost::shared_ptr< ::messages::ChassisModeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::messages::ChassisModeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ChassisModeResponse_

typedef ::messages::ChassisModeResponse_<std::allocator<void> > ChassisModeResponse;

typedef boost::shared_ptr< ::messages::ChassisModeResponse > ChassisModeResponsePtr;
typedef boost::shared_ptr< ::messages::ChassisModeResponse const> ChassisModeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::messages::ChassisModeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::messages::ChassisModeResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::messages::ChassisModeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::messages::ChassisModeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::messages::ChassisModeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::messages::ChassisModeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::messages::ChassisModeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::messages::ChassisModeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::messages::ChassisModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dd4152e077925db952c78baadb1e48b7";
  }

  static const char* value(const ::messages::ChassisModeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdd4152e077925db9ULL;
  static const uint64_t static_value2 = 0x52c78baadb1e48b7ULL;
};

template<class ContainerAllocator>
struct DataType< ::messages::ChassisModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "messages/ChassisModeResponse";
  }

  static const char* value(const ::messages::ChassisModeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::messages::ChassisModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool received\n\
";
  }

  static const char* value(const ::messages::ChassisModeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::messages::ChassisModeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.received);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ChassisModeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::messages::ChassisModeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::messages::ChassisModeResponse_<ContainerAllocator>& v)
  {
    s << indent << "received: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.received);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MESSAGES_MESSAGE_CHASSISMODERESPONSE_H
