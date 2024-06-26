// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/InputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_FILTERINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_IO_FILTERINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class FilterInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::FilterInputStream>
{
	static constexpr fixed_string class_name = "java/io/FilterInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::InputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FILTERINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_FILTERINPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_IO_FILTERINPUTSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::FilterInputStream : public jni::object_base<"java/io/FilterInputStream",
	java::io::InputStream>
{
public:

	jint available() { return call_method<"available", jint>(); }
	void close() { return call_method<"close", void>(); }
	void mark(jint readlimit) { return call_method<"mark", void>(readlimit); }
	jboolean markSupported() { return call_method<"markSupported", jboolean>(); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> buffer, jint byteOffset, jint byteCount) { return call_method<"read", jint>(buffer, byteOffset, byteCount); }
	void reset() { return call_method<"reset", void>(); }
	jlong skip(jlong byteCount) { return call_method<"skip", jlong>(byteCount); }

protected:

	FilterInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FILTERINPUTSTREAM
