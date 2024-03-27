// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/AbsoluteLayout.h>
#include <scapix/java_api/android/view/ViewTreeObserver_OnGlobalFocusChangeListener.h>
#include <scapix/java_api/android/view/ViewGroup_OnHierarchyChangeListener.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class WebView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::WebView>
{
	static constexpr fixed_string class_name = "android/webkit/WebView";
	using base_classes = std::tuple<scapix::java_api::android::widget::AbsoluteLayout, scapix::java_api::android::view::ViewTreeObserver_OnGlobalFocusChangeListener, scapix::java_api::android::view::ViewGroup_OnHierarchyChangeListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/pm/PackageInfo.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/Paint.h>
#include <scapix/java_api/android/graphics/Picture.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/net/http/SslCertificate.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/os/Message.h>
#include <scapix/java_api/android/print/PrintDocumentAdapter.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/util/SparseArray.h>
#include <scapix/java_api/android/view/DragEvent.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup_LayoutParams.h>
#include <scapix/java_api/android/view/ViewStructure.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeProvider.h>
#include <scapix/java_api/android/view/inputmethod/EditorInfo.h>
#include <scapix/java_api/android/view/inputmethod/InputConnection.h>
#include <scapix/java_api/android/webkit/DownloadListener.h>
#include <scapix/java_api/android/webkit/ValueCallback.h>
#include <scapix/java_api/android/webkit/WebBackForwardList.h>
#include <scapix/java_api/android/webkit/WebChromeClient.h>
#include <scapix/java_api/android/webkit/WebMessage.h>
#include <scapix/java_api/android/webkit/WebMessagePort.h>
#include <scapix/java_api/android/webkit/WebSettings.h>
#include <scapix/java_api/android/webkit/WebView_FindListener.h>
#include <scapix/java_api/android/webkit/WebView_HitTestResult.h>
#include <scapix/java_api/android/webkit/WebView_PictureListener.h>
#include <scapix/java_api/android/webkit/WebView_VisualStateCallback.h>
#include <scapix/java_api/android/webkit/WebViewClient.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/android/webkit/WebView_WebViewTransport.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::WebView : public jni::object_base<"android/webkit/WebView",
	android::widget::AbsoluteLayout,
	android::view::ViewTreeObserver_OnGlobalFocusChangeListener,
	android::view::ViewGroup_OnHierarchyChangeListener>
{
public:

	using HitTestResult = WebView_HitTestResult;
	using PictureListener = WebView_PictureListener;
	using VisualStateCallback = WebView_VisualStateCallback;
	using FindListener = WebView_FindListener;
	using WebViewTransport = WebView_WebViewTransport;

	static jint RENDERER_PRIORITY_BOUND() { return get_static_field<"RENDERER_PRIORITY_BOUND", jint>(); }
	static jint RENDERER_PRIORITY_IMPORTANT() { return get_static_field<"RENDERER_PRIORITY_IMPORTANT", jint>(); }
	static jint RENDERER_PRIORITY_WAIVED() { return get_static_field<"RENDERER_PRIORITY_WAIVED", jint>(); }
	static jni::ref<java::lang::String> SCHEME_GEO() { return get_static_field<"SCHEME_GEO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCHEME_MAILTO() { return get_static_field<"SCHEME_MAILTO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCHEME_TEL() { return get_static_field<"SCHEME_TEL", jni::ref<java::lang::String>>(); }

	static jni::ref<android::webkit::WebView> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::webkit::WebView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::webkit::WebView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::webkit::WebView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	static jni::ref<android::webkit::WebView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jboolean privateBrowsing) { return base_::new_object(context, attrs, defStyleAttr, privateBrowsing); }
	void setHorizontalScrollbarOverlay(jboolean overlay) { return call_method<"setHorizontalScrollbarOverlay", void>(overlay); }
	void setVerticalScrollbarOverlay(jboolean overlay) { return call_method<"setVerticalScrollbarOverlay", void>(overlay); }
	jboolean overlayHorizontalScrollbar() { return call_method<"overlayHorizontalScrollbar", jboolean>(); }
	jboolean overlayVerticalScrollbar() { return call_method<"overlayVerticalScrollbar", jboolean>(); }
	jni::ref<android::net::http::SslCertificate> getCertificate() { return call_method<"getCertificate", jni::ref<android::net::http::SslCertificate>>(); }
	void setCertificate(jni::ref<android::net::http::SslCertificate> certificate) { return call_method<"setCertificate", void>(certificate); }
	void savePassword(jni::ref<java::lang::String> host, jni::ref<java::lang::String> username, jni::ref<java::lang::String> password) { return call_method<"savePassword", void>(host, username, password); }
	void setHttpAuthUsernamePassword(jni::ref<java::lang::String> host, jni::ref<java::lang::String> realm, jni::ref<java::lang::String> username, jni::ref<java::lang::String> password) { return call_method<"setHttpAuthUsernamePassword", void>(host, realm, username, password); }
	jni::ref<jni::array<java::lang::String>> getHttpAuthUsernamePassword(jni::ref<java::lang::String> host, jni::ref<java::lang::String> realm) { return call_method<"getHttpAuthUsernamePassword", jni::ref<jni::array<java::lang::String>>>(host, realm); }
	void destroy() { return call_method<"destroy", void>(); }
	void setNetworkAvailable(jboolean networkUp) { return call_method<"setNetworkAvailable", void>(networkUp); }
	jni::ref<android::webkit::WebBackForwardList> saveState(jni::ref<android::os::Bundle> outState) { return call_method<"saveState", jni::ref<android::webkit::WebBackForwardList>>(outState); }
	jni::ref<android::webkit::WebBackForwardList> restoreState(jni::ref<android::os::Bundle> inState) { return call_method<"restoreState", jni::ref<android::webkit::WebBackForwardList>>(inState); }
	void loadUrl(jni::ref<java::lang::String> url, jni::ref<java::util::Map> additionalHttpHeaders) { return call_method<"loadUrl", void>(url, additionalHttpHeaders); }
	void loadUrl(jni::ref<java::lang::String> url) { return call_method<"loadUrl", void>(url); }
	void postUrl(jni::ref<java::lang::String> url, jni::ref<jni::array<jbyte>> postData) { return call_method<"postUrl", void>(url, postData); }
	void loadData(jni::ref<java::lang::String> data, jni::ref<java::lang::String> mimeType, jni::ref<java::lang::String> encoding) { return call_method<"loadData", void>(data, mimeType, encoding); }
	void loadDataWithBaseURL(jni::ref<java::lang::String> baseUrl, jni::ref<java::lang::String> data, jni::ref<java::lang::String> mimeType, jni::ref<java::lang::String> encoding, jni::ref<java::lang::String> historyUrl) { return call_method<"loadDataWithBaseURL", void>(baseUrl, data, mimeType, encoding, historyUrl); }
	void evaluateJavascript(jni::ref<java::lang::String> script, jni::ref<android::webkit::ValueCallback> resultCallback) { return call_method<"evaluateJavascript", void>(script, resultCallback); }
	void saveWebArchive(jni::ref<java::lang::String> filename) { return call_method<"saveWebArchive", void>(filename); }
	void saveWebArchive(jni::ref<java::lang::String> basename, jboolean autoname, jni::ref<android::webkit::ValueCallback> callback) { return call_method<"saveWebArchive", void>(basename, autoname, callback); }
	void stopLoading() { return call_method<"stopLoading", void>(); }
	void reload() { return call_method<"reload", void>(); }
	jboolean canGoBack() { return call_method<"canGoBack", jboolean>(); }
	void goBack() { return call_method<"goBack", void>(); }
	jboolean canGoForward() { return call_method<"canGoForward", jboolean>(); }
	void goForward() { return call_method<"goForward", void>(); }
	jboolean canGoBackOrForward(jint steps) { return call_method<"canGoBackOrForward", jboolean>(steps); }
	void goBackOrForward(jint steps) { return call_method<"goBackOrForward", void>(steps); }
	jboolean isPrivateBrowsingEnabled() { return call_method<"isPrivateBrowsingEnabled", jboolean>(); }
	jboolean pageUp(jboolean top) { return call_method<"pageUp", jboolean>(top); }
	jboolean pageDown(jboolean bottom) { return call_method<"pageDown", jboolean>(bottom); }
	void postVisualStateCallback(jlong requestId, jni::ref<android::webkit::WebView_VisualStateCallback> p2) { return call_method<"postVisualStateCallback", void>(requestId, p2); }
	void clearView() { return call_method<"clearView", void>(); }
	jni::ref<android::graphics::Picture> capturePicture() { return call_method<"capturePicture", jni::ref<android::graphics::Picture>>(); }
	jni::ref<android::print::PrintDocumentAdapter> createPrintDocumentAdapter() { return call_method<"createPrintDocumentAdapter", jni::ref<android::print::PrintDocumentAdapter>>(); }
	jni::ref<android::print::PrintDocumentAdapter> createPrintDocumentAdapter(jni::ref<java::lang::String> documentName) { return call_method<"createPrintDocumentAdapter", jni::ref<android::print::PrintDocumentAdapter>>(documentName); }
	jfloat getScale() { return call_method<"getScale", jfloat>(); }
	void setInitialScale(jint scaleInPercent) { return call_method<"setInitialScale", void>(scaleInPercent); }
	void invokeZoomPicker() { return call_method<"invokeZoomPicker", void>(); }
	jni::ref<android::webkit::WebView_HitTestResult> getHitTestResult() { return call_method<"getHitTestResult", jni::ref<android::webkit::WebView_HitTestResult>>(); }
	void requestFocusNodeHref(jni::ref<android::os::Message> hrefMsg) { return call_method<"requestFocusNodeHref", void>(hrefMsg); }
	void requestImageRef(jni::ref<android::os::Message> msg) { return call_method<"requestImageRef", void>(msg); }
	jni::ref<java::lang::String> getUrl() { return call_method<"getUrl", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getOriginalUrl() { return call_method<"getOriginalUrl", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getTitle() { return call_method<"getTitle", jni::ref<java::lang::String>>(); }
	jni::ref<android::graphics::Bitmap> getFavicon() { return call_method<"getFavicon", jni::ref<android::graphics::Bitmap>>(); }
	jint getProgress() { return call_method<"getProgress", jint>(); }
	jint getContentHeight() { return call_method<"getContentHeight", jint>(); }
	void pauseTimers() { return call_method<"pauseTimers", void>(); }
	void resumeTimers() { return call_method<"resumeTimers", void>(); }
	void onPause() { return call_method<"onPause", void>(); }
	void onResume() { return call_method<"onResume", void>(); }
	void freeMemory() { return call_method<"freeMemory", void>(); }
	void clearCache(jboolean includeDiskFiles) { return call_method<"clearCache", void>(includeDiskFiles); }
	void clearFormData() { return call_method<"clearFormData", void>(); }
	void clearHistory() { return call_method<"clearHistory", void>(); }
	void clearSslPreferences() { return call_method<"clearSslPreferences", void>(); }
	static void clearClientCertPreferences(jni::ref<java::lang::Runnable> onCleared) { return call_static_method<"clearClientCertPreferences", void>(onCleared); }
	jni::ref<android::webkit::WebBackForwardList> copyBackForwardList() { return call_method<"copyBackForwardList", jni::ref<android::webkit::WebBackForwardList>>(); }
	void setFindListener(jni::ref<android::webkit::WebView_FindListener> listener) { return call_method<"setFindListener", void>(listener); }
	void findNext(jboolean forward) { return call_method<"findNext", void>(forward); }
	jint findAll(jni::ref<java::lang::String> find) { return call_method<"findAll", jint>(find); }
	void findAllAsync(jni::ref<java::lang::String> find) { return call_method<"findAllAsync", void>(find); }
	jboolean showFindDialog(jni::ref<java::lang::String> text, jboolean showIme) { return call_method<"showFindDialog", jboolean>(text, showIme); }
	static jni::ref<java::lang::String> findAddress(jni::ref<java::lang::String> addr) { return call_static_method<"findAddress", jni::ref<java::lang::String>>(addr); }
	static void enableSlowWholeDocumentDraw() { return call_static_method<"enableSlowWholeDocumentDraw", void>(); }
	void clearMatches() { return call_method<"clearMatches", void>(); }
	void documentHasImages(jni::ref<android::os::Message> response) { return call_method<"documentHasImages", void>(response); }
	void setWebViewClient(jni::ref<android::webkit::WebViewClient> client) { return call_method<"setWebViewClient", void>(client); }
	jni::ref<android::webkit::WebViewClient> getWebViewClient() { return call_method<"getWebViewClient", jni::ref<android::webkit::WebViewClient>>(); }
	void setDownloadListener(jni::ref<android::webkit::DownloadListener> listener) { return call_method<"setDownloadListener", void>(listener); }
	void setWebChromeClient(jni::ref<android::webkit::WebChromeClient> client) { return call_method<"setWebChromeClient", void>(client); }
	jni::ref<android::webkit::WebChromeClient> getWebChromeClient() { return call_method<"getWebChromeClient", jni::ref<android::webkit::WebChromeClient>>(); }
	void setPictureListener(jni::ref<android::webkit::WebView_PictureListener> listener) { return call_method<"setPictureListener", void>(listener); }
	void addJavascriptInterface(jni::ref<java::lang::Object> object, jni::ref<java::lang::String> name) { return call_method<"addJavascriptInterface", void>(object, name); }
	void removeJavascriptInterface(jni::ref<java::lang::String> name) { return call_method<"removeJavascriptInterface", void>(name); }
	jni::ref<jni::array<android::webkit::WebMessagePort>> createWebMessageChannel() { return call_method<"createWebMessageChannel", jni::ref<jni::array<android::webkit::WebMessagePort>>>(); }
	void postWebMessage(jni::ref<android::webkit::WebMessage> message, jni::ref<android::net::Uri> targetOrigin) { return call_method<"postWebMessage", void>(message, targetOrigin); }
	jni::ref<android::webkit::WebSettings> getSettings() { return call_method<"getSettings", jni::ref<android::webkit::WebSettings>>(); }
	static void setWebContentsDebuggingEnabled(jboolean enabled) { return call_static_method<"setWebContentsDebuggingEnabled", void>(enabled); }
	void onChildViewAdded(jni::ref<android::view::View> parent, jni::ref<android::view::View> child) { return call_method<"onChildViewAdded", void>(parent, child); }
	void onChildViewRemoved(jni::ref<android::view::View> p, jni::ref<android::view::View> child) { return call_method<"onChildViewRemoved", void>(p, child); }
	void onGlobalFocusChanged(jni::ref<android::view::View> oldFocus, jni::ref<android::view::View> newFocus) { return call_method<"onGlobalFocusChanged", void>(oldFocus, newFocus); }
	void setMapTrackballToArrowKeys(jboolean setMap) { return call_method<"setMapTrackballToArrowKeys", void>(setMap); }
	void flingScroll(jint vx, jint vy) { return call_method<"flingScroll", void>(vx, vy); }
	jboolean canZoomIn() { return call_method<"canZoomIn", jboolean>(); }
	jboolean canZoomOut() { return call_method<"canZoomOut", jboolean>(); }
	void zoomBy(jfloat zoomFactor) { return call_method<"zoomBy", void>(zoomFactor); }
	jboolean zoomIn() { return call_method<"zoomIn", jboolean>(); }
	jboolean zoomOut() { return call_method<"zoomOut", jboolean>(); }
	void setRendererPriorityPolicy(jint rendererRequestedPriority, jboolean waivedWhenNotVisible) { return call_method<"setRendererPriorityPolicy", void>(rendererRequestedPriority, waivedWhenNotVisible); }
	jint getRendererRequestedPriority() { return call_method<"getRendererRequestedPriority", jint>(); }
	jboolean getRendererPriorityWaivedWhenNotVisible() { return call_method<"getRendererPriorityWaivedWhenNotVisible", jboolean>(); }
	void setLayoutParams(jni::ref<android::view::ViewGroup_LayoutParams> params) { return call_method<"setLayoutParams", void>(params); }
	void setOverScrollMode(jint mode) { return call_method<"setOverScrollMode", void>(mode); }
	void setScrollBarStyle(jint style) { return call_method<"setScrollBarStyle", void>(style); }
	void computeScroll() { return call_method<"computeScroll", void>(); }
	jboolean onHoverEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onHoverEvent", jboolean>(event); }
	jboolean onTouchEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTouchEvent", jboolean>(event); }
	jboolean onGenericMotionEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onGenericMotionEvent", jboolean>(event); }
	jboolean onTrackballEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTrackballEvent", jboolean>(event); }
	jboolean onKeyDown(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyDown", jboolean>(keyCode, event); }
	jboolean onKeyUp(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyUp", jboolean>(keyCode, event); }
	jboolean onKeyMultiple(jint keyCode, jint repeatCount, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyMultiple", jboolean>(keyCode, repeatCount, event); }
	jni::ref<android::view::accessibility::AccessibilityNodeProvider> getAccessibilityNodeProvider() { return call_method<"getAccessibilityNodeProvider", jni::ref<android::view::accessibility::AccessibilityNodeProvider>>(); }
	jboolean shouldDelayChildPressedState() { return call_method<"shouldDelayChildPressedState", jboolean>(); }
	jni::ref<java::lang::CharSequence> getAccessibilityClassName() { return call_method<"getAccessibilityClassName", jni::ref<java::lang::CharSequence>>(); }
	void onProvideVirtualStructure(jni::ref<android::view::ViewStructure> structure) { return call_method<"onProvideVirtualStructure", void>(structure); }
	void onProvideAutofillVirtualStructure(jni::ref<android::view::ViewStructure> structure, jint flags) { return call_method<"onProvideAutofillVirtualStructure", void>(structure, flags); }
	void autofill(jni::ref<android::util::SparseArray> values) { return call_method<"autofill", void>(values); }
	jboolean performLongClick() { return call_method<"performLongClick", jboolean>(); }
	jni::ref<android::view::inputmethod::InputConnection> onCreateInputConnection(jni::ref<android::view::inputmethod::EditorInfo> outAttrs) { return call_method<"onCreateInputConnection", jni::ref<android::view::inputmethod::InputConnection>>(outAttrs); }
	jboolean onDragEvent(jni::ref<android::view::DragEvent> event) { return call_method<"onDragEvent", jboolean>(event); }
	void onWindowFocusChanged(jboolean hasWindowFocus) { return call_method<"onWindowFocusChanged", void>(hasWindowFocus); }
	jboolean dispatchKeyEvent(jni::ref<android::view::KeyEvent> event) { return call_method<"dispatchKeyEvent", jboolean>(event); }
	jboolean requestFocus(jint direction, jni::ref<android::graphics::Rect> previouslyFocusedRect) { return call_method<"requestFocus", jboolean>(direction, previouslyFocusedRect); }
	jboolean requestChildRectangleOnScreen(jni::ref<android::view::View> child, jni::ref<android::graphics::Rect> rect, jboolean immediate) { return call_method<"requestChildRectangleOnScreen", jboolean>(child, rect, immediate); }
	void setBackgroundColor(jint color) { return call_method<"setBackgroundColor", void>(color); }
	void setLayerType(jint layerType, jni::ref<android::graphics::Paint> paint) { return call_method<"setLayerType", void>(layerType, paint); }
	void onStartTemporaryDetach() { return call_method<"onStartTemporaryDetach", void>(); }
	void onFinishTemporaryDetach() { return call_method<"onFinishTemporaryDetach", void>(); }
	jni::ref<android::os::Handler> getHandler() { return call_method<"getHandler", jni::ref<android::os::Handler>>(); }
	jni::ref<android::view::View> findFocus() { return call_method<"findFocus", jni::ref<android::view::View>>(); }
	static jni::ref<android::content::pm::PackageInfo> getCurrentWebViewPackage() { return call_static_method<"getCurrentWebViewPackage", jni::ref<android::content::pm::PackageInfo>>(); }

protected:

	WebView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBVIEW
