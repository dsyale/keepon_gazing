// Generated by gencpp from file test_roscpp/Constants.msg
// DO NOT EDIT!


#ifndef TEST_ROSCPP_MESSAGE_CONSTANTS_H
#define TEST_ROSCPP_MESSAGE_CONSTANTS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test_roscpp
{
template <class ContainerAllocator>
struct Constants_
{
  typedef Constants_<ContainerAllocator> Type;

  Constants_()
    {
    }
  Constants_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





  enum {
    a = 1u,
    b = 2,
    c = 3u,
    d = 4,
    e = 5u,
    f = 6,
    g = 7u,
    h = 8,
  };

  static const float fa;
  static const double fb;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  str;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  str2;

  typedef boost::shared_ptr< ::test_roscpp::Constants_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roscpp::Constants_<ContainerAllocator> const> ConstPtr;

}; // struct Constants_

typedef ::test_roscpp::Constants_<std::allocator<void> > Constants;

typedef boost::shared_ptr< ::test_roscpp::Constants > ConstantsPtr;
typedef boost::shared_ptr< ::test_roscpp::Constants const> ConstantsConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   
   template<typename ContainerAllocator> const float
      Constants_<ContainerAllocator>::fa =
        
          1.5
        
        ;
   

   
   template<typename ContainerAllocator> const double
      Constants_<ContainerAllocator>::fb =
        
          40.9
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Constants_<ContainerAllocator>::str =
        
          "hello there"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Constants_<ContainerAllocator>::str2 =
        
          "this string has \"quotes\" and \\slashes\\ in it"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roscpp::Constants_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roscpp::Constants_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_roscpp

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'rosgraph_msgs': ['/opt/ros/melodic/share/rosgraph_msgs/cmake/../msg'], 'test_roscpp': ['/home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_roscpp/test/msg', '/home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_roscpp/test_serialization/msg', '/home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_roscpp/perf/msg', '/home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_roscpp/perf_serialization/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::Constants_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::Constants_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::Constants_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::Constants_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::Constants_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::Constants_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roscpp::Constants_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0032309c8dd2c569e0e0d0e75974e750";
  }

  static const char* value(const ::test_roscpp::Constants_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0032309c8dd2c569ULL;
  static const uint64_t static_value2 = 0xe0e0d0e75974e750ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roscpp::Constants_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roscpp/Constants";
  }

  static const char* value(const ::test_roscpp::Constants_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roscpp::Constants_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 a = 1\n\
int8 b = 2\n\
uint16 c = 3\n\
int16 d = 4\n\
uint32 e = 5\n\
int32 f = 6\n\
uint64 g = 7\n\
int64 h = 8\n\
float32 fa = 1.5\n\
float64 fb = 40.9\n\
string str = hello there\n\
string str2 = this string has \"quotes\" and \\slashes\\ in it\n\
";
  }

  static const char* value(const ::test_roscpp::Constants_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roscpp::Constants_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Constants_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roscpp::Constants_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::test_roscpp::Constants_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSCPP_MESSAGE_CONSTANTS_H
