// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_WEBVIEWTRANSPORT_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_WEBVIEWTRANSPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class WebView_WebViewTransport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::WebView_WebViewTransport>
{
	static constexpr fixed_string class_name = "android/webkit/WebView$WebViewTransport";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_WEBVIEWTRANSPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_WEBVIEWTRANSPORT)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_WEBVIEWTRANSPORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/webkit/WebView.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::WebView_WebViewTransport : public jni::object_base<"android/webkit/WebView$WebViewTransport",
	java::lang::Object>
{
public:

	static jni::ref<android::webkit::WebView_WebViewTransport> new_object(jni::ref<android::webkit::WebView> this_0) { return base_::new_object(this_0); }
	void setWebView(jni::ref<android::webkit::WebView> webview) { return call_method<"setWebView", void>(webview); }
	jni::ref<android::webkit::WebView> getWebView() { return call_method<"getWebView", jni::ref<android::webkit::WebView>>(); }

protected:

	WebView_WebViewTransport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_WEBVIEWTRANSPORT
