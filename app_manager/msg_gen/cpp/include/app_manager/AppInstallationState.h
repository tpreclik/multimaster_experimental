/* Auto-generated by genmsg_cpp for file /tmp/buildd/ros-electric-multimaster-experimental-0.1.9/debian/ros-electric-multimaster-experimental/opt/ros/electric/stacks/multimaster_experimental/app_manager/msg/AppInstallationState.msg */
#ifndef APP_MANAGER_MESSAGE_APPINSTALLATIONSTATE_H
#define APP_MANAGER_MESSAGE_APPINSTALLATIONSTATE_H
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

#include "app_manager/ExchangeApp.h"
#include "app_manager/ExchangeApp.h"

namespace app_manager
{
template <class ContainerAllocator>
struct AppInstallationState_ {
  typedef AppInstallationState_<ContainerAllocator> Type;

  AppInstallationState_()
  : installed_apps()
  , available_apps()
  {
  }

  AppInstallationState_(const ContainerAllocator& _alloc)
  : installed_apps(_alloc)
  , available_apps(_alloc)
  {
  }

  typedef std::vector< ::app_manager::ExchangeApp_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::app_manager::ExchangeApp_<ContainerAllocator> >::other >  _installed_apps_type;
  std::vector< ::app_manager::ExchangeApp_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::app_manager::ExchangeApp_<ContainerAllocator> >::other >  installed_apps;

  typedef std::vector< ::app_manager::ExchangeApp_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::app_manager::ExchangeApp_<ContainerAllocator> >::other >  _available_apps_type;
  std::vector< ::app_manager::ExchangeApp_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::app_manager::ExchangeApp_<ContainerAllocator> >::other >  available_apps;


  ROS_DEPRECATED uint32_t get_installed_apps_size() const { return (uint32_t)installed_apps.size(); }
  ROS_DEPRECATED void set_installed_apps_size(uint32_t size) { installed_apps.resize((size_t)size); }
  ROS_DEPRECATED void get_installed_apps_vec(std::vector< ::app_manager::ExchangeApp_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::app_manager::ExchangeApp_<ContainerAllocator> >::other > & vec) const { vec = this->installed_apps; }
  ROS_DEPRECATED void set_installed_apps_vec(const std::vector< ::app_manager::ExchangeApp_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::app_manager::ExchangeApp_<ContainerAllocator> >::other > & vec) { this->installed_apps = vec; }
  ROS_DEPRECATED uint32_t get_available_apps_size() const { return (uint32_t)available_apps.size(); }
  ROS_DEPRECATED void set_available_apps_size(uint32_t size) { available_apps.resize((size_t)size); }
  ROS_DEPRECATED void get_available_apps_vec(std::vector< ::app_manager::ExchangeApp_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::app_manager::ExchangeApp_<ContainerAllocator> >::other > & vec) const { vec = this->available_apps; }
  ROS_DEPRECATED void set_available_apps_vec(const std::vector< ::app_manager::ExchangeApp_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::app_manager::ExchangeApp_<ContainerAllocator> >::other > & vec) { this->available_apps = vec; }
private:
  static const char* __s_getDataType_() { return "app_manager/AppInstallationState"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "46d45bbda08250199267aff8c0ee8c41"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "ExchangeApp[] installed_apps\n\
ExchangeApp[] available_apps\n\
\n\
================================================================================\n\
MSG: app_manager/ExchangeApp\n\
# app name\n\
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
    ros::serialization::serialize(stream, installed_apps);
    ros::serialization::serialize(stream, available_apps);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, installed_apps);
    ros::serialization::deserialize(stream, available_apps);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(installed_apps);
    size += ros::serialization::serializationLength(available_apps);
    return size;
  }

  typedef boost::shared_ptr< ::app_manager::AppInstallationState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::app_manager::AppInstallationState_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct AppInstallationState
typedef  ::app_manager::AppInstallationState_<std::allocator<void> > AppInstallationState;

typedef boost::shared_ptr< ::app_manager::AppInstallationState> AppInstallationStatePtr;
typedef boost::shared_ptr< ::app_manager::AppInstallationState const> AppInstallationStateConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::app_manager::AppInstallationState_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::app_manager::AppInstallationState_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace app_manager

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::app_manager::AppInstallationState_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::app_manager::AppInstallationState_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::app_manager::AppInstallationState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "46d45bbda08250199267aff8c0ee8c41";
  }

  static const char* value(const  ::app_manager::AppInstallationState_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x46d45bbda0825019ULL;
  static const uint64_t static_value2 = 0x9267aff8c0ee8c41ULL;
};

template<class ContainerAllocator>
struct DataType< ::app_manager::AppInstallationState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "app_manager/AppInstallationState";
  }

  static const char* value(const  ::app_manager::AppInstallationState_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::app_manager::AppInstallationState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ExchangeApp[] installed_apps\n\
ExchangeApp[] available_apps\n\
\n\
================================================================================\n\
MSG: app_manager/ExchangeApp\n\
# app name\n\
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

  static const char* value(const  ::app_manager::AppInstallationState_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::app_manager::AppInstallationState_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.installed_apps);
    stream.next(m.available_apps);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AppInstallationState_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::app_manager::AppInstallationState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::app_manager::AppInstallationState_<ContainerAllocator> & v) 
  {
    s << indent << "installed_apps[]" << std::endl;
    for (size_t i = 0; i < v.installed_apps.size(); ++i)
    {
      s << indent << "  installed_apps[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::app_manager::ExchangeApp_<ContainerAllocator> >::stream(s, indent + "    ", v.installed_apps[i]);
    }
    s << indent << "available_apps[]" << std::endl;
    for (size_t i = 0; i < v.available_apps.size(); ++i)
    {
      s << indent << "  available_apps[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::app_manager::ExchangeApp_<ContainerAllocator> >::stream(s, indent + "    ", v.available_apps[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // APP_MANAGER_MESSAGE_APPINSTALLATIONSTATE_H

