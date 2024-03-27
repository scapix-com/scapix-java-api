// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Thread_Builder.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_THREAD_BUILDER_OFPLATFORM_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_THREAD_BUILDER_OFPLATFORM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Thread_Builder_OfPlatform; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Thread_Builder_OfPlatform>
{
	static constexpr fixed_string class_name = "java/lang/Thread$Builder$OfPlatform";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Thread_Builder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_THREAD_BUILDER_OFPLATFORM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_THREAD_BUILDER_OFPLATFORM)
#define SCAPIX_JAVA_API_JAVA_LANG_THREAD_BUILDER_OFPLATFORM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread_UncaughtExceptionHandler.h>
#include <scapix/java_api/java/lang/ThreadGroup.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::Thread_Builder_OfPlatform : public jni::object_base<"java/lang/Thread$Builder$OfPlatform",
	java::lang::Object,
	java::lang::Thread_Builder>
{
public:

	jni::ref<java::lang::Thread_Builder_OfPlatform> name(jni::ref<java::lang::String> p1) { return call_method<"name", jni::ref<java::lang::Thread_Builder_OfPlatform>>(p1); }
	jni::ref<java::lang::Thread_Builder_OfPlatform> name(jni::ref<java::lang::String> p1, jlong p2) { return call_method<"name", jni::ref<java::lang::Thread_Builder_OfPlatform>>(p1, p2); }
	jni::ref<java::lang::Thread_Builder_OfPlatform> inheritInheritableThreadLocals(jboolean p1) { return call_method<"inheritInheritableThreadLocals", jni::ref<java::lang::Thread_Builder_OfPlatform>>(p1); }
	jni::ref<java::lang::Thread_Builder_OfPlatform> uncaughtExceptionHandler(jni::ref<java::lang::Thread_UncaughtExceptionHandler> p1) { return call_method<"uncaughtExceptionHandler", jni::ref<java::lang::Thread_Builder_OfPlatform>>(p1); }
	jni::ref<java::lang::Thread_Builder_OfPlatform> group(jni::ref<java::lang::ThreadGroup> p1) { return call_method<"group", jni::ref<java::lang::Thread_Builder_OfPlatform>>(p1); }
	jni::ref<java::lang::Thread_Builder_OfPlatform> daemon(jboolean p1) { return call_method<"daemon", jni::ref<java::lang::Thread_Builder_OfPlatform>>(p1); }
	jni::ref<java::lang::Thread_Builder_OfPlatform> daemon() { return call_method<"daemon", jni::ref<java::lang::Thread_Builder_OfPlatform>>(); }
	jni::ref<java::lang::Thread_Builder_OfPlatform> priority(jint p1) { return call_method<"priority", jni::ref<java::lang::Thread_Builder_OfPlatform>>(p1); }
	jni::ref<java::lang::Thread_Builder_OfPlatform> stackSize(jlong p1) { return call_method<"stackSize", jni::ref<java::lang::Thread_Builder_OfPlatform>>(p1); }

protected:

	Thread_Builder_OfPlatform(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_THREAD_BUILDER_OFPLATFORM