// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOPROFILE_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOPROFILE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class AudioProfile; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::AudioProfile>
{
	static constexpr fixed_string class_name = "android/media/AudioProfile";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOPROFILE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOPROFILE)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOPROFILE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::AudioProfile : public jni::object_base<"android/media/AudioProfile",
	java::lang::Object>
{
public:

	static jint AUDIO_ENCAPSULATION_TYPE_IEC61937() { return get_static_field<"AUDIO_ENCAPSULATION_TYPE_IEC61937", jint>(); }
	static jint AUDIO_ENCAPSULATION_TYPE_NONE() { return get_static_field<"AUDIO_ENCAPSULATION_TYPE_NONE", jint>(); }

	jint getFormat() { return call_method<"getFormat", jint>(); }
	jni::ref<jni::array<jint>> getChannelMasks() { return call_method<"getChannelMasks", jni::ref<jni::array<jint>>>(); }
	jni::ref<jni::array<jint>> getChannelIndexMasks() { return call_method<"getChannelIndexMasks", jni::ref<jni::array<jint>>>(); }
	jni::ref<jni::array<jint>> getSampleRates() { return call_method<"getSampleRates", jni::ref<jni::array<jint>>>(); }
	jint getEncapsulationType() { return call_method<"getEncapsulationType", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AudioProfile(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOPROFILE
