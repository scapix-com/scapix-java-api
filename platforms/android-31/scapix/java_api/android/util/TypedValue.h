// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_UTIL_TYPEDVALUE_FWD
#define SCAPIX_JAVA_API_ANDROID_UTIL_TYPEDVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::util { class TypedValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::util::TypedValue>
{
	static constexpr fixed_string class_name = "android/util/TypedValue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_TYPEDVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_UTIL_TYPEDVALUE)
#define SCAPIX_JAVA_API_ANDROID_UTIL_TYPEDVALUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/util/DisplayMetrics.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::util::TypedValue : public jni::object_base<"android/util/TypedValue",
	java::lang::Object>
{
public:

	static jint COMPLEX_MANTISSA_MASK() { return get_static_field<"COMPLEX_MANTISSA_MASK", jint>(); }
	static jint COMPLEX_MANTISSA_SHIFT() { return get_static_field<"COMPLEX_MANTISSA_SHIFT", jint>(); }
	static jint COMPLEX_RADIX_0p23() { return get_static_field<"COMPLEX_RADIX_0p23", jint>(); }
	static jint COMPLEX_RADIX_16p7() { return get_static_field<"COMPLEX_RADIX_16p7", jint>(); }
	static jint COMPLEX_RADIX_23p0() { return get_static_field<"COMPLEX_RADIX_23p0", jint>(); }
	static jint COMPLEX_RADIX_8p15() { return get_static_field<"COMPLEX_RADIX_8p15", jint>(); }
	static jint COMPLEX_RADIX_MASK() { return get_static_field<"COMPLEX_RADIX_MASK", jint>(); }
	static jint COMPLEX_RADIX_SHIFT() { return get_static_field<"COMPLEX_RADIX_SHIFT", jint>(); }
	static jint COMPLEX_UNIT_DIP() { return get_static_field<"COMPLEX_UNIT_DIP", jint>(); }
	static jint COMPLEX_UNIT_FRACTION() { return get_static_field<"COMPLEX_UNIT_FRACTION", jint>(); }
	static jint COMPLEX_UNIT_FRACTION_PARENT() { return get_static_field<"COMPLEX_UNIT_FRACTION_PARENT", jint>(); }
	static jint COMPLEX_UNIT_IN() { return get_static_field<"COMPLEX_UNIT_IN", jint>(); }
	static jint COMPLEX_UNIT_MASK() { return get_static_field<"COMPLEX_UNIT_MASK", jint>(); }
	static jint COMPLEX_UNIT_MM() { return get_static_field<"COMPLEX_UNIT_MM", jint>(); }
	static jint COMPLEX_UNIT_PT() { return get_static_field<"COMPLEX_UNIT_PT", jint>(); }
	static jint COMPLEX_UNIT_PX() { return get_static_field<"COMPLEX_UNIT_PX", jint>(); }
	static jint COMPLEX_UNIT_SHIFT() { return get_static_field<"COMPLEX_UNIT_SHIFT", jint>(); }
	static jint COMPLEX_UNIT_SP() { return get_static_field<"COMPLEX_UNIT_SP", jint>(); }
	static jint DATA_NULL_EMPTY() { return get_static_field<"DATA_NULL_EMPTY", jint>(); }
	static jint DATA_NULL_UNDEFINED() { return get_static_field<"DATA_NULL_UNDEFINED", jint>(); }
	static jint DENSITY_DEFAULT() { return get_static_field<"DENSITY_DEFAULT", jint>(); }
	static jint DENSITY_NONE() { return get_static_field<"DENSITY_NONE", jint>(); }
	static jint TYPE_ATTRIBUTE() { return get_static_field<"TYPE_ATTRIBUTE", jint>(); }
	static jint TYPE_DIMENSION() { return get_static_field<"TYPE_DIMENSION", jint>(); }
	static jint TYPE_FIRST_COLOR_INT() { return get_static_field<"TYPE_FIRST_COLOR_INT", jint>(); }
	static jint TYPE_FIRST_INT() { return get_static_field<"TYPE_FIRST_INT", jint>(); }
	static jint TYPE_FLOAT() { return get_static_field<"TYPE_FLOAT", jint>(); }
	static jint TYPE_FRACTION() { return get_static_field<"TYPE_FRACTION", jint>(); }
	static jint TYPE_INT_BOOLEAN() { return get_static_field<"TYPE_INT_BOOLEAN", jint>(); }
	static jint TYPE_INT_COLOR_ARGB4() { return get_static_field<"TYPE_INT_COLOR_ARGB4", jint>(); }
	static jint TYPE_INT_COLOR_ARGB8() { return get_static_field<"TYPE_INT_COLOR_ARGB8", jint>(); }
	static jint TYPE_INT_COLOR_RGB4() { return get_static_field<"TYPE_INT_COLOR_RGB4", jint>(); }
	static jint TYPE_INT_COLOR_RGB8() { return get_static_field<"TYPE_INT_COLOR_RGB8", jint>(); }
	static jint TYPE_INT_DEC() { return get_static_field<"TYPE_INT_DEC", jint>(); }
	static jint TYPE_INT_HEX() { return get_static_field<"TYPE_INT_HEX", jint>(); }
	static jint TYPE_LAST_COLOR_INT() { return get_static_field<"TYPE_LAST_COLOR_INT", jint>(); }
	static jint TYPE_LAST_INT() { return get_static_field<"TYPE_LAST_INT", jint>(); }
	static jint TYPE_NULL() { return get_static_field<"TYPE_NULL", jint>(); }
	static jint TYPE_REFERENCE() { return get_static_field<"TYPE_REFERENCE", jint>(); }
	static jint TYPE_STRING() { return get_static_field<"TYPE_STRING", jint>(); }
	jint assetCookie() { return get_field<"assetCookie", jint>(); }
	void assetCookie(jint v) { set_field<"assetCookie", jint>(v); }
	jint changingConfigurations() { return get_field<"changingConfigurations", jint>(); }
	void changingConfigurations(jint v) { set_field<"changingConfigurations", jint>(v); }
	jint data() { return get_field<"data", jint>(); }
	void data(jint v) { set_field<"data", jint>(v); }
	jint density() { return get_field<"density", jint>(); }
	void density(jint v) { set_field<"density", jint>(v); }
	jint resourceId() { return get_field<"resourceId", jint>(); }
	void resourceId(jint v) { set_field<"resourceId", jint>(v); }
	jint sourceResourceId() { return get_field<"sourceResourceId", jint>(); }
	void sourceResourceId(jint v) { set_field<"sourceResourceId", jint>(v); }
	jni::ref<java::lang::CharSequence> string() { return get_field<"string", jni::ref<java::lang::CharSequence>>(); }
	void string(jni::ref<java::lang::CharSequence> v) { set_field<"string", jni::ref<java::lang::CharSequence>>(v); }
	jint type() { return get_field<"type", jint>(); }
	void type(jint v) { set_field<"type", jint>(v); }

	static jni::ref<android::util::TypedValue> new_object() { return base_::new_object(); }
	jfloat getFloat() { return call_method<"getFloat", jfloat>(); }
	jboolean isColorType() { return call_method<"isColorType", jboolean>(); }
	static jfloat complexToFloat(jint complex) { return call_static_method<"complexToFloat", jfloat>(complex); }
	static jfloat complexToDimension(jint data, jni::ref<android::util::DisplayMetrics> metrics) { return call_static_method<"complexToDimension", jfloat>(data, metrics); }
	static jint complexToDimensionPixelOffset(jint data, jni::ref<android::util::DisplayMetrics> metrics) { return call_static_method<"complexToDimensionPixelOffset", jint>(data, metrics); }
	static jint complexToDimensionPixelSize(jint data, jni::ref<android::util::DisplayMetrics> metrics) { return call_static_method<"complexToDimensionPixelSize", jint>(data, metrics); }
	jint getComplexUnit() { return call_method<"getComplexUnit", jint>(); }
	static jfloat applyDimension(jint unit, jfloat value, jni::ref<android::util::DisplayMetrics> metrics) { return call_static_method<"applyDimension", jfloat>(unit, value, metrics); }
	jfloat getDimension(jni::ref<android::util::DisplayMetrics> metrics) { return call_method<"getDimension", jfloat>(metrics); }
	static jfloat complexToFraction(jint data, jfloat base, jfloat pbase) { return call_static_method<"complexToFraction", jfloat>(data, base, pbase); }
	jfloat getFraction(jfloat base, jfloat pbase) { return call_method<"getFraction", jfloat>(base, pbase); }
	jni::ref<java::lang::CharSequence> coerceToString() { return call_method<"coerceToString", jni::ref<java::lang::CharSequence>>(); }
	static jni::ref<java::lang::String> coerceToString(jint type, jint data) { return call_static_method<"coerceToString", jni::ref<java::lang::String>>(type, data); }
	void setTo(jni::ref<android::util::TypedValue> other) { return call_method<"setTo", void>(other); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	TypedValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_TYPEDVALUE