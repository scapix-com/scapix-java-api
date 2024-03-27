// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/InputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_STRINGBUFFERINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_IO_STRINGBUFFERINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class StringBufferInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::StringBufferInputStream>
{
	static constexpr fixed_string class_name = "java/io/StringBufferInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::InputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_STRINGBUFFERINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_STRINGBUFFERINPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_IO_STRINGBUFFERINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::StringBufferInputStream : public jni::object_base<"java/io/StringBufferInputStream",
	java::io::InputStream>
{
public:

	static jni::ref<java::io::StringBufferInputStream> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"read", jint>(p1, p2, p3); }
	jlong skip(jlong p1) { return call_method<"skip", jlong>(p1); }
	jint available() { return call_method<"available", jint>(); }
	void reset() { return call_method<"reset", void>(); }

protected:

	StringBufferInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_STRINGBUFFERINPUTSTREAM