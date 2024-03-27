// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEWCLIENT_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEWCLIENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class WebViewClient; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::WebViewClient>
{
	static constexpr fixed_string class_name = "android/webkit/WebViewClient";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEWCLIENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEWCLIENT)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEWCLIENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/net/http/SslError.h>
#include <scapix/java_api/android/os/Message.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/webkit/ClientCertRequest.h>
#include <scapix/java_api/android/webkit/HttpAuthHandler.h>
#include <scapix/java_api/android/webkit/RenderProcessGoneDetail.h>
#include <scapix/java_api/android/webkit/SafeBrowsingResponse.h>
#include <scapix/java_api/android/webkit/SslErrorHandler.h>
#include <scapix/java_api/android/webkit/WebResourceError.h>
#include <scapix/java_api/android/webkit/WebResourceRequest.h>
#include <scapix/java_api/android/webkit/WebResourceResponse.h>
#include <scapix/java_api/android/webkit/WebView.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::WebViewClient : public jni::object_base<"android/webkit/WebViewClient",
	java::lang::Object>
{
public:

	static jint ERROR_AUTHENTICATION() { return get_static_field<"ERROR_AUTHENTICATION", jint>(); }
	static jint ERROR_BAD_URL() { return get_static_field<"ERROR_BAD_URL", jint>(); }
	static jint ERROR_CONNECT() { return get_static_field<"ERROR_CONNECT", jint>(); }
	static jint ERROR_FAILED_SSL_HANDSHAKE() { return get_static_field<"ERROR_FAILED_SSL_HANDSHAKE", jint>(); }
	static jint ERROR_FILE() { return get_static_field<"ERROR_FILE", jint>(); }
	static jint ERROR_FILE_NOT_FOUND() { return get_static_field<"ERROR_FILE_NOT_FOUND", jint>(); }
	static jint ERROR_HOST_LOOKUP() { return get_static_field<"ERROR_HOST_LOOKUP", jint>(); }
	static jint ERROR_IO() { return get_static_field<"ERROR_IO", jint>(); }
	static jint ERROR_PROXY_AUTHENTICATION() { return get_static_field<"ERROR_PROXY_AUTHENTICATION", jint>(); }
	static jint ERROR_REDIRECT_LOOP() { return get_static_field<"ERROR_REDIRECT_LOOP", jint>(); }
	static jint ERROR_TIMEOUT() { return get_static_field<"ERROR_TIMEOUT", jint>(); }
	static jint ERROR_TOO_MANY_REQUESTS() { return get_static_field<"ERROR_TOO_MANY_REQUESTS", jint>(); }
	static jint ERROR_UNKNOWN() { return get_static_field<"ERROR_UNKNOWN", jint>(); }
	static jint ERROR_UNSAFE_RESOURCE() { return get_static_field<"ERROR_UNSAFE_RESOURCE", jint>(); }
	static jint ERROR_UNSUPPORTED_AUTH_SCHEME() { return get_static_field<"ERROR_UNSUPPORTED_AUTH_SCHEME", jint>(); }
	static jint ERROR_UNSUPPORTED_SCHEME() { return get_static_field<"ERROR_UNSUPPORTED_SCHEME", jint>(); }
	static jint SAFE_BROWSING_THREAT_MALWARE() { return get_static_field<"SAFE_BROWSING_THREAT_MALWARE", jint>(); }
	static jint SAFE_BROWSING_THREAT_PHISHING() { return get_static_field<"SAFE_BROWSING_THREAT_PHISHING", jint>(); }
	static jint SAFE_BROWSING_THREAT_UNKNOWN() { return get_static_field<"SAFE_BROWSING_THREAT_UNKNOWN", jint>(); }
	static jint SAFE_BROWSING_THREAT_UNWANTED_SOFTWARE() { return get_static_field<"SAFE_BROWSING_THREAT_UNWANTED_SOFTWARE", jint>(); }

	static jni::ref<android::webkit::WebViewClient> new_object() { return base_::new_object(); }
	jboolean shouldOverrideUrlLoading(jni::ref<android::webkit::WebView> view, jni::ref<java::lang::String> url) { return call_method<"shouldOverrideUrlLoading", jboolean>(view, url); }
	jboolean shouldOverrideUrlLoading(jni::ref<android::webkit::WebView> view, jni::ref<android::webkit::WebResourceRequest> request) { return call_method<"shouldOverrideUrlLoading", jboolean>(view, request); }
	void onPageStarted(jni::ref<android::webkit::WebView> view, jni::ref<java::lang::String> url, jni::ref<android::graphics::Bitmap> favicon) { return call_method<"onPageStarted", void>(view, url, favicon); }
	void onPageFinished(jni::ref<android::webkit::WebView> view, jni::ref<java::lang::String> url) { return call_method<"onPageFinished", void>(view, url); }
	void onLoadResource(jni::ref<android::webkit::WebView> view, jni::ref<java::lang::String> url) { return call_method<"onLoadResource", void>(view, url); }
	void onPageCommitVisible(jni::ref<android::webkit::WebView> view, jni::ref<java::lang::String> url) { return call_method<"onPageCommitVisible", void>(view, url); }
	jni::ref<android::webkit::WebResourceResponse> shouldInterceptRequest(jni::ref<android::webkit::WebView> view, jni::ref<java::lang::String> url) { return call_method<"shouldInterceptRequest", jni::ref<android::webkit::WebResourceResponse>>(view, url); }
	jni::ref<android::webkit::WebResourceResponse> shouldInterceptRequest(jni::ref<android::webkit::WebView> view, jni::ref<android::webkit::WebResourceRequest> request) { return call_method<"shouldInterceptRequest", jni::ref<android::webkit::WebResourceResponse>>(view, request); }
	void onTooManyRedirects(jni::ref<android::webkit::WebView> view, jni::ref<android::os::Message> cancelMsg, jni::ref<android::os::Message> continueMsg) { return call_method<"onTooManyRedirects", void>(view, cancelMsg, continueMsg); }
	void onReceivedError(jni::ref<android::webkit::WebView> view, jint errorCode, jni::ref<java::lang::String> description, jni::ref<java::lang::String> failingUrl) { return call_method<"onReceivedError", void>(view, errorCode, description, failingUrl); }
	void onReceivedError(jni::ref<android::webkit::WebView> view, jni::ref<android::webkit::WebResourceRequest> request, jni::ref<android::webkit::WebResourceError> error) { return call_method<"onReceivedError", void>(view, request, error); }
	void onReceivedHttpError(jni::ref<android::webkit::WebView> view, jni::ref<android::webkit::WebResourceRequest> request, jni::ref<android::webkit::WebResourceResponse> errorResponse) { return call_method<"onReceivedHttpError", void>(view, request, errorResponse); }
	void onFormResubmission(jni::ref<android::webkit::WebView> view, jni::ref<android::os::Message> dontResend, jni::ref<android::os::Message> resend) { return call_method<"onFormResubmission", void>(view, dontResend, resend); }
	void doUpdateVisitedHistory(jni::ref<android::webkit::WebView> view, jni::ref<java::lang::String> url, jboolean isReload) { return call_method<"doUpdateVisitedHistory", void>(view, url, isReload); }
	void onReceivedSslError(jni::ref<android::webkit::WebView> view, jni::ref<android::webkit::SslErrorHandler> handler, jni::ref<android::net::http::SslError> error) { return call_method<"onReceivedSslError", void>(view, handler, error); }
	void onReceivedClientCertRequest(jni::ref<android::webkit::WebView> view, jni::ref<android::webkit::ClientCertRequest> request) { return call_method<"onReceivedClientCertRequest", void>(view, request); }
	void onReceivedHttpAuthRequest(jni::ref<android::webkit::WebView> view, jni::ref<android::webkit::HttpAuthHandler> handler, jni::ref<java::lang::String> host, jni::ref<java::lang::String> realm) { return call_method<"onReceivedHttpAuthRequest", void>(view, handler, host, realm); }
	jboolean shouldOverrideKeyEvent(jni::ref<android::webkit::WebView> view, jni::ref<android::view::KeyEvent> event) { return call_method<"shouldOverrideKeyEvent", jboolean>(view, event); }
	void onUnhandledKeyEvent(jni::ref<android::webkit::WebView> view, jni::ref<android::view::KeyEvent> event) { return call_method<"onUnhandledKeyEvent", void>(view, event); }
	void onScaleChanged(jni::ref<android::webkit::WebView> view, jfloat oldScale, jfloat newScale) { return call_method<"onScaleChanged", void>(view, oldScale, newScale); }
	void onReceivedLoginRequest(jni::ref<android::webkit::WebView> view, jni::ref<java::lang::String> realm, jni::ref<java::lang::String> account, jni::ref<java::lang::String> args) { return call_method<"onReceivedLoginRequest", void>(view, realm, account, args); }
	jboolean onRenderProcessGone(jni::ref<android::webkit::WebView> view, jni::ref<android::webkit::RenderProcessGoneDetail> detail) { return call_method<"onRenderProcessGone", jboolean>(view, detail); }
	void onSafeBrowsingHit(jni::ref<android::webkit::WebView> view, jni::ref<android::webkit::WebResourceRequest> request, jint threatType, jni::ref<android::webkit::SafeBrowsingResponse> callback) { return call_method<"onSafeBrowsingHit", void>(view, request, threatType, callback); }

protected:

	WebViewClient(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEWCLIENT