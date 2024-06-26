// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_CARRIERCONFIGMANAGER_IMSVT_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_CARRIERCONFIGMANAGER_IMSVT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class CarrierConfigManager_ImsVt; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::CarrierConfigManager_ImsVt>
{
	static constexpr fixed_string class_name = "android/telephony/CarrierConfigManager$ImsVt";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_CARRIERCONFIGMANAGER_IMSVT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_CARRIERCONFIGMANAGER_IMSVT)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_CARRIERCONFIGMANAGER_IMSVT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::CarrierConfigManager_ImsVt : public jni::object_base<"android/telephony/CarrierConfigManager$ImsVt",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> KEY_H264_PAYLOAD_DESCRIPTION_BUNDLE() { return get_static_field<"KEY_H264_PAYLOAD_DESCRIPTION_BUNDLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_H264_PAYLOAD_TYPE_INT_ARRAY() { return get_static_field<"KEY_H264_PAYLOAD_TYPE_INT_ARRAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_H264_VIDEO_CODEC_ATTRIBUTE_PROFILE_LEVEL_ID_STRING() { return get_static_field<"KEY_H264_VIDEO_CODEC_ATTRIBUTE_PROFILE_LEVEL_ID_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_PREFIX() { return get_static_field<"KEY_PREFIX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VIDEO_AS_BANDWIDTH_KBPS_INT() { return get_static_field<"KEY_VIDEO_AS_BANDWIDTH_KBPS_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VIDEO_CODEC_ATTRIBUTE_FRAME_RATE_INT() { return get_static_field<"KEY_VIDEO_CODEC_ATTRIBUTE_FRAME_RATE_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VIDEO_CODEC_ATTRIBUTE_PACKETIZATION_MODE_INT() { return get_static_field<"KEY_VIDEO_CODEC_ATTRIBUTE_PACKETIZATION_MODE_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VIDEO_CODEC_ATTRIBUTE_RESOLUTION_INT_ARRAY() { return get_static_field<"KEY_VIDEO_CODEC_ATTRIBUTE_RESOLUTION_INT_ARRAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VIDEO_CODEC_CAPABILITY_PAYLOAD_TYPES_BUNDLE() { return get_static_field<"KEY_VIDEO_CODEC_CAPABILITY_PAYLOAD_TYPES_BUNDLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VIDEO_ON_DEFAULT_BEARER_SUPPORTED_BOOL() { return get_static_field<"KEY_VIDEO_ON_DEFAULT_BEARER_SUPPORTED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VIDEO_QOS_PRECONDITION_SUPPORTED_BOOL() { return get_static_field<"KEY_VIDEO_QOS_PRECONDITION_SUPPORTED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VIDEO_RR_BANDWIDTH_BPS_INT() { return get_static_field<"KEY_VIDEO_RR_BANDWIDTH_BPS_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VIDEO_RS_BANDWIDTH_BPS_INT() { return get_static_field<"KEY_VIDEO_RS_BANDWIDTH_BPS_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VIDEO_RTCP_INACTIVITY_TIMER_MILLIS_INT() { return get_static_field<"KEY_VIDEO_RTCP_INACTIVITY_TIMER_MILLIS_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VIDEO_RTP_DSCP_INT() { return get_static_field<"KEY_VIDEO_RTP_DSCP_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VIDEO_RTP_INACTIVITY_TIMER_MILLIS_INT() { return get_static_field<"KEY_VIDEO_RTP_INACTIVITY_TIMER_MILLIS_INT", jni::ref<java::lang::String>>(); }


protected:

	CarrierConfigManager_ImsVt(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_CARRIERCONFIGMANAGER_IMSVT
