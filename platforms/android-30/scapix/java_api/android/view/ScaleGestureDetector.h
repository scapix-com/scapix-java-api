// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_SCALEGESTUREDETECTOR_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_SCALEGESTUREDETECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class ScaleGestureDetector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::ScaleGestureDetector>
{
	static constexpr fixed_string class_name = "android/view/ScaleGestureDetector";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SCALEGESTUREDETECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_SCALEGESTUREDETECTOR)
#define SCAPIX_JAVA_API_ANDROID_VIEW_SCALEGESTUREDETECTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/ScaleGestureDetector_OnScaleGestureListener.h>
#include <scapix/java_api/android/view/ScaleGestureDetector_SimpleOnScaleGestureListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::ScaleGestureDetector : public jni::object_base<"android/view/ScaleGestureDetector",
	java::lang::Object>
{
public:

	using SimpleOnScaleGestureListener = ScaleGestureDetector_SimpleOnScaleGestureListener;
	using OnScaleGestureListener = ScaleGestureDetector_OnScaleGestureListener;

	static jni::ref<android::view::ScaleGestureDetector> new_object(jni::ref<android::content::Context> context, jni::ref<android::view::ScaleGestureDetector_OnScaleGestureListener> listener) { return base_::new_object(context, listener); }
	static jni::ref<android::view::ScaleGestureDetector> new_object(jni::ref<android::content::Context> context, jni::ref<android::view::ScaleGestureDetector_OnScaleGestureListener> listener, jni::ref<android::os::Handler> handler) { return base_::new_object(context, listener, handler); }
	jboolean onTouchEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTouchEvent", jboolean>(event); }
	void setQuickScaleEnabled(jboolean scales) { return call_method<"setQuickScaleEnabled", void>(scales); }
	jboolean isQuickScaleEnabled() { return call_method<"isQuickScaleEnabled", jboolean>(); }
	void setStylusScaleEnabled(jboolean scales) { return call_method<"setStylusScaleEnabled", void>(scales); }
	jboolean isStylusScaleEnabled() { return call_method<"isStylusScaleEnabled", jboolean>(); }
	jboolean isInProgress() { return call_method<"isInProgress", jboolean>(); }
	jfloat getFocusX() { return call_method<"getFocusX", jfloat>(); }
	jfloat getFocusY() { return call_method<"getFocusY", jfloat>(); }
	jfloat getCurrentSpan() { return call_method<"getCurrentSpan", jfloat>(); }
	jfloat getCurrentSpanX() { return call_method<"getCurrentSpanX", jfloat>(); }
	jfloat getCurrentSpanY() { return call_method<"getCurrentSpanY", jfloat>(); }
	jfloat getPreviousSpan() { return call_method<"getPreviousSpan", jfloat>(); }
	jfloat getPreviousSpanX() { return call_method<"getPreviousSpanX", jfloat>(); }
	jfloat getPreviousSpanY() { return call_method<"getPreviousSpanY", jfloat>(); }
	jfloat getScaleFactor() { return call_method<"getScaleFactor", jfloat>(); }
	jlong getTimeDelta() { return call_method<"getTimeDelta", jlong>(); }
	jlong getEventTime() { return call_method<"getEventTime", jlong>(); }

protected:

	ScaleGestureDetector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SCALEGESTUREDETECTOR
