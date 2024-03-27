// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Queue.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_DEQUE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_DEQUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Deque; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Deque>
{
	static constexpr fixed_string class_name = "java/util/Deque";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Queue>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_DEQUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_DEQUE)
#define SCAPIX_JAVA_API_JAVA_UTIL_DEQUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Deque : public jni::object_base<"java/util/Deque",
	java::lang::Object,
	java::util::Queue>
{
public:

	void addFirst(jni::ref<java::lang::Object> p1) { return call_method<"addFirst", void>(p1); }
	void addLast(jni::ref<java::lang::Object> p1) { return call_method<"addLast", void>(p1); }
	jboolean offerFirst(jni::ref<java::lang::Object> p1) { return call_method<"offerFirst", jboolean>(p1); }
	jboolean offerLast(jni::ref<java::lang::Object> p1) { return call_method<"offerLast", jboolean>(p1); }
	jni::ref<java::lang::Object> removeFirst() { return call_method<"removeFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> removeLast() { return call_method<"removeLast", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> pollFirst() { return call_method<"pollFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> pollLast() { return call_method<"pollLast", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getFirst() { return call_method<"getFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getLast() { return call_method<"getLast", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> peekFirst() { return call_method<"peekFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> peekLast() { return call_method<"peekLast", jni::ref<java::lang::Object>>(); }
	jboolean removeFirstOccurrence(jni::ref<java::lang::Object> p1) { return call_method<"removeFirstOccurrence", jboolean>(p1); }
	jboolean removeLastOccurrence(jni::ref<java::lang::Object> p1) { return call_method<"removeLastOccurrence", jboolean>(p1); }
	jboolean add(jni::ref<java::lang::Object> p1) { return call_method<"add", jboolean>(p1); }
	jboolean offer(jni::ref<java::lang::Object> p1) { return call_method<"offer", jboolean>(p1); }
	jni::ref<java::lang::Object> remove() { return call_method<"remove", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> poll() { return call_method<"poll", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> element() { return call_method<"element", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> peek() { return call_method<"peek", jni::ref<java::lang::Object>>(); }
	jboolean addAll(jni::ref<java::util::Collection> p1) { return call_method<"addAll", jboolean>(p1); }
	void push(jni::ref<java::lang::Object> p1) { return call_method<"push", void>(p1); }
	jni::ref<java::lang::Object> pop() { return call_method<"pop", jni::ref<java::lang::Object>>(); }
	jboolean remove(jni::ref<java::lang::Object> p1) { return call_method<"remove", jboolean>(p1); }
	jboolean contains(jni::ref<java::lang::Object> p1) { return call_method<"contains", jboolean>(p1); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::util::Iterator> descendingIterator() { return call_method<"descendingIterator", jni::ref<java::util::Iterator>>(); }

protected:

	Deque(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_DEQUE
