// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_CONSTANTSTATE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_CONSTANTSTATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::drawable { class Drawable_ConstantState; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::drawable::Drawable_ConstantState>
{
	static constexpr fixed_string class_name = "android/graphics/drawable/Drawable$ConstantState";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_CONSTANTSTATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_CONSTANTSTATE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_CONSTANTSTATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/content/res/Resources_Theme.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::drawable::Drawable_ConstantState : public jni::object_base<"android/graphics/drawable/Drawable$ConstantState",
	java::lang::Object>
{
public:

	static jni::ref<android::graphics::drawable::Drawable_ConstantState> new_object() { return base_::new_object(); }
	jni::ref<android::graphics::drawable::Drawable> newDrawable() { return call_method<"newDrawable", jni::ref<android::graphics::drawable::Drawable>>(); }
	jni::ref<android::graphics::drawable::Drawable> newDrawable(jni::ref<android::content::res::Resources> res) { return call_method<"newDrawable", jni::ref<android::graphics::drawable::Drawable>>(res); }
	jni::ref<android::graphics::drawable::Drawable> newDrawable(jni::ref<android::content::res::Resources> res, jni::ref<android::content::res::Resources_Theme> theme) { return call_method<"newDrawable", jni::ref<android::graphics::drawable::Drawable>>(res, theme); }
	jint getChangingConfigurations() { return call_method<"getChangingConfigurations", jint>(); }
	jboolean canApplyTheme() { return call_method<"canApplyTheme", jboolean>(); }

protected:

	Drawable_ConstantState(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_CONSTANTSTATE