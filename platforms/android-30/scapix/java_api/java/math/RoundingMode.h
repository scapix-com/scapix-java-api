// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_MATH_ROUNDINGMODE_FWD
#define SCAPIX_JAVA_API_JAVA_MATH_ROUNDINGMODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::math { class RoundingMode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::math::RoundingMode>
{
	static constexpr fixed_string class_name = "java/math/RoundingMode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_MATH_ROUNDINGMODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_MATH_ROUNDINGMODE)
#define SCAPIX_JAVA_API_JAVA_MATH_ROUNDINGMODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::math::RoundingMode : public jni::object_base<"java/math/RoundingMode",
	java::lang::Enum>
{
public:

	static jni::ref<java::math::RoundingMode> UP() { return get_static_field<"UP", jni::ref<java::math::RoundingMode>>(); }
	static jni::ref<java::math::RoundingMode> DOWN() { return get_static_field<"DOWN", jni::ref<java::math::RoundingMode>>(); }
	static jni::ref<java::math::RoundingMode> CEILING() { return get_static_field<"CEILING", jni::ref<java::math::RoundingMode>>(); }
	static jni::ref<java::math::RoundingMode> FLOOR() { return get_static_field<"FLOOR", jni::ref<java::math::RoundingMode>>(); }
	static jni::ref<java::math::RoundingMode> HALF_UP() { return get_static_field<"HALF_UP", jni::ref<java::math::RoundingMode>>(); }
	static jni::ref<java::math::RoundingMode> HALF_DOWN() { return get_static_field<"HALF_DOWN", jni::ref<java::math::RoundingMode>>(); }
	static jni::ref<java::math::RoundingMode> HALF_EVEN() { return get_static_field<"HALF_EVEN", jni::ref<java::math::RoundingMode>>(); }
	static jni::ref<java::math::RoundingMode> UNNECESSARY() { return get_static_field<"UNNECESSARY", jni::ref<java::math::RoundingMode>>(); }

	static jni::ref<jni::array<java::math::RoundingMode>> values() { return call_static_method<"values", jni::ref<jni::array<java::math::RoundingMode>>>(); }
	static jni::ref<java::math::RoundingMode> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::math::RoundingMode>>(name); }
	static jni::ref<java::math::RoundingMode> valueOf(jint mode) { return call_static_method<"valueOf", jni::ref<java::math::RoundingMode>>(mode); }

protected:

	RoundingMode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_MATH_ROUNDINGMODE
