// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/locks/AbstractQueuedSynchronizer.h>
#include <scapix/java_api/java/lang/Runnable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_WORKER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_WORKER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ThreadPoolExecutor_Worker; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ThreadPoolExecutor_Worker>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ThreadPoolExecutor$Worker";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::locks::AbstractQueuedSynchronizer, scapix::java_api::java::lang::Runnable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_WORKER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_WORKER)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_WORKER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::ThreadPoolExecutor_Worker : public jni::object_base<"java/util/concurrent/ThreadPoolExecutor$Worker",
	java::util::concurrent::locks::AbstractQueuedSynchronizer,
	java::lang::Runnable>
{
public:

	void run() { return call_method<"run", void>(); }
	void lock() { return call_method<"lock", void>(); }
	jboolean tryLock() { return call_method<"tryLock", jboolean>(); }
	void unlock() { return call_method<"unlock", void>(); }
	jboolean isLocked() { return call_method<"isLocked", jboolean>(); }

protected:

	ThreadPoolExecutor_Worker(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_WORKER
