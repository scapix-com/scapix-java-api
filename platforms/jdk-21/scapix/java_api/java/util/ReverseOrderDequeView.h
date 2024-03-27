// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Deque.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERDEQUEVIEW_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERDEQUEVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ReverseOrderDequeView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ReverseOrderDequeView>
{
	static constexpr fixed_string class_name = "java/util/ReverseOrderDequeView";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Deque>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERDEQUEVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERDEQUEVIEW)
#define SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERDEQUEVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/IntFunction.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::ReverseOrderDequeView : public jni::object_base<"java/util/ReverseOrderDequeView",
	java::lang::Object,
	java::util::Deque>
{
public:

	static jni::ref<java::util::Deque> of(jni::ref<java::util::Deque> deque) { return call_static_method<"of", jni::ref<java::util::Deque>>(deque); }
	void forEach(jni::ref<java::util::function::Consumer> action) { return call_method<"forEach", void>(action); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::util::Spliterator> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator>>(); }
	jboolean add(jni::ref<java::lang::Object> e) { return call_method<"add", jboolean>(e); }
	jboolean addAll(jni::ref<java::util::Collection> c) { return call_method<"addAll", jboolean>(c); }
	void clear() { return call_method<"clear", void>(); }
	jboolean contains(jni::ref<java::lang::Object> o) { return call_method<"contains", jboolean>(o); }
	jboolean containsAll(jni::ref<java::util::Collection> c) { return call_method<"containsAll", jboolean>(c); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jni::ref<java::util::stream::Stream> parallelStream() { return call_method<"parallelStream", jni::ref<java::util::stream::Stream>>(); }
	jboolean remove(jni::ref<java::lang::Object> o) { return call_method<"remove", jboolean>(o); }
	jboolean removeAll(jni::ref<java::util::Collection> c) { return call_method<"removeAll", jboolean>(c); }
	jboolean retainAll(jni::ref<java::util::Collection> c) { return call_method<"retainAll", jboolean>(c); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<java::util::stream::Stream> stream() { return call_method<"stream", jni::ref<java::util::stream::Stream>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<jni::array<java::lang::Object>> a) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(a); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<java::util::function::IntFunction> generator) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(generator); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void addFirst(jni::ref<java::lang::Object> e) { return call_method<"addFirst", void>(e); }
	void addLast(jni::ref<java::lang::Object> e) { return call_method<"addLast", void>(e); }
	jni::ref<java::util::Iterator> descendingIterator() { return call_method<"descendingIterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::lang::Object> element() { return call_method<"element", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getFirst() { return call_method<"getFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getLast() { return call_method<"getLast", jni::ref<java::lang::Object>>(); }
	jboolean offer(jni::ref<java::lang::Object> e) { return call_method<"offer", jboolean>(e); }
	jboolean offerFirst(jni::ref<java::lang::Object> e) { return call_method<"offerFirst", jboolean>(e); }
	jboolean offerLast(jni::ref<java::lang::Object> e) { return call_method<"offerLast", jboolean>(e); }
	jni::ref<java::lang::Object> peek() { return call_method<"peek", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> peekFirst() { return call_method<"peekFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> peekLast() { return call_method<"peekLast", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> poll() { return call_method<"poll", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> pollFirst() { return call_method<"pollFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> pollLast() { return call_method<"pollLast", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> pop() { return call_method<"pop", jni::ref<java::lang::Object>>(); }
	void push(jni::ref<java::lang::Object> e) { return call_method<"push", void>(e); }
	jni::ref<java::lang::Object> remove() { return call_method<"remove", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> removeFirst() { return call_method<"removeFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> removeLast() { return call_method<"removeLast", jni::ref<java::lang::Object>>(); }
	jboolean removeFirstOccurrence(jni::ref<java::lang::Object> o) { return call_method<"removeFirstOccurrence", jboolean>(o); }
	jboolean removeLastOccurrence(jni::ref<java::lang::Object> o) { return call_method<"removeLastOccurrence", jboolean>(o); }

protected:

	ReverseOrderDequeView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERDEQUEVIEW