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

	static jni::ref<java::util::concurrent::atomic::AtomicInteger> new_object(jint initialValue) { return base_::new_object(initialValue); }
	static jni::ref<java::util::concurrent::atomic::AtomicInteger> new_object() { return base_::new_object(); }
	jint get() { return call_method<"get", jint>(); }
	void set(jint newValue) { return call_method<"set", void>(newValue); }
	void lazySet(jint newValue) { return call_method<"lazySet", void>(newValue); }
	jint getAndSet(jint newValue) { return call_method<"getAndSet", jint>(newValue); }
	jboolean compareAndSet(jint expectedValue, jint newValue) { return call_method<"compareAndSet", jboolean>(expectedValue, newValue); }
	jboolean weakCompareAndSet(jint expectedValue, jint newValue) { return call_method<"weakCompareAndSet", jboolean>(expectedValue, newValue); }
	jboolean weakCompareAndSetPlain(jint expectedValue, jint newValue) { return call_method<"weakCompareAndSetPlain", jboolean>(expectedValue, newValue); }
	jint getAndIncrement() { return call_method<"getAndIncrement", jint>(); }
	jint getAndDecrement() { return call_method<"getAndDecrement", jint>(); }
	jint getAndAdd(jint delta) { return call_method<"getAndAdd", jint>(delta); }
	jint incrementAndGet() { return call_method<"incrementAndGet", jint>(); }
	jint decrementAndGet() { return call_method<"decrementAndGet", jint>(); }
	jint addAndGet(jint delta) { return call_method<"addAndGet", jint>(delta); }
	jint getAndUpdate(jni::ref<java::util::function::IntUnaryOperator> updateFunction) { return call_method<"getAndUpdate", jint>(updateFunction); }
	jint updateAndGet(jni::ref<java::util::function::IntUnaryOperator> updateFunction) { return call_method<"updateAndGet", jint>(updateFunction); }
	jint getAndAccumulate(jint x, jni::ref<java::util::function::IntBinaryOperator> accumulatorFunction) { return call_method<"getAndAccumulate", jint>(x, accumulatorFunction); }
	jint accumulateAndGet(jint x, jni::ref<java::util::function::IntBinaryOperator> accumulatorFunction) { return call_method<"accumulateAndGet", jint>(x, accumulatorFunction); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint intValue() { return call_method<"intValue", jint>(); }
	jlong longValue() { return call_method<"longValue", jlong>(); }
	jfloat floatValue() { return call_method<"floatValue", jfloat>(); }
	jdouble doubleValue() { return call_method<"doubleValue", jdouble>(); }
	jint getPlain() { return call_method<"getPlain", jint>(); }
	void setPlain(jint newValue) { return call_method<"setPlain", void>(newValue); }
	jint getOpaque() { return call_method<"getOpaque", jint>(); }
	void setOpaque(jint newValue) { return call_method<"setOpaque", void>(newValue); }
	jint getAcquire() { return call_method<"getAcquire", jint>(); }
	void setRelease(jint newValue) { return call_method<"setRelease", void>(newValue); }
	jint compareAndExchange(jint expectedValue, jint newValue) { return call_method<"compareAndExchange", jint>(expectedValue, newValue); }
	jint compareAndExchangeAcquire(jint expectedValue, jint newValue) { return call_method<"compareAndExchangeAcquire", jint>(expectedValue, newValue); }
	jint compareAndExchangeRelease(jint expectedValue, jint newValue) { return call_method<"compareAndExchangeRelease", jint>(expectedValue, newValue); }
	jboolean weakCompareAndSetVolatile(jint expectedValue, jint newValue) { return call_method<"weakCompareAndSetVolatile", jboolean>(expectedValue, newValue); }
	jboolean weakCompareAndSetAcquire(jint expectedValue, jint newValue) { return call_method<"weakCompareAndSetAcquire", jboolean>(expectedValue, newValue); }
	jboolean weakCompareAndSetRelease(jint expectedValue, jint newValue) { return call_method<"weakCompareAndSetRelease", jboolean>(expectedValue, newValue); }

protected:

	AtomicInteger(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER
