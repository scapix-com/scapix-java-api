// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Thread.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINWORKERTHREAD_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINWORKERTHREAD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ForkJoinWorkerThread; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ForkJoinWorkerThread>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ForkJoinWorkerThread";
	using base_classes = std::tuple<scapix::java_api::java::lang::Thread>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINWORKERTHREAD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINWORKERTHREAD)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINWORKERTHREAD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/concurrent/ForkJoinPool.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::ForkJoinWorkerThread : public jni::object_base<"java/util/concurrent/ForkJoinWorkerThread",
	java::lang::Thread>
{
public:

	jni::ref<java::util::concurrent::ForkJoinPool> getPool() { return call_method<"getPool", jni::ref<java::util::concurrent::ForkJoinPool>>(); }
	jint getPoolIndex() { return call_method<"getPoolIndex", jint>(); }
	jint getQueuedTaskCount() { return call_method<"getQueuedTaskCount", jint>(); }
	void run() { return call_method<"run", void>(); }

protected:

	ForkJoinWorkerThread(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINWORKERTHREAD
