// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/locks/Lock.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTLOCK_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTLOCK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::locks { class ReentrantLock; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::locks::ReentrantLock>
{
	static constexpr fixed_string class_name = "java/util/concurrent/locks/ReentrantLock";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::concurrent::locks::Lock, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTLOCK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTLOCK)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTLOCK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#include <scapix/java_api/java/util/concurrent/locks/Condition.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::locks::ReentrantLock : public jni::object_base<"java/util/concurrent/locks/ReentrantLock",
	java::lang::Object,
	java::util::concurrent::locks::Lock,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::concurrent::locks::ReentrantLock> new_object() { return base_::new_object(); }
	static jni::ref<java::util::concurrent::locks::ReentrantLock> new_object(jboolean p1) { return base_::new_object(p1); }
	void lock() { return call_method<"lock", void>(); }
	void lockInterruptibly() { return call_method<"lockInterruptibly", void>(); }
	jboolean tryLock() { return call_method<"tryLock", jboolean>(); }
	jboolean tryLock(jlong p1, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"tryLock", jboolean>(p1, p2); }
	void unlock() { return call_method<"unlock", void>(); }
	jni::ref<java::util::concurrent::locks::Condition> newCondition() { return call_method<"newCondition", jni::ref<java::util::concurrent::locks::Condition>>(); }
	jint getHoldCount() { return call_method<"getHoldCount", jint>(); }
	jboolean isHeldByCurrentThread() { return call_method<"isHeldByCurrentThread", jboolean>(); }
	jboolean isLocked() { return call_method<"isLocked", jboolean>(); }
	jboolean isFair() { return call_method<"isFair", jboolean>(); }
	jboolean hasQueuedThreads() { return call_method<"hasQueuedThreads", jboolean>(); }
	jboolean hasQueuedThread(jni::ref<java::lang::Thread> p1) { return call_method<"hasQueuedThread", jboolean>(p1); }
	jint getQueueLength() { return call_method<"getQueueLength", jint>(); }
	jboolean hasWaiters(jni::ref<java::util::concurrent::locks::Condition> p1) { return call_method<"hasWaiters", jboolean>(p1); }
	jint getWaitQueueLength(jni::ref<java::util::concurrent::locks::Condition> p1) { return call_method<"getWaitQueueLength", jint>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ReentrantLock(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTLOCK
