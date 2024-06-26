// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_FORKJOINWORKERTHREADFACTORY_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_FORKJOINWORKERTHREADFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ForkJoinPool_ForkJoinWorkerThreadFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ForkJoinPool_ForkJoinWorkerThreadFactory>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_FORKJOINWORKERTHREADFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_FORKJOINWORKERTHREADFACTORY)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_FORKJOINWORKERTHREADFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/concurrent/ForkJoinPool.h>
#include <scapix/java_api/java/util/concurrent/ForkJoinWorkerThread.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::ForkJoinPool_ForkJoinWorkerThreadFactory : public jni::object_base<"java/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory",
	java::lang::Object>
{
public:

	jni::ref<java::util::concurrent::ForkJoinWorkerThread> newThread(jni::ref<java::util::concurrent::ForkJoinPool> p1) { return call_method<"newThread", jni::ref<java::util::concurrent::ForkJoinWorkerThread>>(p1); }

protected:

	ForkJoinPool_ForkJoinWorkerThreadFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FORKJOINPOOL_FORKJOINWORKERTHREADFACTORY
