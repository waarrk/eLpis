// Generated by gencpp from file cartographer_ros_msgs/SubmapQueryResponse.msg
// DO NOT EDIT!


#ifndef CARTOGRAPHER_ROS_MSGS_MESSAGE_SUBMAPQUERYRESPONSE_H
#define CARTOGRAPHER_ROS_MSGS_MESSAGE_SUBMAPQUERYRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <cartographer_ros_msgs/StatusResponse.h>
#include <cartographer_ros_msgs/SubmapTexture.h>

namespace cartographer_ros_msgs
{
template <class ContainerAllocator>
struct SubmapQueryResponse_
{
  typedef SubmapQueryResponse_<ContainerAllocator> Type;

  SubmapQueryResponse_()
    : status()
    , submap_version(0)
    , textures()  {
    }
  SubmapQueryResponse_(const ContainerAllocator& _alloc)
    : status(_alloc)
    , submap_version(0)
    , textures(_alloc)  {
  (void)_alloc;
    }



   typedef  ::cartographer_ros_msgs::StatusResponse_<ContainerAllocator>  _status_type;
  _status_type status;

   typedef int32_t _submap_version_type;
  _submap_version_type submap_version;

   typedef std::vector< ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator> >::other >  _textures_type;
  _textures_type textures;





  typedef boost::shared_ptr< ::cartographer_ros_msgs::SubmapQueryResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cartographer_ros_msgs::SubmapQueryResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SubmapQueryResponse_

typedef ::cartographer_ros_msgs::SubmapQueryResponse_<std::allocator<void> > SubmapQueryResponse;

typedef boost::shared_ptr< ::cartographer_ros_msgs::SubmapQueryResponse > SubmapQueryResponsePtr;
typedef boost::shared_ptr< ::cartographer_ros_msgs::SubmapQueryResponse const> SubmapQueryResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cartographer_ros_msgs::SubmapQueryResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cartographer_ros_msgs::SubmapQueryResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cartographer_ros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'cartographer_ros_msgs': ['/home/jetson/catkin_cg/src/cartographer_ros/cartographer_ros_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::SubmapQueryResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::SubmapQueryResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::SubmapQueryResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::SubmapQueryResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::SubmapQueryResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::SubmapQueryResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cartographer_ros_msgs::SubmapQueryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ffc82c14b81fa551bc249c31ba402b2e";
  }

  static const char* value(const ::cartographer_ros_msgs::SubmapQueryResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xffc82c14b81fa551ULL;
  static const uint64_t static_value2 = 0xbc249c31ba402b2eULL;
};

template<class ContainerAllocator>
struct DataType< ::cartographer_ros_msgs::SubmapQueryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cartographer_ros_msgs/SubmapQueryResponse";
  }

  static const char* value(const ::cartographer_ros_msgs::SubmapQueryResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cartographer_ros_msgs::SubmapQueryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cartographer_ros_msgs/StatusResponse status\n"
"int32 submap_version\n"
"cartographer_ros_msgs/SubmapTexture[] textures\n"
"\n"
"\n"
"================================================================================\n"
"MSG: cartographer_ros_msgs/StatusResponse\n"
"# Copyright 2018 The Cartographer Authors\n"
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
"# A common message type to indicate the outcome of a service call.\n"
"uint8 code\n"
"string message\n"
"\n"
"================================================================================\n"
"MSG: cartographer_ros_msgs/SubmapTexture\n"
"# Copyright 2017 The Cartographer Authors\n"
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

  static const char* value(const ::cartographer_ros_msgs::SubmapQueryResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cartographer_ros_msgs::SubmapQueryResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.submap_version);
      stream.next(m.textures);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SubmapQueryResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cartographer_ros_msgs::SubmapQueryResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cartographer_ros_msgs::SubmapQueryResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    s << std::endl;
    Printer< ::cartographer_ros_msgs::StatusResponse_<ContainerAllocator> >::stream(s, indent + "  ", v.status);
    s << indent << "submap_version: ";
    Printer<int32_t>::stream(s, indent + "  ", v.submap_version);
    s << indent << "textures[]" << std::endl;
    for (size_t i = 0; i < v.textures.size(); ++i)
    {
      s << indent << "  textures[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::cartographer_ros_msgs::SubmapTexture_<ContainerAllocator> >::stream(s, indent + "    ", v.textures[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARTOGRAPHER_ROS_MSGS_MESSAGE_SUBMAPQUERYRESPONSE_H
