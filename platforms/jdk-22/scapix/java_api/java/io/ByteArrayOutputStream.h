// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/OutputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_BYTEARRAYOUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_IO_BYTEARRAYOUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class ByteArrayOutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::ByteArrayOutputStream>
{
	static constexpr fixed_string class_name = "java/io/ByteArrayOutputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::OutputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_BYTEARRAYOUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_BYTEARRAYOUTPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_IO_BYTEARRAYOUTPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::ByteArrayOutputStream : public jni::object_base<"java/io/ByteArrayOutputStream",
	java::io::OutputStream>
{
public:

	static jni::ref<java::io::ByteArrayOutputStream> new_object() { return base_::new_object(); }
	static jni::ref<java::io::ByteArrayOutputStream> new_object(jint size) { return base_::new_object(size); }
	void write(jint b) { return call_method<"write", void>(b); }
	void write(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"write", void>(b, off, len); }
	void writeBytes(jni::ref<jni::array<jbyte>> b) { return call_method<"writeBytes", void>(b); }
	void writeTo(jni::ref<java::io::OutputStream> out) { return call_method<"writeTo", void>(out); }
	void reset() { return call_method<"reset", void>(); }
	jni::ref<jni::array<jbyte>> toByteArray() { return call_method<"toByteArray", jni::ref<jni::array<jbyte>>>(); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString(jni::ref<java::lang::String> charsetName) { return call_method<"toString", jni::ref<java::lang::String>>(charsetName); }
	jni::ref<java::lang::String> toString(jni::ref<java::nio::charset::Charset> charset) { return call_method<"toString", jni::ref<java::lang::String>>(charset); }
	jni::ref<java::lang::String> toString(jint hibyte) { return call_method<"toString", jni::ref<java::lang::String>>(hibyte); }
	void close() { return call_method<"close", void>(); }

protected:

	ByteArrayOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_BYTEARRAYOUTPUTSTREAM
