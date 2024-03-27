// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/animation/Animator.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ANIMATION_ANIMATORSET_FWD
#define SCAPIX_JAVA_API_ANDROID_ANIMATION_ANIMATORSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::animation { class AnimatorSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::animation::AnimatorSet>
{
	static constexpr fixed_string class_name = "android/animation/AnimatorSet";
	using base_classes = std::tuple<scapix::java_api::android::animation::Animator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ANIMATION_ANIMATORSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ANIMATION_ANIMATORSET)
#define SCAPIX_JAVA_API_ANDROID_ANIMATION_ANIMATORSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/animation/AnimatorSet_Builder.h>
#include <scapix/java_api/android/animation/TimeInterpolator.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/ArrayList.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::animation::AnimatorSet : public jni::object_base<"android/animation/AnimatorSet",
	android::animation::Animator>
{
public:

	using Builder = AnimatorSet_Builder;

	static jni::ref<android::animation::AnimatorSet> new_object() { return base_::new_object(); }
	void playTogether(jni::ref<jni::array<android::animation::Animator>> items) { return call_method<"playTogether", void>(items); }
	void playTogether(jni::ref<java::util::Collection> items) { return call_method<"playTogether", void>(items); }
	void playSequentially(jni::ref<jni::array<android::animation::Animator>> items) { return call_method<"playSequentially", void>(items); }
	void playSequentially(jni::ref<java::util::List> items) { return call_method<"playSequentially", void>(items); }
	jni::ref<java::util::ArrayList> getChildAnimations() { return call_method<"getChildAnimations", jni::ref<java::util::ArrayList>>(); }
	void setTarget(jni::ref<java::lang::Object> target) { return call_method<"setTarget", void>(target); }
	void setInterpolator(jni::ref<android::animation::TimeInterpolator> interpolator) { return call_method<"setInterpolator", void>(interpolator); }
	jni::ref<android::animation::TimeInterpolator> getInterpolator() { return call_method<"getInterpolator", jni::ref<android::animation::TimeInterpolator>>(); }
	jni::ref<android::animation::AnimatorSet_Builder> play(jni::ref<android::animation::Animator> anim) { return call_method<"play", jni::ref<android::animation::AnimatorSet_Builder>>(anim); }
	void cancel() { return call_method<"cancel", void>(); }
	void end() { return call_method<"end", void>(); }
	jboolean isRunning() { return call_method<"isRunning", jboolean>(); }
	jboolean isStarted() { return call_method<"isStarted", jboolean>(); }
	jlong getStartDelay() { return call_method<"getStartDelay", jlong>(); }
	void setStartDelay(jlong startDelay) { return call_method<"setStartDelay", void>(startDelay); }
	jlong getDuration() { return call_method<"getDuration", jlong>(); }
	jni::ref<android::animation::AnimatorSet> setDuration(jlong duration) { return call_method<"setDuration", jni::ref<android::animation::AnimatorSet>>(duration); }
	void setupStartValues() { return call_method<"setupStartValues", void>(); }
	void setupEndValues() { return call_method<"setupEndValues", void>(); }
	void pause() { return call_method<"pause", void>(); }
	void resume() { return call_method<"resume", void>(); }
	void start() { return call_method<"start", void>(); }
	void setCurrentPlayTime(jlong playTime) { return call_method<"setCurrentPlayTime", void>(playTime); }
	jlong getCurrentPlayTime() { return call_method<"getCurrentPlayTime", jlong>(); }
	jni::ref<android::animation::AnimatorSet> clone() { return call_method<"clone", jni::ref<android::animation::AnimatorSet>>(); }
	void reverse() { return call_method<"reverse", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jlong getTotalDuration() { return call_method<"getTotalDuration", jlong>(); }

protected:

	AnimatorSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ANIMATION_ANIMATORSET
