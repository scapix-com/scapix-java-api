// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCCLIENT_FWD
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCCLIENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::transport { class DGCClient; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::transport::DGCClient>
{
	static constexpr fixed_string class_name = "sun/rmi/transport/DGCClient";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCCLIENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCCLIENT)
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCCLIENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::transport::DGCClient : public jni::object_base<"sun/rmi/transport/DGCClient",
	java::lang::Object>
{
public:


protected:

	DGCClient(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCCLIENT
