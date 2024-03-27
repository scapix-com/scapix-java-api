// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterInputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_PUSHBACKINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_IO_PUSHBACKINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class PushbackInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::PushbackInputStream>
{
	static constexpr fixed_string class_name = "java/io/PushbackInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_PUSHBACKINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_PUSHBACKINPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_IO_PUSHBACKINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::PushbackInputStream : public jni::object_base<"java/io/PushbackInputStream",
	java::io::FilterInputStream>
{
public:

	static jni::ref<java::io::PushbackInputStream> new_object(jni::ref<java::io::InputStream> in, jint size) { return base_::new_object(in, size); }
	static jni::ref<java::io::PushbackInputStream> new_object(jni::ref<java::io::InputStream> in) { return base_::new_object(in); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"read", jint>(b, off, len); }
	void unread(jint b) { return call_method<"unread", void>(b); }
	void unread(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"unread", void>(b, off, len); }
	void unread(jni::ref<jni::array<jbyte>> b) { return call_method<"unread", void>(b); }
	jint available() { return call_method<"available", jint>(); }
	jlong skip(jlong n) { return call_method<"skip", jlong>(n); }
	jboolean markSupported() { return call_method<"markSupported", jboolean>(); }
	void mark(jint readlimit) { return call_method<"mark", void>(readlimit); }
	void reset() { return call_method<"reset", void>(); }
	void close() { return call_method<"close", void>(); }

protected:

	PushbackInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_PUSHBACKINPUTSTREAM