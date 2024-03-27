// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/Executors_DelegatedExecutorService.h>
#include <scapix/java_api/java/util/concurrent/ScheduledExecutorService.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_EXECUTORS_DELEGATEDSCHEDULEDEXECUTORSERVICE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_EXECUTORS_DELEGATEDSCHEDULEDEXECUTORSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class Executors_DelegatedScheduledExecutorService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::Executors_DelegatedScheduledExecutorService>
{
	static constexpr fixed_string class_name = "java/util/concurrent/Executors$DelegatedScheduledExecutorService";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::Executors_DelegatedExecutorService, scapix::java_api::java::util::concurrent::ScheduledExecutorService>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_EXECUTORS_DELEGATEDSCHEDULEDEXECUTORSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_EXECUTORS_DELEGATEDSCHEDULEDEXECUTORSERVICE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_EXECUTORS_DELEGATEDSCHEDULEDEXECUTORSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/util/concurrent/Callable.h>
#include <scapix/java_api/java/util/concurrent/ScheduledFuture.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::Executors_DelegatedScheduledExecutorService : public jni::object_base<"java/util/concurrent/Executors$DelegatedScheduledExecutorService",
	java::util::concurrent::Executors_DelegatedExecutorService,
	java::util::concurrent::ScheduledExecutorService>
{
public:

	jni::ref<java::util::concurrent::ScheduledFuture> schedule(jni::ref<java::lang::Runnable> command, jlong delay, jni::ref<java::util::concurrent::TimeUnit> p3) { return call_method<"schedule", jni::ref<java::util::concurrent::ScheduledFuture>>(command, delay, p3); }
	jni::ref<java::util::concurrent::ScheduledFuture> schedule(jni::ref<java::util::concurrent::Callable> callable, jlong delay, jni::ref<java::util::concurrent::TimeUnit> p3) { return call_method<"schedule", jni::ref<java::util::concurrent::ScheduledFuture>>(callable, delay, p3); }
	jni::ref<java::util::concurrent::ScheduledFuture> scheduleAtFixedRate(jni::ref<java::lang::Runnable> command, jlong initialDelay, jlong p3, jni::ref<java::util::concurrent::TimeUnit> period) { return call_method<"scheduleAtFixedRate", jni::ref<java::util::concurrent::ScheduledFuture>>(command, initialDelay, p3, period); }
	jni::ref<java::util::concurrent::ScheduledFuture> scheduleWithFixedDelay(jni::ref<java::lang::Runnable> command, jlong initialDelay, jlong p3, jni::ref<java::util::concurrent::TimeUnit> delay) { return call_method<"scheduleWithFixedDelay", jni::ref<java::util::concurrent::ScheduledFuture>>(command, initialDelay, p3, delay); }

protected:

	Executors_DelegatedScheduledExecutorService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_EXECUTORS_DELEGATEDSCHEDULEDEXECUTORSERVICE
