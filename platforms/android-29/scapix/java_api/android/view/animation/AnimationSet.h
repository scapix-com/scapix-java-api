// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/animation/Animation.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANIMATIONSET_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANIMATIONSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::animation { class AnimationSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::animation::AnimationSet>
{
	static constexpr fixed_string class_name = "android/view/animation/AnimationSet";
	using base_classes = std::tuple<scapix::java_api::android::view::animation::Animation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANIMATIONSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANIMATIONSET)
#define SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANIMATIONSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/animation/Transformation.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::animation::AnimationSet : public jni::object_base<"android/view/animation/AnimationSet",
	android::view::animation::Animation>
{
public:

	static jni::ref<android::view::animation::AnimationSet> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::view::animation::AnimationSet> new_object(jboolean shareInterpolator) { return base_::new_object(shareInterpolator); }
	void setFillAfter(jboolean fillAfter) { return call_method<"setFillAfter", void>(fillAfter); }
	void setFillBefore(jboolean fillBefore) { return call_method<"setFillBefore", void>(fillBefore); }
	void setRepeatMode(jint repeatMode) { return call_method<"setRepeatMode", void>(repeatMode); }
	void setStartOffset(jlong startOffset) { return call_method<"setStartOffset", void>(startOffset); }
	void setDuration(jlong durationMillis) { return call_method<"setDuration", void>(durationMillis); }
	void addAnimation(jni::ref<android::view::animation::Animation> a) { return call_method<"addAnimation", void>(a); }
	void setStartTime(jlong startTimeMillis) { return call_method<"setStartTime", void>(startTimeMillis); }
	jlong getStartTime() { return call_method<"getStartTime", jlong>(); }
	void restrictDuration(jlong durationMillis) { return call_method<"restrictDuration", void>(durationMillis); }
	jlong getDuration() { return call_method<"getDuration", jlong>(); }
	jlong computeDurationHint() { return call_method<"computeDurationHint", jlong>(); }
	jboolean getTransformation(jlong currentTime, jni::ref<android::view::animation::Transformation> p2) { return call_method<"getTransformation", jboolean>(currentTime, p2); }
	void scaleCurrentDuration(jfloat scale) { return call_method<"scaleCurrentDuration", void>(scale); }
	void initialize(jint width, jint height, jint parentWidth, jint parentHeight) { return call_method<"initialize", void>(width, height, parentWidth, parentHeight); }
	void reset() { return call_method<"reset", void>(); }
	jni::ref<java::util::List> getAnimations() { return call_method<"getAnimations", jni::ref<java::util::List>>(); }
	jboolean willChangeTransformationMatrix() { return call_method<"willChangeTransformationMatrix", jboolean>(); }
	jboolean willChangeBounds() { return call_method<"willChangeBounds", jboolean>(); }

protected:

	AnimationSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANIMATIONSET
