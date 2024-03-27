// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Runtime; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Runtime>
{
	static constexpr fixed_string class_name = "java/lang/Runtime";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_RUNTIME)
#define SCAPIX_JAVA_API_JAVA_LANG_RUNTIME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/Process.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::Runtime : public jni::object_base<"java/lang/Runtime",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::Runtime> getRuntime() { return call_static_method<"getRuntime", jni::ref<java::lang::Runtime>>(); }
	void exit(jint p1) { return call_method<"exit", void>(p1); }
	void addShutdownHook(jni::ref<java::lang::Thread> p1) { return call_method<"addShutdownHook", void>(p1); }
	jboolean removeShutdownHook(jni::ref<java::lang::Thread> p1) { return call_method<"removeShutdownHook", jboolean>(p1); }
	void halt(jint p1) { return call_method<"halt", void>(p1); }
	static void runFinalizersOnExit(jboolean p1) { return call_static_method<"runFinalizersOnExit", void>(p1); }
	jni::ref<java::lang::Process> exec(jni::ref<java::lang::String> p1) { return call_method<"exec", jni::ref<java::lang::Process>>(p1); }
	jni::ref<java::lang::Process> exec(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::String>> p2) { return call_method<"exec", jni::ref<java::lang::Process>>(p1, p2); }
	jni::ref<java::lang::Process> exec(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::String>> p2, jni::ref<java::io::File> p3) { return call_method<"exec", jni::ref<java::lang::Process>>(p1, p2, p3); }
	jni::ref<java::lang::Process> exec(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"exec", jni::ref<java::lang::Process>>(p1); }
	jni::ref<java::lang::Process> exec(jni::ref<jni::array<java::lang::String>> p1, jni::ref<jni::array<java::lang::String>> p2) { return call_method<"exec", jni::ref<java::lang::Process>>(p1, p2); }
	jni::ref<java::lang::Process> exec(jni::ref<jni::array<java::lang::String>> p1, jni::ref<jni::array<java::lang::String>> p2, jni::ref<java::io::File> p3) { return call_method<"exec", jni::ref<java::lang::Process>>(p1, p2, p3); }
	jint availableProcessors() { return call_method<"availableProcessors", jint>(); }
	jlong freeMemory() { return call_method<"freeMemory", jlong>(); }
	jlong totalMemory() { return call_method<"totalMemory", jlong>(); }
	jlong maxMemory() { return call_method<"maxMemory", jlong>(); }
	void gc() { return call_method<"gc", void>(); }
	void runFinalization() { return call_method<"runFinalization", void>(); }
	void traceInstructions(jboolean p1) { return call_method<"traceInstructions", void>(p1); }
	void traceMethodCalls(jboolean p1) { return call_method<"traceMethodCalls", void>(p1); }
	void load(jni::ref<java::lang::String> p1) { return call_method<"load", void>(p1); }
	void loadLibrary(jni::ref<java::lang::String> p1) { return call_method<"loadLibrary", void>(p1); }
	jni::ref<java::io::InputStream> getLocalizedInputStream(jni::ref<java::io::InputStream> p1) { return call_method<"getLocalizedInputStream", jni::ref<java::io::InputStream>>(p1); }
	jni::ref<java::io::OutputStream> getLocalizedOutputStream(jni::ref<java::io::OutputStream> p1) { return call_method<"getLocalizedOutputStream", jni::ref<java::io::OutputStream>>(p1); }

protected:

	Runtime(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_RUNTIME
