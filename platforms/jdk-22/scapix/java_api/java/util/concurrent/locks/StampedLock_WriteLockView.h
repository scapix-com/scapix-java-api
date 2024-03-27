// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/locks/Lock.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK_WRITELOCKVIEW_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK_WRITELOCKVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::locks { class StampedLock_WriteLockView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::locks::StampedLock_WriteLockView>
{
	static constexpr fixed_string class_name = "java/util/concurrent/locks/StampedLock$WriteLockView";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::concurrent::locks::Lock>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK_WRITELOCKVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK_WRITELOCKVIEW)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK_WRITELOCKVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#include <scapix/java_api/java/util/concurrent/locks/Condition.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::locks::StampedLock_WriteLockView : public jni::object_base<"java/util/concurrent/locks/StampedLock$WriteLockView",
	java::lang::Object,
	java::util::concurrent::locks::Lock>
{
public:

	void lock() { return call_method<"lock", void>(); }
	void lockInterruptibly() { return call_method<"lockInterruptibly", void>(); }
	jboolean tryLock() { return call_method<"tryLock", jboolean>(); }
	jboolean tryLock(jlong time, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"tryLock", jboolean>(time, p2); }
	void unlock() { return call_method<"unlock", void>(); }
	jni::ref<java::util::concurrent::locks::Condition> newCondition() { return call_method<"newCondition", jni::ref<java::util::concurrent::locks::Condition>>(); }

protected:

	StampedLock_WriteLockView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK_WRITELOCKVIEW
