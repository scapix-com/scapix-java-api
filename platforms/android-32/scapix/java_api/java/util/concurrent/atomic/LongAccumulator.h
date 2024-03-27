// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_LONGACCUMULATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_LONGACCUMULATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::atomic { class LongAccumulator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::atomic::LongAccumulator>
{
	static constexpr fixed_string class_name = "java/util/concurrent/atomic/LongAccumulator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Number, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_LONGACCUMULATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_LONGACCUMULATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_LONGACCUMULATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/function/LongBinaryOperator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::atomic::LongAccumulator : public jni::object_base<"java/util/concurrent/atomic/LongAccumulator",
	java::lang::Number,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::concurrent::atomic::LongAccumulator> new_object(jni::ref<java::util::function::LongBinaryOperator> accumulatorFunction, jlong identity) { return base_::new_object(accumulatorFunction, identity); }
	void accumulate(jlong x) { return call_method<"accumulate", void>(x); }
	jlong get() { return call_method<"get", jlong>(); }
	void reset() { return call_method<"reset", void>(); }
	jlong getThenReset() { return call_method<"getThenReset", jlong>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jlong longValue() { return call_method<"longValue", jlong>(); }
	jint intValue() { return call_method<"intValue", jint>(); }
	jfloat floatValue() { return call_method<"floatValue", jfloat>(); }
	jdouble doubleValue() { return call_method<"doubleValue", jdouble>(); }

protected:

	LongAccumulator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_LONGACCUMULATOR
