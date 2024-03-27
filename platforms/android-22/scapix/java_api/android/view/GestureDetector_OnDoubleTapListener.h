// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_GESTUREDETECTOR_ONDOUBLETAPLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_GESTUREDETECTOR_ONDOUBLETAPLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class GestureDetector_OnDoubleTapListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::GestureDetector_OnDoubleTapListener>
{
	static constexpr fixed_string class_name = "android/view/GestureDetector$OnDoubleTapListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_GESTUREDETECTOR_ONDOUBLETAPLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_GESTUREDETECTOR_ONDOUBLETAPLISTENER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_GESTUREDETECTOR_ONDOUBLETAPLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/MotionEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::GestureDetector_OnDoubleTapListener : public jni::object_base<"android/view/GestureDetector$OnDoubleTapListener",
	java::lang::Object>
{
public:

	jboolean onSingleTapConfirmed(jni::ref<android::view::MotionEvent> p1) { return call_method<"onSingleTapConfirmed", jboolean>(p1); }
	jboolean onDoubleTap(jni::ref<android::view::MotionEvent> p1) { return call_method<"onDoubleTap", jboolean>(p1); }
	jboolean onDoubleTapEvent(jni::ref<android::view::MotionEvent> p1) { return call_method<"onDoubleTapEvent", jboolean>(p1); }

protected:

	GestureDetector_OnDoubleTapListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_GESTUREDETECTOR_ONDOUBLETAPLISTENER
