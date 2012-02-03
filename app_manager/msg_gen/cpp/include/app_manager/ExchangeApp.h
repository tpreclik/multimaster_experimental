/* Auto-generated by genmsg_cpp for file /tmp/buildd/ros-electric-multimaster-experimental-0.1.9/debian/ros-electric-multimaster-experimental/opt/ros/electric/stacks/multimaster_experimental/app_manager/msg/ExchangeApp.msg */
#ifndef APP_MANAGER_MESSAGE_EXCHANGEAPP_H
#define APP_MANAGER_MESSAGE_EXCHANGEAPP_H
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

#include "app_manager/Icon.h"

namespace app_manager
{
template <class ContainerAllocator>
struct ExchangeApp_ {
  typedef ExchangeApp_<ContainerAllocator> Type;

  ExchangeApp_()
  : name()
  , display_name()
  , version()
  , latest_version()
  , description()
  , icon()
  , hidden(false)
  {
  }

  ExchangeApp_(const ContainerAllocator& _alloc)
  : name(_alloc)
  , display_name(_alloc)
  , version(_alloc)
  , latest_version(_alloc)
  , description(_alloc)
  , icon(_alloc)
  , hidden(false)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  name;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _display_name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  display_name;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _version_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  version;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _latest_version_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  latest_version;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _description_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  description;

  typedef  ::app_manager::Icon_<ContainerAllocator>  _icon_type;
   ::app_manager::Icon_<ContainerAllocator>  icon;

  typedef uint8_t _hidden_type;
  uint8_t hidden;


private:
  static const char* __s_getDataType_() { return "app_manager/ExchangeApp"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "ccad20aa9f390121e44c61d218038d78"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# app name\n\
string name\n\
# user-friendly display name of application\n\
string display_name\n\
# the version of the package currently installed\n\
string version\n\
# latest version of the package avaliable\n\
string latest_version\n\
# the detailed description of the app\n\
string description\n\
# icon for showing app\n\
Icon icon\n\
# hidden apps are not show - used for cases where multiple apps are in a deb\n\
bool hidden\n\
================================================================================\n\
MSG: app_manager/Icon\n\
# Image data format.  \"jpeg\" or \"png\"\n\
string format\n\
\n\
# Image data.\n\
uint8[] data\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, name);
    ros::serialization::serialize(stream, display_name);
    ros::serialization::serialize(stream, version);
    ros::serialization::serialize(stream, latest_version);
    ros::serialization::serialize(stream, description);
    ros::serialization::serialize(stream, icon);
    ros::serialization::serialize(stream, hidden);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, name);
    ros::serialization::deserialize(stream, display_name);
    ros::serialization::deserialize(stream, version);
    ros::serialization::deserialize(stream, latest_version);
    ros::serialization::deserialize(stream, description);
    ros::serialization::deserialize(stream, icon);
    ros::serialization::deserialize(stream, hidden);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(name);
    size += ros::serialization::serializationLength(display_name);
    size += ros::serialization::serializationLength(version);
    size += ros::serialization::serializationLength(latest_version);
    size += ros::serialization::serializationLength(description);
    size += ros::serialization::serializationLength(icon);
    size += ros::serialization::serializationLength(hidden);
    return size;
  }

  typedef boost::shared_ptr< ::app_manager::ExchangeApp_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::app_manager::ExchangeApp_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ExchangeApp
typedef  ::app_manager::ExchangeApp_<std::allocator<void> > ExchangeApp;

typedef boost::shared_ptr< ::app_manager::ExchangeApp> ExchangeAppPtr;
typedef boost::shared_ptr< ::app_manager::ExchangeApp const> ExchangeAppConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::app_manager::ExchangeApp_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::app_manager::ExchangeApp_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace app_manager

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::app_manager::ExchangeApp_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::app_manager::ExchangeApp_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::app_manager::ExchangeApp_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ccad20aa9f390121e44c61d218038d78";
  }

  static const char* value(const  ::app_manager::ExchangeApp_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xccad20aa9f390121ULL;
  static const uint64_t static_value2 = 0xe44c61d218038d78ULL;
};

template<class ContainerAllocator>
struct DataType< ::app_manager::ExchangeApp_<ContainerAllocator> > {
  static const char* value() 
  {
    return "app_manager/ExchangeApp";
  }

  static const char* value(const  ::app_manager::ExchangeApp_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::app_manager::ExchangeApp_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# app name\n\
string name\n\
# user-friendly display name of application\n\
string display_name\n\
# the version of the package currently installed\n\
string version\n\
# latest version of the package avaliable\n\
string latest_version\n\
# the detailed description of the app\n\
string description\n\
# icon for showing app\n\
Icon icon\n\
# hidden apps are not show - used for cases where multiple apps are in a deb\n\
bool hidden\n\
================================================================================\n\
MSG: app_manager/Icon\n\
# Image data format.  \"jpeg\" or \"png\"\n\
string format\n\
\n\
# Image data.\n\
uint8[] data\n\
\n\
";
  }

  static const char* value(const  ::app_manager::ExchangeApp_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::app_manager::ExchangeApp_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.name);
    stream.next(m.display_name);
    stream.next(m.version);
    stream.next(m.latest_version);
    stream.next(m.description);
    stream.next(m.icon);
    stream.next(m.hidden);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ExchangeApp_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::app_manager::ExchangeApp_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::app_manager::ExchangeApp_<ContainerAllocator> & v) 
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "display_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.display_name);
    s << indent << "version: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.version);
    s << indent << "latest_version: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.latest_version);
    s << indent << "description: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.description);
    s << indent << "icon: ";
s << std::endl;
    Printer< ::app_manager::Icon_<ContainerAllocator> >::stream(s, indent + "  ", v.icon);
    s << indent << "hidden: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.hidden);
  }
};


} // namespace message_operations
} // namespace ros

#endif // APP_MANAGER_MESSAGE_EXCHANGEAPP_H

