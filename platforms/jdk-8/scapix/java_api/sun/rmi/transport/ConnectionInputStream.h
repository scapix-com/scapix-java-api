// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/rmi/server/MarshalInputStream.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_CONNECTIONINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_CONNECTIONINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::transport { class ConnectionInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::transport::ConnectionInputStream>
{
	static constexpr fixed_string class_name = "sun/rmi/transport/ConnectionInputStream";
	using base_classes = std::tuple<scapix::java_api::sun::rmi::server::MarshalInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_CONNECTIONINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_CONNECTIONINPUTSTREAM)
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_CONNECTIONINPUTSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::transport::ConnectionInputStream : public jni::object_base<"sun/rmi/transport/ConnectionInputStream",
	sun::rmi::server::MarshalInputStream>
{
public:


protected:

	ConnectionInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_CONNECTIONINPUTSTREAM
