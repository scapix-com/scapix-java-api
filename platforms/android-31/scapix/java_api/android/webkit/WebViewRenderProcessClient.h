// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEWRENDERPROCESSCLIENT_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEWRENDERPROCESSCLIENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class WebViewRenderProcessClient; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::WebViewRenderProcessClient>
{
	static constexpr fixed_string class_name = "android/webkit/WebViewRenderProcessClient";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEWRENDERPROCESSCLIENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEWRENDERPROCESSCLIENT)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEWRENDERPROCESSCLIENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/webkit/WebView.h>
#include <scapix/java_api/android/webkit/WebViewRenderProcess.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::WebViewRenderProcessClient : public jni::object_base<"android/webkit/WebViewRenderProcessClient",
	java::lang::Object>
{
public:

	static jni::ref<android::webkit::WebViewRenderProcessClient> new_object() { return base_::new_object(); }
	void onRenderProcessUnresponsive(jni::ref<android::webkit::WebView> p1, jni::ref<android::webkit::WebViewRenderProcess> p2) { return call_method<"onRenderProcessUnresponsive", void>(p1, p2); }
	void onRenderProcessResponsive(jni::ref<android::webkit::WebView> p1, jni::ref<android::webkit::WebViewRenderProcess> p2) { return call_method<"onRenderProcessResponsive", void>(p1, p2); }

protected:

	WebViewRenderProcessClient(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEWRENDERPROCESSCLIENT
