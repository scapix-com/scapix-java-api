// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FLOATCONSTS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FLOATCONSTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::math { class FloatConsts; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::math::FloatConsts>
{
	static constexpr fixed_string class_name = "jdk/internal/math/FloatConsts";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FLOATCONSTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FLOATCONSTS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FLOATCONSTS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::math::FloatConsts : public jni::object_base<"jdk/internal/math/FloatConsts",
	java::lang::Object>
{
public:

	static jint SIGNIFICAND_WIDTH() { return get_static_field<"SIGNIFICAND_WIDTH", jint>(); }
	static jint MIN_SUB_EXPONENT() { return get_static_field<"MIN_SUB_EXPONENT", jint>(); }
	static jint EXP_BIAS() { return get_static_field<"EXP_BIAS", jint>(); }
	static jint SIGN_BIT_MASK() { return get_static_field<"SIGN_BIT_MASK", jint>(); }
	static jint EXP_BIT_MASK() { return get_static_field<"EXP_BIT_MASK", jint>(); }
	static jint SIGNIF_BIT_MASK() { return get_static_field<"SIGNIF_BIT_MASK", jint>(); }
	static jint MAG_BIT_MASK() { return get_static_field<"MAG_BIT_MASK", jint>(); }


protected:

	FloatConsts(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FLOATCONSTS
