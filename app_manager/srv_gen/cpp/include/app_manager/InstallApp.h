/* Auto-generated by genmsg_cpp for file /tmp/buildd/ros-electric-multimaster-experimental-0.1.9/debian/ros-electric-multimaster-experimental/opt/ros/electric/stacks/multimaster_experimental/app_manager/srv/InstallApp.srv */
#ifndef APP_MANAGER_SERVICE_INSTALLAPP_H
#define APP_MANAGER_SERVICE_INSTALLAPP_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace app_manager
{
template <class ContainerAllocator>
struct InstallAppRequest_ {
  typedef InstallAppRequest_<ContainerAllocator> Type;

  InstallAppRequest_()
  : name()
  {
  }

  InstallAppRequest_(const ContainerAllocator& _alloc)
  : name(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  name;


private:
  static const char* __s_getDataType_() { return "app_manager/InstallAppRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "c1f3d28f1b044c871e6eff2e9fc3c667"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "244a230f15ee33d3fe16b523058ae43f"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "\n\
string name\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, name);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, name);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(name);
    return size;
  }

  typedef boost::shared_ptr< ::app_manager::InstallAppRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::app_manager::InstallAppRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct InstallAppRequest
typedef  ::app_manager::InstallAppRequest_<std::allocator<void> > InstallAppRequest;

typedef boost::shared_ptr< ::app_manager::InstallAppRequest> InstallAppRequestPtr;
typedef boost::shared_ptr< ::app_manager::InstallAppRequest const> InstallAppRequestConstPtr;


template <class ContainerAllocator>
struct InstallAppResponse_ {
  typedef InstallAppResponse_<ContainerAllocator> Type;

  InstallAppResponse_()
  : installed(false)
  , message()
  {
  }

  InstallAppResponse_(const ContainerAllocator& _alloc)
  : installed(false)
  , message(_alloc)
  {
  }

  typedef uint8_t _installed_type;
  uint8_t installed;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  message;


private:
  static const char* __s_getDataType_() { return "app_manager/InstallAppResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "08871bc6dbc6813537edf236ff26a1e2"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "244a230f15ee33d3fe16b523058ae43f"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "\n\
bool installed\n\
\n\
string message\n\
\n\
\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, installed);
    ros::serialization::serialize(stream, message);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, installed);
    ros::serialization::deserialize(stream, message);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(installed);
    size += ros::serialization::serializationLength(message);
    return size;
  }

  typedef boost::shared_ptr< ::app_manager::InstallAppResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::app_manager::InstallAppResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct InstallAppResponse
typedef  ::app_manager::InstallAppResponse_<std::allocator<void> > InstallAppResponse;

typedef boost::shared_ptr< ::app_manager::InstallAppResponse> InstallAppResponsePtr;
typedef boost::shared_ptr< ::app_manager::InstallAppResponse const> InstallAppResponseConstPtr;

struct InstallApp
{

typedef InstallAppRequest Request;
typedef InstallAppResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct InstallApp
} // namespace app_manager

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::app_manager::InstallAppRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::app_manager::InstallAppRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::app_manager::InstallAppRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c1f3d28f1b044c871e6eff2e9fc3c667";
  }

  static const char* value(const  ::app_manager::InstallAppRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xc1f3d28f1b044c87ULL;
  static const uint64_t static_value2 = 0x1e6eff2e9fc3c667ULL;
};

template<class ContainerAllocator>
struct DataType< ::app_manager::InstallAppRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "app_manager/InstallAppRequest";
  }

  static const char* value(const  ::app_manager::InstallAppRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::app_manager::InstallAppRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
string name\n\
\n\
";
  }

  static const char* value(const  ::app_manager::InstallAppRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::app_manager::InstallAppResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::app_manager::InstallAppResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::app_manager::InstallAppResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "08871bc6dbc6813537edf236ff26a1e2";
  }

  static const char* value(const  ::app_manager::InstallAppResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x08871bc6dbc68135ULL;
  static const uint64_t static_value2 = 0x37edf236ff26a1e2ULL;
};

template<class ContainerAllocator>
struct DataType< ::app_manager::InstallAppResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "app_manager/InstallAppResponse";
  }

  static const char* value(const  ::app_manager::InstallAppResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::app_manager::InstallAppResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
bool installed\n\
\n\
string message\n\
\n\
\n\
\n\
";
  }

  static const char* value(const  ::app_manager::InstallAppResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::app_manager::InstallAppRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.name);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct InstallAppRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::app_manager::InstallAppResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.installed);
    stream.next(m.message);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct InstallAppResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<app_manager::InstallApp> {
  static const char* value() 
  {
    return "244a230f15ee33d3fe16b523058ae43f";
  }

  static const char* value(const app_manager::InstallApp&) { return value(); } 
};

template<>
struct DataType<app_manager::InstallApp> {
  static const char* value() 
  {
    return "app_manager/InstallApp";
  }

  static const char* value(const app_manager::InstallApp&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<app_manager::InstallAppRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "244a230f15ee33d3fe16b523058ae43f";
  }

  static const char* value(const app_manager::InstallAppRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<app_manager::InstallAppRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "app_manager/InstallApp";
  }

  static const char* value(const app_manager::InstallAppRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<app_manager::InstallAppResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "244a230f15ee33d3fe16b523058ae43f";
  }

  static const char* value(const app_manager::InstallAppResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<app_manager::InstallAppResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "app_manager/InstallApp";
  }

  static const char* value(const app_manager::InstallAppResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // APP_MANAGER_SERVICE_INSTALLAPP_H

