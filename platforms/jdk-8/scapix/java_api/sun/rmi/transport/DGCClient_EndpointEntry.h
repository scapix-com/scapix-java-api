// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCCLIENT_ENDPOINTENTRY_FWD
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCCLIENT_ENDPOINTENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::transport { class DGCClient_EndpointEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::transport::DGCClient_EndpointEntry>
{
	static constexpr fixed_string class_name = "sun/rmi/transport/DGCClient$EndpointEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCCLIENT_ENDPOINTENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCCLIENT_ENDPOINTENTRY)
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCCLIENT_ENDPOINTENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/sun/rmi/transport/Endpoint.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::transport::DGCClient_EndpointEntry : public jni::object_base<"sun/rmi/transport/DGCClient$EndpointEntry",
	java::lang::Object>
{
public:

	static jni::ref<sun::rmi::transport::DGCClient_EndpointEntry> lookup(jni::ref<sun::rmi::transport::Endpoint> p1) { return call_static_method<"lookup", jni::ref<sun::rmi::transport::DGCClient_EndpointEntry>>(p1); }
	jboolean registerRefs(jni::ref<java::util::List> p1) { return call_method<"registerRefs", jboolean>(p1); }

protected:

	DGCClient_EndpointEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCCLIENT_ENDPOINTENTRY
