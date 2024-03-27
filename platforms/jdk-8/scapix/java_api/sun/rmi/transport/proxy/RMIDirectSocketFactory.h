// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/rmi/server/RMISocketFactory.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_RMIDIRECTSOCKETFACTORY_FWD
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_RMIDIRECTSOCKETFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::transport::proxy { class RMIDirectSocketFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::transport::proxy::RMIDirectSocketFactory>
{
	static constexpr fixed_string class_name = "sun/rmi/transport/proxy/RMIDirectSocketFactory";
	using base_classes = std::tuple<scapix::java_api::java::rmi::server::RMISocketFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_RMIDIRECTSOCKETFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_RMIDIRECTSOCKETFACTORY)
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_RMIDIRECTSOCKETFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/ServerSocket.h>
#include <scapix/java_api/java/net/Socket.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::rmi::transport::proxy::RMIDirectSocketFactory : public jni::object_base<"sun/rmi/transport/proxy/RMIDirectSocketFactory",
	java::rmi::server::RMISocketFactory>
{
public:

	static jni::ref<sun::rmi::transport::proxy::RMIDirectSocketFactory> new_object() { return base_::new_object(); }
	jni::ref<java::net::Socket> createSocket(jni::ref<java::lang::String> p1, jint p2) { return call_method<"createSocket", jni::ref<java::net::Socket>>(p1, p2); }
	jni::ref<java::net::ServerSocket> createServerSocket(jint p1) { return call_method<"createServerSocket", jni::ref<java::net::ServerSocket>>(p1); }

protected:

	RMIDirectSocketFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_RMIDIRECTSOCKETFACTORY
