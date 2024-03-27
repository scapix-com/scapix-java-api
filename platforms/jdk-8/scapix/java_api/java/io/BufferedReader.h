// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/Reader.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_BUFFEREDREADER_FWD
#define SCAPIX_JAVA_API_JAVA_IO_BUFFEREDREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class BufferedReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::BufferedReader>
{
	static constexpr fixed_string class_name = "java/io/BufferedReader";
	using base_classes = std::tuple<scapix::java_api::java::io::Reader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_BUFFEREDREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_BUFFEREDREADER)
#define SCAPIX_JAVA_API_JAVA_IO_BUFFEREDREADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::BufferedReader : public jni::object_base<"java/io/BufferedReader",
	java::io::Reader>
{
public:

	static jni::ref<java::io::BufferedReader> new_object(jni::ref<java::io::Reader> p1, jint p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::io::BufferedReader> new_object(jni::ref<java::io::Reader> p1) { return base_::new_object(p1); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"read", jint>(p1, p2, p3); }
	jni::ref<java::lang::String> readLine() { return call_method<"readLine", jni::ref<java::lang::String>>(); }
	jlong skip(jlong p1) { return call_method<"skip", jlong>(p1); }
	jboolean ready() { return call_method<"ready", jboolean>(); }
	jboolean markSupported() { return call_method<"markSupported", jboolean>(); }
	void mark(jint p1) { return call_method<"mark", void>(p1); }
	void reset() { return call_method<"reset", void>(); }
	void close() { return call_method<"close", void>(); }
	jni::ref<java::util::stream::Stream> lines() { return call_method<"lines", jni::ref<java::util::stream::Stream>>(); }

protected:

	BufferedReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_BUFFEREDREADER