// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractQueue.h>
#include <scapix/java_api/java/util/concurrent/BlockingDeque.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class LinkedBlockingDeque; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::LinkedBlockingDeque>
{
	static constexpr fixed_string class_name = "java/util/concurrent/LinkedBlockingDeque";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractQueue, scapix::java_api::java::util::concurrent::BlockingDeque, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::LinkedBlockingDeque : public jni::object_base<"java/util/concurrent/LinkedBlockingDeque",
	java::util::AbstractQueue,
	java::util::concurrent::BlockingDeque,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::concurrent::LinkedBlockingDeque> new_object() { return base_::new_object(); }
	static jni::ref<java::util::concurrent::LinkedBlockingDeque> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<java::util::concurrent::LinkedBlockingDeque> new_object(jni::ref<java::util::Collection> p1) { return base_::new_object(p1); }
	void addFirst(jni::ref<java::lang::Object> p1) { return call_method<"addFirst", void>(p1); }
	void addLast(jni::ref<java::lang::Object> p1) { return call_method<"addLast", void>(p1); }
	jboolean offerFirst(jni::ref<java::lang::Object> p1) { return call_method<"offerFirst", jboolean>(p1); }
	jboolean offerLast(jni::ref<java::lang::Object> p1) { return call_method<"offerLast", jboolean>(p1); }
	void putFirst(jni::ref<java::lang::Object> p1) { return call_method<"putFirst", void>(p1); }
	void putLast(jni::ref<java::lang::Object> p1) { return call_method<"putLast", void>(p1); }
	jboolean offerFirst(jni::ref<java::lang::Object> p1, jlong p2, jni::ref<java::util::concurrent::TimeUnit> p3) { return call_method<"offerFirst", jboolean>(p1, p2, p3); }
	jboolean offerLast(jni::ref<java::lang::Object> p1, jlong p2, jni::ref<java::util::concurrent::TimeUnit> p3) { return call_method<"offerLast", jboolean>(p1, p2, p3); }
	jni::ref<java::lang::Object> removeFirst() { return call_method<"removeFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> removeLast() { return call_method<"removeLast", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> pollFirst() { return call_method<"pollFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> pollLast() { return call_method<"pollLast", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> takeFirst() { return call_method<"takeFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> takeLast() { return call_method<"takeLast", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> pollFirst(jlong p1, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"pollFirst", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> pollLast(jlong p1, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"pollLast", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> getFirst() { return call_method<"getFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getLast() { return call_method<"getLast", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> peekFirst() { return call_method<"peekFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> peekLast() { return call_method<"peekLast", jni::ref<java::lang::Object>>(); }
	jboolean removeFirstOccurrence(jni::ref<java::lang::Object> p1) { return call_method<"removeFirstOccurrence", jboolean>(p1); }
	jboolean removeLastOccurrence(jni::ref<java::lang::Object> p1) { return call_method<"removeLastOccurrence", jboolean>(p1); }
	jboolean add(jni::ref<java::lang::Object> p1) { return call_method<"add", jboolean>(p1); }
	jboolean offer(jni::ref<java::lang::Object> p1) { return call_method<"offer", jboolean>(p1); }
	void put(jni::ref<java::lang::Object> p1) { return call_method<"put", void>(p1); }
	jboolean offer(jni::ref<java::lang::Object> p1, jlong p2, jni::ref<java::util::concurrent::TimeUnit> p3) { return call_method<"offer", jboolean>(p1, p2, p3); }
	jni::ref<java::lang::Object> remove() { return call_method<"remove", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> poll() { return call_method<"poll", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> take() { return call_method<"take", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> poll(jlong p1, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"poll", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> element() { return call_method<"element", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> peek() { return call_method<"peek", jni::ref<java::lang::Object>>(); }
	jint remainingCapacity() { return call_method<"remainingCapacity", jint>(); }
	jint drainTo(jni::ref<java::util::Collection> p1) { return call_method<"drainTo", jint>(p1); }
	jint drainTo(jni::ref<java::util::Collection> p1, jint p2) { return call_method<"drainTo", jint>(p1, p2); }
	void push(jni::ref<java::lang::Object> p1) { return call_method<"push", void>(p1); }
	jni::ref<java::lang::Object> pop() { return call_method<"pop", jni::ref<java::lang::Object>>(); }
	jboolean remove(jni::ref<java::lang::Object> p1) { return call_method<"remove", jboolean>(p1); }
	jint size() { return call_method<"size", jint>(); }
	jboolean contains(jni::ref<java::lang::Object> p1) { return call_method<"contains", jboolean>(p1); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::util::Iterator> descendingIterator() { return call_method<"descendingIterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::util::Spliterator> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator>>(); }

protected:

	LinkedBlockingDeque(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE
