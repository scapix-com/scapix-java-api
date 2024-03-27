// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/RejectedExecutionHandler.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_CALLERRUNSPOLICY_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_CALLERRUNSPOLICY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ThreadPoolExecutor_CallerRunsPolicy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ThreadPoolExecutor_CallerRunsPolicy>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ThreadPoolExecutor$CallerRunsPolicy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::concurrent::RejectedExecutionHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_CALLERRUNSPOLICY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_CALLERRUNSPOLICY)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_CALLERRUNSPOLICY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/util/concurrent/ThreadPoolExecutor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::ThreadPoolExecutor_CallerRunsPolicy : public jni::object_base<"java/util/concurrent/ThreadPoolExecutor$CallerRunsPolicy",
	java::lang::Object,
	java::util::concurrent::RejectedExecutionHandler>
{
public:

	static jni::ref<java::util::concurrent::ThreadPoolExecutor_CallerRunsPolicy> new_object() { return base_::new_object(); }
	void rejectedExecution(jni::ref<java::lang::Runnable> r, jni::ref<java::util::concurrent::ThreadPoolExecutor> e) { return call_method<"rejectedExecution", void>(r, e); }

protected:

	ThreadPoolExecutor_CallerRunsPolicy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_CALLERRUNSPOLICY