// Generated by gencpp from file test_rosmaster/RosmsgA.msg
// DO NOT EDIT!


#ifndef TEST_ROSMASTER_MESSAGE_ROSMSGA_H
#define TEST_ROSMASTER_MESSAGE_ROSMSGA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test_rosmaster
{
template <class ContainerAllocator>
struct RosmsgA_
{
  typedef RosmsgA_<ContainerAllocator> Type;

  RosmsgA_()
    : a(0)  {
    }
  RosmsgA_(const ContainerAllocator& _alloc)
    : a(0)  {
  (void)_alloc;
    }



   typedef int32_t _a_type;
  _a_type a;





  typedef boost::shared_ptr< ::test_rosmaster::RosmsgA_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_rosmaster::RosmsgA_<ContainerAllocator> const> ConstPtr;

}; // struct RosmsgA_

typedef ::test_rosmaster::RosmsgA_<std::allocator<void> > RosmsgA;

typedef boost::shared_ptr< ::test_rosmaster::RosmsgA > RosmsgAPtr;
typedef boost::shared_ptr< ::test_rosmaster::RosmsgA const> RosmsgAConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_rosmaster::RosmsgA_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_rosmaster::RosmsgA_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_rosmaster

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'test_rosmaster': ['/home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_rosmaster/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_rosmaster::RosmsgA_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rosmaster::RosmsgA_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rosmaster::RosmsgA_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rosmaster::RosmsgA_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosmaster::RosmsgA_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosmaster::RosmsgA_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_rosmaster::RosmsgA_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5c9fb1a886e81e3162a5c87bf55c072b";
  }

  static const char* value(const ::test_rosmaster::RosmsgA_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5c9fb1a886e81e31ULL;
  static const uint64_t static_value2 = 0x62a5c87bf55c072bULL;
};

template<class ContainerAllocator>
struct DataType< ::test_rosmaster::RosmsgA_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_rosmaster/RosmsgA";
  }

  static const char* value(const ::test_rosmaster::RosmsgA_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_rosmaster::RosmsgA_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 a\n\
";
  }

  static const char* value(const ::test_rosmaster::RosmsgA_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_rosmaster::RosmsgA_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RosmsgA_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_rosmaster::RosmsgA_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_rosmaster::RosmsgA_<ContainerAllocator>& v)
  {
    s << indent << "a: ";
    Printer<int32_t>::stream(s, indent + "  ", v.a);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSMASTER_MESSAGE_ROSMSGA_H
