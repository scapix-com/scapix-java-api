// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/InputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_PROCESSBUILDER_NULLINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_PROCESSBUILDER_NULLINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ProcessBuilder_NullInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ProcessBuilder_NullInputStream>
{
	static constexpr fixed_string class_name = "java/lang/ProcessBuilder$NullInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::InputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_PROCESSBUILDER_NULLINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_PROCESSBUILDER_NULLINPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_LANG_PROCESSBUILDER_NULLINPUTSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::ProcessBuilder_NullInputStream : public jni::object_base<"java/lang/ProcessBuilder$NullInputStream",
	java::io::InputStream>
{
public:

	jint read() { return call_method<"read", jint>(); }
	jint available() { return call_method<"available", jint>(); }

protected:

	ProcessBuilder_NullInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_PROCESSBUILDER_NULLINPUTSTREAM