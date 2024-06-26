// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSETTINGS_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSETTINGS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class WebSettings; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::WebSettings>
{
	static constexpr fixed_string class_name = "android/webkit/WebSettings";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSETTINGS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSETTINGS)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSETTINGS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/webkit/WebSettings_LayoutAlgorithm.h>
#include <scapix/java_api/android/webkit/WebSettings_PluginState.h>
#include <scapix/java_api/android/webkit/WebSettings_RenderPriority.h>
#include <scapix/java_api/android/webkit/WebSettings_TextSize.h>
#include <scapix/java_api/android/webkit/WebSettings_ZoomDensity.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::WebSettings : public jni::object_base<"android/webkit/WebSettings",
	java::lang::Object>
{
public:

	using PluginState = WebSettings_PluginState;
	using RenderPriority = WebSettings_RenderPriority;
	using ZoomDensity = WebSettings_ZoomDensity;
	using TextSize = WebSettings_TextSize;
	using LayoutAlgorithm = WebSettings_LayoutAlgorithm;

	static jint LOAD_CACHE_ELSE_NETWORK() { return get_static_field<"LOAD_CACHE_ELSE_NETWORK", jint>(); }
	static jint LOAD_CACHE_ONLY() { return get_static_field<"LOAD_CACHE_ONLY", jint>(); }
	static jint LOAD_DEFAULT() { return get_static_field<"LOAD_DEFAULT", jint>(); }
	static jint LOAD_NORMAL() { return get_static_field<"LOAD_NORMAL", jint>(); }
	static jint LOAD_NO_CACHE() { return get_static_field<"LOAD_NO_CACHE", jint>(); }
	static jint MIXED_CONTENT_ALWAYS_ALLOW() { return get_static_field<"MIXED_CONTENT_ALWAYS_ALLOW", jint>(); }
	static jint MIXED_CONTENT_COMPATIBILITY_MODE() { return get_static_field<"MIXED_CONTENT_COMPATIBILITY_MODE", jint>(); }
	static jint MIXED_CONTENT_NEVER_ALLOW() { return get_static_field<"MIXED_CONTENT_NEVER_ALLOW", jint>(); }

	void setSupportZoom(jboolean support) { return call_method<"setSupportZoom", void>(support); }
	jboolean supportZoom() { return call_method<"supportZoom", jboolean>(); }
	void setMediaPlaybackRequiresUserGesture(jboolean require) { return call_method<"setMediaPlaybackRequiresUserGesture", void>(require); }
	jboolean getMediaPlaybackRequiresUserGesture() { return call_method<"getMediaPlaybackRequiresUserGesture", jboolean>(); }
	void setBuiltInZoomControls(jboolean enabled) { return call_method<"setBuiltInZoomControls", void>(enabled); }
	jboolean getBuiltInZoomControls() { return call_method<"getBuiltInZoomControls", jboolean>(); }
	void setDisplayZoomControls(jboolean enabled) { return call_method<"setDisplayZoomControls", void>(enabled); }
	jboolean getDisplayZoomControls() { return call_method<"getDisplayZoomControls", jboolean>(); }
	void setAllowFileAccess(jboolean allow) { return call_method<"setAllowFileAccess", void>(allow); }
	jboolean getAllowFileAccess() { return call_method<"getAllowFileAccess", jboolean>(); }
	void setAllowContentAccess(jboolean allow) { return call_method<"setAllowContentAccess", void>(allow); }
	jboolean getAllowContentAccess() { return call_method<"getAllowContentAccess", jboolean>(); }
	void setLoadWithOverviewMode(jboolean overview) { return call_method<"setLoadWithOverviewMode", void>(overview); }
	jboolean getLoadWithOverviewMode() { return call_method<"getLoadWithOverviewMode", jboolean>(); }
	void setEnableSmoothTransition(jboolean enable) { return call_method<"setEnableSmoothTransition", void>(enable); }
	jboolean enableSmoothTransition() { return call_method<"enableSmoothTransition", jboolean>(); }
	void setSaveFormData(jboolean save) { return call_method<"setSaveFormData", void>(save); }
	jboolean getSaveFormData() { return call_method<"getSaveFormData", jboolean>(); }
	void setSavePassword(jboolean save) { return call_method<"setSavePassword", void>(save); }
	jboolean getSavePassword() { return call_method<"getSavePassword", jboolean>(); }
	void setTextZoom(jint textZoom) { return call_method<"setTextZoom", void>(textZoom); }
	jint getTextZoom() { return call_method<"getTextZoom", jint>(); }
	void setTextSize(jni::ref<android::webkit::WebSettings_TextSize> t) { return call_method<"setTextSize", void>(t); }
	jni::ref<android::webkit::WebSettings_TextSize> getTextSize() { return call_method<"getTextSize", jni::ref<android::webkit::WebSettings_TextSize>>(); }
	void setDefaultZoom(jni::ref<android::webkit::WebSettings_ZoomDensity> zoom) { return call_method<"setDefaultZoom", void>(zoom); }
	jni::ref<android::webkit::WebSettings_ZoomDensity> getDefaultZoom() { return call_method<"getDefaultZoom", jni::ref<android::webkit::WebSettings_ZoomDensity>>(); }
	void setLightTouchEnabled(jboolean enabled) { return call_method<"setLightTouchEnabled", void>(enabled); }
	jboolean getLightTouchEnabled() { return call_method<"getLightTouchEnabled", jboolean>(); }
	void setUseWideViewPort(jboolean use) { return call_method<"setUseWideViewPort", void>(use); }
	jboolean getUseWideViewPort() { return call_method<"getUseWideViewPort", jboolean>(); }
	void setSupportMultipleWindows(jboolean support) { return call_method<"setSupportMultipleWindows", void>(support); }
	jboolean supportMultipleWindows() { return call_method<"supportMultipleWindows", jboolean>(); }
	void setLayoutAlgorithm(jni::ref<android::webkit::WebSettings_LayoutAlgorithm> l) { return call_method<"setLayoutAlgorithm", void>(l); }
	jni::ref<android::webkit::WebSettings_LayoutAlgorithm> getLayoutAlgorithm() { return call_method<"getLayoutAlgorithm", jni::ref<android::webkit::WebSettings_LayoutAlgorithm>>(); }
	void setStandardFontFamily(jni::ref<java::lang::String> font) { return call_method<"setStandardFontFamily", void>(font); }
	jni::ref<java::lang::String> getStandardFontFamily() { return call_method<"getStandardFontFamily", jni::ref<java::lang::String>>(); }
	void setFixedFontFamily(jni::ref<java::lang::String> font) { return call_method<"setFixedFontFamily", void>(font); }
	jni::ref<java::lang::String> getFixedFontFamily() { return call_method<"getFixedFontFamily", jni::ref<java::lang::String>>(); }
	void setSansSerifFontFamily(jni::ref<java::lang::String> font) { return call_method<"setSansSerifFontFamily", void>(font); }
	jni::ref<java::lang::String> getSansSerifFontFamily() { return call_method<"getSansSerifFontFamily", jni::ref<java::lang::String>>(); }
	void setSerifFontFamily(jni::ref<java::lang::String> font) { return call_method<"setSerifFontFamily", void>(font); }
	jni::ref<java::lang::String> getSerifFontFamily() { return call_method<"getSerifFontFamily", jni::ref<java::lang::String>>(); }
	void setCursiveFontFamily(jni::ref<java::lang::String> font) { return call_method<"setCursiveFontFamily", void>(font); }
	jni::ref<java::lang::String> getCursiveFontFamily() { return call_method<"getCursiveFontFamily", jni::ref<java::lang::String>>(); }
	void setFantasyFontFamily(jni::ref<java::lang::String> font) { return call_method<"setFantasyFontFamily", void>(font); }
	jni::ref<java::lang::String> getFantasyFontFamily() { return call_method<"getFantasyFontFamily", jni::ref<java::lang::String>>(); }
	void setMinimumFontSize(jint size) { return call_method<"setMinimumFontSize", void>(size); }
	jint getMinimumFontSize() { return call_method<"getMinimumFontSize", jint>(); }
	void setMinimumLogicalFontSize(jint size) { return call_method<"setMinimumLogicalFontSize", void>(size); }
	jint getMinimumLogicalFontSize() { return call_method<"getMinimumLogicalFontSize", jint>(); }
	void setDefaultFontSize(jint size) { return call_method<"setDefaultFontSize", void>(size); }
	jint getDefaultFontSize() { return call_method<"getDefaultFontSize", jint>(); }
	void setDefaultFixedFontSize(jint size) { return call_method<"setDefaultFixedFontSize", void>(size); }
	jint getDefaultFixedFontSize() { return call_method<"getDefaultFixedFontSize", jint>(); }
	void setLoadsImagesAutomatically(jboolean flag) { return call_method<"setLoadsImagesAutomatically", void>(flag); }
	jboolean getLoadsImagesAutomatically() { return call_method<"getLoadsImagesAutomatically", jboolean>(); }
	void setBlockNetworkImage(jboolean flag) { return call_method<"setBlockNetworkImage", void>(flag); }
	jboolean getBlockNetworkImage() { return call_method<"getBlockNetworkImage", jboolean>(); }
	void setBlockNetworkLoads(jboolean flag) { return call_method<"setBlockNetworkLoads", void>(flag); }
	jboolean getBlockNetworkLoads() { return call_method<"getBlockNetworkLoads", jboolean>(); }
	void setJavaScriptEnabled(jboolean flag) { return call_method<"setJavaScriptEnabled", void>(flag); }
	void setAllowUniversalAccessFromFileURLs(jboolean p1) { return call_method<"setAllowUniversalAccessFromFileURLs", void>(p1); }
	void setAllowFileAccessFromFileURLs(jboolean p1) { return call_method<"setAllowFileAccessFromFileURLs", void>(p1); }
	void setPluginState(jni::ref<android::webkit::WebSettings_PluginState> state) { return call_method<"setPluginState", void>(state); }
	void setDatabasePath(jni::ref<java::lang::String> databasePath) { return call_method<"setDatabasePath", void>(databasePath); }
	void setGeolocationDatabasePath(jni::ref<java::lang::String> databasePath) { return call_method<"setGeolocationDatabasePath", void>(databasePath); }
	void setAppCacheEnabled(jboolean flag) { return call_method<"setAppCacheEnabled", void>(flag); }
	void setAppCachePath(jni::ref<java::lang::String> appCachePath) { return call_method<"setAppCachePath", void>(appCachePath); }
	void setAppCacheMaxSize(jlong appCacheMaxSize) { return call_method<"setAppCacheMaxSize", void>(appCacheMaxSize); }
	void setDatabaseEnabled(jboolean flag) { return call_method<"setDatabaseEnabled", void>(flag); }
	void setDomStorageEnabled(jboolean flag) { return call_method<"setDomStorageEnabled", void>(flag); }
	jboolean getDomStorageEnabled() { return call_method<"getDomStorageEnabled", jboolean>(); }
	jni::ref<java::lang::String> getDatabasePath() { return call_method<"getDatabasePath", jni::ref<java::lang::String>>(); }
	jboolean getDatabaseEnabled() { return call_method<"getDatabaseEnabled", jboolean>(); }
	void setGeolocationEnabled(jboolean flag) { return call_method<"setGeolocationEnabled", void>(flag); }
	jboolean getJavaScriptEnabled() { return call_method<"getJavaScriptEnabled", jboolean>(); }
	jboolean getAllowUniversalAccessFromFileURLs() { return call_method<"getAllowUniversalAccessFromFileURLs", jboolean>(); }
	jboolean getAllowFileAccessFromFileURLs() { return call_method<"getAllowFileAccessFromFileURLs", jboolean>(); }
	jni::ref<android::webkit::WebSettings_PluginState> getPluginState() { return call_method<"getPluginState", jni::ref<android::webkit::WebSettings_PluginState>>(); }
	void setJavaScriptCanOpenWindowsAutomatically(jboolean flag) { return call_method<"setJavaScriptCanOpenWindowsAutomatically", void>(flag); }
	jboolean getJavaScriptCanOpenWindowsAutomatically() { return call_method<"getJavaScriptCanOpenWindowsAutomatically", jboolean>(); }
	void setDefaultTextEncodingName(jni::ref<java::lang::String> encoding) { return call_method<"setDefaultTextEncodingName", void>(encoding); }
	jni::ref<java::lang::String> getDefaultTextEncodingName() { return call_method<"getDefaultTextEncodingName", jni::ref<java::lang::String>>(); }
	void setUserAgentString(jni::ref<java::lang::String> ua) { return call_method<"setUserAgentString", void>(ua); }
	jni::ref<java::lang::String> getUserAgentString() { return call_method<"getUserAgentString", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> getDefaultUserAgent(jni::ref<android::content::Context> context) { return call_static_method<"getDefaultUserAgent", jni::ref<java::lang::String>>(context); }
	void setNeedInitialFocus(jboolean flag) { return call_method<"setNeedInitialFocus", void>(flag); }
	void setRenderPriority(jni::ref<android::webkit::WebSettings_RenderPriority> priority) { return call_method<"setRenderPriority", void>(priority); }
	void setCacheMode(jint mode) { return call_method<"setCacheMode", void>(mode); }
	jint getCacheMode() { return call_method<"getCacheMode", jint>(); }
	void setMixedContentMode(jint p1) { return call_method<"setMixedContentMode", void>(p1); }
	jint getMixedContentMode() { return call_method<"getMixedContentMode", jint>(); }

protected:

	WebSettings(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_WEBSETTINGS
