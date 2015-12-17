/* Auto-generated by genmsg_cpp for file /opt/ros/hydro/stacks/qbo_object_recognition/srv/Teach.srv */
#ifndef QBO_OBJECT_RECOGNITION_SERVICE_TEACH_H
#define QBO_OBJECT_RECOGNITION_SERVICE_TEACH_H
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




namespace qbo_object_recognition
{
template <class ContainerAllocator>
struct TeachRequest_ {
  typedef TeachRequest_<ContainerAllocator> Type;

  TeachRequest_()
  {
  }

  TeachRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::qbo_object_recognition::TeachRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qbo_object_recognition::TeachRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct TeachRequest
typedef  ::qbo_object_recognition::TeachRequest_<std::allocator<void> > TeachRequest;

typedef boost::shared_ptr< ::qbo_object_recognition::TeachRequest> TeachRequestPtr;
typedef boost::shared_ptr< ::qbo_object_recognition::TeachRequest const> TeachRequestConstPtr;



template <class ContainerAllocator>
struct TeachResponse_ {
  typedef TeachResponse_<ContainerAllocator> Type;

  TeachResponse_()
  : taught(false)
  {
  }

  TeachResponse_(const ContainerAllocator& _alloc)
  : taught(false)
  {
  }

  typedef uint8_t _taught_type;
  uint8_t taught;


  typedef boost::shared_ptr< ::qbo_object_recognition::TeachResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qbo_object_recognition::TeachResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct TeachResponse
typedef  ::qbo_object_recognition::TeachResponse_<std::allocator<void> > TeachResponse;

typedef boost::shared_ptr< ::qbo_object_recognition::TeachResponse> TeachResponsePtr;
typedef boost::shared_ptr< ::qbo_object_recognition::TeachResponse const> TeachResponseConstPtr;


struct Teach
{

typedef TeachRequest Request;
typedef TeachResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct Teach
} // namespace qbo_object_recognition

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::qbo_object_recognition::TeachRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::qbo_object_recognition::TeachRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::qbo_object_recognition::TeachRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::qbo_object_recognition::TeachRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::qbo_object_recognition::TeachRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "qbo_object_recognition/TeachRequest";
  }

  static const char* value(const  ::qbo_object_recognition::TeachRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::qbo_object_recognition::TeachRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
";
  }

  static const char* value(const  ::qbo_object_recognition::TeachRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::qbo_object_recognition::TeachRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::qbo_object_recognition::TeachResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::qbo_object_recognition::TeachResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::qbo_object_recognition::TeachResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "045e724eaf9efdeff4f56e372f7e1c92";
  }

  static const char* value(const  ::qbo_object_recognition::TeachResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x045e724eaf9efdefULL;
  static const uint64_t static_value2 = 0xf4f56e372f7e1c92ULL;
};

template<class ContainerAllocator>
struct DataType< ::qbo_object_recognition::TeachResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "qbo_object_recognition/TeachResponse";
  }

  static const char* value(const  ::qbo_object_recognition::TeachResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::qbo_object_recognition::TeachResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool taught\n\
\n\
\n\
";
  }

  static const char* value(const  ::qbo_object_recognition::TeachResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::qbo_object_recognition::TeachResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::qbo_object_recognition::TeachRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TeachRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::qbo_object_recognition::TeachResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.taught);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TeachResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<qbo_object_recognition::Teach> {
  static const char* value() 
  {
    return "045e724eaf9efdeff4f56e372f7e1c92";
  }

  static const char* value(const qbo_object_recognition::Teach&) { return value(); } 
};

template<>
struct DataType<qbo_object_recognition::Teach> {
  static const char* value() 
  {
    return "qbo_object_recognition/Teach";
  }

  static const char* value(const qbo_object_recognition::Teach&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<qbo_object_recognition::TeachRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "045e724eaf9efdeff4f56e372f7e1c92";
  }

  static const char* value(const qbo_object_recognition::TeachRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<qbo_object_recognition::TeachRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "qbo_object_recognition/Teach";
  }

  static const char* value(const qbo_object_recognition::TeachRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<qbo_object_recognition::TeachResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "045e724eaf9efdeff4f56e372f7e1c92";
  }

  static const char* value(const qbo_object_recognition::TeachResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<qbo_object_recognition::TeachResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "qbo_object_recognition/Teach";
  }

  static const char* value(const qbo_object_recognition::TeachResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // QBO_OBJECT_RECOGNITION_SERVICE_TEACH_H

