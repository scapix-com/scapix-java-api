// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ANIMATION_LAYOUTTRANSITION_TRANSITIONLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_ANIMATION_LAYOUTTRANSITION_TRANSITIONLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::animation { class LayoutTransition_TransitionListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::animation::LayoutTransition_TransitionListener>
{
	static constexpr fixed_string class_name = "android/animation/LayoutTransition$TransitionListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ANIMATION_LAYOUTTRANSITION_TRANSITIONLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ANIMATION_LAYOUTTRANSITION_TRANSITIONLISTENER)
#define SCAPIX_JAVA_API_ANDROID_ANIMATION_LAYOUTTRANSITION_TRANSITIONLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/animation/LayoutTransition.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::animation::LayoutTransition_TransitionListener : public jni::object_base<"android/animation/LayoutTransition$TransitionListener",
	java::lang::Object>
{
public:

	void startTransition(jni::ref<android::animation::LayoutTransition> p1, jni::ref<android::view::ViewGroup> p2, jni::ref<android::view::View> p3, jint p4) { return call_method<"startTransition", void>(p1, p2, p3, p4); }
	void endTransition(jni::ref<android::animation::LayoutTransition> p1, jni::ref<android::view::ViewGroup> p2, jni::ref<android::view::View> p3, jint p4) { return call_method<"endTransition", void>(p1, p2, p3, p4); }

protected:

	LayoutTransition_TransitionListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ANIMATION_LAYOUTTRANSITION_TRANSITIONLISTENER
