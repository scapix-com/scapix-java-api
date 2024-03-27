// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/sun/net/www/http/Hurryable.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_CHUNKEDINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_CHUNKEDINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::http { class ChunkedInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::http::ChunkedInputStream>
{
	static constexpr fixed_string class_name = "sun/net/www/http/ChunkedInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::InputStream, scapix::java_api::sun::net::www::http::Hurryable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_CHUNKEDINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_CHUNKEDINPUTSTREAM)
#define SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_CHUNKEDINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/net/www/MessageHeader.h>
#include <scapix/java_api/sun/net/www/http/HttpClient.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::www::http::ChunkedInputStream : public jni::object_base<"sun/net/www/http/ChunkedInputStream",
	java::io::InputStream,
	sun::net::www::http::Hurryable>
{
public:

	static jni::ref<sun::net::www::http::ChunkedInputStream> new_object(jni::ref<java::io::InputStream> p1, jni::ref<sun::net::www::http::HttpClient> p2, jni::ref<sun::net::www::MessageHeader> p3) { return base_::new_object(p1, p2, p3); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"read", jint>(p1, p2, p3); }
	jint available() { return call_method<"available", jint>(); }
	void close() { return call_method<"close", void>(); }
	jboolean hurry() { return call_method<"hurry", jboolean>(); }

protected:

	ChunkedInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_CHUNKEDINPUTSTREAM
