// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/view/KeyEvent_Callback.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_SESSION_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_SESSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv { class TvInputService_Session; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::TvInputService_Session>
{
	static constexpr fixed_string class_name = "android/media/tv/TvInputService$Session";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::view::KeyEvent_Callback>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_SESSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_SESSION)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_SESSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/media/PlaybackParams.h>
#include <scapix/java_api/android/media/tv/TvContentRating.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/Surface.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::TvInputService_Session : public jni::object_base<"android/media/tv/TvInputService$Session",
	java::lang::Object,
	android::view::KeyEvent_Callback>
{
public:

	static jni::ref<android::media::tv::TvInputService_Session> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	void setOverlayViewEnabled(jboolean enable) { return call_method<"setOverlayViewEnabled", void>(enable); }
	void notifyChannelRetuned(jni::ref<android::net::Uri> channelUri) { return call_method<"notifyChannelRetuned", void>(channelUri); }
	void notifyTracksChanged(jni::ref<java::util::List> tracks) { return call_method<"notifyTracksChanged", void>(tracks); }
	void notifyTrackSelected(jint type, jni::ref<java::lang::String> trackId) { return call_method<"notifyTrackSelected", void>(type, trackId); }
	void notifyVideoAvailable() { return call_method<"notifyVideoAvailable", void>(); }
	void notifyVideoUnavailable(jint reason) { return call_method<"notifyVideoUnavailable", void>(reason); }
	void notifyContentAllowed() { return call_method<"notifyContentAllowed", void>(); }
	void notifyContentBlocked(jni::ref<android::media::tv::TvContentRating> rating) { return call_method<"notifyContentBlocked", void>(rating); }
	void notifyTimeShiftStatusChanged(jint status) { return call_method<"notifyTimeShiftStatusChanged", void>(status); }
	void layoutSurface(jint left, jint top, jint right, jint bottom) { return call_method<"layoutSurface", void>(left, top, right, bottom); }
	void onRelease() { return call_method<"onRelease", void>(); }
	jboolean onSetSurface(jni::ref<android::view::Surface> p1) { return call_method<"onSetSurface", jboolean>(p1); }
	void onSurfaceChanged(jint format, jint width, jint height) { return call_method<"onSurfaceChanged", void>(format, width, height); }
	void onOverlayViewSizeChanged(jint width, jint height) { return call_method<"onOverlayViewSizeChanged", void>(width, height); }
	void onSetStreamVolume(jfloat p1) { return call_method<"onSetStreamVolume", void>(p1); }
	jboolean onTune(jni::ref<android::net::Uri> p1) { return call_method<"onTune", jboolean>(p1); }
	void onSetCaptionEnabled(jboolean p1) { return call_method<"onSetCaptionEnabled", void>(p1); }
	void onUnblockContent(jni::ref<android::media::tv::TvContentRating> unblockedRating) { return call_method<"onUnblockContent", void>(unblockedRating); }
	jboolean onSelectTrack(jint type, jni::ref<java::lang::String> trackId) { return call_method<"onSelectTrack", jboolean>(type, trackId); }
	jni::ref<android::view::View> onCreateOverlayView() { return call_method<"onCreateOverlayView", jni::ref<android::view::View>>(); }
	void onTimeShiftPause() { return call_method<"onTimeShiftPause", void>(); }
	void onTimeShiftResume() { return call_method<"onTimeShiftResume", void>(); }
	void onTimeShiftSeekTo(jlong timeMs) { return call_method<"onTimeShiftSeekTo", void>(timeMs); }
	void onTimeShiftSetPlaybackParams(jni::ref<android::media::PlaybackParams> params) { return call_method<"onTimeShiftSetPlaybackParams", void>(params); }
	jlong onTimeShiftGetStartPosition() { return call_method<"onTimeShiftGetStartPosition", jlong>(); }
	jlong onTimeShiftGetCurrentPosition() { return call_method<"onTimeShiftGetCurrentPosition", jlong>(); }
	jboolean onKeyDown(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyDown", jboolean>(keyCode, event); }
	jboolean onKeyLongPress(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyLongPress", jboolean>(keyCode, event); }
	jboolean onKeyMultiple(jint keyCode, jint count, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyMultiple", jboolean>(keyCode, count, event); }
	jboolean onKeyUp(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyUp", jboolean>(keyCode, event); }
	jboolean onTouchEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTouchEvent", jboolean>(event); }
	jboolean onTrackballEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTrackballEvent", jboolean>(event); }
	jboolean onGenericMotionEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onGenericMotionEvent", jboolean>(event); }

protected:

	TvInputService_Session(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_SESSION
