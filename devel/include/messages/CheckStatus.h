// Generated by gencpp from file messages/CheckStatus.msg
// DO NOT EDIT!


#ifndef MESSAGES_MESSAGE_CHECKSTATUS_H
#define MESSAGES_MESSAGE_CHECKSTATUS_H

#include <ros/service_traits.h>


#include <messages/CheckStatusRequest.h>
#include <messages/CheckStatusResponse.h>


namespace messages
{

struct CheckStatus
{

typedef CheckStatusRequest Request;
typedef CheckStatusResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CheckStatus
} // namespace messages


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::messages::CheckStatus > {
  static const char* value()
  {
    return "66285132674ea3f07185519c874191fe";
  }

  static const char* value(const ::messages::CheckStatus&) { return value(); }
};

template<>
struct DataType< ::messages::CheckStatus > {
  static const char* value()
  {
    return "messages/CheckStatus";
  }

  static const char* value(const ::messages::CheckStatus&) { return value(); }
};


// service_traits::MD5Sum< ::messages::CheckStatusRequest> should match 
// service_traits::MD5Sum< ::messages::CheckStatus > 
template<>
struct MD5Sum< ::messages::CheckStatusRequest>
{
  static const char* value()
  {
    return MD5Sum< ::messages::CheckStatus >::value();
  }
  static const char* value(const ::messages::CheckStatusRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::messages::CheckStatusRequest> should match 
// service_traits::DataType< ::messages::CheckStatus > 
template<>
struct DataType< ::messages::CheckStatusRequest>
{
  static const char* value()
  {
    return DataType< ::messages::CheckStatus >::value();
  }
  static const char* value(const ::messages::CheckStatusRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::messages::CheckStatusResponse> should match 
// service_traits::MD5Sum< ::messages::CheckStatus > 
template<>
struct MD5Sum< ::messages::CheckStatusResponse>
{
  static const char* value()
  {
    return MD5Sum< ::messages::CheckStatus >::value();
  }
  static const char* value(const ::messages::CheckStatusResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::messages::CheckStatusResponse> should match 
// service_traits::DataType< ::messages::CheckStatus > 
template<>
struct DataType< ::messages::CheckStatusResponse>
{
  static const char* value()
  {
    return DataType< ::messages::CheckStatus >::value();
  }
  static const char* value(const ::messages::CheckStatusResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MESSAGES_MESSAGE_CHECKSTATUS_H