// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/net/httpserver/HttpServer.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPSSERVER_FWD
#define SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPSSERVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::net::httpserver { class HttpsServer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::net::httpserver::HttpsServer>
{
	static constexpr fixed_string class_name = "com/sun/net/httpserver/HttpsServer";
	using base_classes = std::tuple<scapix::java_api::com::sun::net::httpserver::HttpServer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPSSERVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPSSERVER)
#define SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPSSERVER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/net/httpserver/HttpsConfigurator.h>
#include <scapix/java_api/java/net/InetSocketAddress.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::net::httpserver::HttpsServer : public jni::object_base<"com/sun/net/httpserver/HttpsServer",
	com::sun::net::httpserver::HttpServer>
{
public:

	static jni::ref<com::sun::net::httpserver::HttpsServer> create() { return call_static_method<"create", jni::ref<com::sun::net::httpserver::HttpsServer>>(); }
	static jni::ref<com::sun::net::httpserver::HttpsServer> create(jni::ref<java::net::InetSocketAddress> p1, jint p2) { return call_static_method<"create", jni::ref<com::sun::net::httpserver::HttpsServer>>(p1, p2); }
	void setHttpsConfigurator(jni::ref<com::sun::net::httpserver::HttpsConfigurator> p1) { return call_method<"setHttpsConfigurator", void>(p1); }
	jni::ref<com::sun::net::httpserver::HttpsConfigurator> getHttpsConfigurator() { return call_method<"getHttpsConfigurator", jni::ref<com::sun::net::httpserver::HttpsConfigurator>>(); }

protected:

	HttpsServer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPSSERVER
