// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/transition/Transition_TransitionListener.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TRANSITION_TRANSITIONLISTENERADAPTER_FWD
#define SCAPIX_JAVA_API_ANDROID_TRANSITION_TRANSITIONLISTENERADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::transition { class TransitionListenerAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::transition::TransitionListenerAdapter>
{
	static constexpr fixed_string class_name = "android/transition/TransitionListenerAdapter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::transition::Transition_TransitionListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TRANSITION_TRANSITIONLISTENERADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TRANSITION_TRANSITIONLISTENERADAPTER)
#define SCAPIX_JAVA_API_ANDROID_TRANSITION_TRANSITIONLISTENERADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/transition/Transition.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::transition::TransitionListenerAdapter : public jni::object_base<"android/transition/TransitionListenerAdapter",
	java::lang::Object,
	android::transition::Transition_TransitionListener>
{
public:

	static jni::ref<android::transition::TransitionListenerAdapter> new_object() { return base_::new_object(); }
	void onTransitionStart(jni::ref<android::transition::Transition> transition) { return call_method<"onTransitionStart", void>(transition); }
	void onTransitionEnd(jni::ref<android::transition::Transition> transition) { return call_method<"onTransitionEnd", void>(transition); }
	void onTransitionCancel(jni::ref<android::transition::Transition> transition) { return call_method<"onTransitionCancel", void>(transition); }
	void onTransitionPause(jni::ref<android::transition::Transition> transition) { return call_method<"onTransitionPause", void>(transition); }
	void onTransitionResume(jni::ref<android::transition::Transition> transition) { return call_method<"onTransitionResume", void>(transition); }

protected:

	TransitionListenerAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TRANSITION_TRANSITIONLISTENERADAPTER