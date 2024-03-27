// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/InputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_SEQUENCEINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_IO_SEQUENCEINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class SequenceInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::SequenceInputStream>
{
	static constexpr fixed_string class_name = "java/io/SequenceInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::InputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_SEQUENCEINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_SEQUENCEINPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_IO_SEQUENCEINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Enumeration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::SequenceInputStream : public jni::object_base<"java/io/SequenceInputStream",
	java::io::InputStream>
{
public:

	static jni::ref<java::io::SequenceInputStream> new_object(jni::ref<java::util::Enumeration> e) { return base_::new_object(e); }
	static jni::ref<java::io::SequenceInputStream> new_object(jni::ref<java::io::InputStream> s1, jni::ref<java::io::InputStream> s2) { return base_::new_object(s1, s2); }
	jint available() { return call_method<"available", jint>(); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"read", jint>(b, off, len); }
	void close() { return call_method<"close", void>(); }

protected:

	SequenceInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_SEQUENCEINPUTSTREAM
