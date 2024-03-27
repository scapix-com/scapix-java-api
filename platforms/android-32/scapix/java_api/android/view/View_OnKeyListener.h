// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONKEYLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONKEYLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class View_OnKeyListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::View_OnKeyListener>
{
	static constexpr fixed_string class_name = "android/view/View$OnKeyListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONKEYLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONKEYLISTENER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONKEYLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/View.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::View_OnKeyListener : public jni::object_base<"android/view/View$OnKeyListener",
	java::lang::Object>
{
public:

	jboolean onKey(jni::ref<android::view::View> p1, jint p2, jni::ref<android::view::KeyEvent> p3) { return call_method<"onKey", jboolean>(p1, p2, p3); }

protected:

	View_OnKeyListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONKEYLISTENER
