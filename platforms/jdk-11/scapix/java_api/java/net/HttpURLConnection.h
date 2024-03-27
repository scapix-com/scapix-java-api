// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/net/URLConnection.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_HTTPURLCONNECTION_FWD
#define SCAPIX_JAVA_API_JAVA_NET_HTTPURLCONNECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class HttpURLConnection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::HttpURLConnection>
{
	static constexpr fixed_string class_name = "java/net/HttpURLConnection";
	using base_classes = std::tuple<scapix::java_api::java::net::URLConnection>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_HTTPURLCONNECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_HTTPURLCONNECTION)
#define SCAPIX_JAVA_API_JAVA_NET_HTTPURLCONNECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/Authenticator.h>
#include <scapix/java_api/java/security/Permission.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::HttpURLConnection : public jni::object_base<"java/net/HttpURLConnection",
	java::net::URLConnection>
{
public:

	static jint HTTP_OK() { return get_static_field<"HTTP_OK", jint>(); }
	static jint HTTP_CREATED() { return get_static_field<"HTTP_CREATED", jint>(); }
	static jint HTTP_ACCEPTED() { return get_static_field<"HTTP_ACCEPTED", jint>(); }
	static jint HTTP_NOT_AUTHORITATIVE() { return get_static_field<"HTTP_NOT_AUTHORITATIVE", jint>(); }
	static jint HTTP_NO_CONTENT() { return get_static_field<"HTTP_NO_CONTENT", jint>(); }
	static jint HTTP_RESET() { return get_static_field<"HTTP_RESET", jint>(); }
	static jint HTTP_PARTIAL() { return get_static_field<"HTTP_PARTIAL", jint>(); }
	static jint HTTP_MULT_CHOICE() { return get_static_field<"HTTP_MULT_CHOICE", jint>(); }
	static jint HTTP_MOVED_PERM() { return get_static_field<"HTTP_MOVED_PERM", jint>(); }
	static jint HTTP_MOVED_TEMP() { return get_static_field<"HTTP_MOVED_TEMP", jint>(); }
	static jint HTTP_SEE_OTHER() { return get_static_field<"HTTP_SEE_OTHER", jint>(); }
	static jint HTTP_NOT_MODIFIED() { return get_static_field<"HTTP_NOT_MODIFIED", jint>(); }
	static jint HTTP_USE_PROXY() { return get_static_field<"HTTP_USE_PROXY", jint>(); }
	static jint HTTP_BAD_REQUEST() { return get_static_field<"HTTP_BAD_REQUEST", jint>(); }
	static jint HTTP_UNAUTHORIZED() { return get_static_field<"HTTP_UNAUTHORIZED", jint>(); }
	static jint HTTP_PAYMENT_REQUIRED() { return get_static_field<"HTTP_PAYMENT_REQUIRED", jint>(); }
	static jint HTTP_FORBIDDEN() { return get_static_field<"HTTP_FORBIDDEN", jint>(); }
	static jint HTTP_NOT_FOUND() { return get_static_field<"HTTP_NOT_FOUND", jint>(); }
	static jint HTTP_BAD_METHOD() { return get_static_field<"HTTP_BAD_METHOD", jint>(); }
	static jint HTTP_NOT_ACCEPTABLE() { return get_static_field<"HTTP_NOT_ACCEPTABLE", jint>(); }
	static jint HTTP_PROXY_AUTH() { return get_static_field<"HTTP_PROXY_AUTH", jint>(); }
	static jint HTTP_CLIENT_TIMEOUT() { return get_static_field<"HTTP_CLIENT_TIMEOUT", jint>(); }
	static jint HTTP_CONFLICT() { return get_static_field<"HTTP_CONFLICT", jint>(); }
	static jint HTTP_GONE() { return get_static_field<"HTTP_GONE", jint>(); }
	static jint HTTP_LENGTH_REQUIRED() { return get_static_field<"HTTP_LENGTH_REQUIRED", jint>(); }
	static jint HTTP_PRECON_FAILED() { return get_static_field<"HTTP_PRECON_FAILED", jint>(); }
	static jint HTTP_ENTITY_TOO_LARGE() { return get_static_field<"HTTP_ENTITY_TOO_LARGE", jint>(); }
	static jint HTTP_REQ_TOO_LONG() { return get_static_field<"HTTP_REQ_TOO_LONG", jint>(); }
	static jint HTTP_UNSUPPORTED_TYPE() { return get_static_field<"HTTP_UNSUPPORTED_TYPE", jint>(); }
	static jint HTTP_SERVER_ERROR() { return get_static_field<"HTTP_SERVER_ERROR", jint>(); }
	static jint HTTP_INTERNAL_ERROR() { return get_static_field<"HTTP_INTERNAL_ERROR", jint>(); }
	static jint HTTP_NOT_IMPLEMENTED() { return get_static_field<"HTTP_NOT_IMPLEMENTED", jint>(); }
	static jint HTTP_BAD_GATEWAY() { return get_static_field<"HTTP_BAD_GATEWAY", jint>(); }
	static jint HTTP_UNAVAILABLE() { return get_static_field<"HTTP_UNAVAILABLE", jint>(); }
	static jint HTTP_GATEWAY_TIMEOUT() { return get_static_field<"HTTP_GATEWAY_TIMEOUT", jint>(); }
	static jint HTTP_VERSION() { return get_static_field<"HTTP_VERSION", jint>(); }

	void setAuthenticator(jni::ref<java::net::Authenticator> auth) { return call_method<"setAuthenticator", void>(auth); }
	jni::ref<java::lang::String> getHeaderFieldKey(jint n) { return call_method<"getHeaderFieldKey", jni::ref<java::lang::String>>(n); }
	void setFixedLengthStreamingMode(jint contentLength) { return call_method<"setFixedLengthStreamingMode", void>(contentLength); }
	void setFixedLengthStreamingMode(jlong contentLength) { return call_method<"setFixedLengthStreamingMode", void>(contentLength); }
	void setChunkedStreamingMode(jint chunklen) { return call_method<"setChunkedStreamingMode", void>(chunklen); }
	jni::ref<java::lang::String> getHeaderField(jint n) { return call_method<"getHeaderField", jni::ref<java::lang::String>>(n); }
	static void setFollowRedirects(jboolean set) { return call_static_method<"setFollowRedirects", void>(set); }
	static jboolean getFollowRedirects() { return call_static_method<"getFollowRedirects", jboolean>(); }
	void setInstanceFollowRedirects(jboolean followRedirects) { return call_method<"setInstanceFollowRedirects", void>(followRedirects); }
	jboolean getInstanceFollowRedirects() { return call_method<"getInstanceFollowRedirects", jboolean>(); }
	void setRequestMethod(jni::ref<java::lang::String> method) { return call_method<"setRequestMethod", void>(method); }
	jni::ref<java::lang::String> getRequestMethod() { return call_method<"getRequestMethod", jni::ref<java::lang::String>>(); }
	jint getResponseCode() { return call_method<"getResponseCode", jint>(); }
	jni::ref<java::lang::String> getResponseMessage() { return call_method<"getResponseMessage", jni::ref<java::lang::String>>(); }
	jlong getHeaderFieldDate(jni::ref<java::lang::String> name, jlong Default) { return call_method<"getHeaderFieldDate", jlong>(name, Default); }
	void disconnect() { return call_method<"disconnect", void>(); }
	jboolean usingProxy() { return call_method<"usingProxy", jboolean>(); }
	jni::ref<java::security::Permission> getPermission() { return call_method<"getPermission", jni::ref<java::security::Permission>>(); }
	jni::ref<java::io::InputStream> getErrorStream() { return call_method<"getErrorStream", jni::ref<java::io::InputStream>>(); }

protected:

	HttpURLConnection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_HTTPURLCONNECTION