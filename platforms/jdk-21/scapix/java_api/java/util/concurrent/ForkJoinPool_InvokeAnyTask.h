// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/ForkJoinTask.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_INVOKEANYTASK_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_INVOKEANYTASK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ForkJoinPool_InvokeAnyTask; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ForkJoinPool_InvokeAnyTask>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ForkJoinPool$InvokeAnyTask";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::ForkJoinTask>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_INVOKEANYTASK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_INVOKEANYTASK)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_INVOKEANYTASK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::ForkJoinPool_InvokeAnyTask : public jni::object_base<"java/util/concurrent/ForkJoinPool$InvokeAnyTask",
	java::util::concurrent::ForkJoinTask>
{
public:

	jboolean exec() { return call_method<"exec", jboolean>(); }
	jboolean cancel(jboolean mayInterruptIfRunning) { return call_method<"cancel", jboolean>(mayInterruptIfRunning); }
	void setRawResult(jni::ref<java::lang::Object> v) { return call_method<"setRawResult", void>(v); }
	jni::ref<java::lang::Object> getRawResult() { return call_method<"getRawResult", jni::ref<java::lang::Object>>(); }

protected:

	ForkJoinPool_InvokeAnyTask(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_INVOKEANYTASK
