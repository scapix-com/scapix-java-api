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

	static jni::ref<java::io::OutputStreamWriter> new_object(jni::ref<java::io::OutputStream> out, jni::ref<java::lang::String> charsetName) { return base_::new_object(out, charsetName); }
	static jni::ref<java::io::OutputStreamWriter> new_object(jni::ref<java::io::OutputStream> out) { return base_::new_object(out); }
	static jni::ref<java::io::OutputStreamWriter> new_object(jni::ref<java::io::OutputStream> out, jni::ref<java::nio::charset::Charset> cs) { return base_::new_object(out, cs); }
	static jni::ref<java::io::OutputStreamWriter> new_object(jni::ref<java::io::OutputStream> out, jni::ref<java::nio::charset::CharsetEncoder> enc) { return base_::new_object(out, enc); }
	jni::ref<java::lang::String> getEncoding() { return call_method<"getEncoding", jni::ref<java::lang::String>>(); }
	void write(jint c) { return call_method<"write", void>(c); }
	void write(jni::ref<jni::array<jchar>> cbuf, jint off, jint len) { return call_method<"write", void>(cbuf, off, len); }
	void write(jni::ref<java::lang::String> str, jint off, jint len) { return call_method<"write", void>(str, off, len); }
	void flush() { return call_method<"flush", void>(); }
	void close() { return call_method<"close", void>(); }

protected:

	OutputStreamWriter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OUTPUTSTREAMWRITER
