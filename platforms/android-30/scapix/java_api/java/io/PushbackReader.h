// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterReader.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_PUSHBACKREADER_FWD
#define SCAPIX_JAVA_API_JAVA_IO_PUSHBACKREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class PushbackReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::PushbackReader>
{
	static constexpr fixed_string class_name = "java/io/PushbackReader";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterReader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_PUSHBACKREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_PUSHBACKREADER)
#define SCAPIX_JAVA_API_JAVA_IO_PUSHBACKREADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/Reader.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::PushbackReader : public jni::object_base<"java/io/PushbackReader",
	java::io::FilterReader>
{
public:

	static jni::ref<java::io::PushbackReader> new_object(jni::ref<java::io::Reader> in, jint size) { return base_::new_object(in, size); }
	static jni::ref<java::io::PushbackReader> new_object(jni::ref<java::io::Reader> in) { return base_::new_object(in); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jchar>> cbuf, jint off, jint len) { return call_method<"read", jint>(cbuf, off, len); }
	void unread(jint c) { return call_method<"unread", void>(c); }
	void unread(jni::ref<jni::array<jchar>> cbuf, jint off, jint len) { return call_method<"unread", void>(cbuf, off, len); }
	void unread(jni::ref<jni::array<jchar>> cbuf) { return call_method<"unread", void>(cbuf); }
	jboolean ready() { return call_method<"ready", jboolean>(); }
	void mark(jint readAheadLimit) { return call_method<"mark", void>(readAheadLimit); }
	void reset() { return call_method<"reset", void>(); }
	jboolean markSupported() { return call_method<"markSupported", jboolean>(); }
	void close() { return call_method<"close", void>(); }
	jlong skip(jlong n) { return call_method<"skip", jlong>(n); }

protected:

	PushbackReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_PUSHBACKREADER
