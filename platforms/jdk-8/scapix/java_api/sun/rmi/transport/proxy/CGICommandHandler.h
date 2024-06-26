// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_CGICOMMANDHANDLER_FWD
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_CGICOMMANDHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::transport::proxy { class CGICommandHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::transport::proxy::CGICommandHandler>
{
	static constexpr fixed_string class_name = "sun/rmi/transport/proxy/CGICommandHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_CGICOMMANDHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_CGICOMMANDHANDLER)
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_CGICOMMANDHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::transport::proxy::CGICommandHandler : public jni::object_base<"sun/rmi/transport/proxy/CGICommandHandler",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	void execute(jni::ref<java::lang::String> p1) { return call_method<"execute", void>(p1); }

protected:

	CGICommandHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_CGICOMMANDHANDLER
