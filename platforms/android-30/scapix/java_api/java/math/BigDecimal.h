// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_MATH_BIGDECIMAL_FWD
#define SCAPIX_JAVA_API_JAVA_MATH_BIGDECIMAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::math { class BigDecimal; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::math::BigDecimal>
{
	static constexpr fixed_string class_name = "java/math/BigDecimal";
	using base_classes = std::tuple<scapix::java_api::java::lang::Number, scapix::java_api::java::lang::Comparable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_MATH_BIGDECIMAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_MATH_BIGDECIMAL)
#define SCAPIX_JAVA_API_JAVA_MATH_BIGDECIMAL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/math/MathContext.h>
#include <scapix/java_api/java/math/RoundingMode.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::math::BigDecimal : public jni::object_base<"java/math/BigDecimal",
	java::lang::Number,
	java::lang::Comparable,
	java::io::Serializable>
{
public:

	static jni::ref<java::math::BigDecimal> ONE() { return get_static_field<"ONE", jni::ref<java::math::BigDecimal>>(); }
	static jint ROUND_CEILING() { return get_static_field<"ROUND_CEILING", jint>(); }
	static jint ROUND_DOWN() { return get_static_field<"ROUND_DOWN", jint>(); }
	static jint ROUND_FLOOR() { return get_static_field<"ROUND_FLOOR", jint>(); }
	static jint ROUND_HALF_DOWN() { return get_static_field<"ROUND_HALF_DOWN", jint>(); }
	static jint ROUND_HALF_EVEN() { return get_static_field<"ROUND_HALF_EVEN", jint>(); }
	static jint ROUND_HALF_UP() { return get_static_field<"ROUND_HALF_UP", jint>(); }
	static jint ROUND_UNNECESSARY() { return get_static_field<"ROUND_UNNECESSARY", jint>(); }
	static jint ROUND_UP() { return get_static_field<"ROUND_UP", jint>(); }
	static jni::ref<java::math::BigDecimal> TEN() { return get_static_field<"TEN", jni::ref<java::math::BigDecimal>>(); }
	static jni::ref<java::math::BigDecimal> ZERO() { return get_static_field<"ZERO", jni::ref<java::math::BigDecimal>>(); }

	static jni::ref<java::math::BigDecimal> new_object(jni::ref<jni::array<jchar>> in, jint offset, jint len) { return base_::new_object(in, offset, len); }
	static jni::ref<java::math::BigDecimal> new_object(jni::ref<jni::array<jchar>> in, jint offset, jint len, jni::ref<java::math::MathContext> mc) { return base_::new_object(in, offset, len, mc); }
	static jni::ref<java::math::BigDecimal> new_object(jni::ref<jni::array<jchar>> in) { return base_::new_object(in); }
	static jni::ref<java::math::BigDecimal> new_object(jni::ref<jni::array<jchar>> in, jni::ref<java::math::MathContext> mc) { return base_::new_object(in, mc); }
	static jni::ref<java::math::BigDecimal> new_object(jni::ref<java::lang::String> val) { return base_::new_object(val); }
	static jni::ref<java::math::BigDecimal> new_object(jni::ref<java::lang::String> val, jni::ref<java::math::MathContext> mc) { return base_::new_object(val, mc); }
	static jni::ref<java::math::BigDecimal> new_object(jdouble val) { return base_::new_object(val); }
	static jni::ref<java::math::BigDecimal> new_object(jdouble val, jni::ref<java::math::MathContext> p2) { return base_::new_object(val, p2); }
	static jni::ref<java::math::BigDecimal> new_object(jni::ref<java::math::BigInteger> val) { return base_::new_object(val); }
	static jni::ref<java::math::BigDecimal> new_object(jni::ref<java::math::BigInteger> val, jni::ref<java::math::MathContext> mc) { return base_::new_object(val, mc); }
	static jni::ref<java::math::BigDecimal> new_object(jni::ref<java::math::BigInteger> unscaledVal, jint scale) { return base_::new_object(unscaledVal, scale); }
	static jni::ref<java::math::BigDecimal> new_object(jni::ref<java::math::BigInteger> unscaledVal, jint scale, jni::ref<java::math::MathContext> mc) { return base_::new_object(unscaledVal, scale, mc); }
	static jni::ref<java::math::BigDecimal> new_object(jint val) { return base_::new_object(val); }
	static jni::ref<java::math::BigDecimal> new_object(jint val, jni::ref<java::math::MathContext> mc) { return base_::new_object(val, mc); }
	static jni::ref<java::math::BigDecimal> new_object(jlong val) { return base_::new_object(val); }
	static jni::ref<java::math::BigDecimal> new_object(jlong val, jni::ref<java::math::MathContext> p2) { return base_::new_object(val, p2); }
	static jni::ref<java::math::BigDecimal> valueOf(jlong unscaledVal, jint p2) { return call_static_method<"valueOf", jni::ref<java::math::BigDecimal>>(unscaledVal, p2); }
	static jni::ref<java::math::BigDecimal> valueOf(jlong unscaledVal) { return call_static_method<"valueOf", jni::ref<java::math::BigDecimal>>(unscaledVal); }
	static jni::ref<java::math::BigDecimal> valueOf(jdouble val) { return call_static_method<"valueOf", jni::ref<java::math::BigDecimal>>(val); }
	jni::ref<java::math::BigDecimal> add(jni::ref<java::math::BigDecimal> augend) { return call_method<"add", jni::ref<java::math::BigDecimal>>(augend); }
	jni::ref<java::math::BigDecimal> add(jni::ref<java::math::BigDecimal> augend, jni::ref<java::math::MathContext> mc) { return call_method<"add", jni::ref<java::math::BigDecimal>>(augend, mc); }
	jni::ref<java::math::BigDecimal> subtract(jni::ref<java::math::BigDecimal> subtrahend) { return call_method<"subtract", jni::ref<java::math::BigDecimal>>(subtrahend); }
	jni::ref<java::math::BigDecimal> subtract(jni::ref<java::math::BigDecimal> subtrahend, jni::ref<java::math::MathContext> mc) { return call_method<"subtract", jni::ref<java::math::BigDecimal>>(subtrahend, mc); }
	jni::ref<java::math::BigDecimal> multiply(jni::ref<java::math::BigDecimal> multiplicand) { return call_method<"multiply", jni::ref<java::math::BigDecimal>>(multiplicand); }
	jni::ref<java::math::BigDecimal> multiply(jni::ref<java::math::BigDecimal> multiplicand, jni::ref<java::math::MathContext> mc) { return call_method<"multiply", jni::ref<java::math::BigDecimal>>(multiplicand, mc); }
	jni::ref<java::math::BigDecimal> divide(jni::ref<java::math::BigDecimal> divisor, jint scale, jint roundingMode) { return call_method<"divide", jni::ref<java::math::BigDecimal>>(divisor, scale, roundingMode); }
	jni::ref<java::math::BigDecimal> divide(jni::ref<java::math::BigDecimal> divisor, jint scale, jni::ref<java::math::RoundingMode> roundingMode) { return call_method<"divide", jni::ref<java::math::BigDecimal>>(divisor, scale, roundingMode); }
	jni::ref<java::math::BigDecimal> divide(jni::ref<java::math::BigDecimal> divisor, jint roundingMode) { return call_method<"divide", jni::ref<java::math::BigDecimal>>(divisor, roundingMode); }
	jni::ref<java::math::BigDecimal> divide(jni::ref<java::math::BigDecimal> divisor, jni::ref<java::math::RoundingMode> roundingMode) { return call_method<"divide", jni::ref<java::math::BigDecimal>>(divisor, roundingMode); }
	jni::ref<java::math::BigDecimal> divide(jni::ref<java::math::BigDecimal> divisor) { return call_method<"divide", jni::ref<java::math::BigDecimal>>(divisor); }
	jni::ref<java::math::BigDecimal> divide(jni::ref<java::math::BigDecimal> divisor, jni::ref<java::math::MathContext> mc) { return call_method<"divide", jni::ref<java::math::BigDecimal>>(divisor, mc); }
	jni::ref<java::math::BigDecimal> divideToIntegralValue(jni::ref<java::math::BigDecimal> divisor) { return call_method<"divideToIntegralValue", jni::ref<java::math::BigDecimal>>(divisor); }
	jni::ref<java::math::BigDecimal> divideToIntegralValue(jni::ref<java::math::BigDecimal> divisor, jni::ref<java::math::MathContext> mc) { return call_method<"divideToIntegralValue", jni::ref<java::math::BigDecimal>>(divisor, mc); }
	jni::ref<java::math::BigDecimal> remainder(jni::ref<java::math::BigDecimal> divisor) { return call_method<"remainder", jni::ref<java::math::BigDecimal>>(divisor); }
	jni::ref<java::math::BigDecimal> remainder(jni::ref<java::math::BigDecimal> divisor, jni::ref<java::math::MathContext> mc) { return call_method<"remainder", jni::ref<java::math::BigDecimal>>(divisor, mc); }
	jni::ref<jni::array<java::math::BigDecimal>> divideAndRemainder(jni::ref<java::math::BigDecimal> divisor) { return call_method<"divideAndRemainder", jni::ref<jni::array<java::math::BigDecimal>>>(divisor); }
	jni::ref<jni::array<java::math::BigDecimal>> divideAndRemainder(jni::ref<java::math::BigDecimal> divisor, jni::ref<java::math::MathContext> mc) { return call_method<"divideAndRemainder", jni::ref<jni::array<java::math::BigDecimal>>>(divisor, mc); }
	jni::ref<java::math::BigDecimal> pow(jint n) { return call_method<"pow", jni::ref<java::math::BigDecimal>>(n); }
	jni::ref<java::math::BigDecimal> pow(jint n, jni::ref<java::math::MathContext> mc) { return call_method<"pow", jni::ref<java::math::BigDecimal>>(n, mc); }
	jni::ref<java::math::BigDecimal> abs() { return call_method<"abs", jni::ref<java::math::BigDecimal>>(); }
	jni::ref<java::math::BigDecimal> abs(jni::ref<java::math::MathContext> mc) { return call_method<"abs", jni::ref<java::math::BigDecimal>>(mc); }
	jni::ref<java::math::BigDecimal> negate() { return call_method<"negate", jni::ref<java::math::BigDecimal>>(); }
	jni::ref<java::math::BigDecimal> negate(jni::ref<java::math::MathContext> mc) { return call_method<"negate", jni::ref<java::math::BigDecimal>>(mc); }
	jni::ref<java::math::BigDecimal> plus() { return call_method<"plus", jni::ref<java::math::BigDecimal>>(); }
	jni::ref<java::math::BigDecimal> plus(jni::ref<java::math::MathContext> mc) { return call_method<"plus", jni::ref<java::math::BigDecimal>>(mc); }
	jint signum() { return call_method<"signum", jint>(); }
	jint scale() { return call_method<"scale", jint>(); }
	jint precision() { return call_method<"precision", jint>(); }
	jni::ref<java::math::BigInteger> unscaledValue() { return call_method<"unscaledValue", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigDecimal> round(jni::ref<java::math::MathContext> mc) { return call_method<"round", jni::ref<java::math::BigDecimal>>(mc); }
	jni::ref<java::math::BigDecimal> setScale(jint newScale, jni::ref<java::math::RoundingMode> roundingMode) { return call_method<"setScale", jni::ref<java::math::BigDecimal>>(newScale, roundingMode); }
	jni::ref<java::math::BigDecimal> setScale(jint newScale, jint roundingMode) { return call_method<"setScale", jni::ref<java::math::BigDecimal>>(newScale, roundingMode); }
	jni::ref<java::math::BigDecimal> setScale(jint newScale) { return call_method<"setScale", jni::ref<java::math::BigDecimal>>(newScale); }
	jni::ref<java::math::BigDecimal> movePointLeft(jint n) { return call_method<"movePointLeft", jni::ref<java::math::BigDecimal>>(n); }
	jni::ref<java::math::BigDecimal> movePointRight(jint n) { return call_method<"movePointRight", jni::ref<java::math::BigDecimal>>(n); }
	jni::ref<java::math::BigDecimal> scaleByPowerOfTen(jint n) { return call_method<"scaleByPowerOfTen", jni::ref<java::math::BigDecimal>>(n); }
	jni::ref<java::math::BigDecimal> stripTrailingZeros() { return call_method<"stripTrailingZeros", jni::ref<java::math::BigDecimal>>(); }
	jint compareTo(jni::ref<java::math::BigDecimal> val) { return call_method<"compareTo", jint>(val); }
	jboolean equals(jni::ref<java::lang::Object> x) { return call_method<"equals", jboolean>(x); }
	jni::ref<java::math::BigDecimal> min(jni::ref<java::math::BigDecimal> val) { return call_method<"min", jni::ref<java::math::BigDecimal>>(val); }
	jni::ref<java::math::BigDecimal> max(jni::ref<java::math::BigDecimal> val) { return call_method<"max", jni::ref<java::math::BigDecimal>>(val); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toEngineeringString() { return call_method<"toEngineeringString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toPlainString() { return call_method<"toPlainString", jni::ref<java::lang::String>>(); }
	jni::ref<java::math::BigInteger> toBigInteger() { return call_method<"toBigInteger", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> toBigIntegerExact() { return call_method<"toBigIntegerExact", jni::ref<java::math::BigInteger>>(); }
	jlong longValue() { return call_method<"longValue", jlong>(); }
	jlong longValueExact() { return call_method<"longValueExact", jlong>(); }
	jint intValue() { return call_method<"intValue", jint>(); }
	jint intValueExact() { return call_method<"intValueExact", jint>(); }
	jshort shortValueExact() { return call_method<"shortValueExact", jshort>(); }
	jbyte byteValueExact() { return call_method<"byteValueExact", jbyte>(); }
	jfloat floatValue() { return call_method<"floatValue", jfloat>(); }
	jdouble doubleValue() { return call_method<"doubleValue", jdouble>(); }
	jni::ref<java::math::BigDecimal> ulp() { return call_method<"ulp", jni::ref<java::math::BigDecimal>>(); }

protected:

	BigDecimal(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_MATH_BIGDECIMAL
