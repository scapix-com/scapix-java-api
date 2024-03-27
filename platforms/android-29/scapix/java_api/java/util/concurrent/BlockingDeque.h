// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/BlockingQueue.h>
#include <scapix/java_api/java/util/Deque.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_BLOCKINGDEQUE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_BLOCKINGDEQUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class BlockingDeque; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::BlockingDeque>
{
	static constexpr fixed_string class_name = "java/util/concurrent/BlockingDeque";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::concurrent::BlockingQueue, scapix::java_api::java::util::Deque>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_BLOCKINGDEQUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_BLOCKINGDEQUE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_BLOCKINGDEQUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::BlockingDeque : public jni::object_base<"java/util/concurrent/BlockingDeque",
	java::lang::Object,
	java::util::concurrent::BlockingQueue,
	java::util::Deque>
{
public:

	void addFirst(jni::ref<java::lang::Object> p1) { return call_method<"addFirst", void>(p1); }
	void addLast(jni::ref<java::lang::Object> p1) { return call_method<"addLast", void>(p1); }
	jboolean offerFirst(jni::ref<java::lang::Object> p1) { return call_method<"offerFirst", jboolean>(p1); }
	jboolean offerLast(jni::ref<java::lang::Object> p1) { return call_method<"offerLast", jboolean>(p1); }
	void putFirst(jni::ref<java::lang::Object> p1) { return call_method<"putFirst", void>(p1); }
	void putLast(jni::ref<java::lang::Object> p1) { return call_method<"putLast", void>(p1); }
	jboolean offerFirst(jni::ref<java::lang::Object> p1, jlong p2, jni::ref<java::util::concurrent::TimeUnit> p3) { return call_method<"offerFirst", jboolean>(p1, p2, p3); }
	jboolean offerLast(jni::ref<java::lang::Object> p1, jlong p2, jni::ref<java::util::concurrent::TimeUnit> p3) { return call_method<"offerLast", jboolean>(p1, p2, p3); }
	jni::ref<java::lang::Object> takeFirst() { return call_method<"takeFirst", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> takeLast() { return call_method<"takeLast", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> pollFirst(jlong p1, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"pollFirst", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> pollLast(jlong p1, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"pollLast", jni::ref<java::lang::Object>>(p1, p2); }
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
	jboolean remove(jni::ref<java::lang::Object> p1) { return call_method<"remove", jboolean>(p1); }
	jboolean contains(jni::ref<java::lang::Object> p1) { return call_method<"contains", jboolean>(p1); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	void push(jni::ref<java::lang::Object> p1) { return call_method<"push", void>(p1); }

protected:

	BlockingDeque(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_BLOCKINGDEQUE