// Generated by gencpp from file cartographer_ros_msgs/SubmapTexture.msg
// DO NOT EDIT!


#ifndef CARTOGRAPHER_ROS_MSGS_MESSAGE_SUBMAPTEXTURE_H
#define CARTOGRAPHER_ROS_MSGS_MESSAGE_SUBMAPTEXTURE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace cartographer_ros_msgs
{
template <class ContainerAllocator>
struct SubmapTexture_
{
  typedef SubmapTexture_<ContainerAllocator> Type;

  SubmapTexture_()
    : cells()
    , width(0)
    , height(0)
    , resolution(0.0)
    , slice_pose()  {
    }
  SubmapTexture_(const ContainerAllocator& _alloc)
    : cells(_alloc)
    , width(0)
    , height(0)
    , resolution(0.0)
    , slice_pose(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _cells_type;
  _cells_type cells;

   typedef int32_t _width_type;
  _width_type width;

   typedef int32_t _height_type;
  _height_type height;

   typedef double _resolution_type;
  _resolution_type resolution;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _slice_pose_type;
  _slice_pose_type slice_pose;





  typedef boost::shared_ptr< ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator> const> ConstPtr;

}; // struct SubmapTexture_

typedef ::cartographer_ros_msgs::SubmapTexture_<std::allocator<void> > SubmapTexture;

typedef boost::shared_ptr< ::cartographer_ros_msgs::SubmapTexture > SubmapTexturePtr;
typedef boost::shared_ptr< ::cartographer_ros_msgs::SubmapTexture const> SubmapTextureConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cartographer_ros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'cartographer_ros_msgs': ['/home/washio/slam/src/src/cartographer_ros/cartographer_ros_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator> >
{
  static const char* value()
  {
    return "26187fc048d2d8e578b6c781f3b53158";
  }

  static const char* value(const ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x26187fc048d2d8e5ULL;
  static const uint64_t static_value2 = 0x78b6c781f3b53158ULL;
};

template<class ContainerAllocator>
struct DataType< ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cartographer_ros_msgs/SubmapTexture";
  }

  static const char* value(const ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Copyright 2017 The Cartographer Authors\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#      http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"uint8[] cells\n"
"int32 width\n"
"int32 height\n"
"float64 resolution\n"
"geometry_msgs/Pose slice_pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cells);
      stream.next(m.width);
      stream.next(m.height);
      stream.next(m.resolution);
      stream.next(m.slice_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SubmapTexture_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator>& v)
  {
    s << indent << "cells[]" << std::endl;
    for (size_t i = 0; i < v.cells.size(); ++i)
    {
      s << indent << "  cells[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.cells[i]);
    }
    s << indent << "width: ";
    Printer<int32_t>::stream(s, indent + "  ", v.width);
    s << indent << "height: ";
    Printer<int32_t>::stream(s, indent + "  ", v.height);
    s << indent << "resolution: ";
    Printer<double>::stream(s, indent + "  ", v.resolution);
    s << indent << "slice_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.slice_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARTOGRAPHER_ROS_MSGS_MESSAGE_SUBMAPTEXTURE_H
