// Generated by gencpp from file test_rosbag/Simple.msg
// DO NOT EDIT!


#ifndef TEST_ROSBAG_MESSAGE_SIMPLE_H
#define TEST_ROSBAG_MESSAGE_SIMPLE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test_rosbag
{
template <class ContainerAllocator>
struct Simple_
{
  typedef Simple_<ContainerAllocator> Type;

  Simple_()
    : field1(0)  {
    }
  Simple_(const ContainerAllocator& _alloc)
    : field1(0)  {
  (void)_alloc;
    }



   typedef int32_t _field1_type;
  _field1_type field1;





  typedef boost::shared_ptr< ::test_rosbag::Simple_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_rosbag::Simple_<ContainerAllocator> const> ConstPtr;

}; // struct Simple_

typedef ::test_rosbag::Simple_<std::allocator<void> > Simple;

typedef boost::shared_ptr< ::test_rosbag::Simple > SimplePtr;
typedef boost::shared_ptr< ::test_rosbag::Simple const> SimpleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_rosbag::Simple_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_rosbag::Simple_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_rosbag

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'rosgraph_msgs': ['/opt/ros/melodic/share/rosgraph_msgs/cmake/../msg'], 'test_rosbag': ['/home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_rosbag/bag_migration_tests/msg_current'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_rosbag::Simple_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rosbag::Simple_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rosbag::Simple_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rosbag::Simple_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosbag::Simple_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosbag::Simple_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_rosbag::Simple_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d13c87301de1ed73a1dd65764ac6019b";
  }

  static const char* value(const ::test_rosbag::Simple_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd13c87301de1ed73ULL;
  static const uint64_t static_value2 = 0xa1dd65764ac6019bULL;
};

template<class ContainerAllocator>
struct DataType< ::test_rosbag::Simple_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_rosbag/Simple";
  }

  static const char* value(const ::test_rosbag::Simple_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_rosbag::Simple_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 field1 #42\n\
";
  }

  static const char* value(const ::test_rosbag::Simple_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_rosbag::Simple_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.field1);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Simple_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_rosbag::Simple_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_rosbag::Simple_<ContainerAllocator>& v)
  {
    s << indent << "field1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.field1);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSBAG_MESSAGE_SIMPLE_H
