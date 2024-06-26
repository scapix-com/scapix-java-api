// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANIMATION_ANIMATIONLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANIMATION_ANIMATIONLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::animation { class Animation_AnimationListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::animation::Animation_AnimationListener>
{
	static constexpr fixed_string class_name = "android/view/animation/Animation$AnimationListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANIMATION_ANIMATIONLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANIMATION_ANIMATIONLISTENER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANIMATION_ANIMATIONLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/animation/Animation.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::animation::Animation_AnimationListener : public jni::object_base<"android/view/animation/Animation$AnimationListener",
	java::lang::Object>
{
public:

	void onAnimationStart(jni::ref<android::view::animation::Animation> p1) { return call_method<"onAnimationStart", void>(p1); }
	void onAnimationEnd(jni::ref<android::view::animation::Animation> p1) { return call_method<"onAnimationEnd", void>(p1); }
	void onAnimationRepeat(jni::ref<android::view::animation::Animation> p1) { return call_method<"onAnimationRepeat", void>(p1); }

protected:

	Animation_AnimationListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANIMATION_ANIMATIONLISTENER
