// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/ExecutorService.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_EXECUTORS_DELEGATEDEXECUTORSERVICE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_EXECUTORS_DELEGATEDEXECUTORSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class Executors_DelegatedExecutorService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::Executors_DelegatedExecutorService>
{
	static constexpr fixed_string class_name = "java/util/concurrent/Executors$DelegatedExecutorService";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::concurrent::ExecutorService>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_EXECUTORS_DELEGATEDEXECUTORSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_EXECUTORS_DELEGATEDEXECUTORSERVICE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_EXECUTORS_DELEGATEDEXECUTORSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/concurrent/Callable.h>
#include <scapix/java_api/java/util/concurrent/Future.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::Executors_DelegatedExecutorService : public jni::object_base<"java/util/concurrent/Executors$DelegatedExecutorService",
	java::lang::Object,
	java::util::concurrent::ExecutorService>
{
public:

	void execute(jni::ref<java::lang::Runnable> command) { return call_method<"execute", void>(command); }
	void shutdown() { return call_method<"shutdown", void>(); }
	jni::ref<java::util::List> shutdownNow() { return call_method<"shutdownNow", jni::ref<java::util::List>>(); }
	jboolean isShutdown() { return call_method<"isShutdown", jboolean>(); }
	jboolean isTerminated() { return call_method<"isTerminated", jboolean>(); }
	jboolean awaitTermination(jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"awaitTermination", jboolean>(timeout, p2); }
	jni::ref<java::util::concurrent::Future> submit(jni::ref<java::lang::Runnable> task) { return call_method<"submit", jni::ref<java::util::concurrent::Future>>(task); }
	jni::ref<java::util::concurrent::Future> submit(jni::ref<java::util::concurrent::Callable> task) { return call_method<"submit", jni::ref<java::util::concurrent::Future>>(task); }
	jni::ref<java::util::concurrent::Future> submit(jni::ref<java::lang::Runnable> task, jni::ref<java::lang::Object> result) { return call_method<"submit", jni::ref<java::util::concurrent::Future>>(task, result); }
	jni::ref<java::util::List> invokeAll(jni::ref<java::util::Collection> tasks) { return call_method<"invokeAll", jni::ref<java::util::List>>(tasks); }
	jni::ref<java::util::List> invokeAll(jni::ref<java::util::Collection> tasks, jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p3) { return call_method<"invokeAll", jni::ref<java::util::List>>(tasks, timeout, p3); }
	jni::ref<java::lang::Object> invokeAny(jni::ref<java::util::Collection> tasks) { return call_method<"invokeAny", jni::ref<java::lang::Object>>(tasks); }
	jni::ref<java::lang::Object> invokeAny(jni::ref<java::util::Collection> tasks, jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p3) { return call_method<"invokeAny", jni::ref<java::lang::Object>>(tasks, timeout, p3); }

protected:

	Executors_DelegatedExecutorService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_EXECUTORS_DELEGATEDEXECUTORSERVICE
