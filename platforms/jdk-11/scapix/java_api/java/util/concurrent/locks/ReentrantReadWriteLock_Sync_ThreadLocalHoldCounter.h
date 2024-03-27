// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ThreadLocal.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK_SYNC_THREADLOCALHOLDCOUNTER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK_SYNC_THREADLOCALHOLDCOUNTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::locks { class ReentrantReadWriteLock_Sync_ThreadLocalHoldCounter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::locks::ReentrantReadWriteLock_Sync_ThreadLocalHoldCounter>
{
	static constexpr fixed_string class_name = "java/util/concurrent/locks/ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter";
	using base_classes = std::tuple<scapix::java_api::java::lang::ThreadLocal>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK_SYNC_THREADLOCALHOLDCOUNTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK_SYNC_THREADLOCALHOLDCOUNTER)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK_SYNC_THREADLOCALHOLDCOUNTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/concurrent/locks/ReentrantReadWriteLock_Sync_HoldCounter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::locks::ReentrantReadWriteLock_Sync_ThreadLocalHoldCounter : public jni::object_base<"java/util/concurrent/locks/ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter",
	java::lang::ThreadLocal>
{
public:

	jni::ref<java::util::concurrent::locks::ReentrantReadWriteLock_Sync_HoldCounter> initialValue() { return call_method<"initialValue", jni::ref<java::util::concurrent::locks::ReentrantReadWriteLock_Sync_HoldCounter>>(); }

protected:

	ReentrantReadWriteLock_Sync_ThreadLocalHoldCounter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK_SYNC_THREADLOCALHOLDCOUNTER
