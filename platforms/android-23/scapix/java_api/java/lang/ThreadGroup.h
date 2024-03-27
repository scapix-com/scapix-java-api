// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Thread_UncaughtExceptionHandler.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_THREADGROUP_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_THREADGROUP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ThreadGroup; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ThreadGroup>
{
	static constexpr fixed_string class_name = "java/lang/ThreadGroup";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Thread_UncaughtExceptionHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_THREADGROUP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_THREADGROUP)
#define SCAPIX_JAVA_API_JAVA_LANG_THREADGROUP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::ThreadGroup : public jni::object_base<"java/lang/ThreadGroup",
	java::lang::Object,
	java::lang::Thread_UncaughtExceptionHandler>
{
public:

	static jni::ref<java::lang::ThreadGroup> new_object(jni::ref<java::lang::String> name) { return base_::new_object(name); }
	static jni::ref<java::lang::ThreadGroup> new_object(jni::ref<java::lang::ThreadGroup> parent, jni::ref<java::lang::String> name) { return base_::new_object(parent, name); }
	jint activeCount() { return call_method<"activeCount", jint>(); }
	jint activeGroupCount() { return call_method<"activeGroupCount", jint>(); }
	jboolean allowThreadSuspension(jboolean b) { return call_method<"allowThreadSuspension", jboolean>(b); }
	void checkAccess() { return call_method<"checkAccess", void>(); }
	void destroy() { return call_method<"destroy", void>(); }
	jint enumerate(jni::ref<jni::array<java::lang::Thread>> threads) { return call_method<"enumerate", jint>(threads); }
	jint enumerate(jni::ref<jni::array<java::lang::Thread>> threads, jboolean recurse) { return call_method<"enumerate", jint>(threads, recurse); }
	jint enumerate(jni::ref<jni::array<java::lang::ThreadGroup>> groups) { return call_method<"enumerate", jint>(groups); }
	jint enumerate(jni::ref<jni::array<java::lang::ThreadGroup>> groups, jboolean recurse) { return call_method<"enumerate", jint>(groups, recurse); }
	jint getMaxPriority() { return call_method<"getMaxPriority", jint>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::ThreadGroup> getParent() { return call_method<"getParent", jni::ref<java::lang::ThreadGroup>>(); }
	void interrupt() { return call_method<"interrupt", void>(); }
	jboolean isDaemon() { return call_method<"isDaemon", jboolean>(); }
	jboolean isDestroyed() { return call_method<"isDestroyed", jboolean>(); }
	void list() { return call_method<"list", void>(); }
	jboolean parentOf(jni::ref<java::lang::ThreadGroup> g) { return call_method<"parentOf", jboolean>(g); }
	void resume() { return call_method<"resume", void>(); }
	void setDaemon(jboolean isDaemon) { return call_method<"setDaemon", void>(isDaemon); }
	void setMaxPriority(jint newMax) { return call_method<"setMaxPriority", void>(newMax); }
	void stop() { return call_method<"stop", void>(); }
	void suspend() { return call_method<"suspend", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void uncaughtException(jni::ref<java::lang::Thread> t, jni::ref<java::lang::Throwable> e) { return call_method<"uncaughtException", void>(t, e); }

protected:

	ThreadGroup(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_THREADGROUP
