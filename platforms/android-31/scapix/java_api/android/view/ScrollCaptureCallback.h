// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_SCROLLCAPTURECALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_SCROLLCAPTURECALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class ScrollCaptureCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::ScrollCaptureCallback>
{
	static constexpr fixed_string class_name = "android/view/ScrollCaptureCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SCROLLCAPTURECALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_SCROLLCAPTURECALLBACK)
#define SCAPIX_JAVA_API_ANDROID_VIEW_SCROLLCAPTURECALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/os/CancellationSignal.h>
#include <scapix/java_api/android/view/ScrollCaptureSession.h>
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::ScrollCaptureCallback : public jni::object_base<"android/view/ScrollCaptureCallback",
	java::lang::Object>
{
public:

	void onScrollCaptureSearch(jni::ref<android::os::CancellationSignal> p1, jni::ref<java::util::function::Consumer> p2) { return call_method<"onScrollCaptureSearch", void>(p1, p2); }
	void onScrollCaptureStart(jni::ref<android::view::ScrollCaptureSession> p1, jni::ref<android::os::CancellationSignal> p2, jni::ref<java::lang::Runnable> p3) { return call_method<"onScrollCaptureStart", void>(p1, p2, p3); }
	void onScrollCaptureImageRequest(jni::ref<android::view::ScrollCaptureSession> p1, jni::ref<android::os::CancellationSignal> p2, jni::ref<android::graphics::Rect> p3, jni::ref<java::util::function::Consumer> p4) { return call_method<"onScrollCaptureImageRequest", void>(p1, p2, p3, p4); }
	void onScrollCaptureEnd(jni::ref<java::lang::Runnable> p1) { return call_method<"onScrollCaptureEnd", void>(p1); }

protected:

	ScrollCaptureCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SCROLLCAPTURECALLBACK
