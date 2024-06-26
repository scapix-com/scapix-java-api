// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONCAPTUREDPOINTERLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONCAPTUREDPOINTERLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class View_OnCapturedPointerListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::View_OnCapturedPointerListener>
{
	static constexpr fixed_string class_name = "android/view/View$OnCapturedPointerListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONCAPTUREDPOINTERLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONCAPTUREDPOINTERLISTENER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONCAPTUREDPOINTERLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/View.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::View_OnCapturedPointerListener : public jni::object_base<"android/view/View$OnCapturedPointerListener",
	java::lang::Object>
{
public:

	jboolean onCapturedPointer(jni::ref<android::view::View> p1, jni::ref<android::view::MotionEvent> p2) { return call_method<"onCapturedPointer", jboolean>(p1, p2); }

protected:

	View_OnCapturedPointerListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONCAPTUREDPOINTERLISTENER
