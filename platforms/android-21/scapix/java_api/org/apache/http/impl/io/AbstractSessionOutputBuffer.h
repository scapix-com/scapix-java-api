// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/io/SessionOutputBuffer.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONOUTPUTBUFFER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONOUTPUTBUFFER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::io { class AbstractSessionOutputBuffer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::io::AbstractSessionOutputBuffer>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/io/AbstractSessionOutputBuffer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::io::SessionOutputBuffer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONOUTPUTBUFFER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONOUTPUTBUFFER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONOUTPUTBUFFER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/apache/http/io/HttpTransportMetrics.h>
#include <scapix/java_api/org/apache/http/util/CharArrayBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::io::AbstractSessionOutputBuffer : public jni::object_base<"org/apache/http/impl/io/AbstractSessionOutputBuffer",
	java::lang::Object,
	org::apache::http::io::SessionOutputBuffer>
{
public:

	static jni::ref<org::apache::http::impl::io::AbstractSessionOutputBuffer> new_object() { return base_::new_object(); }
	void flush() { return call_method<"flush", void>(); }
	void write(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"write", void>(b, off, len); }
	void write(jni::ref<jni::array<jbyte>> b) { return call_method<"write", void>(b); }
	void write(jint b) { return call_method<"write", void>(b); }
	void writeLine(jni::ref<java::lang::String> s) { return call_method<"writeLine", void>(s); }
	void writeLine(jni::ref<org::apache::http::util::CharArrayBuffer> s) { return call_method<"writeLine", void>(s); }
	jni::ref<org::apache::http::io::HttpTransportMetrics> getMetrics() { return call_method<"getMetrics", jni::ref<org::apache::http::io::HttpTransportMetrics>>(); }

protected:

	AbstractSessionOutputBuffer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONOUTPUTBUFFER