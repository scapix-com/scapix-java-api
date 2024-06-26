// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/transition/VisibilityPropagation.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TRANSITION_SIDEPROPAGATION_FWD
#define SCAPIX_JAVA_API_ANDROID_TRANSITION_SIDEPROPAGATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::transition { class SidePropagation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::transition::SidePropagation>
{
	static constexpr fixed_string class_name = "android/transition/SidePropagation";
	using base_classes = std::tuple<scapix::java_api::android::transition::VisibilityPropagation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TRANSITION_SIDEPROPAGATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TRANSITION_SIDEPROPAGATION)
#define SCAPIX_JAVA_API_ANDROID_TRANSITION_SIDEPROPAGATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/transition/Transition.h>
#include <scapix/java_api/android/transition/TransitionValues.h>
#include <scapix/java_api/android/view/ViewGroup.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::transition::SidePropagation : public jni::object_base<"android/transition/SidePropagation",
	android::transition::VisibilityPropagation>
{
public:

	static jni::ref<android::transition::SidePropagation> new_object() { return base_::new_object(); }
	void setSide(jint side) { return call_method<"setSide", void>(side); }
	void setPropagationSpeed(jfloat propagationSpeed) { return call_method<"setPropagationSpeed", void>(propagationSpeed); }
	jlong getStartDelay(jni::ref<android::view::ViewGroup> sceneRoot, jni::ref<android::transition::Transition> transition, jni::ref<android::transition::TransitionValues> startValues, jni::ref<android::transition::TransitionValues> endValues) { return call_method<"getStartDelay", jlong>(sceneRoot, transition, startValues, endValues); }

protected:

	SidePropagation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TRANSITION_SIDEPROPAGATION
