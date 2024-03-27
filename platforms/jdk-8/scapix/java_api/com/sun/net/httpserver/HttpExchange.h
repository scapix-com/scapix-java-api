// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPEXCHANGE_FWD
#define SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPEXCHANGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::net::httpserver { class HttpExchange; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::net::httpserver::HttpExchange>
{
	static constexpr fixed_string class_name = "com/sun/net/httpserver/HttpExchange";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPEXCHANGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPEXCHANGE)
#define SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPEXCHANGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/net/httpserver/Headers.h>
#include <scapix/java_api/com/sun/net/httpserver/HttpContext.h>
#include <scapix/java_api/com/sun/net/httpserver/HttpPrincipal.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetSocketAddress.h>
#include <scapix/java_api/java/net/URI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::net::httpserver::HttpExchange : public jni::object_base<"com/sun/net/httpserver/HttpExchange",
	java::lang::Object>
{
public:

	jni::ref<com::sun::net::httpserver::Headers> getRequestHeaders() { return call_method<"getRequestHeaders", jni::ref<com::sun::net::httpserver::Headers>>(); }
	jni::ref<com::sun::net::httpserver::Headers> getResponseHeaders() { return call_method<"getResponseHeaders", jni::ref<com::sun::net::httpserver::Headers>>(); }
	jni::ref<java::net::URI> getRequestURI() { return call_method<"getRequestURI", jni::ref<java::net::URI>>(); }
	jni::ref<java::lang::String> getRequestMethod() { return call_method<"getRequestMethod", jni::ref<java::lang::String>>(); }
	jni::ref<com::sun::net::httpserver::HttpContext> getHttpContext() { return call_method<"getHttpContext", jni::ref<com::sun::net::httpserver::HttpContext>>(); }
	void close() { return call_method<"close", void>(); }
	jni::ref<java::io::InputStream> getRequestBody() { return call_method<"getRequestBody", jni::ref<java::io::InputStream>>(); }
	jni::ref<java::io::OutputStream> getResponseBody() { return call_method<"getResponseBody", jni::ref<java::io::OutputStream>>(); }
	void sendResponseHeaders(jint p1, jlong p2) { return call_method<"sendResponseHeaders", void>(p1, p2); }
	jni::ref<java::net::InetSocketAddress> getRemoteAddress() { return call_method<"getRemoteAddress", jni::ref<java::net::InetSocketAddress>>(); }
	jint getResponseCode() { return call_method<"getResponseCode", jint>(); }
	jni::ref<java::net::InetSocketAddress> getLocalAddress() { return call_method<"getLocalAddress", jni::ref<java::net::InetSocketAddress>>(); }
	jni::ref<java::lang::String> getProtocol() { return call_method<"getProtocol", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> getAttribute(jni::ref<java::lang::String> p1) { return call_method<"getAttribute", jni::ref<java::lang::Object>>(p1); }
	void setAttribute(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"setAttribute", void>(p1, p2); }
	void setStreams(jni::ref<java::io::InputStream> p1, jni::ref<java::io::OutputStream> p2) { return call_method<"setStreams", void>(p1, p2); }
	jni::ref<com::sun::net::httpserver::HttpPrincipal> getPrincipal() { return call_method<"getPrincipal", jni::ref<com::sun::net::httpserver::HttpPrincipal>>(); }

protected:

	HttpExchange(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPEXCHANGE