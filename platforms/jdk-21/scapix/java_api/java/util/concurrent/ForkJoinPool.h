// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/AbstractExecutorService.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ForkJoinPool; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ForkJoinPool>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ForkJoinPool";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::AbstractExecutorService>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread_UncaughtExceptionHandler.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/concurrent/Callable.h>
#include <scapix/java_api/java/util/concurrent/ForkJoinPool_ForkJoinWorkerThreadFactory.h>
#include <scapix/java_api/java/util/concurrent/ForkJoinPool_ManagedBlocker.h>
#include <scapix/java_api/java/util/concurrent/ForkJoinTask.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#include <scapix/java_api/java/util/function/Predicate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::ForkJoinPool : public jni::object_base<"java/util/concurrent/ForkJoinPool",
	java::util::concurrent::AbstractExecutorService>
{
public:

	using ForkJoinWorkerThreadFactory = ForkJoinPool_ForkJoinWorkerThreadFactory;
	using ManagedBlocker = ForkJoinPool_ManagedBlocker;

	static jni::ref<java::util::concurrent::ForkJoinPool_ForkJoinWorkerThreadFactory> defaultForkJoinWorkerThreadFactory() { return get_static_field<"defaultForkJoinWorkerThreadFactory", jni::ref<java::util::concurrent::ForkJoinPool_ForkJoinWorkerThreadFactory>>(); }

	static jni::ref<java::util::concurrent::ForkJoinPool> new_object() { return base_::new_object(); }
	static jni::ref<java::util::concurrent::ForkJoinPool> new_object(jint parallelism) { return base_::new_object(parallelism); }
	static jni::ref<java::util::concurrent::ForkJoinPool> new_object(jint parallelism, jni::ref<java::util::concurrent::ForkJoinPool_ForkJoinWorkerThreadFactory> factory, jni::ref<java::lang::Thread_UncaughtExceptionHandler> handler, jboolean asyncMode) { return base_::new_object(parallelism, factory, handler, asyncMode); }
	static jni::ref<java::util::concurrent::ForkJoinPool> new_object(jint parallelism, jni::ref<java::util::concurrent::ForkJoinPool_ForkJoinWorkerThreadFactory> factory, jni::ref<java::lang::Thread_UncaughtExceptionHandler> handler, jboolean asyncMode, jint corePoolSize, jint maximumPoolSize, jint minimumRunnable, jni::ref<java::util::function::Predicate> saturate, jlong keepAliveTime, jni::ref<java::util::concurrent::TimeUnit> p10) { return base_::new_object(parallelism, factory, handler, asyncMode, corePoolSize, maximumPoolSize, minimumRunnable, saturate, keepAliveTime, p10); }
	static jni::ref<java::util::concurrent::ForkJoinPool> commonPool() { return call_static_method<"commonPool", jni::ref<java::util::concurrent::ForkJoinPool>>(); }
	jni::ref<java::lang::Object> invoke(jni::ref<java::util::concurrent::ForkJoinTask> task) { return call_method<"invoke", jni::ref<java::lang::Object>>(task); }
	void execute(jni::ref<java::util::concurrent::ForkJoinTask> task) { return call_method<"execute", void>(task); }
	void execute(jni::ref<java::lang::Runnable> task) { return call_method<"execute", void>(task); }
	jni::ref<java::util::concurrent::ForkJoinTask> submit(jni::ref<java::util::concurrent::ForkJoinTask> task) { return call_method<"submit", jni::ref<java::util::concurrent::ForkJoinTask>>(task); }
	jni::ref<java::util::concurrent::ForkJoinTask> submit(jni::ref<java::util::concurrent::Callable> task) { return call_method<"submit", jni::ref<java::util::concurrent::ForkJoinTask>>(task); }
	jni::ref<java::util::concurrent::ForkJoinTask> submit(jni::ref<java::lang::Runnable> task, jni::ref<java::lang::Object> result) { return call_method<"submit", jni::ref<java::util::concurrent::ForkJoinTask>>(task, result); }
	jni::ref<java::util::concurrent::ForkJoinTask> submit(jni::ref<java::lang::Runnable> task) { return call_method<"submit", jni::ref<java::util::concurrent::ForkJoinTask>>(task); }
	jni::ref<java::util::concurrent::ForkJoinTask> externalSubmit(jni::ref<java::util::concurrent::ForkJoinTask> task) { return call_method<"externalSubmit", jni::ref<java::util::concurrent::ForkJoinTask>>(task); }
	jni::ref<java::util::concurrent::ForkJoinTask> lazySubmit(jni::ref<java::util::concurrent::ForkJoinTask> task) { return call_method<"lazySubmit", jni::ref<java::util::concurrent::ForkJoinTask>>(task); }
	jint setParallelism(jint size) { return call_method<"setParallelism", jint>(size); }
	jni::ref<java::util::List> invokeAll(jni::ref<java::util::Collection> tasks) { return call_method<"invokeAll", jni::ref<java::util::List>>(tasks); }
	jni::ref<java::util::List> invokeAll(jni::ref<java::util::Collection> tasks, jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p3) { return call_method<"invokeAll", jni::ref<java::util::List>>(tasks, timeout, p3); }
	jni::ref<java::lang::Object> invokeAny(jni::ref<java::util::Collection> tasks) { return call_method<"invokeAny", jni::ref<java::lang::Object>>(tasks); }
	jni::ref<java::lang::Object> invokeAny(jni::ref<java::util::Collection> tasks, jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p3) { return call_method<"invokeAny", jni::ref<java::lang::Object>>(tasks, timeout, p3); }
	jni::ref<java::util::concurrent::ForkJoinPool_ForkJoinWorkerThreadFactory> getFactory() { return call_method<"getFactory", jni::ref<java::util::concurrent::ForkJoinPool_ForkJoinWorkerThreadFactory>>(); }
	jni::ref<java::lang::Thread_UncaughtExceptionHandler> getUncaughtExceptionHandler() { return call_method<"getUncaughtExceptionHandler", jni::ref<java::lang::Thread_UncaughtExceptionHandler>>(); }
	jint getParallelism() { return call_method<"getParallelism", jint>(); }
	static jint getCommonPoolParallelism() { return call_static_method<"getCommonPoolParallelism", jint>(); }
	jint getPoolSize() { return call_method<"getPoolSize", jint>(); }
	jboolean getAsyncMode() { return call_method<"getAsyncMode", jboolean>(); }
	jint getRunningThreadCount() { return call_method<"getRunningThreadCount", jint>(); }
	jint getActiveThreadCount() { return call_method<"getActiveThreadCount", jint>(); }
	jboolean isQuiescent() { return call_method<"isQuiescent", jboolean>(); }
	jlong getStealCount() { return call_method<"getStealCount", jlong>(); }
	jlong getQueuedTaskCount() { return call_method<"getQueuedTaskCount", jlong>(); }
	jint getQueuedSubmissionCount() { return call_method<"getQueuedSubmissionCount", jint>(); }
	jboolean hasQueuedSubmissions() { return call_method<"hasQueuedSubmissions", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void shutdown() { return call_method<"shutdown", void>(); }
	jni::ref<java::util::List> shutdownNow() { return call_method<"shutdownNow", jni::ref<java::util::List>>(); }
	jboolean isTerminated() { return call_method<"isTerminated", jboolean>(); }
	jboolean isTerminating() { return call_method<"isTerminating", jboolean>(); }
	jboolean isShutdown() { return call_method<"isShutdown", jboolean>(); }
	jboolean awaitTermination(jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"awaitTermination", jboolean>(timeout, p2); }
	jboolean awaitQuiescence(jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"awaitQuiescence", jboolean>(timeout, p2); }
	void close() { return call_method<"close", void>(); }
	static void managedBlock(jni::ref<java::util::concurrent::ForkJoinPool_ManagedBlocker> blocker) { return call_static_method<"managedBlock", void>(blocker); }

protected:

	ForkJoinPool(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL
