// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONCLICKLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONCLICKLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class View_OnClickListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::View_OnClickListener>
{
	static constexpr fixed_string class_name = "android/view/View$OnClickListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONCLICKLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONCLICKLISTENER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONCLICKLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/View.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::View_OnClickListener : public jni::object_base<"android/view/View$OnClickListener",
	java::lang::Object>
{
public:

	void onClick(jni::ref<android::view::View> p1) { return call_method<"onClick", void>(p1); }

protected:

	View_OnClickListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_ONCLICKLISTENER
