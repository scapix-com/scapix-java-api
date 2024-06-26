// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_SCALEGESTUREDETECTOR_ONSCALEGESTURELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_SCALEGESTUREDETECTOR_ONSCALEGESTURELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class ScaleGestureDetector_OnScaleGestureListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::ScaleGestureDetector_OnScaleGestureListener>
{
	static constexpr fixed_string class_name = "android/view/ScaleGestureDetector$OnScaleGestureListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SCALEGESTUREDETECTOR_ONSCALEGESTURELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_SCALEGESTUREDETECTOR_ONSCALEGESTURELISTENER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_SCALEGESTUREDETECTOR_ONSCALEGESTURELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/ScaleGestureDetector.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::ScaleGestureDetector_OnScaleGestureListener : public jni::object_base<"android/view/ScaleGestureDetector$OnScaleGestureListener",
	java::lang::Object>
{
public:

	jboolean onScale(jni::ref<android::view::ScaleGestureDetector> p1) { return call_method<"onScale", jboolean>(p1); }
	jboolean onScaleBegin(jni::ref<android::view::ScaleGestureDetector> p1) { return call_method<"onScaleBegin", jboolean>(p1); }
	void onScaleEnd(jni::ref<android::view::ScaleGestureDetector> p1) { return call_method<"onScaleEnd", void>(p1); }

protected:

	ScaleGestureDetector_OnScaleGestureListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SCALEGESTUREDETECTOR_ONSCALEGESTURELISTENER
