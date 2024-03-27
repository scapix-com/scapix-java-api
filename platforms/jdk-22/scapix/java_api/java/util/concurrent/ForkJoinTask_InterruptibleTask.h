// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/ForkJoinTask.h>
#include <scapix/java_api/java/util/concurrent/RunnableFuture.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_INTERRUPTIBLETASK_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_INTERRUPTIBLETASK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ForkJoinTask_InterruptibleTask; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ForkJoinTask_InterruptibleTask>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ForkJoinTask$InterruptibleTask";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::ForkJoinTask, scapix::java_api::java::util::concurrent::RunnableFuture>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_INTERRUPTIBLETASK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_INTERRUPTIBLETASK)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_INTERRUPTIBLETASK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::ForkJoinTask_InterruptibleTask : public jni::object_base<"java/util/concurrent/ForkJoinTask$InterruptibleTask",
	java::util::concurrent::ForkJoinTask,
	java::util::concurrent::RunnableFuture>
{
public:

	jboolean exec() { return call_method<"exec", jboolean>(); }
	jboolean cancel(jboolean mayInterruptIfRunning) { return call_method<"cancel", jboolean>(mayInterruptIfRunning); }
	void run() { return call_method<"run", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ForkJoinTask_InterruptibleTask(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_INTERRUPTIBLETASK
