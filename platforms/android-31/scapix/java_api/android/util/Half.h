// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_UTIL_HALF_FWD
#define SCAPIX_JAVA_API_ANDROID_UTIL_HALF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::util { class Half; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::util::Half>
{
	static constexpr fixed_string class_name = "android/util/Half";
	using base_classes = std::tuple<scapix::java_api::java::lang::Number, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_HALF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_UTIL_HALF)
#define SCAPIX_JAVA_API_ANDROID_UTIL_HALF

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::util::Half : public jni::object_base<"android/util/Half",
	java::lang::Number,
	java::lang::Comparable>
{
public:

	static jshort EPSILON() { return get_static_field<"EPSILON", jshort>(); }
	static jshort LOWEST_VALUE() { return get_static_field<"LOWEST_VALUE", jshort>(); }
	static jint MAX_EXPONENT() { return get_static_field<"MAX_EXPONENT", jint>(); }
	static jshort MAX_VALUE() { return get_static_field<"MAX_VALUE", jshort>(); }
	static jint MIN_EXPONENT() { return get_static_field<"MIN_EXPONENT", jint>(); }
	static jshort MIN_NORMAL() { return get_static_field<"MIN_NORMAL", jshort>(); }
	static jshort MIN_VALUE() { return get_static_field<"MIN_VALUE", jshort>(); }
	static jshort NEGATIVE_INFINITY() { return get_static_field<"NEGATIVE_INFINITY", jshort>(); }
	static jshort NEGATIVE_ZERO() { return get_static_field<"NEGATIVE_ZERO", jshort>(); }
	static jshort NaN() { return get_static_field<"NaN", jshort>(); }
	static jshort POSITIVE_INFINITY() { return get_static_field<"POSITIVE_INFINITY", jshort>(); }
	static jshort POSITIVE_ZERO() { return get_static_field<"POSITIVE_ZERO", jshort>(); }
	static jint SIZE() { return get_static_field<"SIZE", jint>(); }

	static jni::ref<android::util::Half> new_object(jshort value) { return base_::new_object(value); }
	static jni::ref<android::util::Half> new_object(jfloat value) { return base_::new_object(value); }
	static jni::ref<android::util::Half> new_object(jdouble value) { return base_::new_object(value); }
	static jni::ref<android::util::Half> new_object(jni::ref<java::lang::String> value) { return base_::new_object(value); }
	jshort halfValue() { return call_method<"halfValue", jshort>(); }
	jbyte byteValue() { return call_method<"byteValue", jbyte>(); }
	jshort shortValue() { return call_method<"shortValue", jshort>(); }
	jint intValue() { return call_method<"intValue", jint>(); }
	jlong longValue() { return call_method<"longValue", jlong>(); }
	jfloat floatValue() { return call_method<"floatValue", jfloat>(); }
	jdouble doubleValue() { return call_method<"doubleValue", jdouble>(); }
	jboolean isNaN() { return call_method<"isNaN", jboolean>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint compareTo(jni::ref<android::util::Half> h) { return call_method<"compareTo", jint>(h); }
	static jint hashCode(jshort h) { return call_static_method<"hashCode", jint>(h); }
	static jint compare(jshort x, jshort y) { return call_static_method<"compare", jint>(x, y); }
	static jshort halfToShortBits(jshort h) { return call_static_method<"halfToShortBits", jshort>(h); }
	static jint halfToIntBits(jshort h) { return call_static_method<"halfToIntBits", jint>(h); }
	static jint halfToRawIntBits(jshort h) { return call_static_method<"halfToRawIntBits", jint>(h); }
	static jshort intBitsToHalf(jint bits) { return call_static_method<"intBitsToHalf", jshort>(bits); }
	static jshort copySign(jshort magnitude, jshort sign) { return call_static_method<"copySign", jshort>(magnitude, sign); }
	static jshort abs(jshort h) { return call_static_method<"abs", jshort>(h); }
	static jshort round(jshort h) { return call_static_method<"round", jshort>(h); }
	static jshort ceil(jshort h) { return call_static_method<"ceil", jshort>(h); }
	static jshort floor(jshort h) { return call_static_method<"floor", jshort>(h); }
	static jshort trunc(jshort h) { return call_static_method<"trunc", jshort>(h); }
	static jshort min(jshort x, jshort y) { return call_static_method<"min", jshort>(x, y); }
	static jshort max(jshort x, jshort y) { return call_static_method<"max", jshort>(x, y); }
	static jboolean less(jshort x, jshort y) { return call_static_method<"less", jboolean>(x, y); }
	static jboolean lessEquals(jshort x, jshort y) { return call_static_method<"lessEquals", jboolean>(x, y); }
	static jboolean greater(jshort x, jshort y) { return call_static_method<"greater", jboolean>(x, y); }
	static jboolean greaterEquals(jshort x, jshort y) { return call_static_method<"greaterEquals", jboolean>(x, y); }
	static jboolean equals(jshort x, jshort y) { return call_static_method<"equals", jboolean>(x, y); }
	static jint getSign(jshort h) { return call_static_method<"getSign", jint>(h); }
	static jint getExponent(jshort h) { return call_static_method<"getExponent", jint>(h); }
	static jint getSignificand(jshort h) { return call_static_method<"getSignificand", jint>(h); }
	static jboolean isInfinite(jshort h) { return call_static_method<"isInfinite", jboolean>(h); }
	static jboolean isNaN(jshort h) { return call_static_method<"isNaN", jboolean>(h); }
	static jboolean isNormalized(jshort h) { return call_static_method<"isNormalized", jboolean>(h); }
	static jfloat toFloat(jshort h) { return call_static_method<"toFloat", jfloat>(h); }
	static jshort toHalf(jfloat f) { return call_static_method<"toHalf", jshort>(f); }
	static jni::ref<android::util::Half> valueOf(jshort h) { return call_static_method<"valueOf", jni::ref<android::util::Half>>(h); }
	static jni::ref<android::util::Half> valueOf(jfloat f) { return call_static_method<"valueOf", jni::ref<android::util::Half>>(f); }
	static jni::ref<android::util::Half> valueOf(jni::ref<java::lang::String> s) { return call_static_method<"valueOf", jni::ref<android::util::Half>>(s); }
	static jshort parseHalf(jni::ref<java::lang::String> s) { return call_static_method<"parseHalf", jshort>(s); }
	static jni::ref<java::lang::String> toString(jshort h) { return call_static_method<"toString", jni::ref<java::lang::String>>(h); }
	static jni::ref<java::lang::String> toHexString(jshort h) { return call_static_method<"toHexString", jni::ref<java::lang::String>>(h); }

protected:

	Half(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_HALF
