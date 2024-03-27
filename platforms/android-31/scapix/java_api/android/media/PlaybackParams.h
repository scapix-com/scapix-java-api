// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_PLAYBACKPARAMS_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_PLAYBACKPARAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class PlaybackParams; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::PlaybackParams>
{
	static constexpr fixed_string class_name = "android/media/PlaybackParams";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_PLAYBACKPARAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_PLAYBACKPARAMS)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_PLAYBACKPARAMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::PlaybackParams : public jni::object_base<"android/media/PlaybackParams",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jint AUDIO_FALLBACK_MODE_DEFAULT() { return get_static_field<"AUDIO_FALLBACK_MODE_DEFAULT", jint>(); }
	static jint AUDIO_FALLBACK_MODE_FAIL() { return get_static_field<"AUDIO_FALLBACK_MODE_FAIL", jint>(); }
	static jint AUDIO_FALLBACK_MODE_MUTE() { return get_static_field<"AUDIO_FALLBACK_MODE_MUTE", jint>(); }
	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::media::PlaybackParams> new_object() { return base_::new_object(); }
	jni::ref<android::media::PlaybackParams> allowDefaults() { return call_method<"allowDefaults", jni::ref<android::media::PlaybackParams>>(); }
	jni::ref<android::media::PlaybackParams> setAudioFallbackMode(jint audioFallbackMode) { return call_method<"setAudioFallbackMode", jni::ref<android::media::PlaybackParams>>(audioFallbackMode); }
	jint getAudioFallbackMode() { return call_method<"getAudioFallbackMode", jint>(); }
	jni::ref<android::media::PlaybackParams> setPitch(jfloat pitch) { return call_method<"setPitch", jni::ref<android::media::PlaybackParams>>(pitch); }
	jfloat getPitch() { return call_method<"getPitch", jfloat>(); }
	jni::ref<android::media::PlaybackParams> setSpeed(jfloat speed) { return call_method<"setSpeed", jni::ref<android::media::PlaybackParams>>(speed); }
	jfloat getSpeed() { return call_method<"getSpeed", jfloat>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	PlaybackParams(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_PLAYBACKPARAMS