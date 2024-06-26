// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IO_SESSIONINPUTBUFFER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IO_SESSIONINPUTBUFFER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::io { class SessionInputBuffer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::io::SessionInputBuffer>
{
	static constexpr fixed_string class_name = "org/apache/http/io/SessionInputBuffer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IO_SESSIONINPUTBUFFER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IO_SESSIONINPUTBUFFER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IO_SESSIONINPUTBUFFER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/apache/http/io/HttpTransportMetrics.h>
#include <scapix/java_api/org/apache/http/util/CharArrayBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::io::SessionInputBuffer : public jni::object_base<"org/apache/http/io/SessionInputBuffer",
	java::lang::Object>
{
public:

	jint read(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"read", jint>(p1, p2, p3); }
	jint read(jni::ref<jni::array<jbyte>> p1) { return call_method<"read", jint>(p1); }
	jint read() { return call_method<"read", jint>(); }
	jint readLine(jni::ref<org::apache::http::util::CharArrayBuffer> p1) { return call_method<"readLine", jint>(p1); }
	jni::ref<java::lang::String> readLine() { return call_method<"readLine", jni::ref<java::lang::String>>(); }
	jboolean isDataAvailable(jint p1) { return call_method<"isDataAvailable", jboolean>(p1); }
	jni::ref<org::apache::http::io::HttpTransportMetrics> getMetrics() { return call_method<"getMetrics", jni::ref<org::apache::http::io::HttpTransportMetrics>>(); }

protected:

	SessionInputBuffer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IO_SESSIONINPUTBUFFER
