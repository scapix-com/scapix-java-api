// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/net/ServerSocket.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSERVERSOCKET_FWD
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSERVERSOCKET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::net::ssl { class SSLServerSocket; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::net::ssl::SSLServerSocket>
{
	static constexpr fixed_string class_name = "javax/net/ssl/SSLServerSocket";
	using base_classes = std::tuple<scapix::java_api::java::net::ServerSocket>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSERVERSOCKET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSERVERSOCKET)
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSERVERSOCKET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/net/ssl/SSLParameters.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::net::ssl::SSLServerSocket : public jni::object_base<"javax/net/ssl/SSLServerSocket",
	java::net::ServerSocket>
{
public:

	jni::ref<jni::array<java::lang::String>> getEnabledCipherSuites() { return call_method<"getEnabledCipherSuites", jni::ref<jni::array<java::lang::String>>>(); }
	void setEnabledCipherSuites(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"setEnabledCipherSuites", void>(p1); }
	jni::ref<jni::array<java::lang::String>> getSupportedCipherSuites() { return call_method<"getSupportedCipherSuites", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getSupportedProtocols() { return call_method<"getSupportedProtocols", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getEnabledProtocols() { return call_method<"getEnabledProtocols", jni::ref<jni::array<java::lang::String>>>(); }
	void setEnabledProtocols(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"setEnabledProtocols", void>(p1); }
	void setNeedClientAuth(jboolean p1) { return call_method<"setNeedClientAuth", void>(p1); }
	jboolean getNeedClientAuth() { return call_method<"getNeedClientAuth", jboolean>(); }
	void setWantClientAuth(jboolean p1) { return call_method<"setWantClientAuth", void>(p1); }
	jboolean getWantClientAuth() { return call_method<"getWantClientAuth", jboolean>(); }
	void setUseClientMode(jboolean p1) { return call_method<"setUseClientMode", void>(p1); }
	jboolean getUseClientMode() { return call_method<"getUseClientMode", jboolean>(); }
	void setEnableSessionCreation(jboolean p1) { return call_method<"setEnableSessionCreation", void>(p1); }
	jboolean getEnableSessionCreation() { return call_method<"getEnableSessionCreation", jboolean>(); }
	jni::ref<javax::net::ssl::SSLParameters> getSSLParameters() { return call_method<"getSSLParameters", jni::ref<javax::net::ssl::SSLParameters>>(); }
	void setSSLParameters(jni::ref<javax::net::ssl::SSLParameters> params) { return call_method<"setSSLParameters", void>(params); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	SSLServerSocket(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSERVERSOCKET