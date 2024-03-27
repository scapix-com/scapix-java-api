// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractQueue.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_PRIORITYQUEUE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_PRIORITYQUEUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class PriorityQueue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::PriorityQueue>
{
	static constexpr fixed_string class_name = "java/util/PriorityQueue";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractQueue, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PRIORITYQUEUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_PRIORITYQUEUE)
#define SCAPIX_JAVA_API_JAVA_UTIL_PRIORITYQUEUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/SortedSet.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/Predicate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::PriorityQueue : public jni::object_base<"java/util/PriorityQueue",
	java::util::AbstractQueue,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::PriorityQueue> new_object() { return base_::new_object(); }
	static jni::ref<java::util::PriorityQueue> new_object(jint initialCapacity) { return base_::new_object(initialCapacity); }
	static jni::ref<java::util::PriorityQueue> new_object(jni::ref<java::util::Comparator> comparator) { return base_::new_object(comparator); }
	static jni::ref<java::util::PriorityQueue> new_object(jint initialCapacity, jni::ref<java::util::Comparator> comparator) { return base_::new_object(initialCapacity, comparator); }
	static jni::ref<java::util::PriorityQueue> new_object(jni::ref<java::util::Collection> c) { return base_::new_object(c); }
	static jni::ref<java::util::PriorityQueue> new_object(jni::ref<java::util::PriorityQueue> c) { return base_::new_object(c); }
	static jni::ref<java::util::PriorityQueue> new_object(jni::ref<java::util::SortedSet> c) { return base_::new_object(c); }
	jboolean add(jni::ref<java::lang::Object> e) { return call_method<"add", jboolean>(e); }
	jboolean offer(jni::ref<java::lang::Object> e) { return call_method<"offer", jboolean>(e); }
	jni::ref<java::lang::Object> peek() { return call_method<"peek", jni::ref<java::lang::Object>>(); }
	jboolean remove(jni::ref<java::lang::Object> o) { return call_method<"remove", jboolean>(o); }
	jboolean contains(jni::ref<java::lang::Object> o) { return call_method<"contains", jboolean>(o); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<jni::array<java::lang::Object>> a) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(a); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jint size() { return call_method<"size", jint>(); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::lang::Object> poll() { return call_method<"poll", jni::ref<java::lang::Object>>(); }
	jni::ref<java::util::Comparator> comparator() { return call_method<"comparator", jni::ref<java::util::Comparator>>(); }
	jni::ref<java::util::Spliterator> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator>>(); }
	jboolean removeIf(jni::ref<java::util::function::Predicate> filter) { return call_method<"removeIf", jboolean>(filter); }
	jboolean removeAll(jni::ref<java::util::Collection> c) { return call_method<"removeAll", jboolean>(c); }
	jboolean retainAll(jni::ref<java::util::Collection> c) { return call_method<"retainAll", jboolean>(c); }
	void forEach(jni::ref<java::util::function::Consumer> action) { return call_method<"forEach", void>(action); }

protected:

	PriorityQueue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PRIORITYQUEUE
