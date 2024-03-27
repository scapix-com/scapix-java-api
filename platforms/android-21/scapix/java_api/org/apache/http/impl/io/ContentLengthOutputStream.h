// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/OutputStream.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_CONTENTLENGTHOUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_CONTENTLENGTHOUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::io { class ContentLengthOutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::io::ContentLengthOutputStream>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/io/ContentLengthOutputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::OutputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_CONTENTLENGTHOUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_CONTENTLENGTHOUTPUTSTREAM)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_CONTENTLENGTHOUTPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/io/SessionOutputBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::io::ContentLengthOutputStream : public jni::object_base<"org/apache/http/impl/io/ContentLengthOutputStream",
	java::io::OutputStream>
{
public:

	static jni::ref<org::apache::http::impl::io::ContentLengthOutputStream> new_object(jni::ref<org::apache::http::io::SessionOutputBuffer> out, jlong contentLength) { return base_::new_object(out, contentLength); }
	void close() { return call_method<"close", void>(); }
	void flush() { return call_method<"flush", void>(); }
	void write(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"write", void>(b, off, len); }
	void write(jni::ref<jni::array<jbyte>> b) { return call_method<"write", void>(b); }
	void write(jint b) { return call_method<"write", void>(b); }

protected:

	ContentLengthOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_CONTENTLENGTHOUTPUTSTREAM
