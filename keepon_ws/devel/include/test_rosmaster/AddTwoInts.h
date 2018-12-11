// Generated by gencpp from file test_rosmaster/AddTwoInts.msg
// DO NOT EDIT!


#ifndef TEST_ROSMASTER_MESSAGE_ADDTWOINTS_H
#define TEST_ROSMASTER_MESSAGE_ADDTWOINTS_H

#include <ros/service_traits.h>


#include <test_rosmaster/AddTwoIntsRequest.h>
#include <test_rosmaster/AddTwoIntsResponse.h>


namespace test_rosmaster
{

struct AddTwoInts
{

typedef AddTwoIntsRequest Request;
typedef AddTwoIntsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AddTwoInts
} // namespace test_rosmaster


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test_rosmaster::AddTwoInts > {
  static const char* value()
  {
    return "6a2e34150c00229791cc89ff309fff21";
  }

  static const char* value(const ::test_rosmaster::AddTwoInts&) { return value(); }
};

template<>
struct DataType< ::test_rosmaster::AddTwoInts > {
  static const char* value()
  {
    return "test_rosmaster/AddTwoInts";
  }

  static const char* value(const ::test_rosmaster::AddTwoInts&) { return value(); }
};


// service_traits::MD5Sum< ::test_rosmaster::AddTwoIntsRequest> should match 
// service_traits::MD5Sum< ::test_rosmaster::AddTwoInts > 
template<>
struct MD5Sum< ::test_rosmaster::AddTwoIntsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test_rosmaster::AddTwoInts >::value();
  }
  static const char* value(const ::test_rosmaster::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test_rosmaster::AddTwoIntsRequest> should match 
// service_traits::DataType< ::test_rosmaster::AddTwoInts > 
template<>
struct DataType< ::test_rosmaster::AddTwoIntsRequest>
{
  static const char* value()
  {
    return DataType< ::test_rosmaster::AddTwoInts >::value();
  }
  static const char* value(const ::test_rosmaster::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test_rosmaster::AddTwoIntsResponse> should match 
// service_traits::MD5Sum< ::test_rosmaster::AddTwoInts > 
template<>
struct MD5Sum< ::test_rosmaster::AddTwoIntsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test_rosmaster::AddTwoInts >::value();
  }
  static const char* value(const ::test_rosmaster::AddTwoIntsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test_rosmaster::AddTwoIntsResponse> should match 
// service_traits::DataType< ::test_rosmaster::AddTwoInts > 
template<>
struct DataType< ::test_rosmaster::AddTwoIntsResponse>
{
  static const char* value()
  {
    return DataType< ::test_rosmaster::AddTwoInts >::value();
  }
  static const char* value(const ::test_rosmaster::AddTwoIntsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_ROSMASTER_MESSAGE_ADDTWOINTS_H
