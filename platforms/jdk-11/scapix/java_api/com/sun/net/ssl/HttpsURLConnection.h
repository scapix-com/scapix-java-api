// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/net/HttpURLConnection.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NET_SSL_HTTPSURLCONNECTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_NET_SSL_HTTPSURLCONNECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::net::ssl { class HttpsURLConnection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::net::ssl::HttpsURLConnection>
{
	static constexpr fixed_string class_name = "com/sun/net/ssl/HttpsURLConnection";
	using base_classes = std::tuple<scapix::java_api::java::net::HttpURLConnection>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_SSL_HTTPSURLCONNECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NET_SSL_HTTPSURLCONNECTION)
#define SCAPIX_JAVA_API_COM_SUN_NET_SSL_HTTPSURLCONNECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/net/ssl/HostnameVerifier.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/javax/net/ssl/SSLSocketFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::net::ssl::HttpsURLConnection : public jni::object_base<"com/sun/net/ssl/HttpsURLConnection",
	java::net::HttpURLConnection>
{
public:

	static jni::ref<com::sun::net::ssl::HttpsURLConnection> new_object(jni::ref<java::net::URL> url) { return base_::new_object(url); }
	jni::ref<java::lang::String> getCipherSuite() { return call_method<"getCipherSuite", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::security::cert::Certificate>> getServerCertificates() { return call_method<"getServerCertificates", jni::ref<jni::array<java::security::cert::Certificate>>>(); }
	static void setDefaultHostnameVerifier(jni::ref<com::sun::net::ssl::HostnameVerifier> v) { return call_static_method<"setDefaultHostnameVerifier", void>(v); }
	static jni::ref<com::sun::net::ssl::HostnameVerifier> getDefaultHostnameVerifier() { return call_static_method<"getDefaultHostnameVerifier", jni::ref<com::sun::net::ssl::HostnameVerifier>>(); }
	void setHostnameVerifier(jni::ref<com::sun::net::ssl::HostnameVerifier> v) { return call_method<"setHostnameVerifier", void>(v); }
	jni::ref<com::sun::net::ssl::HostnameVerifier> getHostnameVerifier() { return call_method<"getHostnameVerifier", jni::ref<com::sun::net::ssl::HostnameVerifier>>(); }
	static void setDefaultSSLSocketFactory(jni::ref<javax::net::ssl::SSLSocketFactory> sf) { return call_static_method<"setDefaultSSLSocketFactory", void>(sf); }
	static jni::ref<javax::net::ssl::SSLSocketFactory> getDefaultSSLSocketFactory() { return call_static_method<"getDefaultSSLSocketFactory", jni::ref<javax::net::ssl::SSLSocketFactory>>(); }
	void setSSLSocketFactory(jni::ref<javax::net::ssl::SSLSocketFactory> sf) { return call_method<"setSSLSocketFactory", void>(sf); }
	jni::ref<javax::net::ssl::SSLSocketFactory> getSSLSocketFactory() { return call_method<"getSSLSocketFactory", jni::ref<javax::net::ssl::SSLSocketFactory>>(); }

protected:

	HttpsURLConnection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_SSL_HTTPSURLCONNECTION
