// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPSPARAMETERS_FWD
#define SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPSPARAMETERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::net::httpserver { class HttpsParameters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::net::httpserver::HttpsParameters>
{
	static constexpr fixed_string class_name = "com/sun/net/httpserver/HttpsParameters";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPSPARAMETERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPSPARAMETERS)
#define SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPSPARAMETERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/net/httpserver/HttpsConfigurator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetSocketAddress.h>
#include <scapix/java_api/javax/net/ssl/SSLParameters.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::net::httpserver::HttpsParameters : public jni::object_base<"com/sun/net/httpserver/HttpsParameters",
	java::lang::Object>
{
public:

	jni::ref<com::sun::net::httpserver::HttpsConfigurator> getHttpsConfigurator() { return call_method<"getHttpsConfigurator", jni::ref<com::sun::net::httpserver::HttpsConfigurator>>(); }
	jni::ref<java::net::InetSocketAddress> getClientAddress() { return call_method<"getClientAddress", jni::ref<java::net::InetSocketAddress>>(); }
	void setSSLParameters(jni::ref<javax::net::ssl::SSLParameters> p1) { return call_method<"setSSLParameters", void>(p1); }
	jni::ref<jni::array<java::lang::String>> getCipherSuites() { return call_method<"getCipherSuites", jni::ref<jni::array<java::lang::String>>>(); }
	void setCipherSuites(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"setCipherSuites", void>(p1); }
	jni::ref<jni::array<java::lang::String>> getProtocols() { return call_method<"getProtocols", jni::ref<jni::array<java::lang::String>>>(); }
	void setProtocols(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"setProtocols", void>(p1); }
	jboolean getWantClientAuth() { return call_method<"getWantClientAuth", jboolean>(); }
	void setWantClientAuth(jboolean p1) { return call_method<"setWantClientAuth", void>(p1); }
	jboolean getNeedClientAuth() { return call_method<"getNeedClientAuth", jboolean>(); }
	void setNeedClientAuth(jboolean p1) { return call_method<"setNeedClientAuth", void>(p1); }

protected:

	HttpsParameters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPSPARAMETERS
