// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterOutputStream.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_HTTPURLCONNECTION_STREAMINGOUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_HTTPURLCONNECTION_STREAMINGOUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::protocol::http { class HttpURLConnection_StreamingOutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::protocol::http::HttpURLConnection_StreamingOutputStream>
{
	static constexpr fixed_string class_name = "sun/net/www/protocol/http/HttpURLConnection$StreamingOutputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterOutputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_HTTPURLCONNECTION_STREAMINGOUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_HTTPURLCONNECTION_STREAMINGOUTPUTSTREAM)
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_HTTPURLCONNECTION_STREAMINGOUTPUTSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::net::www::protocol::http::HttpURLConnection_StreamingOutputStream : public jni::object_base<"sun/net/www/protocol/http/HttpURLConnection$StreamingOutputStream",
	java::io::FilterOutputStream>
{
public:

	void write(jint p1) { return call_method<"write", void>(p1); }
	void write(jni::ref<jni::array<jbyte>> p1) { return call_method<"write", void>(p1); }
	void write(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"write", void>(p1, p2, p3); }
	void close() { return call_method<"close", void>(); }

protected:

	HttpURLConnection_StreamingOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_HTTPURLCONNECTION_STREAMINGOUTPUTSTREAM
