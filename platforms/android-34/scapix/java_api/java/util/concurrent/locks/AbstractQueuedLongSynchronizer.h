// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/locks/AbstractOwnableSynchronizer.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::locks { class AbstractQueuedLongSynchronizer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::locks::AbstractQueuedLongSynchronizer>
{
	static constexpr fixed_string class_name = "java/util/concurrent/locks/AbstractQueuedLongSynchronizer";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::locks::AbstractOwnableSynchronizer, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/concurrent/locks/AbstractQueuedLongSynchronizer_ConditionObject.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::locks::AbstractQueuedLongSynchronizer : public jni::object_base<"java/util/concurrent/locks/AbstractQueuedLongSynchronizer",
	java::util::concurrent::locks::AbstractOwnableSynchronizer,
	java::io::Serializable>
{
public:

	using ConditionObject = AbstractQueuedLongSynchronizer_ConditionObject;

	void acquire(jlong arg) { return call_method<"acquire", void>(arg); }
	void acquireInterruptibly(jlong arg) { return call_method<"acquireInterruptibly", void>(arg); }
	jboolean tryAcquireNanos(jlong arg, jlong p2) { return call_method<"tryAcquireNanos", jboolean>(arg, p2); }
	jboolean release(jlong arg) { return call_method<"release", jboolean>(arg); }
	void acquireShared(jlong arg) { return call_method<"acquireShared", void>(arg); }
	void acquireSharedInterruptibly(jlong arg) { return call_method<"acquireSharedInterruptibly", void>(arg); }
	jboolean tryAcquireSharedNanos(jlong arg, jlong p2) { return call_method<"tryAcquireSharedNanos", jboolean>(arg, p2); }
	jboolean releaseShared(jlong arg) { return call_method<"releaseShared", jboolean>(arg); }
	jboolean hasQueuedThreads() { return call_method<"hasQueuedThreads", jboolean>(); }
	jboolean hasContended() { return call_method<"hasContended", jboolean>(); }
	jni::ref<java::lang::Thread> getFirstQueuedThread() { return call_method<"getFirstQueuedThread", jni::ref<java::lang::Thread>>(); }
	jboolean isQueued(jni::ref<java::lang::Thread> thread) { return call_method<"isQueued", jboolean>(thread); }
	jboolean hasQueuedPredecessors() { return call_method<"hasQueuedPredecessors", jboolean>(); }
	jint getQueueLength() { return call_method<"getQueueLength", jint>(); }
	jni::ref<java::util::Collection> getQueuedThreads() { return call_method<"getQueuedThreads", jni::ref<java::util::Collection>>(); }
	jni::ref<java::util::Collection> getExclusiveQueuedThreads() { return call_method<"getExclusiveQueuedThreads", jni::ref<java::util::Collection>>(); }
	jni::ref<java::util::Collection> getSharedQueuedThreads() { return call_method<"getSharedQueuedThreads", jni::ref<java::util::Collection>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean owns(jni::ref<java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject> condition) { return call_method<"owns", jboolean>(condition); }
	jboolean hasWaiters(jni::ref<java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject> condition) { return call_method<"hasWaiters", jboolean>(condition); }
	jint getWaitQueueLength(jni::ref<java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject> condition) { return call_method<"getWaitQueueLength", jint>(condition); }
	jni::ref<java::util::Collection> getWaitingThreads(jni::ref<java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject> condition) { return call_method<"getWaitingThreads", jni::ref<java::util::Collection>>(condition); }

protected:

	AbstractQueuedLongSynchronizer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER
