// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ThreadBuilders_BaseThreadFactory.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_THREADBUILDERS_PLATFORMTHREADFACTORY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_THREADBUILDERS_PLATFORMTHREADFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ThreadBuilders_PlatformThreadFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ThreadBuilders_PlatformThreadFactory>
{
	static constexpr fixed_string class_name = "java/lang/ThreadBuilders$PlatformThreadFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::ThreadBuilders_BaseThreadFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_THREADBUILDERS_PLATFORMTHREADFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_THREADBUILDERS_PLATFORMTHREADFACTORY)
#define SCAPIX_JAVA_API_JAVA_LANG_THREADBUILDERS_PLATFORMTHREADFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/Thread.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::ThreadBuilders_PlatformThreadFactory : public jni::object_base<"java/lang/ThreadBuilders$PlatformThreadFactory",
	java::lang::ThreadBuilders_BaseThreadFactory>
{
public:

	jni::ref<java::lang::Thread> newThread(jni::ref<java::lang::Runnable> task) { return call_method<"newThread", jni::ref<java::lang::Thread>>(task); }

protected:

	ThreadBuilders_PlatformThreadFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_THREADBUILDERS_PLATFORMTHREADFACTORY