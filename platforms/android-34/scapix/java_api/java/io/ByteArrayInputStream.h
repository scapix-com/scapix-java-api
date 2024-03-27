// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/InputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_BYTEARRAYINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_IO_BYTEARRAYINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class ByteArrayInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::ByteArrayInputStream>
{
	static constexpr fixed_string class_name = "java/io/ByteArrayInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::InputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_BYTEARRAYINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_BYTEARRAYINPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_IO_BYTEARRAYINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::ByteArrayInputStream : public jni::object_base<"java/io/ByteArrayInputStream",
	java::io::InputStream>
{
public:

	static jni::ref<java::io::ByteArrayInputStream> new_object(jni::ref<jni::array<jbyte>> buf) { return base_::new_object(buf); }
	static jni::ref<java::io::ByteArrayInputStream> new_object(jni::ref<jni::array<jbyte>> buf, jint offset, jint length) { return base_::new_object(buf, offset, length); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"read", jint>(b, off, len); }
	jni::ref<jni::array<jbyte>> readAllBytes() { return call_method<"readAllBytes", jni::ref<jni::array<jbyte>>>(); }
	jint readNBytes(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"readNBytes", jint>(b, off, len); }
	jlong transferTo(jni::ref<java::io::OutputStream> out) { return call_method<"transferTo", jlong>(out); }
	jlong skip(jlong n) { return call_method<"skip", jlong>(n); }
	jint available() { return call_method<"available", jint>(); }
	jboolean markSupported() { return call_method<"markSupported", jboolean>(); }
	void mark(jint readAheadLimit) { return call_method<"mark", void>(readAheadLimit); }
	void reset() { return call_method<"reset", void>(); }
	void close() { return call_method<"close", void>(); }

protected:

	ByteArrayInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_BYTEARRAYINPUTSTREAM
