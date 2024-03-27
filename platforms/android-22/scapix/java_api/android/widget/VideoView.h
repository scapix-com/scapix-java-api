// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/SurfaceView.h>
#include <scapix/java_api/android/widget/MediaController_MediaPlayerControl.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_VIDEOVIEW_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_VIDEOVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class VideoView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::VideoView>
{
	static constexpr fixed_string class_name = "android/widget/VideoView";
	using base_classes = std::tuple<scapix::java_api::android::view::SurfaceView, scapix::java_api::android::widget::MediaController_MediaPlayerControl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_VIDEOVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_VIDEOVIEW)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_VIDEOVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/media/MediaFormat.h>
#include <scapix/java_api/android/media/MediaPlayer_OnCompletionListener.h>
#include <scapix/java_api/android/media/MediaPlayer_OnErrorListener.h>
#include <scapix/java_api/android/media/MediaPlayer_OnInfoListener.h>
#include <scapix/java_api/android/media/MediaPlayer_OnPreparedListener.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityEvent.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo.h>
#include <scapix/java_api/android/widget/MediaController.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::VideoView : public jni::object_base<"android/widget/VideoView",
	android::view::SurfaceView,
	android::widget::MediaController_MediaPlayerControl>
{
public:

	static jni::ref<android::widget::VideoView> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::VideoView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::VideoView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::VideoView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	void onInitializeAccessibilityEvent(jni::ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<"onInitializeAccessibilityEvent", void>(event); }
	void onInitializeAccessibilityNodeInfo(jni::ref<android::view::accessibility::AccessibilityNodeInfo> info) { return call_method<"onInitializeAccessibilityNodeInfo", void>(info); }
	jint resolveAdjustedSize(jint desiredSize, jint measureSpec) { return call_method<"resolveAdjustedSize", jint>(desiredSize, measureSpec); }
	void setVideoPath(jni::ref<java::lang::String> path) { return call_method<"setVideoPath", void>(path); }
	void setVideoURI(jni::ref<android::net::Uri> uri) { return call_method<"setVideoURI", void>(uri); }
	void setVideoURI(jni::ref<android::net::Uri> uri, jni::ref<java::util::Map> headers) { return call_method<"setVideoURI", void>(uri, headers); }
	void addSubtitleSource(jni::ref<java::io::InputStream> is, jni::ref<android::media::MediaFormat> format) { return call_method<"addSubtitleSource", void>(is, format); }
	void stopPlayback() { return call_method<"stopPlayback", void>(); }
	void setMediaController(jni::ref<android::widget::MediaController> controller) { return call_method<"setMediaController", void>(controller); }
	void setOnPreparedListener(jni::ref<android::media::MediaPlayer_OnPreparedListener> l) { return call_method<"setOnPreparedListener", void>(l); }
	void setOnCompletionListener(jni::ref<android::media::MediaPlayer_OnCompletionListener> l) { return call_method<"setOnCompletionListener", void>(l); }
	void setOnErrorListener(jni::ref<android::media::MediaPlayer_OnErrorListener> l) { return call_method<"setOnErrorListener", void>(l); }
	void setOnInfoListener(jni::ref<android::media::MediaPlayer_OnInfoListener> l) { return call_method<"setOnInfoListener", void>(l); }
	jboolean onTouchEvent(jni::ref<android::view::MotionEvent> ev) { return call_method<"onTouchEvent", jboolean>(ev); }
	jboolean onTrackballEvent(jni::ref<android::view::MotionEvent> ev) { return call_method<"onTrackballEvent", jboolean>(ev); }
	jboolean onKeyDown(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyDown", jboolean>(keyCode, event); }
	void start() { return call_method<"start", void>(); }
	void pause() { return call_method<"pause", void>(); }
	void suspend() { return call_method<"suspend", void>(); }
	void resume() { return call_method<"resume", void>(); }
	jint getDuration() { return call_method<"getDuration", jint>(); }
	jint getCurrentPosition() { return call_method<"getCurrentPosition", jint>(); }
	void seekTo(jint msec) { return call_method<"seekTo", void>(msec); }
	jboolean isPlaying() { return call_method<"isPlaying", jboolean>(); }
	jint getBufferPercentage() { return call_method<"getBufferPercentage", jint>(); }
	jboolean canPause() { return call_method<"canPause", jboolean>(); }
	jboolean canSeekBackward() { return call_method<"canSeekBackward", jboolean>(); }
	jboolean canSeekForward() { return call_method<"canSeekForward", jboolean>(); }
	jint getAudioSessionId() { return call_method<"getAudioSessionId", jint>(); }
	void draw(jni::ref<android::graphics::Canvas> canvas) { return call_method<"draw", void>(canvas); }

protected:

	VideoView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_VIDEOVIEW
