// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/net/ssl/SSLServerSocketFactory.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSERVERSOCKETFACTORYIMPL_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSERVERSOCKETFACTORYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLServerSocketFactoryImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLServerSocketFactoryImpl>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLServerSocketFactoryImpl";
	using base_classes = std::tuple<scapix::java_api::javax::net::ssl::SSLServerSocketFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSERVERSOCKETFACTORYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSERVERSOCKETFACTORYIMPL)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSERVERSOCKETFACTORYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/ServerSocket.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ssl::SSLServerSocketFactoryImpl : public jni::object_base<"sun/security/ssl/SSLServerSocketFactoryImpl",
	javax::net::ssl::SSLServerSocketFactory>
{
public:

	static jni::ref<sun::security::ssl::SSLServerSocketFactoryImpl> new_object() { return base_::new_object(); }
	jni::ref<java::net::ServerSocket> createServerSocket() { return call_method<"createServerSocket", jni::ref<java::net::ServerSocket>>(); }
	jni::ref<java::net::ServerSocket> createServerSocket(jint port) { return call_method<"createServerSocket", jni::ref<java::net::ServerSocket>>(port); }
	jni::ref<java::net::ServerSocket> createServerSocket(jint port, jint backlog) { return call_method<"createServerSocket", jni::ref<java::net::ServerSocket>>(port, backlog); }
	jni::ref<java::net::ServerSocket> createServerSocket(jint port, jint backlog, jni::ref<java::net::InetAddress> ifAddress) { return call_method<"createServerSocket", jni::ref<java::net::ServerSocket>>(port, backlog, ifAddress); }
	jni::ref<jni::array<java::lang::String>> getDefaultCipherSuites() { return call_method<"getDefaultCipherSuites", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getSupportedCipherSuites() { return call_method<"getSupportedCipherSuites", jni::ref<jni::array<java::lang::String>>>(); }

protected:

	SSLServerSocketFactoryImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSERVERSOCKETFACTORYIMPL
