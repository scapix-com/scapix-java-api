// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/rmi/server/RMIServerSocketFactory.h>

#ifndef SCAPIX_JAVA_API_JAVAX_RMI_SSL_SSLRMISERVERSOCKETFACTORY_FWD
#define SCAPIX_JAVA_API_JAVAX_RMI_SSL_SSLRMISERVERSOCKETFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::rmi::ssl { class SslRMIServerSocketFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::rmi::ssl::SslRMIServerSocketFactory>
{
	static constexpr fixed_string class_name = "javax/rmi/ssl/SslRMIServerSocketFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::rmi::server::RMIServerSocketFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_RMI_SSL_SSLRMISERVERSOCKETFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_RMI_SSL_SSLRMISERVERSOCKETFACTORY)
#define SCAPIX_JAVA_API_JAVAX_RMI_SSL_SSLRMISERVERSOCKETFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/ServerSocket.h>
#include <scapix/java_api/javax/net/ssl/SSLContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::rmi::ssl::SslRMIServerSocketFactory : public jni::object_base<"javax/rmi/ssl/SslRMIServerSocketFactory",
	java::lang::Object,
	java::rmi::server::RMIServerSocketFactory>
{
public:

	static jni::ref<javax::rmi::ssl::SslRMIServerSocketFactory> new_object() { return base_::new_object(); }
	static jni::ref<javax::rmi::ssl::SslRMIServerSocketFactory> new_object(jni::ref<jni::array<java::lang::String>> p1, jni::ref<jni::array<java::lang::String>> p2, jboolean p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::rmi::ssl::SslRMIServerSocketFactory> new_object(jni::ref<javax::net::ssl::SSLContext> p1, jni::ref<jni::array<java::lang::String>> p2, jni::ref<jni::array<java::lang::String>> p3, jboolean p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<jni::array<java::lang::String>> getEnabledCipherSuites() { return call_method<"getEnabledCipherSuites", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getEnabledProtocols() { return call_method<"getEnabledProtocols", jni::ref<jni::array<java::lang::String>>>(); }
	jboolean getNeedClientAuth() { return call_method<"getNeedClientAuth", jboolean>(); }
	jni::ref<java::net::ServerSocket> createServerSocket(jint p1) { return call_method<"createServerSocket", jni::ref<java::net::ServerSocket>>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	SslRMIServerSocketFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_RMI_SSL_SSLRMISERVERSOCKETFACTORY
