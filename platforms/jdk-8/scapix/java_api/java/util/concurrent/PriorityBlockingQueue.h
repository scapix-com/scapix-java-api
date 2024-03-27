// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractQueue.h>
#include <scapix/java_api/java/util/concurrent/BlockingQueue.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_PRIORITYBLOCKINGQUEUE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_PRIORITYBLOCKINGQUEUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class PriorityBlockingQueue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::PriorityBlockingQueue>
{
	static constexpr fixed_string class_name = "java/util/concurrent/PriorityBlockingQueue";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractQueue, scapix::java_api::java::util::concurrent::BlockingQueue, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_PRIORITYBLOCKINGQUEUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_PRIORITYBLOCKINGQUEUE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_PRIORITYBLOCKINGQUEUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::PriorityBlockingQueue : public jni::object_base<"java/util/concurrent/PriorityBlockingQueue",
	java::util::AbstractQueue,
	java::util::concurrent::BlockingQueue,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::concurrent::PriorityBlockingQueue> new_object() { return base_::new_object(); }
	static jni::ref<java::util::concurrent::PriorityBlockingQueue> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<java::util::concurrent::PriorityBlockingQueue> new_object(jint p1, jni::ref<java::util::Comparator> p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::util::concurrent::PriorityBlockingQueue> new_object(jni::ref<java::util::Collection> p1) { return base_::new_object(p1); }
	jboolean add(jni::ref<java::lang::Object> p1) { return call_method<"add", jboolean>(p1); }
	jboolean offer(jni::ref<java::lang::Object> p1) { return call_method<"offer", jboolean>(p1); }
	void put(jni::ref<java::lang::Object> p1) { return call_method<"put", void>(p1); }
	jboolean offer(jni::ref<java::lang::Object> p1, jlong p2, jni::ref<java::util::concurrent::TimeUnit> p3) { return call_method<"offer", jboolean>(p1, p2, p3); }
	jni::ref<java::lang::Object> poll() { return call_method<"poll", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> take() { return call_method<"take", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> poll(jlong p1, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"poll", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> peek() { return call_method<"peek", jni::ref<java::lang::Object>>(); }
	jni::ref<java::util::Comparator> comparator() { return call_method<"comparator", jni::ref<java::util::Comparator>>(); }
	jint size() { return call_method<"size", jint>(); }
	jint remainingCapacity() { return call_method<"remainingCapacity", jint>(); }
	jboolean remove(jni::ref<java::lang::Object> p1) { return call_method<"remove", jboolean>(p1); }
	jboolean contains(jni::ref<java::lang::Object> p1) { return call_method<"contains", jboolean>(p1); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint drainTo(jni::ref<java::util::Collection> p1) { return call_method<"drainTo", jint>(p1); }
	jint drainTo(jni::ref<java::util::Collection> p1, jint p2) { return call_method<"drainTo", jint>(p1, p2); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(p1); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::util::Spliterator> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator>>(); }

protected:

	PriorityBlockingQueue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_PRIORITYBLOCKINGQUEUE
