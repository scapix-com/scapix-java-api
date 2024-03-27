// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractQueue.h>
#include <scapix/java_api/java/util/concurrent/TransferQueue.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDTRANSFERQUEUE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDTRANSFERQUEUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class LinkedTransferQueue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::LinkedTransferQueue>
{
	static constexpr fixed_string class_name = "java/util/concurrent/LinkedTransferQueue";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractQueue, scapix::java_api::java::util::concurrent::TransferQueue, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDTRANSFERQUEUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDTRANSFERQUEUE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDTRANSFERQUEUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/Predicate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::LinkedTransferQueue : public jni::object_base<"java/util/concurrent/LinkedTransferQueue",
	java::util::AbstractQueue,
	java::util::concurrent::TransferQueue,
	java::io::Serializable>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<jni::array<java::lang::Object>> a) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(a); }
	jni::ref<java::util::Spliterator> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator>>(); }
	static jni::ref<java::util::concurrent::LinkedTransferQueue> new_object() { return base_::new_object(); }
	static jni::ref<java::util::concurrent::LinkedTransferQueue> new_object(jni::ref<java::util::Collection> c) { return base_::new_object(c); }
	void put(jni::ref<java::lang::Object> e) { return call_method<"put", void>(e); }
	jboolean offer(jni::ref<java::lang::Object> e, jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p3) { return call_method<"offer", jboolean>(e, timeout, p3); }
	jboolean offer(jni::ref<java::lang::Object> e) { return call_method<"offer", jboolean>(e); }
	jboolean add(jni::ref<java::lang::Object> e) { return call_method<"add", jboolean>(e); }
	jboolean tryTransfer(jni::ref<java::lang::Object> e) { return call_method<"tryTransfer", jboolean>(e); }
	void transfer(jni::ref<java::lang::Object> e) { return call_method<"transfer", void>(e); }
	jboolean tryTransfer(jni::ref<java::lang::Object> e, jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p3) { return call_method<"tryTransfer", jboolean>(e, timeout, p3); }
	jni::ref<java::lang::Object> take() { return call_method<"take", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> poll(jlong timeout, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"poll", jni::ref<java::lang::Object>>(timeout, p2); }
	jni::ref<java::lang::Object> poll() { return call_method<"poll", jni::ref<java::lang::Object>>(); }
	jint drainTo(jni::ref<java::util::Collection> c) { return call_method<"drainTo", jint>(c); }
	jint drainTo(jni::ref<java::util::Collection> c, jint maxElements) { return call_method<"drainTo", jint>(c, maxElements); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::lang::Object> peek() { return call_method<"peek", jni::ref<java::lang::Object>>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jboolean hasWaitingConsumer() { return call_method<"hasWaitingConsumer", jboolean>(); }
	jint size() { return call_method<"size", jint>(); }
	jint getWaitingConsumerCount() { return call_method<"getWaitingConsumerCount", jint>(); }
	jboolean remove(jni::ref<java::lang::Object> o) { return call_method<"remove", jboolean>(o); }
	jboolean contains(jni::ref<java::lang::Object> o) { return call_method<"contains", jboolean>(o); }
	jint remainingCapacity() { return call_method<"remainingCapacity", jint>(); }
	jboolean removeIf(jni::ref<java::util::function::Predicate> filter) { return call_method<"removeIf", jboolean>(filter); }
	jboolean removeAll(jni::ref<java::util::Collection> c) { return call_method<"removeAll", jboolean>(c); }
	jboolean retainAll(jni::ref<java::util::Collection> c) { return call_method<"retainAll", jboolean>(c); }
	void clear() { return call_method<"clear", void>(); }
	void forEach(jni::ref<java::util::function::Consumer> action) { return call_method<"forEach", void>(action); }

protected:

	LinkedTransferQueue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDTRANSFERQUEUE
