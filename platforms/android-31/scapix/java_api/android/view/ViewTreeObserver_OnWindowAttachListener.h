// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_VIEWTREEOBSERVER_ONWINDOWATTACHLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEWTREEOBSERVER_ONWINDOWATTACHLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class ViewTreeObserver_OnWindowAttachListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::ViewTreeObserver_OnWindowAttachListener>
{
	static constexpr fixed_string class_name = "android/view/ViewTreeObserver$OnWindowAttachListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEWTREEOBSERVER_ONWINDOWATTACHLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_VIEWTREEOBSERVER_ONWINDOWATTACHLISTENER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEWTREEOBSERVER_ONWINDOWATTACHLISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::ViewTreeObserver_OnWindowAttachListener : public jni::object_base<"android/view/ViewTreeObserver$OnWindowAttachListener",
	java::lang::Object>
{
public:

	void onWindowAttached() { return call_method<"onWindowAttached", void>(); }
	void onWindowDetached() { return call_method<"onWindowDetached", void>(); }

protected:

	ViewTreeObserver_OnWindowAttachListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEWTREEOBSERVER_ONWINDOWATTACHLISTENER
