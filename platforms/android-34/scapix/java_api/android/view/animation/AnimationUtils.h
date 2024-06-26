// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANIMATIONUTILS_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANIMATIONUTILS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::animation { class AnimationUtils; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::animation::AnimationUtils>
{
	static constexpr fixed_string class_name = "android/view/animation/AnimationUtils";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANIMATIONUTILS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANIMATIONUTILS)
#define SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANIMATIONUTILS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/view/animation/Animation.h>
#include <scapix/java_api/android/view/animation/Interpolator.h>
#include <scapix/java_api/android/view/animation/LayoutAnimationController.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::animation::AnimationUtils : public jni::object_base<"android/view/animation/AnimationUtils",
	java::lang::Object>
{
public:

	static jni::ref<android::view::animation::AnimationUtils> new_object() { return base_::new_object(); }
	static jlong currentAnimationTimeMillis() { return call_static_method<"currentAnimationTimeMillis", jlong>(); }
	static jni::ref<android::view::animation::Animation> loadAnimation(jni::ref<android::content::Context> context, jint id) { return call_static_method<"loadAnimation", jni::ref<android::view::animation::Animation>>(context, id); }
	static jni::ref<android::view::animation::LayoutAnimationController> loadLayoutAnimation(jni::ref<android::content::Context> context, jint id) { return call_static_method<"loadLayoutAnimation", jni::ref<android::view::animation::LayoutAnimationController>>(context, id); }
	static jni::ref<android::view::animation::Animation> makeInAnimation(jni::ref<android::content::Context> c, jboolean fromLeft) { return call_static_method<"makeInAnimation", jni::ref<android::view::animation::Animation>>(c, fromLeft); }
	static jni::ref<android::view::animation::Animation> makeOutAnimation(jni::ref<android::content::Context> c, jboolean toRight) { return call_static_method<"makeOutAnimation", jni::ref<android::view::animation::Animation>>(c, toRight); }
	static jni::ref<android::view::animation::Animation> makeInChildBottomAnimation(jni::ref<android::content::Context> c) { return call_static_method<"makeInChildBottomAnimation", jni::ref<android::view::animation::Animation>>(c); }
	static jni::ref<android::view::animation::Interpolator> loadInterpolator(jni::ref<android::content::Context> context, jint id) { return call_static_method<"loadInterpolator", jni::ref<android::view::animation::Interpolator>>(context, id); }

protected:

	AnimationUtils(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANIMATIONUTILS
