// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/locks/Condition.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER_CONDITIONOBJECT_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER_CONDITIONOBJECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::locks { class AbstractQueuedLongSynchronizer_ConditionObject; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject>
{
	static constexpr fixed_string class_name = "java/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::concurrent::locks::Condition, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER_CONDITIONOBJECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER_CONDITIONOBJECT)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER_CONDITIONOBJECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#include <scapix/java_api/java/util/concurrent/locks/AbstractQueuedLongSynchronizer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject : public jni::object_base<"java/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject",
	java::lang::Object,
	java::util::concurrent::locks::Condition,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject> new_object(jni::ref<java::util::concurrent::locks::AbstractQueuedLongSynchronizer> p1) { return base_::new_object(p1); }
	void signal() { return call_method<"signal", void>(); }
	void signalAll() { return call_method<"signalAll", void>(); }
	void awaitUninterruptibly() { return call_method<"awaitUninterruptibly", void>(); }
	void await() { return call_method<"await", void>(); }
	jlong awaitNanos(jlong p1) { return call_method<"awaitNanos", jlong>(p1); }
	jboolean awaitUntil(jni::ref<java::util::Date> p1) { return call_method<"awaitUntil", jboolean>(p1); }
	jboolean await(jlong p1, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"await", jboolean>(p1, p2); }

protected:

	AbstractQueuedLongSynchronizer_ConditionObject(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER_CONDITIONOBJECT