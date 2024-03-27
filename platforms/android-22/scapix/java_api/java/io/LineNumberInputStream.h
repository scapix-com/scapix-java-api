// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterInputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_LINENUMBERINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_IO_LINENUMBERINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class LineNumberInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::LineNumberInputStream>
{
	static constexpr fixed_string class_name = "java/io/LineNumberInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_LINENUMBERINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_LINENUMBERINPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_IO_LINENUMBERINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::LineNumberInputStream : public jni::object_base<"java/io/LineNumberInputStream",
	java::io::FilterInputStream>
{
public:

	static jni::ref<java::io::LineNumberInputStream> new_object(jni::ref<java::io::InputStream> in) { return base_::new_object(in); }
	jint available() { return call_method<"available", jint>(); }
	jint getLineNumber() { return call_method<"getLineNumber", jint>(); }
	void mark(jint readlimit) { return call_method<"mark", void>(readlimit); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> buffer, jint byteOffset, jint byteCount) { return call_method<"read", jint>(buffer, byteOffset, byteCount); }
	void reset() { return call_method<"reset", void>(); }
	void setLineNumber(jint lineNumber) { return call_method<"setLineNumber", void>(lineNumber); }
	jlong skip(jlong byteCount) { return call_method<"skip", jlong>(byteCount); }

protected:

	LineNumberInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_LINENUMBERINPUTSTREAM
