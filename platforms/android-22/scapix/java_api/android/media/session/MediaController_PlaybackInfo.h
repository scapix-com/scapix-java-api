// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION_MEDIACONTROLLER_PLAYBACKINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION_MEDIACONTROLLER_PLAYBACKINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::session { class MediaController_PlaybackInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::session::MediaController_PlaybackInfo>
{
	static constexpr fixed_string class_name = "android/media/session/MediaController$PlaybackInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION_MEDIACONTROLLER_PLAYBACKINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION_MEDIACONTROLLER_PLAYBACKINFO)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION_MEDIACONTROLLER_PLAYBACKINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/AudioAttributes.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::session::MediaController_PlaybackInfo : public jni::object_base<"android/media/session/MediaController$PlaybackInfo",
	java::lang::Object>
{
public:

	static jint PLAYBACK_TYPE_LOCAL() { return get_static_field<"PLAYBACK_TYPE_LOCAL", jint>(); }
	static jint PLAYBACK_TYPE_REMOTE() { return get_static_field<"PLAYBACK_TYPE_REMOTE", jint>(); }

	jint getPlaybackType() { return call_method<"getPlaybackType", jint>(); }
	jni::ref<android::media::AudioAttributes> getAudioAttributes() { return call_method<"getAudioAttributes", jni::ref<android::media::AudioAttributes>>(); }
	jint getVolumeControl() { return call_method<"getVolumeControl", jint>(); }
	jint getMaxVolume() { return call_method<"getMaxVolume", jint>(); }
	jint getCurrentVolume() { return call_method<"getCurrentVolume", jint>(); }

protected:

	MediaController_PlaybackInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION_MEDIACONTROLLER_PLAYBACKINFO
