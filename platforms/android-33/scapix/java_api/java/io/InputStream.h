// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_INPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_IO_INPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class InputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::InputStream>
{
	static constexpr fixed_string class_name = "java/io/InputStream";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Closeable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_INPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_INPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_IO_INPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::InputStream : public jni::object_base<"java/io/InputStream",
	java::lang::Object,
	java::io::Closeable>
{
public:

	static jni::ref<java::io::InputStream> new_object() { return base_::new_object(); }
	static jni::ref<java::io::InputStream> nullInputStream() { return call_static_method<"nullInputStream", jni::ref<java::io::InputStream>>(); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> b) { return call_method<"read", jint>(b); }
	jint read(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"read", jint>(b, off, len); }
	jni::ref<jni::array<jbyte>> readAllBytes() { return call_method<"readAllBytes", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> readNBytes(jint len) { return call_method<"readNBytes", jni::ref<jni::array<jbyte>>>(len); }
	jint readNBytes(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"readNBytes", jint>(b, off, len); }
	jlong skip(jlong n) { return call_method<"skip", jlong>(n); }
	jint available() { return call_method<"available", jint>(); }
	void close() { return call_method<"close", void>(); }
	void mark(jint readlimit) { return call_method<"mark", void>(readlimit); }
	void reset() { return call_method<"reset", void>(); }
	jboolean markSupported() { return call_method<"markSupported", jboolean>(); }
	jlong transferTo(jni::ref<java::io::OutputStream> out) { return call_method<"transferTo", jlong>(out); }

protected:

	InputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_INPUTSTREAM
