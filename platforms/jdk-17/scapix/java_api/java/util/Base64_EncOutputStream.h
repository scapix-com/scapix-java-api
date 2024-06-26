// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterOutputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_BASE64_ENCOUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_BASE64_ENCOUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Base64_EncOutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Base64_EncOutputStream>
{
	static constexpr fixed_string class_name = "java/util/Base64$EncOutputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterOutputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_BASE64_ENCOUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_BASE64_ENCOUTPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_UTIL_BASE64_ENCOUTPUTSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Base64_EncOutputStream : public jni::object_base<"java/util/Base64$EncOutputStream",
	java::io::FilterOutputStream>
{
public:

	void write(jint b) { return call_method<"write", void>(b); }
	void write(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"write", void>(b, off, len); }
	void close() { return call_method<"close", void>(); }

protected:

	Base64_EncOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_BASE64_ENCOUTPUTSTREAM
