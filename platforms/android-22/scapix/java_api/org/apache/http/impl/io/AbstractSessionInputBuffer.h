// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/io/SessionInputBuffer.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONINPUTBUFFER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONINPUTBUFFER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::io { class AbstractSessionInputBuffer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::io::AbstractSessionInputBuffer>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/io/AbstractSessionInputBuffer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::io::SessionInputBuffer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONINPUTBUFFER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONINPUTBUFFER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONINPUTBUFFER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/apache/http/io/HttpTransportMetrics.h>
#include <scapix/java_api/org/apache/http/util/CharArrayBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::io::AbstractSessionInputBuffer : public jni::object_base<"org/apache/http/impl/io/AbstractSessionInputBuffer",
	java::lang::Object,
	org::apache::http::io::SessionInputBuffer>
{
public:

	static jni::ref<org::apache::http::impl::io::AbstractSessionInputBuffer> new_object() { return base_::new_object(); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"read", jint>(b, off, len); }
	jint read(jni::ref<jni::array<jbyte>> b) { return call_method<"read", jint>(b); }
	jint readLine(jni::ref<org::apache::http::util::CharArrayBuffer> charbuffer) { return call_method<"readLine", jint>(charbuffer); }
	jni::ref<java::lang::String> readLine() { return call_method<"readLine", jni::ref<java::lang::String>>(); }
	jni::ref<org::apache::http::io::HttpTransportMetrics> getMetrics() { return call_method<"getMetrics", jni::ref<org::apache::http::io::HttpTransportMetrics>>(); }

protected:

	AbstractSessionInputBuffer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONINPUTBUFFER