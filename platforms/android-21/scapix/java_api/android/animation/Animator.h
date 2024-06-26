// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ANIMATION_ANIMATOR_FWD
#define SCAPIX_JAVA_API_ANDROID_ANIMATION_ANIMATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::animation { class Animator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::animation::Animator>
{
	static constexpr fixed_string class_name = "android/animation/Animator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ANIMATION_ANIMATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ANIMATION_ANIMATOR)
#define SCAPIX_JAVA_API_ANDROID_ANIMATION_ANIMATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/animation/Animator_AnimatorListener.h>
#include <scapix/java_api/android/animation/Animator_AnimatorPauseListener.h>
#include <scapix/java_api/android/animation/TimeInterpolator.h>
#include <scapix/java_api/java/util/ArrayList.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::animation::Animator : public jni::object_base<"android/animation/Animator",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	using AnimatorPauseListener = Animator_AnimatorPauseListener;
	using AnimatorListener = Animator_AnimatorListener;

	static jni::ref<android::animation::Animator> new_object() { return base_::new_object(); }
	void start() { return call_method<"start", void>(); }
	void cancel() { return call_method<"cancel", void>(); }
	void end() { return call_method<"end", void>(); }
	void pause() { return call_method<"pause", void>(); }
	void resume() { return call_method<"resume", void>(); }
	jboolean isPaused() { return call_method<"isPaused", jboolean>(); }
	jlong getStartDelay() { return call_method<"getStartDelay", jlong>(); }
	void setStartDelay(jlong p1) { return call_method<"setStartDelay", void>(p1); }
	jni::ref<android::animation::Animator> setDuration(jlong p1) { return call_method<"setDuration", jni::ref<android::animation::Animator>>(p1); }
	jlong getDuration() { return call_method<"getDuration", jlong>(); }
	void setInterpolator(jni::ref<android::animation::TimeInterpolator> p1) { return call_method<"setInterpolator", void>(p1); }
	jni::ref<android::animation::TimeInterpolator> getInterpolator() { return call_method<"getInterpolator", jni::ref<android::animation::TimeInterpolator>>(); }
	jboolean isRunning() { return call_method<"isRunning", jboolean>(); }
	jboolean isStarted() { return call_method<"isStarted", jboolean>(); }
	void addListener(jni::ref<android::animation::Animator_AnimatorListener> listener) { return call_method<"addListener", void>(listener); }
	void removeListener(jni::ref<android::animation::Animator_AnimatorListener> listener) { return call_method<"removeListener", void>(listener); }
	jni::ref<java::util::ArrayList> getListeners() { return call_method<"getListeners", jni::ref<java::util::ArrayList>>(); }
	void addPauseListener(jni::ref<android::animation::Animator_AnimatorPauseListener> listener) { return call_method<"addPauseListener", void>(listener); }
	void removePauseListener(jni::ref<android::animation::Animator_AnimatorPauseListener> listener) { return call_method<"removePauseListener", void>(listener); }
	void removeAllListeners() { return call_method<"removeAllListeners", void>(); }
	jni::ref<android::animation::Animator> clone() { return call_method<"clone", jni::ref<android::animation::Animator>>(); }
	void setupStartValues() { return call_method<"setupStartValues", void>(); }
	void setupEndValues() { return call_method<"setupEndValues", void>(); }
	void setTarget(jni::ref<java::lang::Object> target) { return call_method<"setTarget", void>(target); }

protected:

	Animator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ANIMATION_ANIMATOR
