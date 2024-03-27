// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFORMAT_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFORMAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class AudioFormat; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::AudioFormat>
{
	static constexpr fixed_string class_name = "android/media/AudioFormat";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFORMAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFORMAT)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFORMAT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/media/AudioFormat_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::AudioFormat : public jni::object_base<"android/media/AudioFormat",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = AudioFormat_Builder;

	static jint CHANNEL_CONFIGURATION_DEFAULT() { return get_static_field<"CHANNEL_CONFIGURATION_DEFAULT", jint>(); }
	static jint CHANNEL_CONFIGURATION_INVALID() { return get_static_field<"CHANNEL_CONFIGURATION_INVALID", jint>(); }
	static jint CHANNEL_CONFIGURATION_MONO() { return get_static_field<"CHANNEL_CONFIGURATION_MONO", jint>(); }
	static jint CHANNEL_CONFIGURATION_STEREO() { return get_static_field<"CHANNEL_CONFIGURATION_STEREO", jint>(); }
	static jint CHANNEL_INVALID() { return get_static_field<"CHANNEL_INVALID", jint>(); }
	static jint CHANNEL_IN_BACK() { return get_static_field<"CHANNEL_IN_BACK", jint>(); }
	static jint CHANNEL_IN_BACK_PROCESSED() { return get_static_field<"CHANNEL_IN_BACK_PROCESSED", jint>(); }
	static jint CHANNEL_IN_DEFAULT() { return get_static_field<"CHANNEL_IN_DEFAULT", jint>(); }
	static jint CHANNEL_IN_FRONT() { return get_static_field<"CHANNEL_IN_FRONT", jint>(); }
	static jint CHANNEL_IN_FRONT_PROCESSED() { return get_static_field<"CHANNEL_IN_FRONT_PROCESSED", jint>(); }
	static jint CHANNEL_IN_LEFT() { return get_static_field<"CHANNEL_IN_LEFT", jint>(); }
	static jint CHANNEL_IN_LEFT_PROCESSED() { return get_static_field<"CHANNEL_IN_LEFT_PROCESSED", jint>(); }
	static jint CHANNEL_IN_MONO() { return get_static_field<"CHANNEL_IN_MONO", jint>(); }
	static jint CHANNEL_IN_PRESSURE() { return get_static_field<"CHANNEL_IN_PRESSURE", jint>(); }
	static jint CHANNEL_IN_RIGHT() { return get_static_field<"CHANNEL_IN_RIGHT", jint>(); }
	static jint CHANNEL_IN_RIGHT_PROCESSED() { return get_static_field<"CHANNEL_IN_RIGHT_PROCESSED", jint>(); }
	static jint CHANNEL_IN_STEREO() { return get_static_field<"CHANNEL_IN_STEREO", jint>(); }
	static jint CHANNEL_IN_VOICE_DNLINK() { return get_static_field<"CHANNEL_IN_VOICE_DNLINK", jint>(); }
	static jint CHANNEL_IN_VOICE_UPLINK() { return get_static_field<"CHANNEL_IN_VOICE_UPLINK", jint>(); }
	static jint CHANNEL_IN_X_AXIS() { return get_static_field<"CHANNEL_IN_X_AXIS", jint>(); }
	static jint CHANNEL_IN_Y_AXIS() { return get_static_field<"CHANNEL_IN_Y_AXIS", jint>(); }
	static jint CHANNEL_IN_Z_AXIS() { return get_static_field<"CHANNEL_IN_Z_AXIS", jint>(); }
	static jint CHANNEL_OUT_5POINT1() { return get_static_field<"CHANNEL_OUT_5POINT1", jint>(); }
	static jint CHANNEL_OUT_7POINT1() { return get_static_field<"CHANNEL_OUT_7POINT1", jint>(); }
	static jint CHANNEL_OUT_7POINT1_SURROUND() { return get_static_field<"CHANNEL_OUT_7POINT1_SURROUND", jint>(); }
	static jint CHANNEL_OUT_BACK_CENTER() { return get_static_field<"CHANNEL_OUT_BACK_CENTER", jint>(); }
	static jint CHANNEL_OUT_BACK_LEFT() { return get_static_field<"CHANNEL_OUT_BACK_LEFT", jint>(); }
	static jint CHANNEL_OUT_BACK_RIGHT() { return get_static_field<"CHANNEL_OUT_BACK_RIGHT", jint>(); }
	static jint CHANNEL_OUT_DEFAULT() { return get_static_field<"CHANNEL_OUT_DEFAULT", jint>(); }
	static jint CHANNEL_OUT_FRONT_CENTER() { return get_static_field<"CHANNEL_OUT_FRONT_CENTER", jint>(); }
	static jint CHANNEL_OUT_FRONT_LEFT() { return get_static_field<"CHANNEL_OUT_FRONT_LEFT", jint>(); }
	static jint CHANNEL_OUT_FRONT_LEFT_OF_CENTER() { return get_static_field<"CHANNEL_OUT_FRONT_LEFT_OF_CENTER", jint>(); }
	static jint CHANNEL_OUT_FRONT_RIGHT() { return get_static_field<"CHANNEL_OUT_FRONT_RIGHT", jint>(); }
	static jint CHANNEL_OUT_FRONT_RIGHT_OF_CENTER() { return get_static_field<"CHANNEL_OUT_FRONT_RIGHT_OF_CENTER", jint>(); }
	static jint CHANNEL_OUT_LOW_FREQUENCY() { return get_static_field<"CHANNEL_OUT_LOW_FREQUENCY", jint>(); }
	static jint CHANNEL_OUT_MONO() { return get_static_field<"CHANNEL_OUT_MONO", jint>(); }
	static jint CHANNEL_OUT_QUAD() { return get_static_field<"CHANNEL_OUT_QUAD", jint>(); }
	static jint CHANNEL_OUT_SIDE_LEFT() { return get_static_field<"CHANNEL_OUT_SIDE_LEFT", jint>(); }
	static jint CHANNEL_OUT_SIDE_RIGHT() { return get_static_field<"CHANNEL_OUT_SIDE_RIGHT", jint>(); }
	static jint CHANNEL_OUT_STEREO() { return get_static_field<"CHANNEL_OUT_STEREO", jint>(); }
	static jint CHANNEL_OUT_SURROUND() { return get_static_field<"CHANNEL_OUT_SURROUND", jint>(); }
	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint ENCODING_AC3() { return get_static_field<"ENCODING_AC3", jint>(); }
	static jint ENCODING_DEFAULT() { return get_static_field<"ENCODING_DEFAULT", jint>(); }
	static jint ENCODING_DOLBY_TRUEHD() { return get_static_field<"ENCODING_DOLBY_TRUEHD", jint>(); }
	static jint ENCODING_DTS() { return get_static_field<"ENCODING_DTS", jint>(); }
	static jint ENCODING_DTS_HD() { return get_static_field<"ENCODING_DTS_HD", jint>(); }
	static jint ENCODING_E_AC3() { return get_static_field<"ENCODING_E_AC3", jint>(); }
	static jint ENCODING_IEC61937() { return get_static_field<"ENCODING_IEC61937", jint>(); }
	static jint ENCODING_INVALID() { return get_static_field<"ENCODING_INVALID", jint>(); }
	static jint ENCODING_PCM_16BIT() { return get_static_field<"ENCODING_PCM_16BIT", jint>(); }
	static jint ENCODING_PCM_8BIT() { return get_static_field<"ENCODING_PCM_8BIT", jint>(); }
	static jint ENCODING_PCM_FLOAT() { return get_static_field<"ENCODING_PCM_FLOAT", jint>(); }
	static jint SAMPLE_RATE_UNSPECIFIED() { return get_static_field<"SAMPLE_RATE_UNSPECIFIED", jint>(); }

	jint getEncoding() { return call_method<"getEncoding", jint>(); }
	jint getSampleRate() { return call_method<"getSampleRate", jint>(); }
	jint getChannelMask() { return call_method<"getChannelMask", jint>(); }
	jint getChannelIndexMask() { return call_method<"getChannelIndexMask", jint>(); }
	jint getChannelCount() { return call_method<"getChannelCount", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AudioFormat(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFORMAT
