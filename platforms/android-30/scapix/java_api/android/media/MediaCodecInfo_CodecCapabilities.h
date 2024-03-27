// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_CODECCAPABILITIES_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_CODECCAPABILITIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaCodecInfo_CodecCapabilities; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaCodecInfo_CodecCapabilities>
{
	static constexpr fixed_string class_name = "android/media/MediaCodecInfo$CodecCapabilities";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_CODECCAPABILITIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_CODECCAPABILITIES)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_CODECCAPABILITIES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/MediaCodecInfo_AudioCapabilities.h>
#include <scapix/java_api/android/media/MediaCodecInfo_CodecProfileLevel.h>
#include <scapix/java_api/android/media/MediaCodecInfo_EncoderCapabilities.h>
#include <scapix/java_api/android/media/MediaCodecInfo_VideoCapabilities.h>
#include <scapix/java_api/android/media/MediaFormat.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaCodecInfo_CodecCapabilities : public jni::object_base<"android/media/MediaCodecInfo$CodecCapabilities",
	java::lang::Object>
{
public:

	static jint COLOR_Format12bitRGB444() { return get_static_field<"COLOR_Format12bitRGB444", jint>(); }
	static jint COLOR_Format16bitARGB1555() { return get_static_field<"COLOR_Format16bitARGB1555", jint>(); }
	static jint COLOR_Format16bitARGB4444() { return get_static_field<"COLOR_Format16bitARGB4444", jint>(); }
	static jint COLOR_Format16bitBGR565() { return get_static_field<"COLOR_Format16bitBGR565", jint>(); }
	static jint COLOR_Format16bitRGB565() { return get_static_field<"COLOR_Format16bitRGB565", jint>(); }
	static jint COLOR_Format18BitBGR666() { return get_static_field<"COLOR_Format18BitBGR666", jint>(); }
	static jint COLOR_Format18bitARGB1665() { return get_static_field<"COLOR_Format18bitARGB1665", jint>(); }
	static jint COLOR_Format18bitRGB666() { return get_static_field<"COLOR_Format18bitRGB666", jint>(); }
	static jint COLOR_Format19bitARGB1666() { return get_static_field<"COLOR_Format19bitARGB1666", jint>(); }
	static jint COLOR_Format24BitABGR6666() { return get_static_field<"COLOR_Format24BitABGR6666", jint>(); }
	static jint COLOR_Format24BitARGB6666() { return get_static_field<"COLOR_Format24BitARGB6666", jint>(); }
	static jint COLOR_Format24bitARGB1887() { return get_static_field<"COLOR_Format24bitARGB1887", jint>(); }
	static jint COLOR_Format24bitBGR888() { return get_static_field<"COLOR_Format24bitBGR888", jint>(); }
	static jint COLOR_Format24bitRGB888() { return get_static_field<"COLOR_Format24bitRGB888", jint>(); }
	static jint COLOR_Format25bitARGB1888() { return get_static_field<"COLOR_Format25bitARGB1888", jint>(); }
	static jint COLOR_Format32bitABGR8888() { return get_static_field<"COLOR_Format32bitABGR8888", jint>(); }
	static jint COLOR_Format32bitARGB8888() { return get_static_field<"COLOR_Format32bitARGB8888", jint>(); }
	static jint COLOR_Format32bitBGRA8888() { return get_static_field<"COLOR_Format32bitBGRA8888", jint>(); }
	static jint COLOR_Format8bitRGB332() { return get_static_field<"COLOR_Format8bitRGB332", jint>(); }
	static jint COLOR_FormatCbYCrY() { return get_static_field<"COLOR_FormatCbYCrY", jint>(); }
	static jint COLOR_FormatCrYCbY() { return get_static_field<"COLOR_FormatCrYCbY", jint>(); }
	static jint COLOR_FormatL16() { return get_static_field<"COLOR_FormatL16", jint>(); }
	static jint COLOR_FormatL2() { return get_static_field<"COLOR_FormatL2", jint>(); }
	static jint COLOR_FormatL24() { return get_static_field<"COLOR_FormatL24", jint>(); }
	static jint COLOR_FormatL32() { return get_static_field<"COLOR_FormatL32", jint>(); }
	static jint COLOR_FormatL4() { return get_static_field<"COLOR_FormatL4", jint>(); }
	static jint COLOR_FormatL8() { return get_static_field<"COLOR_FormatL8", jint>(); }
	static jint COLOR_FormatMonochrome() { return get_static_field<"COLOR_FormatMonochrome", jint>(); }
	static jint COLOR_FormatRGBAFlexible() { return get_static_field<"COLOR_FormatRGBAFlexible", jint>(); }
	static jint COLOR_FormatRGBFlexible() { return get_static_field<"COLOR_FormatRGBFlexible", jint>(); }
	static jint COLOR_FormatRawBayer10bit() { return get_static_field<"COLOR_FormatRawBayer10bit", jint>(); }
	static jint COLOR_FormatRawBayer8bit() { return get_static_field<"COLOR_FormatRawBayer8bit", jint>(); }
	static jint COLOR_FormatRawBayer8bitcompressed() { return get_static_field<"COLOR_FormatRawBayer8bitcompressed", jint>(); }
	static jint COLOR_FormatSurface() { return get_static_field<"COLOR_FormatSurface", jint>(); }
	static jint COLOR_FormatYCbYCr() { return get_static_field<"COLOR_FormatYCbYCr", jint>(); }
	static jint COLOR_FormatYCrYCb() { return get_static_field<"COLOR_FormatYCrYCb", jint>(); }
	static jint COLOR_FormatYUV411PackedPlanar() { return get_static_field<"COLOR_FormatYUV411PackedPlanar", jint>(); }
	static jint COLOR_FormatYUV411Planar() { return get_static_field<"COLOR_FormatYUV411Planar", jint>(); }
	static jint COLOR_FormatYUV420Flexible() { return get_static_field<"COLOR_FormatYUV420Flexible", jint>(); }
	static jint COLOR_FormatYUV420PackedPlanar() { return get_static_field<"COLOR_FormatYUV420PackedPlanar", jint>(); }
	static jint COLOR_FormatYUV420PackedSemiPlanar() { return get_static_field<"COLOR_FormatYUV420PackedSemiPlanar", jint>(); }
	static jint COLOR_FormatYUV420Planar() { return get_static_field<"COLOR_FormatYUV420Planar", jint>(); }
	static jint COLOR_FormatYUV420SemiPlanar() { return get_static_field<"COLOR_FormatYUV420SemiPlanar", jint>(); }
	static jint COLOR_FormatYUV422Flexible() { return get_static_field<"COLOR_FormatYUV422Flexible", jint>(); }
	static jint COLOR_FormatYUV422PackedPlanar() { return get_static_field<"COLOR_FormatYUV422PackedPlanar", jint>(); }
	static jint COLOR_FormatYUV422PackedSemiPlanar() { return get_static_field<"COLOR_FormatYUV422PackedSemiPlanar", jint>(); }
	static jint COLOR_FormatYUV422Planar() { return get_static_field<"COLOR_FormatYUV422Planar", jint>(); }
	static jint COLOR_FormatYUV422SemiPlanar() { return get_static_field<"COLOR_FormatYUV422SemiPlanar", jint>(); }
	static jint COLOR_FormatYUV444Flexible() { return get_static_field<"COLOR_FormatYUV444Flexible", jint>(); }
	static jint COLOR_FormatYUV444Interleaved() { return get_static_field<"COLOR_FormatYUV444Interleaved", jint>(); }
	static jint COLOR_QCOM_FormatYUV420SemiPlanar() { return get_static_field<"COLOR_QCOM_FormatYUV420SemiPlanar", jint>(); }
	static jint COLOR_TI_FormatYUV420PackedSemiPlanar() { return get_static_field<"COLOR_TI_FormatYUV420PackedSemiPlanar", jint>(); }
	static jni::ref<java::lang::String> FEATURE_AdaptivePlayback() { return get_static_field<"FEATURE_AdaptivePlayback", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_DynamicTimestamp() { return get_static_field<"FEATURE_DynamicTimestamp", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_FrameParsing() { return get_static_field<"FEATURE_FrameParsing", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_IntraRefresh() { return get_static_field<"FEATURE_IntraRefresh", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_LowLatency() { return get_static_field<"FEATURE_LowLatency", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_MultipleFrames() { return get_static_field<"FEATURE_MultipleFrames", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_PartialFrame() { return get_static_field<"FEATURE_PartialFrame", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_SecurePlayback() { return get_static_field<"FEATURE_SecurePlayback", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_TunneledPlayback() { return get_static_field<"FEATURE_TunneledPlayback", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<jint>> colorFormats() { return get_field<"colorFormats", jni::ref<jni::array<jint>>>(); }
	void colorFormats(jni::ref<jni::array<jint>> v) { set_field<"colorFormats", jni::ref<jni::array<jint>>>(v); }
	jni::ref<jni::array<android::media::MediaCodecInfo_CodecProfileLevel>> profileLevels() { return get_field<"profileLevels", jni::ref<jni::array<android::media::MediaCodecInfo_CodecProfileLevel>>>(); }
	void profileLevels(jni::ref<jni::array<android::media::MediaCodecInfo_CodecProfileLevel>> v) { set_field<"profileLevels", jni::ref<jni::array<android::media::MediaCodecInfo_CodecProfileLevel>>>(v); }

	static jni::ref<android::media::MediaCodecInfo_CodecCapabilities> new_object() { return base_::new_object(); }
	jboolean isFeatureSupported(jni::ref<java::lang::String> name) { return call_method<"isFeatureSupported", jboolean>(name); }
	jboolean isFeatureRequired(jni::ref<java::lang::String> name) { return call_method<"isFeatureRequired", jboolean>(name); }
	jboolean isFormatSupported(jni::ref<android::media::MediaFormat> format) { return call_method<"isFormatSupported", jboolean>(format); }
	jni::ref<android::media::MediaFormat> getDefaultFormat() { return call_method<"getDefaultFormat", jni::ref<android::media::MediaFormat>>(); }
	jni::ref<java::lang::String> getMimeType() { return call_method<"getMimeType", jni::ref<java::lang::String>>(); }
	jint getMaxSupportedInstances() { return call_method<"getMaxSupportedInstances", jint>(); }
	jni::ref<android::media::MediaCodecInfo_AudioCapabilities> getAudioCapabilities() { return call_method<"getAudioCapabilities", jni::ref<android::media::MediaCodecInfo_AudioCapabilities>>(); }
	jni::ref<android::media::MediaCodecInfo_EncoderCapabilities> getEncoderCapabilities() { return call_method<"getEncoderCapabilities", jni::ref<android::media::MediaCodecInfo_EncoderCapabilities>>(); }
	jni::ref<android::media::MediaCodecInfo_VideoCapabilities> getVideoCapabilities() { return call_method<"getVideoCapabilities", jni::ref<android::media::MediaCodecInfo_VideoCapabilities>>(); }
	static jni::ref<android::media::MediaCodecInfo_CodecCapabilities> createFromProfileLevel(jni::ref<java::lang::String> mime, jint profile, jint level) { return call_static_method<"createFromProfileLevel", jni::ref<android::media::MediaCodecInfo_CodecCapabilities>>(mime, profile, level); }

protected:

	MediaCodecInfo_CodecCapabilities(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECINFO_CODECCAPABILITIES
