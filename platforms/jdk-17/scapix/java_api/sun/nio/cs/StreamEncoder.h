// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/Writer.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_STREAMENCODER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_STREAMENCODER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class StreamEncoder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::StreamEncoder>
{
	static constexpr fixed_string class_name = "sun/nio/cs/StreamEncoder";
	using base_classes = std::tuple<scapix::java_api::java::io::Writer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_STREAMENCODER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_STREAMENCODER)
#define SCAPIX_JAVA_API_SUN_NIO_CS_STREAMENCODER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/CharBuffer.h>
#include <scapix/java_api/java/nio/channels/WritableByteChannel.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#include <scapix/java_api/java/nio/charset/CharsetEncoder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::cs::StreamEncoder : public jni::object_base<"sun/nio/cs/StreamEncoder",
	java::io::Writer>
{
public:

	static jni::ref<sun::nio::cs::StreamEncoder> forOutputStreamWriter(jni::ref<java::io::OutputStream> out, jni::ref<java::lang::Object> lock, jni::ref<java::lang::String> charsetName) { return call_static_method<"forOutputStreamWriter", jni::ref<sun::nio::cs::StreamEncoder>>(out, lock, charsetName); }
	static jni::ref<sun::nio::cs::StreamEncoder> forOutputStreamWriter(jni::ref<java::io::OutputStream> out, jni::ref<java::lang::Object> lock, jni::ref<java::nio::charset::Charset> cs) { return call_static_method<"forOutputStreamWriter", jni::ref<sun::nio::cs::StreamEncoder>>(out, lock, cs); }
	static jni::ref<sun::nio::cs::StreamEncoder> forOutputStreamWriter(jni::ref<java::io::OutputStream> out, jni::ref<java::lang::Object> lock, jni::ref<java::nio::charset::CharsetEncoder> enc) { return call_static_method<"forOutputStreamWriter", jni::ref<sun::nio::cs::StreamEncoder>>(out, lock, enc); }
	static jni::ref<sun::nio::cs::StreamEncoder> forEncoder(jni::ref<java::nio::channels::WritableByteChannel> ch, jni::ref<java::nio::charset::CharsetEncoder> enc, jint minBufferCap) { return call_static_method<"forEncoder", jni::ref<sun::nio::cs::StreamEncoder>>(ch, enc, minBufferCap); }
	jni::ref<java::lang::String> getEncoding() { return call_method<"getEncoding", jni::ref<java::lang::String>>(); }
	void flushBuffer() { return call_method<"flushBuffer", void>(); }
	void write(jint c) { return call_method<"write", void>(c); }
	void write(jni::ref<jni::array<jchar>> cbuf, jint off, jint len) { return call_method<"write", void>(cbuf, off, len); }
	void write(jni::ref<java::lang::String> str, jint off, jint len) { return call_method<"write", void>(str, off, len); }
	void write(jni::ref<java::nio::CharBuffer> cb) { return call_method<"write", void>(cb); }
	void flush() { return call_method<"flush", void>(); }
	void close() { return call_method<"close", void>(); }

protected:

	StreamEncoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_STREAMENCODER