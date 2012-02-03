/* Auto-generated by genmsg_cpp for file /tmp/buildd/ros-electric-multimaster-experimental-0.1.9/debian/ros-electric-multimaster-experimental/opt/ros/electric/stacks/multimaster_experimental/app_manager/msg/StatusCodes.msg */
#ifndef APP_MANAGER_MESSAGE_STATUSCODES_H
#define APP_MANAGER_MESSAGE_STATUSCODES_H
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


namespace app_manager
{
template <class ContainerAllocator>
struct StatusCodes_ {
  typedef StatusCodes_<ContainerAllocator> Type;

  StatusCodes_()
  {
  }

  StatusCodes_(const ContainerAllocator& _alloc)
  {
  }

  enum { SUCCESS = 0 };
  enum { BAD_REQUEST = 400 };
  enum { NOT_FOUND = 404 };
  enum { NOT_RUNNING = 430 };
  enum { INTERNAL_ERROR = 500 };
  enum { APP_INVALID = 510 };
  enum { MULTIAPP_NOT_SUPPORTED = 511 };

private:
  static const char* __s_getDataType_() { return "app_manager/StatusCodes"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "5f286aed2b2ab4b227e7b7185bae624d"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# Common error codes used with App Manager.\n\
int32 SUCCESS = 0\n\
# Request was invalid.\n\
int32 BAD_REQUEST = 400\n\
# App is not installed.\n\
int32 NOT_FOUND = 404\n\
# App is not running.\n\
int32 NOT_RUNNING = 430\n\
# Unknown internal error on the server.\n\
int32 INTERNAL_ERROR = 500\n\
# App is installed but failed validation.\n\
int32 APP_INVALID = 510\n\
# App manager does not support launching multiple apps simultaneously. Running app must first be stopped.\n\
int32 MULTIAPP_NOT_SUPPORTED = 511\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    return size;
  }

  typedef boost::shared_ptr< ::app_manager::StatusCodes_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::app_manager::StatusCodes_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct StatusCodes
typedef  ::app_manager::StatusCodes_<std::allocator<void> > StatusCodes;

typedef boost::shared_ptr< ::app_manager::StatusCodes> StatusCodesPtr;
typedef boost::shared_ptr< ::app_manager::StatusCodes const> StatusCodesConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::app_manager::StatusCodes_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::app_manager::StatusCodes_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace app_manager

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::app_manager::StatusCodes_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::app_manager::StatusCodes_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::app_manager::StatusCodes_<ContainerAllocator> > {
  static const char* value() 
  {
    return "5f286aed2b2ab4b227e7b7185bae624d";
  }

  static const char* value(const  ::app_manager::StatusCodes_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x5f286aed2b2ab4b2ULL;
  static const uint64_t static_value2 = 0x27e7b7185bae624dULL;
};

template<class ContainerAllocator>
struct DataType< ::app_manager::StatusCodes_<ContainerAllocator> > {
  static const char* value() 
  {
    return "app_manager/StatusCodes";
  }

  static const char* value(const  ::app_manager::StatusCodes_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::app_manager::StatusCodes_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# Common error codes used with App Manager.\n\
int32 SUCCESS = 0\n\
# Request was invalid.\n\
int32 BAD_REQUEST = 400\n\
# App is not installed.\n\
int32 NOT_FOUND = 404\n\
# App is not running.\n\
int32 NOT_RUNNING = 430\n\
# Unknown internal error on the server.\n\
int32 INTERNAL_ERROR = 500\n\
# App is installed but failed validation.\n\
int32 APP_INVALID = 510\n\
# App manager does not support launching multiple apps simultaneously. Running app must first be stopped.\n\
int32 MULTIAPP_NOT_SUPPORTED = 511\n\
\n\
";
  }

  static const char* value(const  ::app_manager::StatusCodes_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::app_manager::StatusCodes_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::app_manager::StatusCodes_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct StatusCodes_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::app_manager::StatusCodes_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::app_manager::StatusCodes_<ContainerAllocator> & v) 
  {
  }
};


} // namespace message_operations
} // namespace ros

#endif // APP_MANAGER_MESSAGE_STATUSCODES_H

