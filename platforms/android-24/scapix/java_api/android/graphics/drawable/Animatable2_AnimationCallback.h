// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_ANIMATABLE2_ANIMATIONCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_ANIMATABLE2_ANIMATIONCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::drawable { class Animatable2_AnimationCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::drawable::Animatable2_AnimationCallback>
{
	static constexpr fixed_string class_name = "android/graphics/drawable/Animatable2$AnimationCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_ANIMATABLE2_ANIMATIONCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_ANIMATABLE2_ANIMATIONCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_ANIMATABLE2_ANIMATIONCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::drawable::Animatable2_AnimationCallback : public jni::object_base<"android/graphics/drawable/Animatable2$AnimationCallback",
	java::lang::Object>
{
public:

	static jni::ref<android::graphics::drawable::Animatable2_AnimationCallback> new_object() { return base_::new_object(); }
	void onAnimationStart(jni::ref<android::graphics::drawable::Drawable> drawable) { return call_method<"onAnimationStart", void>(drawable); }
	void onAnimationEnd(jni::ref<android::graphics::drawable::Drawable> drawable) { return call_method<"onAnimationEnd", void>(drawable); }

protected:

	Animatable2_AnimationCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_ANIMATABLE2_ANIMATIONCALLBACK