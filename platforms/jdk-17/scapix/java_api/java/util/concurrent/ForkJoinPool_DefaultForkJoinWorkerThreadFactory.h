// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/ForkJoinPool_ForkJoinWorkerThreadFactory.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_DEFAULTFORKJOINWORKERTHREADFACTORY_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_DEFAULTFORKJOINWORKERTHREADFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ForkJoinPool_DefaultForkJoinWorkerThreadFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ForkJoinPool_DefaultForkJoinWorkerThreadFactory>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ForkJoinPool$DefaultForkJoinWorkerThreadFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::concurrent::ForkJoinPool_ForkJoinWorkerThreadFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_DEFAULTFORKJOINWORKERTHREADFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_DEFAULTFORKJOINWORKERTHREADFACTORY)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_DEFAULTFORKJOINWORKERTHREADFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/concurrent/ForkJoinPool.h>
#include <scapix/java_api/java/util/concurrent/ForkJoinWorkerThread.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::ForkJoinPool_DefaultForkJoinWorkerThreadFactory : public jni::object_base<"java/util/concurrent/ForkJoinPool$DefaultForkJoinWorkerThreadFactory",
	java::lang::Object,
	java::util::concurrent::ForkJoinPool_ForkJoinWorkerThreadFactory>
{
public:

	jni::ref<java::util::concurrent::ForkJoinWorkerThread> newThread(jni::ref<java::util::concurrent::ForkJoinPool> pool) { return call_method<"newThread", jni::ref<java::util::concurrent::ForkJoinWorkerThread>>(pool); }

protected:

	ForkJoinPool_DefaultForkJoinWorkerThreadFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_DEFAULTFORKJOINWORKERTHREADFACTORY
