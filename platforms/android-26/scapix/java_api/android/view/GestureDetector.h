// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_GESTUREDETECTOR_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_GESTUREDETECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class GestureDetector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::GestureDetector>
{
	static constexpr fixed_string class_name = "android/view/GestureDetector";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_GESTUREDETECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_GESTUREDETECTOR)
#define SCAPIX_JAVA_API_ANDROID_VIEW_GESTUREDETECTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/view/GestureDetector_OnContextClickListener.h>
#include <scapix/java_api/android/view/GestureDetector_OnDoubleTapListener.h>
#include <scapix/java_api/android/view/GestureDetector_OnGestureListener.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/GestureDetector_SimpleOnGestureListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::GestureDetector : public jni::object_base<"android/view/GestureDetector",
	java::lang::Object>
{
public:

	using SimpleOnGestureListener = GestureDetector_SimpleOnGestureListener;
	using OnContextClickListener = GestureDetector_OnContextClickListener;
	using OnDoubleTapListener = GestureDetector_OnDoubleTapListener;
	using OnGestureListener = GestureDetector_OnGestureListener;

	static jni::ref<android::view::GestureDetector> new_object(jni::ref<android::view::GestureDetector_OnGestureListener> listener, jni::ref<android::os::Handler> handler) { return base_::new_object(listener, handler); }
	static jni::ref<android::view::GestureDetector> new_object(jni::ref<android::view::GestureDetector_OnGestureListener> listener) { return base_::new_object(listener); }
	static jni::ref<android::view::GestureDetector> new_object(jni::ref<android::content::Context> context, jni::ref<android::view::GestureDetector_OnGestureListener> listener) { return base_::new_object(context, listener); }
	static jni::ref<android::view::GestureDetector> new_object(jni::ref<android::content::Context> context, jni::ref<android::view::GestureDetector_OnGestureListener> listener, jni::ref<android::os::Handler> handler) { return base_::new_object(context, listener, handler); }
	static jni::ref<android::view::GestureDetector> new_object(jni::ref<android::content::Context> context, jni::ref<android::view::GestureDetector_OnGestureListener> listener, jni::ref<android::os::Handler> handler, jboolean unused) { return base_::new_object(context, listener, handler, unused); }
	void setOnDoubleTapListener(jni::ref<android::view::GestureDetector_OnDoubleTapListener> onDoubleTapListener) { return call_method<"setOnDoubleTapListener", void>(onDoubleTapListener); }
	void setContextClickListener(jni::ref<android::view::GestureDetector_OnContextClickListener> onContextClickListener) { return call_method<"setContextClickListener", void>(onContextClickListener); }
	void setIsLongpressEnabled(jboolean isLongpressEnabled) { return call_method<"setIsLongpressEnabled", void>(isLongpressEnabled); }
	jboolean isLongpressEnabled() { return call_method<"isLongpressEnabled", jboolean>(); }
	jboolean onTouchEvent(jni::ref<android::view::MotionEvent> ev) { return call_method<"onTouchEvent", jboolean>(ev); }
	jboolean onGenericMotionEvent(jni::ref<android::view::MotionEvent> ev) { return call_method<"onGenericMotionEvent", jboolean>(ev); }

protected:

	GestureDetector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_GESTUREDETECTOR
