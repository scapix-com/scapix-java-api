// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/ForkJoinTask_InterruptibleTask.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_INVOKEANYTASK_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_INVOKEANYTASK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ForkJoinTask_InvokeAnyTask; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ForkJoinTask_InvokeAnyTask>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ForkJoinTask$InvokeAnyTask";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::ForkJoinTask_InterruptibleTask>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_INVOKEANYTASK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_INVOKEANYTASK)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_INVOKEANYTASK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Void.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::ForkJoinTask_InvokeAnyTask : public jni::object_base<"java/util/concurrent/ForkJoinTask$InvokeAnyTask",
	java::util::concurrent::ForkJoinTask_InterruptibleTask>
{
public:

	jboolean cancel(jboolean mayInterruptIfRunning) { return call_method<"cancel", jboolean>(mayInterruptIfRunning); }
	jni::ref<java::lang::Void> getRawResult() { return call_method<"getRawResult", jni::ref<java::lang::Void>>(); }
	void setRawResult(jni::ref<java::lang::Void> v) { return call_method<"setRawResult", void>(v); }

protected:

	ForkJoinTask_InvokeAnyTask(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_INVOKEANYTASK
