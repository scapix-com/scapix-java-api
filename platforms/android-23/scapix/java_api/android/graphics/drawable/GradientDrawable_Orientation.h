// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_GRADIENTDRAWABLE_ORIENTATION_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_GRADIENTDRAWABLE_ORIENTATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::drawable { class GradientDrawable_Orientation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::drawable::GradientDrawable_Orientation>
{
	static constexpr fixed_string class_name = "android/graphics/drawable/GradientDrawable$Orientation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_GRADIENTDRAWABLE_ORIENTATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_GRADIENTDRAWABLE_ORIENTATION)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_GRADIENTDRAWABLE_ORIENTATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::drawable::GradientDrawable_Orientation : public jni::object_base<"android/graphics/drawable/GradientDrawable$Orientation",
	java::lang::Enum>
{
public:

	static jni::ref<android::graphics::drawable::GradientDrawable_Orientation> BL_TR() { return get_static_field<"BL_TR", jni::ref<android::graphics::drawable::GradientDrawable_Orientation>>(); }
	static jni::ref<android::graphics::drawable::GradientDrawable_Orientation> BOTTOM_TOP() { return get_static_field<"BOTTOM_TOP", jni::ref<android::graphics::drawable::GradientDrawable_Orientation>>(); }
	static jni::ref<android::graphics::drawable::GradientDrawable_Orientation> BR_TL() { return get_static_field<"BR_TL", jni::ref<android::graphics::drawable::GradientDrawable_Orientation>>(); }
	static jni::ref<android::graphics::drawable::GradientDrawable_Orientation> LEFT_RIGHT() { return get_static_field<"LEFT_RIGHT", jni::ref<android::graphics::drawable::GradientDrawable_Orientation>>(); }
	static jni::ref<android::graphics::drawable::GradientDrawable_Orientation> RIGHT_LEFT() { return get_static_field<"RIGHT_LEFT", jni::ref<android::graphics::drawable::GradientDrawable_Orientation>>(); }
	static jni::ref<android::graphics::drawable::GradientDrawable_Orientation> TL_BR() { return get_static_field<"TL_BR", jni::ref<android::graphics::drawable::GradientDrawable_Orientation>>(); }
	static jni::ref<android::graphics::drawable::GradientDrawable_Orientation> TOP_BOTTOM() { return get_static_field<"TOP_BOTTOM", jni::ref<android::graphics::drawable::GradientDrawable_Orientation>>(); }
	static jni::ref<android::graphics::drawable::GradientDrawable_Orientation> TR_BL() { return get_static_field<"TR_BL", jni::ref<android::graphics::drawable::GradientDrawable_Orientation>>(); }

	static jni::ref<jni::array<android::graphics::drawable::GradientDrawable_Orientation>> values() { return call_static_method<"values", jni::ref<jni::array<android::graphics::drawable::GradientDrawable_Orientation>>>(); }
	static jni::ref<android::graphics::drawable::GradientDrawable_Orientation> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::graphics::drawable::GradientDrawable_Orientation>>(name); }

protected:

	GradientDrawable_Orientation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_GRADIENTDRAWABLE_ORIENTATION
