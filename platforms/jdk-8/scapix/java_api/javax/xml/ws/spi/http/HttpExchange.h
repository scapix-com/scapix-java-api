// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_WS_SPI_HTTP_HTTPEXCHANGE_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_WS_SPI_HTTP_HTTPEXCHANGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::ws::spi::http { class HttpExchange; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::ws::spi::http::HttpExchange>
{
	static constexpr fixed_string class_name = "javax/xml/ws/spi/http/HttpExchange";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_SPI_HTTP_HTTPEXCHANGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_WS_SPI_HTTP_HTTPEXCHANGE)
#define SCAPIX_JAVA_API_JAVAX_XML_WS_SPI_HTTP_HTTPEXCHANGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetSocketAddress.h>
#include <scapix/java_api/java/security/Principal.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/javax/xml/ws/spi/http/HttpContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::ws::spi::http::HttpExchange : public jni::object_base<"javax/xml/ws/spi/http/HttpExchange",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> REQUEST_CIPHER_SUITE() { return get_static_field<"REQUEST_CIPHER_SUITE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> REQUEST_KEY_SIZE() { return get_static_field<"REQUEST_KEY_SIZE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> REQUEST_X509CERTIFICATE() { return get_static_field<"REQUEST_X509CERTIFICATE", jni::ref<java::lang::String>>(); }

	static jni::ref<javax::xml::ws::spi::http::HttpExchange> new_object() { return base_::new_object(); }
	jni::ref<java::util::Map> getRequestHeaders() { return call_method<"getRequestHeaders", jni::ref<java::util::Map>>(); }
	jni::ref<java::lang::String> getRequestHeader(jni::ref<java::lang::String> p1) { return call_method<"getRequestHeader", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::util::Map> getResponseHeaders() { return call_method<"getResponseHeaders", jni::ref<java::util::Map>>(); }
	void addResponseHeader(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"addResponseHeader", void>(p1, p2); }
	jni::ref<java::lang::String> getRequestURI() { return call_method<"getRequestURI", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getContextPath() { return call_method<"getContextPath", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getRequestMethod() { return call_method<"getRequestMethod", jni::ref<java::lang::String>>(); }
	jni::ref<javax::xml::ws::spi::http::HttpContext> getHttpContext() { return call_method<"getHttpContext", jni::ref<javax::xml::ws::spi::http::HttpContext>>(); }
	void close() { return call_method<"close", void>(); }
	jni::ref<java::io::InputStream> getRequestBody() { return call_method<"getRequestBody", jni::ref<java::io::InputStream>>(); }
	jni::ref<java::io::OutputStream> getResponseBody() { return call_method<"getResponseBody", jni::ref<java::io::OutputStream>>(); }
	void setStatus(jint p1) { return call_method<"setStatus", void>(p1); }
	jni::ref<java::net::InetSocketAddress> getRemoteAddress() { return call_method<"getRemoteAddress", jni::ref<java::net::InetSocketAddress>>(); }
	jni::ref<java::net::InetSocketAddress> getLocalAddress() { return call_method<"getLocalAddress", jni::ref<java::net::InetSocketAddress>>(); }
	jni::ref<java::lang::String> getProtocol() { return call_method<"getProtocol", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getScheme() { return call_method<"getScheme", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getPathInfo() { return call_method<"getPathInfo", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getQueryString() { return call_method<"getQueryString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> getAttribute(jni::ref<java::lang::String> p1) { return call_method<"getAttribute", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::util::Set> getAttributeNames() { return call_method<"getAttributeNames", jni::ref<java::util::Set>>(); }
	jni::ref<java::security::Principal> getUserPrincipal() { return call_method<"getUserPrincipal", jni::ref<java::security::Principal>>(); }
	jboolean isUserInRole(jni::ref<java::lang::String> p1) { return call_method<"isUserInRole", jboolean>(p1); }

protected:

	HttpExchange(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_SPI_HTTP_HTTPEXCHANGE
