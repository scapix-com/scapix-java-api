// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Process.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_PROCESSIMPL_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_PROCESSIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ProcessImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ProcessImpl>
{
	static constexpr fixed_string class_name = "java/lang/ProcessImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Process>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_PROCESSIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_PROCESSIMPL)
#define SCAPIX_JAVA_API_JAVA_LANG_PROCESSIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/ProcessHandle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/concurrent/CompletableFuture.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::ProcessImpl : public jni::object_base<"java/lang/ProcessImpl",
	java::lang::Process>
{
public:

	jni::ref<java::io::OutputStream> getOutputStream() { return call_method<"getOutputStream", jni::ref<java::io::OutputStream>>(); }
	jni::ref<java::io::InputStream> getInputStream() { return call_method<"getInputStream", jni::ref<java::io::InputStream>>(); }
	jni::ref<java::io::InputStream> getErrorStream() { return call_method<"getErrorStream", jni::ref<java::io::InputStream>>(); }
	jint exitValue() { return call_method<"exitValue", jint>(); }
	jint waitFor() { return call_method<"waitFor", jint>(); }
	jboolean waitFor(jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"waitFor", jboolean>(timeout, p2); }
	void destroy() { return call_method<"destroy", void>(); }
	jni::ref<java::util::concurrent::CompletableFuture> onExit() { return call_method<"onExit", jni::ref<java::util::concurrent::CompletableFuture>>(); }
	jni::ref<java::lang::ProcessHandle> toHandle() { return call_method<"toHandle", jni::ref<java::lang::ProcessHandle>>(); }
	jboolean supportsNormalTermination() { return call_method<"supportsNormalTermination", jboolean>(); }
	jni::ref<java::lang::Process> destroyForcibly() { return call_method<"destroyForcibly", jni::ref<java::lang::Process>>(); }
	jlong pid() { return call_method<"pid", jlong>(); }
	jboolean isAlive() { return call_method<"isAlive", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ProcessImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_PROCESSIMPL
