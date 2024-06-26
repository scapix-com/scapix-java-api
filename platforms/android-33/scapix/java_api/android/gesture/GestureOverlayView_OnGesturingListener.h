// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GESTURE_GESTUREOVERLAYVIEW_ONGESTURINGLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_GESTURE_GESTUREOVERLAYVIEW_ONGESTURINGLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::gesture { class GestureOverlayView_OnGesturingListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::gesture::GestureOverlayView_OnGesturingListener>
{
	static constexpr fixed_string class_name = "android/gesture/GestureOverlayView$OnGesturingListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GESTURE_GESTUREOVERLAYVIEW_ONGESTURINGLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GESTURE_GESTUREOVERLAYVIEW_ONGESTURINGLISTENER)
#define SCAPIX_JAVA_API_ANDROID_GESTURE_GESTUREOVERLAYVIEW_ONGESTURINGLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/gesture/GestureOverlayView.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::gesture::GestureOverlayView_OnGesturingListener : public jni::object_base<"android/gesture/GestureOverlayView$OnGesturingListener",
	java::lang::Object>
{
public:

	void onGesturingStarted(jni::ref<android::gesture::GestureOverlayView> p1) { return call_method<"onGesturingStarted", void>(p1); }
	void onGesturingEnded(jni::ref<android::gesture::GestureOverlayView> p1) { return call_method<"onGesturingEnded", void>(p1); }

protected:

	GestureOverlayView_OnGesturingListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GESTURE_GESTUREOVERLAYVIEW_ONGESTURINGLISTENER
