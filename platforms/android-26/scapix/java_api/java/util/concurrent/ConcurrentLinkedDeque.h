// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractCollection.h>
#include <scapix/java_api/java/util/Deque.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDDEQUE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDDEQUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ConcurrentLinkedDeque; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ConcurrentLinkedDeque>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ConcurrentLinkedDeque";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractCollection, scapix::java_api::java::util::Deque, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDDEQUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDDEQUE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDDEQUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Spliterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::ConcurrentLinkedDeque : public jni::object_base<"java/util/concurrent/ConcurrentLinkedDeque",
	java::util::AbstractCollection,
	java::util::Deque,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::concurrent::ConcurrentLinkedDeque> new_object() { return base_::new_object(); }
	static jni::ref<java::util::concurrent::ConcurrentLinkedDeque> new_object(jni::ref<java::util::Collection> c) { return base_::new_object(c); }
	void addFirst(jni::ref<java::lang::Object> e) { return call_method<"addFirst", void>(e); }
	void addLast(jni::ref<java::lang::Object> e) { return call_method<"addLast", void>(e); }
	jboolean offerFirst(jni::ref<java::lang::Object> e) { return call_method<"offerFirst", jboolean>(e); }
	jboolean offerLast(jni::ref<java::lang::Object> e) { return call_method<"offerLast", jboolean>(e); }
	jni::ref<java::lang::Object> peekFirst() { return call_method<"peekFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> peekLast() { return call_method<"peekLast", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getFirst() { return call_method<"getFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getLast() { return call_method<"getLast", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> pollFirst() { return call_method<"pollFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> pollLast() { return call_method<"pollLast", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> removeFirst() { return call_method<"removeFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> removeLast() { return call_method<"removeLast", jni::ref<java::lang::Object>>(); }
	jboolean offer(jni::ref<java::lang::Object> e) { return call_method<"offer", jboolean>(e); }
	jboolean add(jni::ref<java::lang::Object> e) { return call_method<"add", jboolean>(e); }
	jni::ref<java::lang::Object> poll() { return call_method<"poll", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> peek() { return call_method<"peek", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> remove() { return call_method<"remove", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> pop() { return call_method<"pop", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> element() { return call_method<"element", jni::ref<java::lang::Object>>(); }
	void push(jni::ref<java::lang::Object> e) { return call_method<"push", void>(e); }
	jboolean removeFirstOccurrence(jni::ref<java::lang::Object> o) { return call_method<"removeFirstOccurrence", jboolean>(o); }
	jboolean removeLastOccurrence(jni::ref<java::lang::Object> o) { return call_method<"removeLastOccurrence", jboolean>(o); }
	jboolean contains(jni::ref<java::lang::Object> o) { return call_method<"contains", jboolean>(o); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jint size() { return call_method<"size", jint>(); }
	jboolean remove(jni::ref<java::lang::Object> o) { return call_method<"remove", jboolean>(o); }
	jboolean addAll(jni::ref<java::util::Collection> c) { return call_method<"addAll", jboolean>(c); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<jni::array<java::lang::Object>> a) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(a); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::util::Iterator> descendingIterator() { return call_method<"descendingIterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::util::Spliterator> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator>>(); }

protected:

	ConcurrentLinkedDeque(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDDEQUE
