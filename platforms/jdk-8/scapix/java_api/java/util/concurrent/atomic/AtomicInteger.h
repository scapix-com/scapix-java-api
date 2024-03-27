// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::atomic { class AtomicInteger; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::atomic::AtomicInteger>
{
	static constexpr fixed_string class_name = "java/util/concurrent/atomic/AtomicInteger";
	using base_classes = std::tuple<scapix::java_api::java::lang::Number, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/function/IntBinaryOperator.h>
#include <scapix/java_api/java/util/function/IntUnaryOperator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::atomic::AtomicInteger : public jni::object_base<"java/util/concurrent/atomic/AtomicInteger",
	java::lang::Number,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::concurrent::atomic::AtomicInteger> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<java::util::concurrent::atomic::AtomicInteger> new_object() { return base_::new_object(); }
	jint get() { return call_method<"get", jint>(); }
	void set(jint p1) { return call_method<"set", void>(p1); }
	void lazySet(jint p1) { return call_method<"lazySet", void>(p1); }
	jint getAndSet(jint p1) { return call_method<"getAndSet", jint>(p1); }
	jboolean compareAndSet(jint p1, jint p2) { return call_method<"compareAndSet", jboolean>(p1, p2); }
	jboolean weakCompareAndSet(jint p1, jint p2) { return call_method<"weakCompareAndSet", jboolean>(p1, p2); }
	jint getAndIncrement() { return call_method<"getAndIncrement", jint>(); }
	jint getAndDecrement() { return call_method<"getAndDecrement", jint>(); }
	jint getAndAdd(jint p1) { return call_method<"getAndAdd", jint>(p1); }
	jint incrementAndGet() { return call_method<"incrementAndGet", jint>(); }
	jint decrementAndGet() { return call_method<"decrementAndGet", jint>(); }
	jint addAndGet(jint p1) { return call_method<"addAndGet", jint>(p1); }
	jint getAndUpdate(jni::ref<java::util::function::IntUnaryOperator> p1) { return call_method<"getAndUpdate", jint>(p1); }
	jint updateAndGet(jni::ref<java::util::function::IntUnaryOperator> p1) { return call_method<"updateAndGet", jint>(p1); }
	jint getAndAccumulate(jint p1, jni::ref<java::util::function::IntBinaryOperator> p2) { return call_method<"getAndAccumulate", jint>(p1, p2); }
	jint accumulateAndGet(jint p1, jni::ref<java::util::function::IntBinaryOperator> p2) { return call_method<"accumulateAndGet", jint>(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint intValue() { return call_method<"intValue", jint>(); }
	jlong longValue() { return call_method<"longValue", jlong>(); }
	jfloat floatValue() { return call_method<"floatValue", jfloat>(); }
	jdouble doubleValue() { return call_method<"doubleValue", jdouble>(); }

protected:

	AtomicInteger(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER
