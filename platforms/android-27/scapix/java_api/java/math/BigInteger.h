// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_MATH_BIGINTEGER_FWD
#define SCAPIX_JAVA_API_JAVA_MATH_BIGINTEGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::math { class BigInteger; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::math::BigInteger>
{
	static constexpr fixed_string class_name = "java/math/BigInteger";
	using base_classes = std::tuple<scapix::java_api::java::lang::Number, scapix::java_api::java::lang::Comparable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_MATH_BIGINTEGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_MATH_BIGINTEGER)
#define SCAPIX_JAVA_API_JAVA_MATH_BIGINTEGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Random.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::math::BigInteger : public jni::object_base<"java/math/BigInteger",
	java::lang::Number,
	java::lang::Comparable,
	java::io::Serializable>
{
public:

	static jni::ref<java::math::BigInteger> ONE() { return get_static_field<"ONE", jni::ref<java::math::BigInteger>>(); }
	static jni::ref<java::math::BigInteger> TEN() { return get_static_field<"TEN", jni::ref<java::math::BigInteger>>(); }
	static jni::ref<java::math::BigInteger> ZERO() { return get_static_field<"ZERO", jni::ref<java::math::BigInteger>>(); }

	static jni::ref<java::math::BigInteger> new_object(jint numBits, jni::ref<java::util::Random> random) { return base_::new_object(numBits, random); }
	static jni::ref<java::math::BigInteger> new_object(jint bitLength, jint certainty, jni::ref<java::util::Random> random) { return base_::new_object(bitLength, certainty, random); }
	static jni::ref<java::math::BigInteger> new_object(jni::ref<java::lang::String> value) { return base_::new_object(value); }
	static jni::ref<java::math::BigInteger> new_object(jni::ref<java::lang::String> value, jint radix) { return base_::new_object(value, radix); }
	static jni::ref<java::math::BigInteger> new_object(jint signum, jni::ref<jni::array<jbyte>> magnitude) { return base_::new_object(signum, magnitude); }
	static jni::ref<java::math::BigInteger> new_object(jni::ref<jni::array<jbyte>> value) { return base_::new_object(value); }
	static jni::ref<java::math::BigInteger> valueOf(jlong value) { return call_static_method<"valueOf", jni::ref<java::math::BigInteger>>(value); }
	jni::ref<jni::array<jbyte>> toByteArray() { return call_method<"toByteArray", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::math::BigInteger> abs() { return call_method<"abs", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> negate() { return call_method<"negate", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> add(jni::ref<java::math::BigInteger> value) { return call_method<"add", jni::ref<java::math::BigInteger>>(value); }
	jni::ref<java::math::BigInteger> subtract(jni::ref<java::math::BigInteger> value) { return call_method<"subtract", jni::ref<java::math::BigInteger>>(value); }
	jint signum() { return call_method<"signum", jint>(); }
	jni::ref<java::math::BigInteger> shiftRight(jint n) { return call_method<"shiftRight", jni::ref<java::math::BigInteger>>(n); }
	jni::ref<java::math::BigInteger> shiftLeft(jint n) { return call_method<"shiftLeft", jni::ref<java::math::BigInteger>>(n); }
	jint bitLength() { return call_method<"bitLength", jint>(); }
	jboolean testBit(jint n) { return call_method<"testBit", jboolean>(n); }
	jni::ref<java::math::BigInteger> setBit(jint n) { return call_method<"setBit", jni::ref<java::math::BigInteger>>(n); }
	jni::ref<java::math::BigInteger> clearBit(jint n) { return call_method<"clearBit", jni::ref<java::math::BigInteger>>(n); }
	jni::ref<java::math::BigInteger> flipBit(jint n) { return call_method<"flipBit", jni::ref<java::math::BigInteger>>(n); }
	jint getLowestSetBit() { return call_method<"getLowestSetBit", jint>(); }
	jint bitCount() { return call_method<"bitCount", jint>(); }
	jni::ref<java::math::BigInteger> not_() { return call_method<"not", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> and_(jni::ref<java::math::BigInteger> value) { return call_method<"and", jni::ref<java::math::BigInteger>>(value); }
	jni::ref<java::math::BigInteger> or_(jni::ref<java::math::BigInteger> value) { return call_method<"or", jni::ref<java::math::BigInteger>>(value); }
	jni::ref<java::math::BigInteger> xor_(jni::ref<java::math::BigInteger> value) { return call_method<"xor", jni::ref<java::math::BigInteger>>(value); }
	jni::ref<java::math::BigInteger> andNot(jni::ref<java::math::BigInteger> value) { return call_method<"andNot", jni::ref<java::math::BigInteger>>(value); }
	jint intValue() { return call_method<"intValue", jint>(); }
	jlong longValue() { return call_method<"longValue", jlong>(); }
	jfloat floatValue() { return call_method<"floatValue", jfloat>(); }
	jdouble doubleValue() { return call_method<"doubleValue", jdouble>(); }
	jint compareTo(jni::ref<java::math::BigInteger> value) { return call_method<"compareTo", jint>(value); }
	jni::ref<java::math::BigInteger> min(jni::ref<java::math::BigInteger> value) { return call_method<"min", jni::ref<java::math::BigInteger>>(value); }
	jni::ref<java::math::BigInteger> max(jni::ref<java::math::BigInteger> value) { return call_method<"max", jni::ref<java::math::BigInteger>>(value); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> x) { return call_method<"equals", jboolean>(x); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString(jint radix) { return call_method<"toString", jni::ref<java::lang::String>>(radix); }
	jni::ref<java::math::BigInteger> gcd(jni::ref<java::math::BigInteger> value) { return call_method<"gcd", jni::ref<java::math::BigInteger>>(value); }
	jni::ref<java::math::BigInteger> multiply(jni::ref<java::math::BigInteger> value) { return call_method<"multiply", jni::ref<java::math::BigInteger>>(value); }
	jni::ref<java::math::BigInteger> pow(jint exp) { return call_method<"pow", jni::ref<java::math::BigInteger>>(exp); }
	jni::ref<jni::array<java::math::BigInteger>> divideAndRemainder(jni::ref<java::math::BigInteger> divisor) { return call_method<"divideAndRemainder", jni::ref<jni::array<java::math::BigInteger>>>(divisor); }
	jni::ref<java::math::BigInteger> divide(jni::ref<java::math::BigInteger> divisor) { return call_method<"divide", jni::ref<java::math::BigInteger>>(divisor); }
	jni::ref<java::math::BigInteger> remainder(jni::ref<java::math::BigInteger> divisor) { return call_method<"remainder", jni::ref<java::math::BigInteger>>(divisor); }
	jni::ref<java::math::BigInteger> modInverse(jni::ref<java::math::BigInteger> m) { return call_method<"modInverse", jni::ref<java::math::BigInteger>>(m); }
	jni::ref<java::math::BigInteger> modPow(jni::ref<java::math::BigInteger> exponent, jni::ref<java::math::BigInteger> modulus) { return call_method<"modPow", jni::ref<java::math::BigInteger>>(exponent, modulus); }
	jni::ref<java::math::BigInteger> mod(jni::ref<java::math::BigInteger> m) { return call_method<"mod", jni::ref<java::math::BigInteger>>(m); }
	jboolean isProbablePrime(jint certainty) { return call_method<"isProbablePrime", jboolean>(certainty); }
	jni::ref<java::math::BigInteger> nextProbablePrime() { return call_method<"nextProbablePrime", jni::ref<java::math::BigInteger>>(); }
	static jni::ref<java::math::BigInteger> probablePrime(jint bitLength, jni::ref<java::util::Random> random) { return call_static_method<"probablePrime", jni::ref<java::math::BigInteger>>(bitLength, random); }

protected:

	BigInteger(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_MATH_BIGINTEGER
