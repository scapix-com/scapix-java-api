// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_RINGTONE_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_RINGTONE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class Ringtone; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::Ringtone>
{
	static constexpr fixed_string class_name = "android/media/Ringtone";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_RINGTONE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_RINGTONE)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_RINGTONE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/media/AudioAttributes.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::Ringtone : public jni::object_base<"android/media/Ringtone",
	java::lang::Object>
{
public:

	void setStreamType(jint streamType) { return call_method<"setStreamType", void>(streamType); }
	jint getStreamType() { return call_method<"getStreamType", jint>(); }
	void setAudioAttributes(jni::ref<android::media::AudioAttributes> attributes) { return call_method<"setAudioAttributes", void>(attributes); }
	jni::ref<android::media::AudioAttributes> getAudioAttributes() { return call_method<"getAudioAttributes", jni::ref<android::media::AudioAttributes>>(); }
	void setLooping(jboolean looping) { return call_method<"setLooping", void>(looping); }
	jboolean isLooping() { return call_method<"isLooping", jboolean>(); }
	void setVolume(jfloat volume) { return call_method<"setVolume", void>(volume); }
	jfloat getVolume() { return call_method<"getVolume", jfloat>(); }
	jni::ref<java::lang::String> getTitle(jni::ref<android::content::Context> context) { return call_method<"getTitle", jni::ref<java::lang::String>>(context); }
	void play() { return call_method<"play", void>(); }
	void stop() { return call_method<"stop", void>(); }
	jboolean isPlaying() { return call_method<"isPlaying", jboolean>(); }

protected:

	Ringtone(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_RINGTONE
