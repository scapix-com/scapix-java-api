// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/InputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_BASE64_DECINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_BASE64_DECINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Base64_DecInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Base64_DecInputStream>
{
	static constexpr fixed_string class_name = "java/util/Base64$DecInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::InputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_BASE64_DECINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_BASE64_DECINPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_UTIL_BASE64_DECINPUTSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Base64_DecInputStream : public jni::object_base<"java/util/Base64$DecInputStream",
	java::io::InputStream>
{
public:

	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"read", jint>(b, off, len); }
	jint available() { return call_method<"available", jint>(); }
	void close() { return call_method<"close", void>(); }

protected:

	Base64_DecInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_BASE64_DECINPUTSTREAM
