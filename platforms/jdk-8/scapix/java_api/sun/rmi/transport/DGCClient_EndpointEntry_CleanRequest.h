// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCCLIENT_ENDPOINTENTRY_CLEANREQUEST_FWD
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCCLIENT_ENDPOINTENTRY_CLEANREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::transport { class DGCClient_EndpointEntry_CleanRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::transport::DGCClient_EndpointEntry_CleanRequest>
{
	static constexpr fixed_string class_name = "sun/rmi/transport/DGCClient$EndpointEntry$CleanRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCCLIENT_ENDPOINTENTRY_CLEANREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCCLIENT_ENDPOINTENTRY_CLEANREQUEST)
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCCLIENT_ENDPOINTENTRY_CLEANREQUEST

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::transport::DGCClient_EndpointEntry_CleanRequest : public jni::object_base<"sun/rmi/transport/DGCClient$EndpointEntry$CleanRequest",
	java::lang::Object>
{
public:


protected:

	DGCClient_EndpointEntry_CleanRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCCLIENT_ENDPOINTENTRY_CLEANREQUEST