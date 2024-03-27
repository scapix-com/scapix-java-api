// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::locks { class StampedLock; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::locks::StampedLock>
{
	static constexpr fixed_string class_name = "java/util/concurrent/locks/StampedLock";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#include <scapix/java_api/java/util/concurrent/locks/Lock.h>
#include <scapix/java_api/java/util/concurrent/locks/ReadWriteLock.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::locks::StampedLock : public jni::object_base<"java/util/concurrent/locks/StampedLock",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::concurrent::locks::StampedLock> new_object() { return base_::new_object(); }
	jlong writeLock() { return call_method<"writeLock", jlong>(); }
	jlong tryWriteLock() { return call_method<"tryWriteLock", jlong>(); }
	jlong tryWriteLock(jlong p1, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"tryWriteLock", jlong>(p1, p2); }
	jlong writeLockInterruptibly() { return call_method<"writeLockInterruptibly", jlong>(); }
	jlong readLock() { return call_method<"readLock", jlong>(); }
	jlong tryReadLock() { return call_method<"tryReadLock", jlong>(); }
	jlong tryReadLock(jlong p1, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"tryReadLock", jlong>(p1, p2); }
	jlong readLockInterruptibly() { return call_method<"readLockInterruptibly", jlong>(); }
	jlong tryOptimisticRead() { return call_method<"tryOptimisticRead", jlong>(); }
	jboolean validate(jlong p1) { return call_method<"validate", jboolean>(p1); }
	void unlockWrite(jlong p1) { return call_method<"unlockWrite", void>(p1); }
	void unlockRead(jlong p1) { return call_method<"unlockRead", void>(p1); }
	void unlock(jlong p1) { return call_method<"unlock", void>(p1); }
	jlong tryConvertToWriteLock(jlong p1) { return call_method<"tryConvertToWriteLock", jlong>(p1); }
	jlong tryConvertToReadLock(jlong p1) { return call_method<"tryConvertToReadLock", jlong>(p1); }
	jlong tryConvertToOptimisticRead(jlong p1) { return call_method<"tryConvertToOptimisticRead", jlong>(p1); }
	jboolean tryUnlockWrite() { return call_method<"tryUnlockWrite", jboolean>(); }
	jboolean tryUnlockRead() { return call_method<"tryUnlockRead", jboolean>(); }
	jboolean isWriteLocked() { return call_method<"isWriteLocked", jboolean>(); }
	jboolean isReadLocked() { return call_method<"isReadLocked", jboolean>(); }
	jint getReadLockCount() { return call_method<"getReadLockCount", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::concurrent::locks::Lock> asReadLock() { return call_method<"asReadLock", jni::ref<java::util::concurrent::locks::Lock>>(); }
	jni::ref<java::util::concurrent::locks::Lock> asWriteLock() { return call_method<"asWriteLock", jni::ref<java::util::concurrent::locks::Lock>>(); }
	jni::ref<java::util::concurrent::locks::ReadWriteLock> asReadWriteLock() { return call_method<"asReadWriteLock", jni::ref<java::util::concurrent::locks::ReadWriteLock>>(); }

protected:

	StampedLock(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK