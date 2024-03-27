// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/animation/Animator.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ANIMATION_VALUEANIMATOR_FWD
#define SCAPIX_JAVA_API_ANDROID_ANIMATION_VALUEANIMATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::animation { class ValueAnimator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::animation::ValueAnimator>
{
	static constexpr fixed_string class_name = "android/animation/ValueAnimator";
	using base_classes = std::tuple<scapix::java_api::android::animation::Animator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ANIMATION_VALUEANIMATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ANIMATION_VALUEANIMATOR)
#define SCAPIX_JAVA_API_ANDROID_ANIMATION_VALUEANIMATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/animation/PropertyValuesHolder.h>
#include <scapix/java_api/android/animation/TimeInterpolator.h>
#include <scapix/java_api/android/animation/TypeEvaluator.h>
#include <scapix/java_api/android/animation/ValueAnimator_AnimatorUpdateListener.h>
#include <scapix/java_api/android/animation/ValueAnimator_DurationScaleChangeListener.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::animation::ValueAnimator : public jni::object_base<"android/animation/ValueAnimator",
	android::animation::Animator>
{
public:

	using DurationScaleChangeListener = ValueAnimator_DurationScaleChangeListener;
	using AnimatorUpdateListener = ValueAnimator_AnimatorUpdateListener;

	static jint INFINITE() { return get_static_field<"INFINITE", jint>(); }
	static jint RESTART() { return get_static_field<"RESTART", jint>(); }
	static jint REVERSE() { return get_static_field<"REVERSE", jint>(); }

	static jni::ref<android::animation::ValueAnimator> new_object() { return base_::new_object(); }
	static jfloat getDurationScale() { return call_static_method<"getDurationScale", jfloat>(); }
	static jboolean registerDurationScaleChangeListener(jni::ref<android::animation::ValueAnimator_DurationScaleChangeListener> listener) { return call_static_method<"registerDurationScaleChangeListener", jboolean>(listener); }
	static jboolean unregisterDurationScaleChangeListener(jni::ref<android::animation::ValueAnimator_DurationScaleChangeListener> listener) { return call_static_method<"unregisterDurationScaleChangeListener", jboolean>(listener); }
	static jboolean areAnimatorsEnabled() { return call_static_method<"areAnimatorsEnabled", jboolean>(); }
	static jni::ref<android::animation::ValueAnimator> ofInt(jni::ref<jni::array<jint>> values) { return call_static_method<"ofInt", jni::ref<android::animation::ValueAnimator>>(values); }
	static jni::ref<android::animation::ValueAnimator> ofArgb(jni::ref<jni::array<jint>> values) { return call_static_method<"ofArgb", jni::ref<android::animation::ValueAnimator>>(values); }
	static jni::ref<android::animation::ValueAnimator> ofFloat(jni::ref<jni::array<jfloat>> values) { return call_static_method<"ofFloat", jni::ref<android::animation::ValueAnimator>>(values); }
	static jni::ref<android::animation::ValueAnimator> ofPropertyValuesHolder(jni::ref<jni::array<android::animation::PropertyValuesHolder>> values) { return call_static_method<"ofPropertyValuesHolder", jni::ref<android::animation::ValueAnimator>>(values); }
	static jni::ref<android::animation::ValueAnimator> ofObject(jni::ref<android::animation::TypeEvaluator> evaluator, jni::ref<jni::array<java::lang::Object>> values) { return call_static_method<"ofObject", jni::ref<android::animation::ValueAnimator>>(evaluator, values); }
	void setIntValues(jni::ref<jni::array<jint>> values) { return call_method<"setIntValues", void>(values); }
	void setFloatValues(jni::ref<jni::array<jfloat>> values) { return call_method<"setFloatValues", void>(values); }
	void setObjectValues(jni::ref<jni::array<java::lang::Object>> values) { return call_method<"setObjectValues", void>(values); }
	void setValues(jni::ref<jni::array<android::animation::PropertyValuesHolder>> values) { return call_method<"setValues", void>(values); }
	jni::ref<jni::array<android::animation::PropertyValuesHolder>> getValues() { return call_method<"getValues", jni::ref<jni::array<android::animation::PropertyValuesHolder>>>(); }
	jni::ref<android::animation::ValueAnimator> setDuration(jlong duration) { return call_method<"setDuration", jni::ref<android::animation::ValueAnimator>>(duration); }
	jlong getDuration() { return call_method<"getDuration", jlong>(); }
	jlong getTotalDuration() { return call_method<"getTotalDuration", jlong>(); }
	void setCurrentPlayTime(jlong playTime) { return call_method<"setCurrentPlayTime", void>(playTime); }
	void setCurrentFraction(jfloat fraction) { return call_method<"setCurrentFraction", void>(fraction); }
	jlong getCurrentPlayTime() { return call_method<"getCurrentPlayTime", jlong>(); }
	jlong getStartDelay() { return call_method<"getStartDelay", jlong>(); }
	void setStartDelay(jlong startDelay) { return call_method<"setStartDelay", void>(startDelay); }
	static jlong getFrameDelay() { return call_static_method<"getFrameDelay", jlong>(); }
	static void setFrameDelay(jlong frameDelay) { return call_static_method<"setFrameDelay", void>(frameDelay); }
	jni::ref<java::lang::Object> getAnimatedValue() { return call_method<"getAnimatedValue", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getAnimatedValue(jni::ref<java::lang::String> propertyName) { return call_method<"getAnimatedValue", jni::ref<java::lang::Object>>(propertyName); }
	void setRepeatCount(jint value) { return call_method<"setRepeatCount", void>(value); }
	jint getRepeatCount() { return call_method<"getRepeatCount", jint>(); }
	void setRepeatMode(jint value) { return call_method<"setRepeatMode", void>(value); }
	jint getRepeatMode() { return call_method<"getRepeatMode", jint>(); }
	void addUpdateListener(jni::ref<android::animation::ValueAnimator_AnimatorUpdateListener> listener) { return call_method<"addUpdateListener", void>(listener); }
	void removeAllUpdateListeners() { return call_method<"removeAllUpdateListeners", void>(); }
	void removeUpdateListener(jni::ref<android::animation::ValueAnimator_AnimatorUpdateListener> listener) { return call_method<"removeUpdateListener", void>(listener); }
	void setInterpolator(jni::ref<android::animation::TimeInterpolator> value) { return call_method<"setInterpolator", void>(value); }
	jni::ref<android::animation::TimeInterpolator> getInterpolator() { return call_method<"getInterpolator", jni::ref<android::animation::TimeInterpolator>>(); }
	void setEvaluator(jni::ref<android::animation::TypeEvaluator> value) { return call_method<"setEvaluator", void>(value); }
	void start() { return call_method<"start", void>(); }
	void cancel() { return call_method<"cancel", void>(); }
	void end() { return call_method<"end", void>(); }
	void resume() { return call_method<"resume", void>(); }
	void pause() { return call_method<"pause", void>(); }
	jboolean isRunning() { return call_method<"isRunning", jboolean>(); }
	jboolean isStarted() { return call_method<"isStarted", jboolean>(); }
	void reverse() { return call_method<"reverse", void>(); }
	jfloat getAnimatedFraction() { return call_method<"getAnimatedFraction", jfloat>(); }
	jni::ref<android::animation::ValueAnimator> clone() { return call_method<"clone", jni::ref<android::animation::ValueAnimator>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ValueAnimator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ANIMATION_VALUEANIMATOR
