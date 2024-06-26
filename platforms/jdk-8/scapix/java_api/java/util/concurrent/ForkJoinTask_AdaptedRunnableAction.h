// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/ForkJoinTask.h>
#include <scapix/java_api/java/util/concurrent/RunnableFuture.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_ADAPTEDRUNNABLEACTION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_ADAPTEDRUNNABLEACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ForkJoinTask_AdaptedRunnableAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ForkJoinTask_AdaptedRunnableAction>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ForkJoinTask$AdaptedRunnableAction";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::ForkJoinTask, scapix::java_api::java::util::concurrent::RunnableFuture>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_ADAPTEDRUNNABLEACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_ADAPTEDRUNNABLEACTION)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_ADAPTEDRUNNABLEACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Void.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::ForkJoinTask_AdaptedRunnableAction : public jni::object_base<"java/util/concurrent/ForkJoinTask$AdaptedRunnableAction",
	java::util::concurrent::ForkJoinTask,
	java::util::concurrent::RunnableFuture>
{
public:

	jni::ref<java::lang::Void> getRawResult() { return call_method<"getRawResult", jni::ref<java::lang::Void>>(); }
	void setRawResult(jni::ref<java::lang::Void> p1) { return call_method<"setRawResult", void>(p1); }
	jboolean exec() { return call_method<"exec", jboolean>(); }
	void run() { return call_method<"run", void>(); }

protected:

	ForkJoinTask_AdaptedRunnableAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_ADAPTEDRUNNABLEACTION
