// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_SPI_HTTPSERVERPROVIDER_FWD
#define SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_SPI_HTTPSERVERPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::net::httpserver::spi { class HttpServerProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::net::httpserver::spi::HttpServerProvider>
{
	static constexpr fixed_string class_name = "com/sun/net/httpserver/spi/HttpServerProvider";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_SPI_HTTPSERVERPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_SPI_HTTPSERVERPROVIDER)
#define SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_SPI_HTTPSERVERPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/net/httpserver/HttpServer.h>
#include <scapix/java_api/com/sun/net/httpserver/HttpsServer.h>
#include <scapix/java_api/java/net/InetSocketAddress.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::net::httpserver::spi::HttpServerProvider : public jni::object_base<"com/sun/net/httpserver/spi/HttpServerProvider",
	java::lang::Object>
{
public:

	jni::ref<com::sun::net::httpserver::HttpServer> createHttpServer(jni::ref<java::net::InetSocketAddress> p1, jint p2) { return call_method<"createHttpServer", jni::ref<com::sun::net::httpserver::HttpServer>>(p1, p2); }
	jni::ref<com::sun::net::httpserver::HttpsServer> createHttpsServer(jni::ref<java::net::InetSocketAddress> p1, jint p2) { return call_method<"createHttpsServer", jni::ref<com::sun::net::httpserver::HttpsServer>>(p1, p2); }
	static jni::ref<com::sun::net::httpserver::spi::HttpServerProvider> provider() { return call_static_method<"provider", jni::ref<com::sun::net::httpserver::spi::HttpServerProvider>>(); }

protected:

	HttpServerProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_SPI_HTTPSERVERPROVIDER