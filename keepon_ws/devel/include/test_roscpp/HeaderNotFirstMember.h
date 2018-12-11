// Generated by gencpp from file test_roscpp/HeaderNotFirstMember.msg
// DO NOT EDIT!


#ifndef TEST_ROSCPP_MESSAGE_HEADERNOTFIRSTMEMBER_H
#define TEST_ROSCPP_MESSAGE_HEADERNOTFIRSTMEMBER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace test_roscpp
{
template <class ContainerAllocator>
struct HeaderNotFirstMember_
{
  typedef HeaderNotFirstMember_<ContainerAllocator> Type;

  HeaderNotFirstMember_()
    : foo(0)
    , header()  {
    }
  HeaderNotFirstMember_(const ContainerAllocator& _alloc)
    : foo(0)
    , header(_alloc)  {
  (void)_alloc;
    }



   typedef int8_t _foo_type;
  _foo_type foo;

   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;





  typedef boost::shared_ptr< ::test_roscpp::HeaderNotFirstMember_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roscpp::HeaderNotFirstMember_<ContainerAllocator> const> ConstPtr;

}; // struct HeaderNotFirstMember_

typedef ::test_roscpp::HeaderNotFirstMember_<std::allocator<void> > HeaderNotFirstMember;

typedef boost::shared_ptr< ::test_roscpp::HeaderNotFirstMember > HeaderNotFirstMemberPtr;
typedef boost::shared_ptr< ::test_roscpp::HeaderNotFirstMember const> HeaderNotFirstMemberConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roscpp::HeaderNotFirstMember_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roscpp::HeaderNotFirstMember_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_roscpp

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rosgraph_msgs': ['/opt/ros/melodic/share/rosgraph_msgs/cmake/../msg'], 'test_roscpp': ['/home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_roscpp/test/msg', '/home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_roscpp/test_serialization/msg', '/home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_roscpp/perf/msg', '/home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_roscpp/perf_serialization/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::HeaderNotFirstMember_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::HeaderNotFirstMember_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::HeaderNotFirstMember_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::HeaderNotFirstMember_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::HeaderNotFirstMember_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::HeaderNotFirstMember_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roscpp::HeaderNotFirstMember_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c7ed781820d7a36c5947d0f441f50964";
  }

  static const char* value(const ::test_roscpp::HeaderNotFirstMember_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc7ed781820d7a36cULL;
  static const uint64_t static_value2 = 0x5947d0f441f50964ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roscpp::HeaderNotFirstMember_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roscpp/HeaderNotFirstMember";
  }

  static const char* value(const ::test_roscpp::HeaderNotFirstMember_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roscpp::HeaderNotFirstMember_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 foo\n\
Header header\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::test_roscpp::HeaderNotFirstMember_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roscpp::HeaderNotFirstMember_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.foo);
      stream.next(m.header);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HeaderNotFirstMember_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roscpp::HeaderNotFirstMember_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_roscpp::HeaderNotFirstMember_<ContainerAllocator>& v)
  {
    s << indent << "foo: ";
    Printer<int8_t>::stream(s, indent + "  ", v.foo);
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSCPP_MESSAGE_HEADERNOTFIRSTMEMBER_H
