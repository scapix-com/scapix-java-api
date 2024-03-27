// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_ENCODERCAPABILITIES_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_ENCODERCAPABILITIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaCodecInfo_EncoderCapabilities; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaCodecInfo_EncoderCapabilities>
{
	static constexpr fixed_string class_name = "android/media/MediaCodecInfo$EncoderCapabilities";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_ENCODERCAPABILITIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_ENCODERCAPABILITIES)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_ENCODERCAPABILITIES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/util/Range.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaCodecInfo_EncoderCapabilities : public jni::object_base<"android/media/MediaCodecInfo$EncoderCapabilities",
	java::lang::Object>
{
public:

	static jint BITRATE_MODE_CBR() { return get_static_field<"BITRATE_MODE_CBR", jint>(); }
	static jint BITRATE_MODE_CQ() { return get_static_field<"BITRATE_MODE_CQ", jint>(); }
	static jint BITRATE_MODE_VBR() { return get_static_field<"BITRATE_MODE_VBR", jint>(); }

	jni::ref<android::util::Range> getComplexityRange() { return call_method<"getComplexityRange", jni::ref<android::util::Range>>(); }
	jboolean isBitrateModeSupported(jint mode) { return call_method<"isBitrateModeSupported", jboolean>(mode); }

protected:

	MediaCodecInfo_EncoderCapabilities(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_ENCODERCAPABILITIES
