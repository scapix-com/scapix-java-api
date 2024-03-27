// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONSCROLLCHANGELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONSCROLLCHANGELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class View_OnScrollChangeListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::View_OnScrollChangeListener>
{
	static constexpr fixed_string class_name = "android/view/View$OnScrollChangeListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONSCROLLCHANGELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONSCROLLCHANGELISTENER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONSCROLLCHANGELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/View.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::View_OnScrollChangeListener : public jni::object_base<"android/view/View$OnScrollChangeListener",
	java::lang::Object>
{
public:

	void onScrollChange(jni::ref<android::view::View> p1, jint p2, jint p3, jint p4, jint p5) { return call_method<"onScrollChange", void>(p1, p2, p3, p4, p5); }

protected:

	View_OnScrollChangeListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONSCROLLCHANGELISTENER
