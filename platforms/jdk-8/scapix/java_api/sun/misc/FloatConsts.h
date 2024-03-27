// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_FLOATCONSTS_FWD
#define SCAPIX_JAVA_API_SUN_MISC_FLOATCONSTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class FloatConsts; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::FloatConsts>
{
	static constexpr fixed_string class_name = "sun/misc/FloatConsts";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_FLOATCONSTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_FLOATCONSTS)
#define SCAPIX_JAVA_API_SUN_MISC_FLOATCONSTS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::FloatConsts : public jni::object_base<"sun/misc/FloatConsts",
	java::lang::Object>
{
public:

	static jfloat POSITIVE_INFINITY() { return get_static_field<"POSITIVE_INFINITY", jfloat>(); }
	static jfloat NEGATIVE_INFINITY() { return get_static_field<"NEGATIVE_INFINITY", jfloat>(); }
	static jfloat NaN() { return get_static_field<"NaN", jfloat>(); }
	static jfloat MAX_VALUE() { return get_static_field<"MAX_VALUE", jfloat>(); }
	static jfloat MIN_VALUE() { return get_static_field<"MIN_VALUE", jfloat>(); }
	static jfloat MIN_NORMAL() { return get_static_field<"MIN_NORMAL", jfloat>(); }
	static jint SIGNIFICAND_WIDTH() { return get_static_field<"SIGNIFICAND_WIDTH", jint>(); }
	static jint MAX_EXPONENT() { return get_static_field<"MAX_EXPONENT", jint>(); }
	static jint MIN_EXPONENT() { return get_static_field<"MIN_EXPONENT", jint>(); }
	static jint MIN_SUB_EXPONENT() { return get_static_field<"MIN_SUB_EXPONENT", jint>(); }
	static jint EXP_BIAS() { return get_static_field<"EXP_BIAS", jint>(); }
	static jint SIGN_BIT_MASK() { return get_static_field<"SIGN_BIT_MASK", jint>(); }
	static jint EXP_BIT_MASK() { return get_static_field<"EXP_BIT_MASK", jint>(); }
	static jint SIGNIF_BIT_MASK() { return get_static_field<"SIGNIF_BIT_MASK", jint>(); }


protected:

	FloatConsts(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_FLOATCONSTS