// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/net/NetworkClient.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_HTTPCLIENT_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_HTTPCLIENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::http { class HttpClient; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::http::HttpClient>
{
	static constexpr fixed_string class_name = "sun/net/www/http/HttpClient";
	using base_classes = std::tuple<scapix::java_api::sun::net::NetworkClient>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_HTTPCLIENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_HTTPCLIENT)
#define SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_HTTPCLIENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/CacheRequest.h>
#include <scapix/java_api/java/net/Proxy.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/sun/net/ProgressSource.h>
#include <scapix/java_api/sun/net/www/MessageHeader.h>
#include <scapix/java_api/sun/net/www/http/PosterOutputStream.h>
#include <scapix/java_api/sun/net/www/protocol/http/HttpURLConnection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::www::http::HttpClient : public jni::object_base<"sun/net/www/http/HttpClient",
	sun::net::NetworkClient>
{
public:

	jboolean usingProxy() { return get_field<"usingProxy", jboolean>(); }
	void usingProxy(jboolean v) { set_field<"usingProxy", jboolean>(v); }
	jboolean reuse() { return get_field<"reuse", jboolean>(); }
	void reuse(jboolean v) { set_field<"reuse", jboolean>(v); }

	static void resetProperties() { return call_static_method<"resetProperties", void>(); }
	jboolean getHttpKeepAliveSet() { return call_method<"getHttpKeepAliveSet", jboolean>(); }
	jni::ref<java::lang::String> getSpnegoCBT() { return call_method<"getSpnegoCBT", jni::ref<java::lang::String>>(); }
	static jni::ref<sun::net::www::http::HttpClient> new_object(jni::ref<java::net::URL> p1, jni::ref<java::lang::String> p2, jint p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<sun::net::www::http::HttpClient> new_object(jni::ref<java::net::URL> p1, jni::ref<java::lang::String> p2, jint p3, jboolean p4, jint p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<sun::net::www::http::HttpClient> New(jni::ref<java::net::URL> p1) { return call_static_method<"New", jni::ref<sun::net::www::http::HttpClient>>(p1); }
	static jni::ref<sun::net::www::http::HttpClient> New(jni::ref<java::net::URL> p1, jboolean p2) { return call_static_method<"New", jni::ref<sun::net::www::http::HttpClient>>(p1, p2); }
	static jni::ref<sun::net::www::http::HttpClient> New(jni::ref<java::net::URL> p1, jni::ref<java::net::Proxy> p2, jint p3, jboolean p4, jni::ref<sun::net::www::protocol::http::HttpURLConnection> p5) { return call_static_method<"New", jni::ref<sun::net::www::http::HttpClient>>(p1, p2, p3, p4, p5); }
	static jni::ref<sun::net::www::http::HttpClient> New(jni::ref<java::net::URL> p1, jni::ref<java::net::Proxy> p2, jint p3, jni::ref<sun::net::www::protocol::http::HttpURLConnection> p4) { return call_static_method<"New", jni::ref<sun::net::www::http::HttpClient>>(p1, p2, p3, p4); }
	static jni::ref<sun::net::www::http::HttpClient> New(jni::ref<java::net::URL> p1, jni::ref<java::lang::String> p2, jint p3, jboolean p4) { return call_static_method<"New", jni::ref<sun::net::www::http::HttpClient>>(p1, p2, p3, p4); }
	static jni::ref<sun::net::www::http::HttpClient> New(jni::ref<java::net::URL> p1, jni::ref<java::lang::String> p2, jint p3, jboolean p4, jint p5, jni::ref<sun::net::www::protocol::http::HttpURLConnection> p6) { return call_static_method<"New", jni::ref<sun::net::www::http::HttpClient>>(p1, p2, p3, p4, p5, p6); }
	void finished() { return call_method<"finished", void>(); }
	void closeIdleConnection() { return call_method<"closeIdleConnection", void>(); }
	void openServer(jni::ref<java::lang::String> p1, jint p2) { return call_method<"openServer", void>(p1, p2); }
	jboolean needsTunneling() { return call_method<"needsTunneling", jboolean>(); }
	jboolean isCachedConnection() { return call_method<"isCachedConnection", jboolean>(); }
	void afterConnect() { return call_method<"afterConnect", void>(); }
	jni::ref<java::lang::String> getURLFile() { return call_method<"getURLFile", jni::ref<java::lang::String>>(); }
	void writeRequests(jni::ref<sun::net::www::MessageHeader> p1) { return call_method<"writeRequests", void>(p1); }
	void writeRequests(jni::ref<sun::net::www::MessageHeader> p1, jni::ref<sun::net::www::http::PosterOutputStream> p2) { return call_method<"writeRequests", void>(p1, p2); }
	void writeRequests(jni::ref<sun::net::www::MessageHeader> p1, jni::ref<sun::net::www::http::PosterOutputStream> p2, jboolean p3) { return call_method<"writeRequests", void>(p1, p2, p3); }
	jboolean parseHTTP(jni::ref<sun::net::www::MessageHeader> p1, jni::ref<sun::net::ProgressSource> p2, jni::ref<sun::net::www::protocol::http::HttpURLConnection> p3) { return call_method<"parseHTTP", jboolean>(p1, p2, p3); }
	jni::ref<java::io::InputStream> getInputStream() { return call_method<"getInputStream", jni::ref<java::io::InputStream>>(); }
	jni::ref<java::io::OutputStream> getOutputStream() { return call_method<"getOutputStream", jni::ref<java::io::OutputStream>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean isKeepingAlive() { return call_method<"isKeepingAlive", jboolean>(); }
	void setCacheRequest(jni::ref<java::net::CacheRequest> p1) { return call_method<"setCacheRequest", void>(p1); }
	void setDoNotRetry(jboolean p1) { return call_method<"setDoNotRetry", void>(p1); }
	void setIgnoreContinue(jboolean p1) { return call_method<"setIgnoreContinue", void>(p1); }
	void closeServer() { return call_method<"closeServer", void>(); }
	jboolean getUsingProxy() { return call_method<"getUsingProxy", jboolean>(); }
	jni::ref<java::lang::String> getProxyHostUsed() { return call_method<"getProxyHostUsed", jni::ref<java::lang::String>>(); }
	jint getProxyPortUsed() { return call_method<"getProxyPortUsed", jint>(); }

protected:

	HttpClient(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_HTTPCLIENT
