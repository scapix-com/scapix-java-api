// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/view/KeyEvent_Callback.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPSERVICE_SESSION_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPSERVICE_SESSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv::interactive { class TvInteractiveAppService_Session; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::interactive::TvInteractiveAppService_Session>
{
	static constexpr fixed_string class_name = "android/media/tv/interactive/TvInteractiveAppService$Session";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::view::KeyEvent_Callback>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPSERVICE_SESSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPSERVICE_SESSION)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPSERVICE_SESSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/media/tv/AdRequest.h>
#include <scapix/java_api/android/media/tv/AdResponse.h>
#include <scapix/java_api/android/media/tv/BroadcastInfoRequest.h>
#include <scapix/java_api/android/media/tv/BroadcastInfoResponse.h>
#include <scapix/java_api/android/media/tv/TvContentRating.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/Surface.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::interactive::TvInteractiveAppService_Session : public jni::object_base<"android/media/tv/interactive/TvInteractiveAppService$Session",
	java::lang::Object,
	android::view::KeyEvent_Callback>
{
public:

	static jni::ref<android::media::tv::interactive::TvInteractiveAppService_Session> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	void setMediaViewEnabled(jboolean enable) { return call_method<"setMediaViewEnabled", void>(enable); }
	jboolean isMediaViewEnabled() { return call_method<"isMediaViewEnabled", jboolean>(); }
	void onStartInteractiveApp() { return call_method<"onStartInteractiveApp", void>(); }
	void onStopInteractiveApp() { return call_method<"onStopInteractiveApp", void>(); }
	void onResetInteractiveApp() { return call_method<"onResetInteractiveApp", void>(); }
	void onCreateBiInteractiveAppRequest(jni::ref<android::net::Uri> biIAppUri, jni::ref<android::os::Bundle> params) { return call_method<"onCreateBiInteractiveAppRequest", void>(biIAppUri, params); }
	void onDestroyBiInteractiveAppRequest(jni::ref<java::lang::String> biIAppId) { return call_method<"onDestroyBiInteractiveAppRequest", void>(biIAppId); }
	void onSetTeletextAppEnabled(jboolean enable) { return call_method<"onSetTeletextAppEnabled", void>(enable); }
	void onCurrentChannelUri(jni::ref<android::net::Uri> channelUri) { return call_method<"onCurrentChannelUri", void>(channelUri); }
	void onCurrentChannelLcn(jint lcn) { return call_method<"onCurrentChannelLcn", void>(lcn); }
	void onStreamVolume(jfloat volume) { return call_method<"onStreamVolume", void>(volume); }
	void onTrackInfoList(jni::ref<java::util::List> tracks) { return call_method<"onTrackInfoList", void>(tracks); }
	void onCurrentTvInputId(jni::ref<java::lang::String> inputId) { return call_method<"onCurrentTvInputId", void>(inputId); }
	void onSigningResult(jni::ref<java::lang::String> signingId, jni::ref<jni::array<jbyte>> result) { return call_method<"onSigningResult", void>(signingId, result); }
	void onError(jni::ref<java::lang::String> errMsg, jni::ref<android::os::Bundle> params) { return call_method<"onError", void>(errMsg, params); }
	jboolean onSetSurface(jni::ref<android::view::Surface> p1) { return call_method<"onSetSurface", jboolean>(p1); }
	void onSurfaceChanged(jint format, jint width, jint height) { return call_method<"onSurfaceChanged", void>(format, width, height); }
	void onMediaViewSizeChanged(jint width, jint height) { return call_method<"onMediaViewSizeChanged", void>(width, height); }
	jni::ref<android::view::View> onCreateMediaView() { return call_method<"onCreateMediaView", jni::ref<android::view::View>>(); }
	void onRelease() { return call_method<"onRelease", void>(); }
	void onTuned(jni::ref<android::net::Uri> channelUri) { return call_method<"onTuned", void>(channelUri); }
	void onTrackSelected(jint type, jni::ref<java::lang::String> trackId) { return call_method<"onTrackSelected", void>(type, trackId); }
	void onTracksChanged(jni::ref<java::util::List> tracks) { return call_method<"onTracksChanged", void>(tracks); }
	void onVideoAvailable() { return call_method<"onVideoAvailable", void>(); }
	void onVideoUnavailable(jint reason) { return call_method<"onVideoUnavailable", void>(reason); }
	void onContentAllowed() { return call_method<"onContentAllowed", void>(); }
	void onContentBlocked(jni::ref<android::media::tv::TvContentRating> rating) { return call_method<"onContentBlocked", void>(rating); }
	void onSignalStrength(jint strength) { return call_method<"onSignalStrength", void>(strength); }
	void onBroadcastInfoResponse(jni::ref<android::media::tv::BroadcastInfoResponse> response) { return call_method<"onBroadcastInfoResponse", void>(response); }
	void onAdResponse(jni::ref<android::media::tv::AdResponse> response) { return call_method<"onAdResponse", void>(response); }
	jboolean onKeyDown(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyDown", jboolean>(keyCode, event); }
	jboolean onKeyLongPress(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyLongPress", jboolean>(keyCode, event); }
	jboolean onKeyMultiple(jint keyCode, jint count, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyMultiple", jboolean>(keyCode, count, event); }
	jboolean onKeyUp(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyUp", jboolean>(keyCode, event); }
	jboolean onTouchEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTouchEvent", jboolean>(event); }
	jboolean onTrackballEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTrackballEvent", jboolean>(event); }
	jboolean onGenericMotionEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onGenericMotionEvent", jboolean>(event); }
	void layoutSurface(jint left, jint top, jint right, jint bottom) { return call_method<"layoutSurface", void>(left, top, right, bottom); }
	void requestBroadcastInfo(jni::ref<android::media::tv::BroadcastInfoRequest> request) { return call_method<"requestBroadcastInfo", void>(request); }
	void removeBroadcastInfo(jint requestId) { return call_method<"removeBroadcastInfo", void>(requestId); }
	void sendPlaybackCommandRequest(jni::ref<java::lang::String> cmdType, jni::ref<android::os::Bundle> parameters) { return call_method<"sendPlaybackCommandRequest", void>(cmdType, parameters); }
	void setVideoBounds(jni::ref<android::graphics::Rect> rect) { return call_method<"setVideoBounds", void>(rect); }
	void requestCurrentChannelUri() { return call_method<"requestCurrentChannelUri", void>(); }
	void requestCurrentChannelLcn() { return call_method<"requestCurrentChannelLcn", void>(); }
	void requestStreamVolume() { return call_method<"requestStreamVolume", void>(); }
	void requestTrackInfoList() { return call_method<"requestTrackInfoList", void>(); }
	void requestCurrentTvInputId() { return call_method<"requestCurrentTvInputId", void>(); }
	void requestSigning(jni::ref<java::lang::String> signingId, jni::ref<java::lang::String> algorithm, jni::ref<java::lang::String> alias, jni::ref<jni::array<jbyte>> data) { return call_method<"requestSigning", void>(signingId, algorithm, alias, data); }
	void requestAd(jni::ref<android::media::tv::AdRequest> request) { return call_method<"requestAd", void>(request); }
	void notifySessionStateChanged(jint state, jint err) { return call_method<"notifySessionStateChanged", void>(state, err); }
	void notifyBiInteractiveAppCreated(jni::ref<android::net::Uri> biIAppUri, jni::ref<java::lang::String> biIAppId) { return call_method<"notifyBiInteractiveAppCreated", void>(biIAppUri, biIAppId); }
	void notifyTeletextAppStateChanged(jint state) { return call_method<"notifyTeletextAppStateChanged", void>(state); }

protected:

	TvInteractiveAppService_Session(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPSERVICE_SESSION
