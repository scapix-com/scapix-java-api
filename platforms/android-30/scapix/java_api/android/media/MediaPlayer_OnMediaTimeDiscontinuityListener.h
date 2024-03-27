// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPLAYER_ONMEDIATIMEDISCONTINUITYLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPLAYER_ONMEDIATIMEDISCONTINUITYLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaPlayer_OnMediaTimeDiscontinuityListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaPlayer_OnMediaTimeDiscontinuityListener>
{
	static constexpr fixed_string class_name = "android/media/MediaPlayer$OnMediaTimeDiscontinuityListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPLAYER_ONMEDIATIMEDISCONTINUITYLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPLAYER_ONMEDIATIMEDISCONTINUITYLISTENER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPLAYER_ONMEDIATIMEDISCONTINUITYLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/MediaPlayer.h>
#include <scapix/java_api/android/media/MediaTimestamp.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaPlayer_OnMediaTimeDiscontinuityListener : public jni::object_base<"android/media/MediaPlayer$OnMediaTimeDiscontinuityListener",
	java::lang::Object>
{
public:

	void onMediaTimeDiscontinuity(jni::ref<android::media::MediaPlayer> p1, jni::ref<android::media::MediaTimestamp> p2) { return call_method<"onMediaTimeDiscontinuity", void>(p1, p2); }

protected:

	MediaPlayer_OnMediaTimeDiscontinuityListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPLAYER_ONMEDIATIMEDISCONTINUITYLISTENER
