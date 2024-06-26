// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_INTERPOLATOR_RESULT_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_INTERPOLATOR_RESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class Interpolator_Result; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::Interpolator_Result>
{
	static constexpr fixed_string class_name = "android/graphics/Interpolator$Result";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_INTERPOLATOR_RESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_INTERPOLATOR_RESULT)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_INTERPOLATOR_RESULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::Interpolator_Result : public jni::object_base<"android/graphics/Interpolator$Result",
	java::lang::Enum>
{
public:

	static jni::ref<android::graphics::Interpolator_Result> FREEZE_END() { return get_static_field<"FREEZE_END", jni::ref<android::graphics::Interpolator_Result>>(); }
	static jni::ref<android::graphics::Interpolator_Result> FREEZE_START() { return get_static_field<"FREEZE_START", jni::ref<android::graphics::Interpolator_Result>>(); }
	static jni::ref<android::graphics::Interpolator_Result> NORMAL() { return get_static_field<"NORMAL", jni::ref<android::graphics::Interpolator_Result>>(); }

	static jni::ref<jni::array<android::graphics::Interpolator_Result>> values() { return call_static_method<"values", jni::ref<jni::array<android::graphics::Interpolator_Result>>>(); }
	static jni::ref<android::graphics::Interpolator_Result> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::graphics::Interpolator_Result>>(name); }

protected:

	Interpolator_Result(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_INTERPOLATOR_RESULT
