// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/locks/Condition.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_CONDITIONOBJECT_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_CONDITIONOBJECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::locks { class AbstractQueuedSynchronizer_ConditionObject; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject>
{
	static constexpr fixed_string class_name = "java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::concurrent::locks::Condition, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_CONDITIONOBJECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_CONDITIONOBJECT)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_CONDITIONOBJECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#include <scapix/java_api/java/util/concurrent/locks/AbstractQueuedSynchronizer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject : public jni::object_base<"java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject",
	java::lang::Object,
	java::util::concurrent::locks::Condition,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject> new_object(jni::ref<java::util::concurrent::locks::AbstractQueuedSynchronizer> this_0) { return base_::new_object(this_0); }
	void signal() { return call_method<"signal", void>(); }
	void signalAll() { return call_method<"signalAll", void>(); }
	void awaitUninterruptibly() { return call_method<"awaitUninterruptibly", void>(); }
	void await() { return call_method<"await", void>(); }
	jlong awaitNanos(jlong nanosTimeout) { return call_method<"awaitNanos", jlong>(nanosTimeout); }
	jboolean awaitUntil(jni::ref<java::util::Date> deadline) { return call_method<"awaitUntil", jboolean>(deadline); }
	jboolean await(jlong time, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"await", jboolean>(time, p2); }

protected:

	AbstractQueuedSynchronizer_ConditionObject(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_CONDITIONOBJECT
