// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFOCUSREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFOCUSREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class AudioFocusRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::AudioFocusRequest>
{
	static constexpr fixed_string class_name = "android/media/AudioFocusRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFOCUSREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFOCUSREQUEST)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFOCUSREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/AudioAttributes.h>
#include <scapix/java_api/android/media/AudioFocusRequest_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::AudioFocusRequest : public jni::object_base<"android/media/AudioFocusRequest",
	java::lang::Object>
{
public:

	using Builder = AudioFocusRequest_Builder;

	jni::ref<android::media::AudioAttributes> getAudioAttributes() { return call_method<"getAudioAttributes", jni::ref<android::media::AudioAttributes>>(); }
	jint getFocusGain() { return call_method<"getFocusGain", jint>(); }
	jboolean willPauseWhenDucked() { return call_method<"willPauseWhenDucked", jboolean>(); }
	jboolean acceptsDelayedFocusGain() { return call_method<"acceptsDelayedFocusGain", jboolean>(); }

protected:

	AudioFocusRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFOCUSREQUEST
