// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Thread.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MISC_INNOCUOUSTHREAD_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MISC_INNOCUOUSTHREAD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::misc { class InnocuousThread; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::misc::InnocuousThread>
{
	static constexpr fixed_string class_name = "jdk/internal/misc/InnocuousThread";
	using base_classes = std::tuple<scapix::java_api::java::lang::Thread>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MISC_INNOCUOUSTHREAD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MISC_INNOCUOUSTHREAD)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MISC_INNOCUOUSTHREAD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread_UncaughtExceptionHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::misc::InnocuousThread : public jni::object_base<"jdk/internal/misc/InnocuousThread",
	java::lang::Thread>
{
public:

	static jni::ref<java::lang::Thread> newThread(jni::ref<java::lang::Runnable> target) { return call_static_method<"newThread", jni::ref<java::lang::Thread>>(target); }
	static jni::ref<java::lang::Thread> newThread(jni::ref<java::lang::String> name, jni::ref<java::lang::Runnable> target) { return call_static_method<"newThread", jni::ref<java::lang::Thread>>(name, target); }
	static jni::ref<java::lang::Thread> newSystemThread(jni::ref<java::lang::Runnable> target) { return call_static_method<"newSystemThread", jni::ref<java::lang::Thread>>(target); }
	static jni::ref<java::lang::Thread> newSystemThread(jni::ref<java::lang::String> name, jni::ref<java::lang::Runnable> target) { return call_static_method<"newSystemThread", jni::ref<java::lang::Thread>>(name, target); }
	void setUncaughtExceptionHandler(jni::ref<java::lang::Thread_UncaughtExceptionHandler> x) { return call_method<"setUncaughtExceptionHandler", void>(x); }
	void setContextClassLoader(jni::ref<java::lang::ClassLoader> cl) { return call_method<"setContextClassLoader", void>(cl); }
	void eraseThreadLocals() { return call_method<"eraseThreadLocals", void>(); }
	void run() { return call_method<"run", void>(); }

protected:

	InnocuousThread(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MISC_INNOCUOUSTHREAD
