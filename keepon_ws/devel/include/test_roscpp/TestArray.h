// Generated by gencpp from file test_roscpp/TestArray.msg
// DO NOT EDIT!


#ifndef TEST_ROSCPP_MESSAGE_TESTARRAY_H
#define TEST_ROSCPP_MESSAGE_TESTARRAY_H


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
struct TestArray_
{
  typedef TestArray_<ContainerAllocator> Type;

  TestArray_()
    : counter(0)
    , float_arr()  {
    }
  TestArray_(const ContainerAllocator& _alloc)
    : counter(0)
    , float_arr(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _counter_type;
  _counter_type counter;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _float_arr_type;
  _float_arr_type float_arr;





  typedef boost::shared_ptr< ::test_roscpp::TestArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roscpp::TestArray_<ContainerAllocator> const> ConstPtr;

}; // struct TestArray_

typedef ::test_roscpp::TestArray_<std::allocator<void> > TestArray;

typedef boost::shared_ptr< ::test_roscpp::TestArray > TestArrayPtr;
typedef boost::shared_ptr< ::test_roscpp::TestArray const> TestArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roscpp::TestArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roscpp::TestArray_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test_roscpp::TestArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::TestArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::TestArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::TestArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::TestArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::TestArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roscpp::TestArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f7c2f87680985b118316f81f28b4cfd5";
  }

  static const char* value(const ::test_roscpp::TestArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf7c2f87680985b11ULL;
  static const uint64_t static_value2 = 0x8316f81f28b4cfd5ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roscpp::TestArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roscpp/TestArray";
  }

  static const char* value(const ::test_roscpp::TestArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roscpp::TestArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 counter\n\
float64[] float_arr\n\
";
  }

  static const char* value(const ::test_roscpp::TestArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roscpp::TestArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.counter);
      stream.next(m.float_arr);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TestArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roscpp::TestArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_roscpp::TestArray_<ContainerAllocator>& v)
  {
    s << indent << "counter: ";
    Printer<int32_t>::stream(s, indent + "  ", v.counter);
    s << indent << "float_arr[]" << std::endl;
    for (size_t i = 0; i < v.float_arr.size(); ++i)
    {
      s << indent << "  float_arr[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.float_arr[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSCPP_MESSAGE_TESTARRAY_H
