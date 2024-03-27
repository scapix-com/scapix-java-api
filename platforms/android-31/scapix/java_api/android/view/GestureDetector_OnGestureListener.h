// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_GESTUREDETECTOR_ONGESTURELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_GESTUREDETECTOR_ONGESTURELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class GestureDetector_OnGestureListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::GestureDetector_OnGestureListener>
{
	static constexpr fixed_string class_name = "android/view/GestureDetector$OnGestureListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_GESTUREDETECTOR_ONGESTURELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_GESTUREDETECTOR_ONGESTURELISTENER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_GESTUREDETECTOR_ONGESTURELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/MotionEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::GestureDetector_OnGestureListener : public jni::object_base<"android/view/GestureDetector$OnGestureListener",
	java::lang::Object>
{
public:

	jboolean onDown(jni::ref<android::view::MotionEvent> p1) { return call_method<"onDown", jboolean>(p1); }
	void onShowPress(jni::ref<android::view::MotionEvent> p1) { return call_method<"onShowPress", void>(p1); }
	jboolean onSingleTapUp(jni::ref<android::view::MotionEvent> p1) { return call_method<"onSingleTapUp", jboolean>(p1); }
	jboolean onScroll(jni::ref<android::view::MotionEvent> p1, jni::ref<android::view::MotionEvent> p2, jfloat p3, jfloat p4) { return call_method<"onScroll", jboolean>(p1, p2, p3, p4); }
	void onLongPress(jni::ref<android::view::MotionEvent> p1) { return call_method<"onLongPress", void>(p1); }
	jboolean onFling(jni::ref<android::view::MotionEvent> p1, jni::ref<android::view::MotionEvent> p2, jfloat p3, jfloat p4) { return call_method<"onFling", jboolean>(p1, p2, p3, p4); }

protected:

	GestureDetector_OnGestureListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_GESTUREDETECTOR_ONGESTURELISTENER