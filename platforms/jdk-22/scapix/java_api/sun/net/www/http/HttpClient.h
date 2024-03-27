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
#include <scapix/java_api/sun/net/www/MessageHeader.h>
#include <scapix/java_api/sun/net/www/http/PosterOutputStream.h>
#include <scapix/java_api/sun/net/www/protocol/http/AuthCacheImpl.h>
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
	static jni::ref<sun::net::www::http::HttpClient> new_object(jni::ref<java::net::URL> url, jni::ref<java::lang::String> proxyHost, jint proxyPort) { return base_::new_object(url, proxyHost, proxyPort); }
	static jni::ref<sun::net::www::http::HttpClient> new_object(jni::ref<java::net::URL> url, jni::ref<java::lang::String> proxyHost, jint proxyPort, jboolean proxyDisabled, jint to) { return base_::new_object(url, proxyHost, proxyPort, proxyDisabled, to); }
	static jni::ref<sun::net::www::http::HttpClient> New(jni::ref<java::net::URL> url) { return call_static_method<"New", jni::ref<sun::net::www::http::HttpClient>>(url); }
	static jni::ref<sun::net::www::http::HttpClient> New(jni::ref<java::net::URL> url, jboolean useCache) { return call_static_method<"New", jni::ref<sun::net::www::http::HttpClient>>(url, useCache); }
	static jni::ref<sun::net::www::http::HttpClient> New(jni::ref<java::net::URL> url, jni::ref<java::net::Proxy> p, jint to, jboolean useCache, jni::ref<sun::net::www::protocol::http::HttpURLConnection> httpuc) { return call_static_method<"New", jni::ref<sun::net::www::http::HttpClient>>(url, p, to, useCache, httpuc); }
	static jni::ref<sun::net::www::http::HttpClient> New(jni::ref<java::net::URL> url, jni::ref<java::net::Proxy> p, jint to, jni::ref<sun::net::www::protocol::http::HttpURLConnection> httpuc) { return call_static_method<"New", jni::ref<sun::net::www::http::HttpClient>>(url, p, to, httpuc); }
	static jni::ref<sun::net::www::http::HttpClient> New(jni::ref<java::net::URL> url, jni::ref<java::lang::String> proxyHost, jint proxyPort, jboolean useCache) { return call_static_method<"New", jni::ref<sun::net::www::http::HttpClient>>(url, proxyHost, proxyPort, useCache); }
	static jni::ref<sun::net::www::http::HttpClient> New(jni::ref<java::net::URL> url, jni::ref<java::lang::String> proxyHost, jint proxyPort, jboolean useCache, jint to, jni::ref<sun::net::www::protocol::http::HttpURLConnection> httpuc) { return call_static_method<"New", jni::ref<sun::net::www::http::HttpClient>>(url, proxyHost, proxyPort, useCache, to, httpuc); }
	jni::ref<sun::net::www::protocol::http::AuthCacheImpl> getAuthCache() { return call_method<"getAuthCache", jni::ref<sun::net::www::protocol::http::AuthCacheImpl>>(); }
	void finished() { return call_method<"finished", void>(); }
	void closeIdleConnection() { return call_method<"closeIdleConnection", void>(); }
	void openServer(jni::ref<java::lang::String> server, jint port) { return call_method<"openServer", void>(server, port); }
	jboolean needsTunneling() { return call_method<"needsTunneling", jboolean>(); }
	jboolean isCachedConnection() { return call_method<"isCachedConnection", jboolean>(); }
	void afterConnect() { return call_method<"afterConnect", void>(); }
	jni::ref<java::lang::String> getURLFile() { return call_method<"getURLFile", jni::ref<java::lang::String>>(); }
	void writeRequests(jni::ref<sun::net::www::MessageHeader> head) { return call_method<"writeRequests", void>(head); }
	void writeRequests(jni::ref<sun::net::www::MessageHeader> head, jni::ref<sun::net::www::http::PosterOutputStream> pos) { return call_method<"writeRequests", void>(head, pos); }
	void writeRequests(jni::ref<sun::net::www::MessageHeader> head, jni::ref<sun::net::www::http::PosterOutputStream> pos, jboolean streaming) { return call_method<"writeRequests", void>(head, pos, streaming); }
	jboolean parseHTTP(jni::ref<sun::net::www::MessageHeader> responses, jni::ref<sun::net::www::protocol::http::HttpURLConnection> httpuc) { return call_method<"parseHTTP", jboolean>(responses, httpuc); }
	jni::ref<java::io::InputStream> getInputStream() { return call_method<"getInputStream", jni::ref<java::io::InputStream>>(); }
	jni::ref<java::io::OutputStream> getOutputStream() { return call_method<"getOutputStream", jni::ref<java::io::OutputStream>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean isKeepingAlive() { return call_method<"isKeepingAlive", jboolean>(); }
	void setCacheRequest(jni::ref<java::net::CacheRequest> cacheRequest) { return call_method<"setCacheRequest", void>(cacheRequest); }
	void setDoNotRetry(jboolean value) { return call_method<"setDoNotRetry", void>(value); }
	void setIgnoreContinue(jboolean value) { return call_method<"setIgnoreContinue", void>(value); }
	void closeServer() { return call_method<"closeServer", void>(); }
	jni::ref<java::lang::String> getProxyHostUsed() { return call_method<"getProxyHostUsed", jni::ref<java::lang::String>>(); }
	jboolean getUsingProxy() { return call_method<"getUsingProxy", jboolean>(); }
	jint getProxyPortUsed() { return call_method<"getProxyPortUsed", jint>(); }
	void lock() { return call_method<"lock", void>(); }
	void unlock() { return call_method<"unlock", void>(); }

protected:

	HttpClient(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_HTTPCLIENT
