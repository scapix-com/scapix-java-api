// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterOutputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_BUFFEREDOUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_IO_BUFFEREDOUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class BufferedOutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::BufferedOutputStream>
{
	static constexpr fixed_string class_name = "java/io/BufferedOutputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterOutputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_BUFFEREDOUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_BUFFEREDOUTPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_IO_BUFFEREDOUTPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::BufferedOutputStream : public jni::object_base<"java/io/BufferedOutputStream",
	java::io::FilterOutputStream>
{
public:

	static jni::ref<java::io::BufferedOutputStream> new_object(jni::ref<java::io::OutputStream> out) { return base_::new_object(out); }
	static jni::ref<java::io::BufferedOutputStream> new_object(jni::ref<java::io::OutputStream> out, jint size) { return base_::new_object(out, size); }
	void write(jint b) { return call_method<"write", void>(b); }
	void write(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"write", void>(b, off, len); }
	void flush() { return call_method<"flush", void>(); }

protected:

	BufferedOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_BUFFEREDOUTPUTSTREAM
