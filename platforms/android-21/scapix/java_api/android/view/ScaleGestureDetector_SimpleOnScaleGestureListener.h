// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/view/ScaleGestureDetector_OnScaleGestureListener.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_SCALEGESTUREDETECTOR_SIMPLEONSCALEGESTURELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_SCALEGESTUREDETECTOR_SIMPLEONSCALEGESTURELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class ScaleGestureDetector_SimpleOnScaleGestureListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::ScaleGestureDetector_SimpleOnScaleGestureListener>
{
	static constexpr fixed_string class_name = "android/view/ScaleGestureDetector$SimpleOnScaleGestureListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::view::ScaleGestureDetector_OnScaleGestureListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SCALEGESTUREDETECTOR_SIMPLEONSCALEGESTURELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_SCALEGESTUREDETECTOR_SIMPLEONSCALEGESTURELISTENER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_SCALEGESTUREDETECTOR_SIMPLEONSCALEGESTURELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/ScaleGestureDetector.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::ScaleGestureDetector_SimpleOnScaleGestureListener : public jni::object_base<"android/view/ScaleGestureDetector$SimpleOnScaleGestureListener",
	java::lang::Object,
	android::view::ScaleGestureDetector_OnScaleGestureListener>
{
public:

	static jni::ref<android::view::ScaleGestureDetector_SimpleOnScaleGestureListener> new_object() { return base_::new_object(); }
	jboolean onScale(jni::ref<android::view::ScaleGestureDetector> detector) { return call_method<"onScale", jboolean>(detector); }
	jboolean onScaleBegin(jni::ref<android::view::ScaleGestureDetector> detector) { return call_method<"onScaleBegin", jboolean>(detector); }
	void onScaleEnd(jni::ref<android::view::ScaleGestureDetector> detector) { return call_method<"onScaleEnd", void>(detector); }

protected:

	ScaleGestureDetector_SimpleOnScaleGestureListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SCALEGESTUREDETECTOR_SIMPLEONSCALEGESTURELISTENER