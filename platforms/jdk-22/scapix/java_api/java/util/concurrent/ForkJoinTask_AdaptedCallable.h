// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/ForkJoinTask.h>
#include <scapix/java_api/java/util/concurrent/RunnableFuture.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_ADAPTEDCALLABLE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_ADAPTEDCALLABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ForkJoinTask_AdaptedCallable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ForkJoinTask_AdaptedCallable>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ForkJoinTask$AdaptedCallable";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::ForkJoinTask, scapix::java_api::java::util::concurrent::RunnableFuture>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_ADAPTEDCALLABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_ADAPTEDCALLABLE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_ADAPTEDCALLABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::ForkJoinTask_AdaptedCallable : public jni::object_base<"java/util/concurrent/ForkJoinTask$AdaptedCallable",
	java::util::concurrent::ForkJoinTask,
	java::util::concurrent::RunnableFuture>
{
public:

	jni::ref<java::lang::Object> getRawResult() { return call_method<"getRawResult", jni::ref<java::lang::Object>>(); }
	void setRawResult(jni::ref<java::lang::Object> v) { return call_method<"setRawResult", void>(v); }
	jboolean exec() { return call_method<"exec", jboolean>(); }
	void run() { return call_method<"run", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ForkJoinTask_AdaptedCallable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINTASK_ADAPTEDCALLABLE
