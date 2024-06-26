// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGARRAY_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGARRAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::atomic { class AtomicLongArray; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::atomic::AtomicLongArray>
{
	static constexpr fixed_string class_name = "java/util/concurrent/atomic/AtomicLongArray";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGARRAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGARRAY)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGARRAY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/function/LongBinaryOperator.h>
#include <scapix/java_api/java/util/function/LongUnaryOperator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::atomic::AtomicLongArray : public jni::object_base<"java/util/concurrent/atomic/AtomicLongArray",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::concurrent::atomic::AtomicLongArray> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<java::util::concurrent::atomic::AtomicLongArray> new_object(jni::ref<jni::array<jlong>> p1) { return base_::new_object(p1); }
	jint length() { return call_method<"length", jint>(); }
	jlong get(jint p1) { return call_method<"get", jlong>(p1); }
	void set(jint p1, jlong p2) { return call_method<"set", void>(p1, p2); }
	void lazySet(jint p1, jlong p2) { return call_method<"lazySet", void>(p1, p2); }
	jlong getAndSet(jint p1, jlong p2) { return call_method<"getAndSet", jlong>(p1, p2); }
	jboolean compareAndSet(jint p1, jlong p2, jlong p3) { return call_method<"compareAndSet", jboolean>(p1, p2, p3); }
	jboolean weakCompareAndSet(jint p1, jlong p2, jlong p3) { return call_method<"weakCompareAndSet", jboolean>(p1, p2, p3); }
	jlong getAndIncrement(jint p1) { return call_method<"getAndIncrement", jlong>(p1); }
	jlong getAndDecrement(jint p1) { return call_method<"getAndDecrement", jlong>(p1); }
	jlong getAndAdd(jint p1, jlong p2) { return call_method<"getAndAdd", jlong>(p1, p2); }
	jlong incrementAndGet(jint p1) { return call_method<"incrementAndGet", jlong>(p1); }
	jlong decrementAndGet(jint p1) { return call_method<"decrementAndGet", jlong>(p1); }
	jlong addAndGet(jint p1, jlong p2) { return call_method<"addAndGet", jlong>(p1, p2); }
	jlong getAndUpdate(jint p1, jni::ref<java::util::function::LongUnaryOperator> p2) { return call_method<"getAndUpdate", jlong>(p1, p2); }
	jlong updateAndGet(jint p1, jni::ref<java::util::function::LongUnaryOperator> p2) { return call_method<"updateAndGet", jlong>(p1, p2); }
	jlong getAndAccumulate(jint p1, jlong p2, jni::ref<java::util::function::LongBinaryOperator> p3) { return call_method<"getAndAccumulate", jlong>(p1, p2, p3); }
	jlong accumulateAndGet(jint p1, jlong p2, jni::ref<java::util::function::LongBinaryOperator> p3) { return call_method<"accumulateAndGet", jlong>(p1, p2, p3); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AtomicLongArray(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGARRAY
