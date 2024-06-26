// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_ENCODERPROFILES_AUDIOPROFILE_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_ENCODERPROFILES_AUDIOPROFILE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class EncoderProfiles_AudioProfile; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::EncoderProfiles_AudioProfile>
{
	static constexpr fixed_string class_name = "android/media/EncoderProfiles$AudioProfile";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_ENCODERPROFILES_AUDIOPROFILE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_ENCODERPROFILES_AUDIOPROFILE)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_ENCODERPROFILES_AUDIOPROFILE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::EncoderProfiles_AudioProfile : public jni::object_base<"android/media/EncoderProfiles$AudioProfile",
	java::lang::Object>
{
public:

	jint getCodec() { return call_method<"getCodec", jint>(); }
	jni::ref<java::lang::String> getMediaType() { return call_method<"getMediaType", jni::ref<java::lang::String>>(); }
	jint getBitrate() { return call_method<"getBitrate", jint>(); }
	jint getSampleRate() { return call_method<"getSampleRate", jint>(); }
	jint getChannels() { return call_method<"getChannels", jint>(); }
	jint getProfile() { return call_method<"getProfile", jint>(); }

protected:

	EncoderProfiles_AudioProfile(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_ENCODERPROFILES_AUDIOPROFILE
