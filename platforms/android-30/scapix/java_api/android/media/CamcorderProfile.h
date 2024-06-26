// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_CAMCORDERPROFILE_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_CAMCORDERPROFILE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class CamcorderProfile; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::CamcorderProfile>
{
	static constexpr fixed_string class_name = "android/media/CamcorderProfile";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_CAMCORDERPROFILE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_CAMCORDERPROFILE)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_CAMCORDERPROFILE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::CamcorderProfile : public jni::object_base<"android/media/CamcorderProfile",
	java::lang::Object>
{
public:

	static jint QUALITY_1080P() { return get_static_field<"QUALITY_1080P", jint>(); }
	static jint QUALITY_2160P() { return get_static_field<"QUALITY_2160P", jint>(); }
	static jint QUALITY_2K() { return get_static_field<"QUALITY_2K", jint>(); }
	static jint QUALITY_480P() { return get_static_field<"QUALITY_480P", jint>(); }
	static jint QUALITY_4KDCI() { return get_static_field<"QUALITY_4KDCI", jint>(); }
	static jint QUALITY_720P() { return get_static_field<"QUALITY_720P", jint>(); }
	static jint QUALITY_CIF() { return get_static_field<"QUALITY_CIF", jint>(); }
	static jint QUALITY_HIGH() { return get_static_field<"QUALITY_HIGH", jint>(); }
	static jint QUALITY_HIGH_SPEED_1080P() { return get_static_field<"QUALITY_HIGH_SPEED_1080P", jint>(); }
	static jint QUALITY_HIGH_SPEED_2160P() { return get_static_field<"QUALITY_HIGH_SPEED_2160P", jint>(); }
	static jint QUALITY_HIGH_SPEED_480P() { return get_static_field<"QUALITY_HIGH_SPEED_480P", jint>(); }
	static jint QUALITY_HIGH_SPEED_4KDCI() { return get_static_field<"QUALITY_HIGH_SPEED_4KDCI", jint>(); }
	static jint QUALITY_HIGH_SPEED_720P() { return get_static_field<"QUALITY_HIGH_SPEED_720P", jint>(); }
	static jint QUALITY_HIGH_SPEED_CIF() { return get_static_field<"QUALITY_HIGH_SPEED_CIF", jint>(); }
	static jint QUALITY_HIGH_SPEED_HIGH() { return get_static_field<"QUALITY_HIGH_SPEED_HIGH", jint>(); }
	static jint QUALITY_HIGH_SPEED_LOW() { return get_static_field<"QUALITY_HIGH_SPEED_LOW", jint>(); }
	static jint QUALITY_HIGH_SPEED_VGA() { return get_static_field<"QUALITY_HIGH_SPEED_VGA", jint>(); }
	static jint QUALITY_LOW() { return get_static_field<"QUALITY_LOW", jint>(); }
	static jint QUALITY_QCIF() { return get_static_field<"QUALITY_QCIF", jint>(); }
	static jint QUALITY_QHD() { return get_static_field<"QUALITY_QHD", jint>(); }
	static jint QUALITY_QVGA() { return get_static_field<"QUALITY_QVGA", jint>(); }
	static jint QUALITY_TIME_LAPSE_1080P() { return get_static_field<"QUALITY_TIME_LAPSE_1080P", jint>(); }
	static jint QUALITY_TIME_LAPSE_2160P() { return get_static_field<"QUALITY_TIME_LAPSE_2160P", jint>(); }
	static jint QUALITY_TIME_LAPSE_2K() { return get_static_field<"QUALITY_TIME_LAPSE_2K", jint>(); }
	static jint QUALITY_TIME_LAPSE_480P() { return get_static_field<"QUALITY_TIME_LAPSE_480P", jint>(); }
	static jint QUALITY_TIME_LAPSE_4KDCI() { return get_static_field<"QUALITY_TIME_LAPSE_4KDCI", jint>(); }
	static jint QUALITY_TIME_LAPSE_720P() { return get_static_field<"QUALITY_TIME_LAPSE_720P", jint>(); }
	static jint QUALITY_TIME_LAPSE_CIF() { return get_static_field<"QUALITY_TIME_LAPSE_CIF", jint>(); }
	static jint QUALITY_TIME_LAPSE_HIGH() { return get_static_field<"QUALITY_TIME_LAPSE_HIGH", jint>(); }
	static jint QUALITY_TIME_LAPSE_LOW() { return get_static_field<"QUALITY_TIME_LAPSE_LOW", jint>(); }
	static jint QUALITY_TIME_LAPSE_QCIF() { return get_static_field<"QUALITY_TIME_LAPSE_QCIF", jint>(); }
	static jint QUALITY_TIME_LAPSE_QHD() { return get_static_field<"QUALITY_TIME_LAPSE_QHD", jint>(); }
	static jint QUALITY_TIME_LAPSE_QVGA() { return get_static_field<"QUALITY_TIME_LAPSE_QVGA", jint>(); }
	static jint QUALITY_TIME_LAPSE_VGA() { return get_static_field<"QUALITY_TIME_LAPSE_VGA", jint>(); }
	static jint QUALITY_VGA() { return get_static_field<"QUALITY_VGA", jint>(); }
	jint audioBitRate() { return get_field<"audioBitRate", jint>(); }
	void audioBitRate(jint v) { set_field<"audioBitRate", jint>(v); }
	jint audioChannels() { return get_field<"audioChannels", jint>(); }
	void audioChannels(jint v) { set_field<"audioChannels", jint>(v); }
	jint audioCodec() { return get_field<"audioCodec", jint>(); }
	void audioCodec(jint v) { set_field<"audioCodec", jint>(v); }
	jint audioSampleRate() { return get_field<"audioSampleRate", jint>(); }
	void audioSampleRate(jint v) { set_field<"audioSampleRate", jint>(v); }
	jint duration() { return get_field<"duration", jint>(); }
	void duration(jint v) { set_field<"duration", jint>(v); }
	jint fileFormat() { return get_field<"fileFormat", jint>(); }
	void fileFormat(jint v) { set_field<"fileFormat", jint>(v); }
	jint quality() { return get_field<"quality", jint>(); }
	void quality(jint v) { set_field<"quality", jint>(v); }
	jint videoBitRate() { return get_field<"videoBitRate", jint>(); }
	void videoBitRate(jint v) { set_field<"videoBitRate", jint>(v); }
	jint videoCodec() { return get_field<"videoCodec", jint>(); }
	void videoCodec(jint v) { set_field<"videoCodec", jint>(v); }
	jint videoFrameHeight() { return get_field<"videoFrameHeight", jint>(); }
	void videoFrameHeight(jint v) { set_field<"videoFrameHeight", jint>(v); }
	jint videoFrameRate() { return get_field<"videoFrameRate", jint>(); }
	void videoFrameRate(jint v) { set_field<"videoFrameRate", jint>(v); }
	jint videoFrameWidth() { return get_field<"videoFrameWidth", jint>(); }
	void videoFrameWidth(jint v) { set_field<"videoFrameWidth", jint>(v); }

	static jni::ref<android::media::CamcorderProfile> get(jint quality) { return call_static_method<"get", jni::ref<android::media::CamcorderProfile>>(quality); }
	static jni::ref<android::media::CamcorderProfile> get(jint cameraId, jint quality) { return call_static_method<"get", jni::ref<android::media::CamcorderProfile>>(cameraId, quality); }
	static jboolean hasProfile(jint quality) { return call_static_method<"hasProfile", jboolean>(quality); }
	static jboolean hasProfile(jint cameraId, jint quality) { return call_static_method<"hasProfile", jboolean>(cameraId, quality); }

protected:

	CamcorderProfile(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_CAMCORDERPROFILE
