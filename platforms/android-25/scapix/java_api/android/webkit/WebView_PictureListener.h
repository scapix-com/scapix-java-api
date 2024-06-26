// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_PICTURELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_PICTURELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class WebView_PictureListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::WebView_PictureListener>
{
	static constexpr fixed_string class_name = "android/webkit/WebView$PictureListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_PICTURELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_PICTURELISTENER)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_PICTURELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Picture.h>
#include <scapix/java_api/android/webkit/WebView.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::WebView_PictureListener : public jni::object_base<"android/webkit/WebView$PictureListener",
	java::lang::Object>
{
public:

	void onNewPicture(jni::ref<android::webkit::WebView> p1, jni::ref<android::graphics::Picture> p2) { return call_method<"onNewPicture", void>(p1, p2); }

protected:

	WebView_PictureListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_PICTURELISTENER
