// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractQueue.h>
#include <scapix/java_api/java/util/concurrent/BlockingQueue.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGQUEUE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGQUEUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class LinkedBlockingQueue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::LinkedBlockingQueue>
{
	static constexpr fixed_string class_name = "java/util/concurrent/LinkedBlockingQueue";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractQueue, scapix::java_api::java::util::concurrent::BlockingQueue, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGQUEUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGQUEUE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGQUEUE

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

class java::util::concurrent::LinkedBlockingQueue : public jni::object_base<"java/util/concurrent/LinkedBlockingQueue",
	java::util::AbstractQueue,
	java::util::concurrent::BlockingQueue,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::concurrent::LinkedBlockingQueue> new_object() { return base_::new_object(); }
	static jni::ref<java::util::concurrent::LinkedBlockingQueue> new_object(jint capacity) { return base_::new_object(capacity); }
	static jni::ref<java::util::concurrent::LinkedBlockingQueue> new_object(jni::ref<java::util::Collection> c) { return base_::new_object(c); }
	jint size() { return call_method<"size", jint>(); }
	jint remainingCapacity() { return call_method<"remainingCapacity", jint>(); }
	void put(jni::ref<java::lang::Object> e) { return call_method<"put", void>(e); }
	jboolean offer(jni::ref<java::lang::Object> e, jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p3) { return call_method<"offer", jboolean>(e, timeout, p3); }
	jboolean offer(jni::ref<java::lang::Object> e) { return call_method<"offer", jboolean>(e); }
	jni::ref<java::lang::Object> take() { return call_method<"take", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> poll(jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"poll", jni::ref<java::lang::Object>>(timeout, p2); }
	jni::ref<java::lang::Object> poll() { return call_method<"poll", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> peek() { return call_method<"peek", jni::ref<java::lang::Object>>(); }
	jboolean remove(jni::ref<java::lang::Object> o) { return call_method<"remove", jboolean>(o); }
	jboolean contains(jni::ref<java::lang::Object> o) { return call_method<"contains", jboolean>(o); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<jni::array<java::lang::Object>> a) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(a); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void clear() { return call_method<"clear", void>(); }
	jint drainTo(jni::ref<java::util::Collection> c) { return call_method<"drainTo", jint>(c); }
	jint drainTo(jni::ref<java::util::Collection> c, jint maxElements) { return call_method<"drainTo", jint>(c, maxElements); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::util::Spliterator> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator>>(); }

protected:

	LinkedBlockingQueue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGQUEUE