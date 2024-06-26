// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_MATH_BIGDECIMAL_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_MATH_BIGDECIMAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::math { class BigDecimal; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::math::BigDecimal>
{
	static constexpr fixed_string class_name = "android/icu/math/BigDecimal";
	using base_classes = std::tuple<scapix::java_api::java::lang::Number, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_MATH_BIGDECIMAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_MATH_BIGDECIMAL)
#define SCAPIX_JAVA_API_ANDROID_ICU_MATH_BIGDECIMAL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/math/MathContext.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigDecimal.h>
#include <scapix/java_api/java/math/BigInteger.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::math::BigDecimal : public jni::object_base<"android/icu/math/BigDecimal",
	java::lang::Number,
	java::io::Serializable,
	java::lang::Comparable>
{
public:

	static jni::ref<android::icu::math::BigDecimal> ONE() { return get_static_field<"ONE", jni::ref<android::icu::math::BigDecimal>>(); }
	static jint ROUND_CEILING() { return get_static_field<"ROUND_CEILING", jint>(); }
	static jint ROUND_DOWN() { return get_static_field<"ROUND_DOWN", jint>(); }
	static jint ROUND_FLOOR() { return get_static_field<"ROUND_FLOOR", jint>(); }
	static jint ROUND_HALF_DOWN() { return get_static_field<"ROUND_HALF_DOWN", jint>(); }
	static jint ROUND_HALF_EVEN() { return get_static_field<"ROUND_HALF_EVEN", jint>(); }
	static jint ROUND_HALF_UP() { return get_static_field<"ROUND_HALF_UP", jint>(); }
	static jint ROUND_UNNECESSARY() { return get_static_field<"ROUND_UNNECESSARY", jint>(); }
	static jint ROUND_UP() { return get_static_field<"ROUND_UP", jint>(); }
	static jni::ref<android::icu::math::BigDecimal> TEN() { return get_static_field<"TEN", jni::ref<android::icu::math::BigDecimal>>(); }
	static jni::ref<android::icu::math::BigDecimal> ZERO() { return get_static_field<"ZERO", jni::ref<android::icu::math::BigDecimal>>(); }

	static jni::ref<android::icu::math::BigDecimal> new_object(jni::ref<java::math::BigDecimal> bd) { return base_::new_object(bd); }
	static jni::ref<android::icu::math::BigDecimal> new_object(jni::ref<java::math::BigInteger> bi) { return base_::new_object(bi); }
	static jni::ref<android::icu::math::BigDecimal> new_object(jni::ref<java::math::BigInteger> bi, jint scale) { return base_::new_object(bi, scale); }
	static jni::ref<android::icu::math::BigDecimal> new_object(jni::ref<jni::array<jchar>> inchars) { return base_::new_object(inchars); }
	static jni::ref<android::icu::math::BigDecimal> new_object(jni::ref<jni::array<jchar>> inchars, jint offset, jint length) { return base_::new_object(inchars, offset, length); }
	static jni::ref<android::icu::math::BigDecimal> new_object(jdouble num) { return base_::new_object(num); }
	static jni::ref<android::icu::math::BigDecimal> new_object(jint num) { return base_::new_object(num); }
	static jni::ref<android::icu::math::BigDecimal> new_object(jlong num) { return base_::new_object(num); }
	static jni::ref<android::icu::math::BigDecimal> new_object(jni::ref<java::lang::String> string) { return base_::new_object(string); }
	jni::ref<android::icu::math::BigDecimal> abs() { return call_method<"abs", jni::ref<android::icu::math::BigDecimal>>(); }
	jni::ref<android::icu::math::BigDecimal> abs(jni::ref<android::icu::math::MathContext> set) { return call_method<"abs", jni::ref<android::icu::math::BigDecimal>>(set); }
	jni::ref<android::icu::math::BigDecimal> add(jni::ref<android::icu::math::BigDecimal> rhs) { return call_method<"add", jni::ref<android::icu::math::BigDecimal>>(rhs); }
	jni::ref<android::icu::math::BigDecimal> add(jni::ref<android::icu::math::BigDecimal> rhs, jni::ref<android::icu::math::MathContext> set) { return call_method<"add", jni::ref<android::icu::math::BigDecimal>>(rhs, set); }
	jint compareTo(jni::ref<android::icu::math::BigDecimal> rhs) { return call_method<"compareTo", jint>(rhs); }
	jint compareTo(jni::ref<android::icu::math::BigDecimal> rhs, jni::ref<android::icu::math::MathContext> set) { return call_method<"compareTo", jint>(rhs, set); }
	jni::ref<android::icu::math::BigDecimal> divide(jni::ref<android::icu::math::BigDecimal> rhs) { return call_method<"divide", jni::ref<android::icu::math::BigDecimal>>(rhs); }
	jni::ref<android::icu::math::BigDecimal> divide(jni::ref<android::icu::math::BigDecimal> rhs, jint round) { return call_method<"divide", jni::ref<android::icu::math::BigDecimal>>(rhs, round); }
	jni::ref<android::icu::math::BigDecimal> divide(jni::ref<android::icu::math::BigDecimal> rhs, jint scale, jint round) { return call_method<"divide", jni::ref<android::icu::math::BigDecimal>>(rhs, scale, round); }
	jni::ref<android::icu::math::BigDecimal> divide(jni::ref<android::icu::math::BigDecimal> rhs, jni::ref<android::icu::math::MathContext> set) { return call_method<"divide", jni::ref<android::icu::math::BigDecimal>>(rhs, set); }
	jni::ref<android::icu::math::BigDecimal> divideInteger(jni::ref<android::icu::math::BigDecimal> rhs) { return call_method<"divideInteger", jni::ref<android::icu::math::BigDecimal>>(rhs); }
	jni::ref<android::icu::math::BigDecimal> divideInteger(jni::ref<android::icu::math::BigDecimal> rhs, jni::ref<android::icu::math::MathContext> set) { return call_method<"divideInteger", jni::ref<android::icu::math::BigDecimal>>(rhs, set); }
	jni::ref<android::icu::math::BigDecimal> max(jni::ref<android::icu::math::BigDecimal> rhs) { return call_method<"max", jni::ref<android::icu::math::BigDecimal>>(rhs); }
	jni::ref<android::icu::math::BigDecimal> max(jni::ref<android::icu::math::BigDecimal> rhs, jni::ref<android::icu::math::MathContext> set) { return call_method<"max", jni::ref<android::icu::math::BigDecimal>>(rhs, set); }
	jni::ref<android::icu::math::BigDecimal> min(jni::ref<android::icu::math::BigDecimal> rhs) { return call_method<"min", jni::ref<android::icu::math::BigDecimal>>(rhs); }
	jni::ref<android::icu::math::BigDecimal> min(jni::ref<android::icu::math::BigDecimal> rhs, jni::ref<android::icu::math::MathContext> set) { return call_method<"min", jni::ref<android::icu::math::BigDecimal>>(rhs, set); }
	jni::ref<android::icu::math::BigDecimal> multiply(jni::ref<android::icu::math::BigDecimal> rhs) { return call_method<"multiply", jni::ref<android::icu::math::BigDecimal>>(rhs); }
	jni::ref<android::icu::math::BigDecimal> multiply(jni::ref<android::icu::math::BigDecimal> rhs, jni::ref<android::icu::math::MathContext> set) { return call_method<"multiply", jni::ref<android::icu::math::BigDecimal>>(rhs, set); }
	jni::ref<android::icu::math::BigDecimal> negate() { return call_method<"negate", jni::ref<android::icu::math::BigDecimal>>(); }
	jni::ref<android::icu::math::BigDecimal> negate(jni::ref<android::icu::math::MathContext> set) { return call_method<"negate", jni::ref<android::icu::math::BigDecimal>>(set); }
	jni::ref<android::icu::math::BigDecimal> plus() { return call_method<"plus", jni::ref<android::icu::math::BigDecimal>>(); }
	jni::ref<android::icu::math::BigDecimal> plus(jni::ref<android::icu::math::MathContext> set) { return call_method<"plus", jni::ref<android::icu::math::BigDecimal>>(set); }
	jni::ref<android::icu::math::BigDecimal> pow(jni::ref<android::icu::math::BigDecimal> rhs) { return call_method<"pow", jni::ref<android::icu::math::BigDecimal>>(rhs); }
	jni::ref<android::icu::math::BigDecimal> pow(jni::ref<android::icu::math::BigDecimal> rhs, jni::ref<android::icu::math::MathContext> set) { return call_method<"pow", jni::ref<android::icu::math::BigDecimal>>(rhs, set); }
	jni::ref<android::icu::math::BigDecimal> remainder(jni::ref<android::icu::math::BigDecimal> rhs) { return call_method<"remainder", jni::ref<android::icu::math::BigDecimal>>(rhs); }
	jni::ref<android::icu::math::BigDecimal> remainder(jni::ref<android::icu::math::BigDecimal> rhs, jni::ref<android::icu::math::MathContext> set) { return call_method<"remainder", jni::ref<android::icu::math::BigDecimal>>(rhs, set); }
	jni::ref<android::icu::math::BigDecimal> subtract(jni::ref<android::icu::math::BigDecimal> rhs) { return call_method<"subtract", jni::ref<android::icu::math::BigDecimal>>(rhs); }
	jni::ref<android::icu::math::BigDecimal> subtract(jni::ref<android::icu::math::BigDecimal> rhs, jni::ref<android::icu::math::MathContext> set) { return call_method<"subtract", jni::ref<android::icu::math::BigDecimal>>(rhs, set); }
	jbyte byteValueExact() { return call_method<"byteValueExact", jbyte>(); }
	jdouble doubleValue() { return call_method<"doubleValue", jdouble>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jfloat floatValue() { return call_method<"floatValue", jfloat>(); }
	jni::ref<java::lang::String> format(jint before, jint after) { return call_method<"format", jni::ref<java::lang::String>>(before, after); }
	jni::ref<java::lang::String> format(jint before, jint after, jint explaces, jint exdigits, jint exformint, jint exround) { return call_method<"format", jni::ref<java::lang::String>>(before, after, explaces, exdigits, exformint, exround); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint intValue() { return call_method<"intValue", jint>(); }
	jint intValueExact() { return call_method<"intValueExact", jint>(); }
	jlong longValue() { return call_method<"longValue", jlong>(); }
	jlong longValueExact() { return call_method<"longValueExact", jlong>(); }
	jni::ref<android::icu::math::BigDecimal> movePointLeft(jint n) { return call_method<"movePointLeft", jni::ref<android::icu::math::BigDecimal>>(n); }
	jni::ref<android::icu::math::BigDecimal> movePointRight(jint n) { return call_method<"movePointRight", jni::ref<android::icu::math::BigDecimal>>(n); }
	jint scale() { return call_method<"scale", jint>(); }
	jni::ref<android::icu::math::BigDecimal> setScale(jint scale) { return call_method<"setScale", jni::ref<android::icu::math::BigDecimal>>(scale); }
	jni::ref<android::icu::math::BigDecimal> setScale(jint scale, jint round) { return call_method<"setScale", jni::ref<android::icu::math::BigDecimal>>(scale, round); }
	jshort shortValueExact() { return call_method<"shortValueExact", jshort>(); }
	jint signum() { return call_method<"signum", jint>(); }
	jni::ref<java::math::BigDecimal> toBigDecimal() { return call_method<"toBigDecimal", jni::ref<java::math::BigDecimal>>(); }
	jni::ref<java::math::BigInteger> toBigInteger() { return call_method<"toBigInteger", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> toBigIntegerExact() { return call_method<"toBigIntegerExact", jni::ref<java::math::BigInteger>>(); }
	jni::ref<jni::array<jchar>> toCharArray() { return call_method<"toCharArray", jni::ref<jni::array<jchar>>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::math::BigInteger> unscaledValue() { return call_method<"unscaledValue", jni::ref<java::math::BigInteger>>(); }
	static jni::ref<android::icu::math::BigDecimal> valueOf(jdouble dub) { return call_static_method<"valueOf", jni::ref<android::icu::math::BigDecimal>>(dub); }
	static jni::ref<android::icu::math::BigDecimal> valueOf(jlong lint) { return call_static_method<"valueOf", jni::ref<android::icu::math::BigDecimal>>(lint); }
	static jni::ref<android::icu::math::BigDecimal> valueOf(jlong lint, jint p2) { return call_static_method<"valueOf", jni::ref<android::icu::math::BigDecimal>>(lint, p2); }

protected:

	BigDecimal(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_MATH_BIGDECIMAL
