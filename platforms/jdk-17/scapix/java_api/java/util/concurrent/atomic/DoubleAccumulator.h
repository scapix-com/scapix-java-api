// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/atomic/Striped64.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEACCUMULATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEACCUMULATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::atomic { class DoubleAccumulator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::atomic::DoubleAccumulator>
{
	static constexpr fixed_string class_name = "java/util/concurrent/atomic/DoubleAccumulator";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::atomic::Striped64, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEACCUMULATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEACCUMULATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEACCUMULATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/function/DoubleBinaryOperator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::atomic::DoubleAccumulator : public jni::object_base<"java/util/concurrent/atomic/DoubleAccumulator",
	java::util::concurrent::atomic::Striped64,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::concurrent::atomic::DoubleAccumulator> new_object(jni::ref<java::util::function::DoubleBinaryOperator> accumulatorFunction, jdouble identity) { return base_::new_object(accumulatorFunction, identity); }
	void accumulate(jdouble x) { return call_method<"accumulate", void>(x); }
	jdouble get() { return call_method<"get", jdouble>(); }
	void reset() { return call_method<"reset", void>(); }
	jdouble getThenReset() { return call_method<"getThenReset", jdouble>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jdouble doubleValue() { return call_method<"doubleValue", jdouble>(); }
	jlong longValue() { return call_method<"longValue", jlong>(); }
	jint intValue() { return call_method<"intValue", jint>(); }
	jfloat floatValue() { return call_method<"floatValue", jfloat>(); }

protected:

	DoubleAccumulator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEACCUMULATOR