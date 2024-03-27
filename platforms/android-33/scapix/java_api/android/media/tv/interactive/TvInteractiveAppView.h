// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/ViewGroup.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPVIEW_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv::interactive { class TvInteractiveAppView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::interactive::TvInteractiveAppView>
{
	static constexpr fixed_string class_name = "android/media/tv/interactive/TvInteractiveAppView";
	using base_classes = std::tuple<scapix::java_api::android::view::ViewGroup>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPVIEW)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/media/tv/TvView.h>
#include <scapix/java_api/android/media/tv/interactive/TvInteractiveAppView_OnUnhandledInputEventListener.h>
#include <scapix/java_api/android/media/tv/interactive/TvInteractiveAppView_TvInteractiveAppCallback.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/InputEvent.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::interactive::TvInteractiveAppView : public jni::object_base<"android/media/tv/interactive/TvInteractiveAppView",
	android::view::ViewGroup>
{
public:

	using TvInteractiveAppCallback = TvInteractiveAppView_TvInteractiveAppCallback;
	using OnUnhandledInputEventListener = TvInteractiveAppView_OnUnhandledInputEventListener;

	static jni::ref<java::lang::String> BI_INTERACTIVE_APP_KEY_ALIAS() { return get_static_field<"BI_INTERACTIVE_APP_KEY_ALIAS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BI_INTERACTIVE_APP_KEY_CERTIFICATE() { return get_static_field<"BI_INTERACTIVE_APP_KEY_CERTIFICATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BI_INTERACTIVE_APP_KEY_HTTP_ADDITIONAL_HEADERS() { return get_static_field<"BI_INTERACTIVE_APP_KEY_HTTP_ADDITIONAL_HEADERS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BI_INTERACTIVE_APP_KEY_HTTP_USER_AGENT() { return get_static_field<"BI_INTERACTIVE_APP_KEY_HTTP_USER_AGENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BI_INTERACTIVE_APP_KEY_PRIVATE_KEY() { return get_static_field<"BI_INTERACTIVE_APP_KEY_PRIVATE_KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ERROR_KEY_METHOD_NAME() { return get_static_field<"ERROR_KEY_METHOD_NAME", jni::ref<java::lang::String>>(); }

	static jni::ref<android::media::tv::interactive::TvInteractiveAppView> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::media::tv::interactive::TvInteractiveAppView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::media::tv::interactive::TvInteractiveAppView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	void setCallback(jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::media::tv::interactive::TvInteractiveAppView_TvInteractiveAppCallback> callback) { return call_method<"setCallback", void>(executor, callback); }
	void clearCallback() { return call_method<"clearCallback", void>(); }
	void onAttachedToWindow() { return call_method<"onAttachedToWindow", void>(); }
	void onDetachedFromWindow() { return call_method<"onDetachedFromWindow", void>(); }
	void onLayout(jboolean changed, jint left, jint top, jint right, jint bottom) { return call_method<"onLayout", void>(changed, left, top, right, bottom); }
	void onMeasure(jint widthMeasureSpec, jint heightMeasureSpec) { return call_method<"onMeasure", void>(widthMeasureSpec, heightMeasureSpec); }
	void onVisibilityChanged(jni::ref<android::view::View> changedView, jint visibility) { return call_method<"onVisibilityChanged", void>(changedView, visibility); }
	void reset() { return call_method<"reset", void>(); }
	jboolean dispatchUnhandledInputEvent(jni::ref<android::view::InputEvent> event) { return call_method<"dispatchUnhandledInputEvent", jboolean>(event); }
	jboolean onUnhandledInputEvent(jni::ref<android::view::InputEvent> event) { return call_method<"onUnhandledInputEvent", jboolean>(event); }
	void setOnUnhandledInputEventListener(jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::media::tv::interactive::TvInteractiveAppView_OnUnhandledInputEventListener> listener) { return call_method<"setOnUnhandledInputEventListener", void>(executor, listener); }
	jni::ref<android::media::tv::interactive::TvInteractiveAppView_OnUnhandledInputEventListener> getOnUnhandledInputEventListener() { return call_method<"getOnUnhandledInputEventListener", jni::ref<android::media::tv::interactive::TvInteractiveAppView_OnUnhandledInputEventListener>>(); }
	void clearOnUnhandledInputEventListener() { return call_method<"clearOnUnhandledInputEventListener", void>(); }
	jboolean dispatchKeyEvent(jni::ref<android::view::KeyEvent> event) { return call_method<"dispatchKeyEvent", jboolean>(event); }
	void prepareInteractiveApp(jni::ref<java::lang::String> iAppServiceId, jint type) { return call_method<"prepareInteractiveApp", void>(iAppServiceId, type); }
	void startInteractiveApp() { return call_method<"startInteractiveApp", void>(); }
	void stopInteractiveApp() { return call_method<"stopInteractiveApp", void>(); }
	void resetInteractiveApp() { return call_method<"resetInteractiveApp", void>(); }
	void sendCurrentChannelUri(jni::ref<android::net::Uri> channelUri) { return call_method<"sendCurrentChannelUri", void>(channelUri); }
	void sendCurrentChannelLcn(jint lcn) { return call_method<"sendCurrentChannelLcn", void>(lcn); }
	void sendStreamVolume(jfloat volume) { return call_method<"sendStreamVolume", void>(volume); }
	void sendTrackInfoList(jni::ref<java::util::List> tracks) { return call_method<"sendTrackInfoList", void>(tracks); }
	void sendCurrentTvInputId(jni::ref<java::lang::String> inputId) { return call_method<"sendCurrentTvInputId", void>(inputId); }
	void sendSigningResult(jni::ref<java::lang::String> signingId, jni::ref<jni::array<jbyte>> result) { return call_method<"sendSigningResult", void>(signingId, result); }
	void notifyError(jni::ref<java::lang::String> errMsg, jni::ref<android::os::Bundle> params) { return call_method<"notifyError", void>(errMsg, params); }
	void createBiInteractiveApp(jni::ref<android::net::Uri> biIAppUri, jni::ref<android::os::Bundle> params) { return call_method<"createBiInteractiveApp", void>(biIAppUri, params); }
	void destroyBiInteractiveApp(jni::ref<java::lang::String> biIAppId) { return call_method<"destroyBiInteractiveApp", void>(biIAppId); }
	jint setTvView(jni::ref<android::media::tv::TvView> tvView) { return call_method<"setTvView", jint>(tvView); }
	void setTeletextAppEnabled(jboolean enable) { return call_method<"setTeletextAppEnabled", void>(enable); }

protected:

	TvInteractiveAppView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPVIEW