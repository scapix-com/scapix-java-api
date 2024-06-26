// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/CompletionService.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_EXECUTORCOMPLETIONSERVICE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_EXECUTORCOMPLETIONSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ExecutorCompletionService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ExecutorCompletionService>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ExecutorCompletionService";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::concurrent::CompletionService>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_EXECUTORCOMPLETIONSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_EXECUTORCOMPLETIONSERVICE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_EXECUTORCOMPLETIONSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/util/concurrent/BlockingQueue.h>
#include <scapix/java_api/java/util/concurrent/Callable.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#include <scapix/java_api/java/util/concurrent/Future.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::ExecutorCompletionService : public jni::object_base<"java/util/concurrent/ExecutorCompletionService",
	java::lang::Object,
	java::util::concurrent::CompletionService>
{
public:

	static jni::ref<java::util::concurrent::ExecutorCompletionService> new_object(jni::ref<java::util::concurrent::Executor> p1) { return base_::new_object(p1); }
	static jni::ref<java::util::concurrent::ExecutorCompletionService> new_object(jni::ref<java::util::concurrent::Executor> p1, jni::ref<java::util::concurrent::BlockingQueue> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::util::concurrent::Future> submit(jni::ref<java::util::concurrent::Callable> p1) { return call_method<"submit", jni::ref<java::util::concurrent::Future>>(p1); }
	jni::ref<java::util::concurrent::Future> submit(jni::ref<java::lang::Runnable> p1, jni::ref<java::lang::Object> p2) { return call_method<"submit", jni::ref<java::util::concurrent::Future>>(p1, p2); }
	jni::ref<java::util::concurrent::Future> take() { return call_method<"take", jni::ref<java::util::concurrent::Future>>(); }
	jni::ref<java::util::concurrent::Future> poll() { return call_method<"poll", jni::ref<java::util::concurrent::Future>>(); }
	jni::ref<java::util::concurrent::Future> poll(jlong p1, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"poll", jni::ref<java::util::concurrent::Future>>(p1, p2); }

protected:

	ExecutorCompletionService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_EXECUTORCOMPLETIONSERVICE
