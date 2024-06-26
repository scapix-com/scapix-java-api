// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/locks/ReadWriteLock.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK_READWRITELOCKVIEW_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK_READWRITELOCKVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::locks { class StampedLock_ReadWriteLockView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::locks::StampedLock_ReadWriteLockView>
{
	static constexpr fixed_string class_name = "java/util/concurrent/locks/StampedLock$ReadWriteLockView";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::concurrent::locks::ReadWriteLock>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK_READWRITELOCKVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK_READWRITELOCKVIEW)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK_READWRITELOCKVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/concurrent/locks/Lock.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::locks::StampedLock_ReadWriteLockView : public jni::object_base<"java/util/concurrent/locks/StampedLock$ReadWriteLockView",
	java::lang::Object,
	java::util::concurrent::locks::ReadWriteLock>
{
public:

	jni::ref<java::util::concurrent::locks::Lock> readLock() { return call_method<"readLock", jni::ref<java::util::concurrent::locks::Lock>>(); }
	jni::ref<java::util::concurrent::locks::Lock> writeLock() { return call_method<"writeLock", jni::ref<java::util::concurrent::locks::Lock>>(); }

protected:

	StampedLock_ReadWriteLockView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK_READWRITELOCKVIEW
