// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/net/ssl/SSLSocketFactory.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSOCKETFACTORYIMPL_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSOCKETFACTORYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLSocketFactoryImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLSocketFactoryImpl>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLSocketFactoryImpl";
	using base_classes = std::tuple<scapix::java_api::javax::net::ssl::SSLSocketFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSOCKETFACTORYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSOCKETFACTORYIMPL)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSOCKETFACTORYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/Socket.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ssl::SSLSocketFactoryImpl : public jni::object_base<"sun/security/ssl/SSLSocketFactoryImpl",
	javax::net::ssl::SSLSocketFactory>
{
public:

	static jni::ref<sun::security::ssl::SSLSocketFactoryImpl> new_object() { return base_::new_object(); }
	jni::ref<java::net::Socket> createSocket() { return call_method<"createSocket", jni::ref<java::net::Socket>>(); }
	jni::ref<java::net::Socket> createSocket(jni::ref<java::lang::String> host, jint port) { return call_method<"createSocket", jni::ref<java::net::Socket>>(host, port); }
	jni::ref<java::net::Socket> createSocket(jni::ref<java::net::Socket> s, jni::ref<java::lang::String> host, jint port, jboolean autoClose) { return call_method<"createSocket", jni::ref<java::net::Socket>>(s, host, port, autoClose); }
	jni::ref<java::net::Socket> createSocket(jni::ref<java::net::Socket> s, jni::ref<java::io::InputStream> consumed, jboolean autoClose) { return call_method<"createSocket", jni::ref<java::net::Socket>>(s, consumed, autoClose); }
	jni::ref<java::net::Socket> createSocket(jni::ref<java::net::InetAddress> address, jint port) { return call_method<"createSocket", jni::ref<java::net::Socket>>(address, port); }
	jni::ref<java::net::Socket> createSocket(jni::ref<java::lang::String> host, jint port, jni::ref<java::net::InetAddress> clientAddress, jint clientPort) { return call_method<"createSocket", jni::ref<java::net::Socket>>(host, port, clientAddress, clientPort); }
	jni::ref<java::net::Socket> createSocket(jni::ref<java::net::InetAddress> address, jint port, jni::ref<java::net::InetAddress> clientAddress, jint clientPort) { return call_method<"createSocket", jni::ref<java::net::Socket>>(address, port, clientAddress, clientPort); }
	jni::ref<jni::array<java::lang::String>> getDefaultCipherSuites() { return call_method<"getDefaultCipherSuites", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getSupportedCipherSuites() { return call_method<"getSupportedCipherSuites", jni::ref<jni::array<java::lang::String>>>(); }

protected:

	SSLSocketFactoryImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSOCKETFACTORYIMPL