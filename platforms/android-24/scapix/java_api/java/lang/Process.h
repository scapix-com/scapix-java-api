// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_PROCESS_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_PROCESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Process; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Process>
{
	static constexpr fixed_string class_name = "java/lang/Process";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_PROCESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_PROCESS)
#define SCAPIX_JAVA_API_JAVA_LANG_PROCESS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::Process : public jni::object_base<"java/lang/Process",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::Process> new_object() { return base_::new_object(); }
	jni::ref<java::io::OutputStream> getOutputStream() { return call_method<"getOutputStream", jni::ref<java::io::OutputStream>>(); }
	jni::ref<java::io::InputStream> getInputStream() { return call_method<"getInputStream", jni::ref<java::io::InputStream>>(); }
	jni::ref<java::io::InputStream> getErrorStream() { return call_method<"getErrorStream", jni::ref<java::io::InputStream>>(); }
	jint waitFor() { return call_method<"waitFor", jint>(); }
	jint exitValue() { return call_method<"exitValue", jint>(); }
	void destroy() { return call_method<"destroy", void>(); }

protected:

	Process(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_PROCESS
