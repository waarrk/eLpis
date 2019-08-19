// Generated by gencpp from file cartographer_ros_msgs/MetricFamily.msg
// DO NOT EDIT!


#ifndef CARTOGRAPHER_ROS_MSGS_MESSAGE_METRICFAMILY_H
#define CARTOGRAPHER_ROS_MSGS_MESSAGE_METRICFAMILY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <cartographer_ros_msgs/Metric.h>

namespace cartographer_ros_msgs
{
template <class ContainerAllocator>
struct MetricFamily_
{
  typedef MetricFamily_<ContainerAllocator> Type;

  MetricFamily_()
    : name()
    , description()
    , metrics()  {
    }
  MetricFamily_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , description(_alloc)
    , metrics(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _description_type;
  _description_type description;

   typedef std::vector< ::cartographer_ros_msgs::Metric_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::cartographer_ros_msgs::Metric_<ContainerAllocator> >::other >  _metrics_type;
  _metrics_type metrics;





  typedef boost::shared_ptr< ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator> const> ConstPtr;

}; // struct MetricFamily_

typedef ::cartographer_ros_msgs::MetricFamily_<std::allocator<void> > MetricFamily;

typedef boost::shared_ptr< ::cartographer_ros_msgs::MetricFamily > MetricFamilyPtr;
typedef boost::shared_ptr< ::cartographer_ros_msgs::MetricFamily const> MetricFamilyConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator> >
{
  static const char* value()
  {
    return "583a11b161bb4a70f5df274715bcaf10";
  }

  static const char* value(const ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x583a11b161bb4a70ULL;
  static const uint64_t static_value2 = 0xf5df274715bcaf10ULL;
};

template<class ContainerAllocator>
struct DataType< ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cartographer_ros_msgs/MetricFamily";
  }

  static const char* value(const ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# 2018 The Cartographer Authors\n"
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
"string name\n"
"string description\n"
"cartographer_ros_msgs/Metric[] metrics\n"
"\n"
"================================================================================\n"
"MSG: cartographer_ros_msgs/Metric\n"
"# 2018 The Cartographer Authors\n"
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
"uint8 TYPE_COUNTER=0\n"
"uint8 TYPE_GAUGE=1\n"
"uint8 TYPE_HISTOGRAM=2\n"
"\n"
"uint8 type\n"
"cartographer_ros_msgs/MetricLabel[] labels\n"
"\n"
"# TYPE_COUNTER or TYPE_GAUGE\n"
"float64 value\n"
"\n"
"# TYPE_HISTOGRAM\n"
"cartographer_ros_msgs/HistogramBucket[] counts_by_bucket\n"
"\n"
"================================================================================\n"
"MSG: cartographer_ros_msgs/MetricLabel\n"
"# 2018 The Cartographer Authors\n"
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
"string key\n"
"string value\n"
"\n"
"================================================================================\n"
"MSG: cartographer_ros_msgs/HistogramBucket\n"
"# 2018 The Cartographer Authors\n"
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
"# A histogram bucket counts values x for which:\n"
"#   previous_boundary < x <= bucket_boundary\n"
"# holds.\n"
"float64 bucket_boundary\n"
"float64 count\n"
;
  }

  static const char* value(const ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.description);
      stream.next(m.metrics);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MetricFamily_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cartographer_ros_msgs::MetricFamily_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "description: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.description);
    s << indent << "metrics[]" << std::endl;
    for (size_t i = 0; i < v.metrics.size(); ++i)
    {
      s << indent << "  metrics[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::cartographer_ros_msgs::Metric_<ContainerAllocator> >::stream(s, indent + "    ", v.metrics[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARTOGRAPHER_ROS_MSGS_MESSAGE_METRICFAMILY_H
