// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/Writer.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_OUTPUTSTREAMWRITER_FWD
#define SCAPIX_JAVA_API_JAVA_IO_OUTPUTSTREAMWRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class OutputStreamWriter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::OutputStreamWriter>
{
	static constexpr fixed_string class_name = "java/io/OutputStreamWriter";
	using base_classes = std::tuple<scapix::java_api::java::io::Writer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OUTPUTSTREAMWRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_OUTPUTSTREAMWRITER)
#define SCAPIX_JAVA_API_JAVA_IO_OUTPUTSTREAMWRITER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#include <scapix/java_api/java/nio/charset/CharsetEncoder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::OutputStreamWriter : public jni::object_base<"java/io/OutputStreamWriter",
	java::io::Writer>
{
public:

	static jni::ref<java::io::OutputStreamWriter> new_object(jni::ref<java::io::OutputStream> out) { return base_::new_object(out); }
	static jni::ref<java::io::OutputStreamWriter> new_object(jni::ref<java::io::OutputStream> out, jni::ref<java::lang::String> charsetName) { return base_::new_object(out, charsetName); }
	static jni::ref<java::io::OutputStreamWriter> new_object(jni::ref<java::io::OutputStream> out, jni::ref<java::nio::charset::Charset> cs) { return base_::new_object(out, cs); }
	static jni::ref<java::io::OutputStreamWriter> new_object(jni::ref<java::io::OutputStream> out, jni::ref<java::nio::charset::CharsetEncoder> charsetEncoder) { return base_::new_object(out, charsetEncoder); }
	void close() { return call_method<"close", void>(); }
	void flush() { return call_method<"flush", void>(); }
	jni::ref<java::lang::String> getEncoding() { return call_method<"getEncoding", jni::ref<java::lang::String>>(); }
	void write(jni::ref<jni::array<jchar>> buffer, jint offset, jint count) { return call_method<"write", void>(buffer, offset, count); }
	void write(jint oneChar) { return call_method<"write", void>(oneChar); }
	void write(jni::ref<java::lang::String> str, jint offset, jint count) { return call_method<"write", void>(str, offset, count); }

protected:

	OutputStreamWriter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OUTPUTSTREAMWRITER