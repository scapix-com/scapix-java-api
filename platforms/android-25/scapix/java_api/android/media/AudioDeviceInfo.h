// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIODEVICEINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIODEVICEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class AudioDeviceInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::AudioDeviceInfo>
{
	static constexpr fixed_string class_name = "android/media/AudioDeviceInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIODEVICEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIODEVICEINFO)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIODEVICEINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::AudioDeviceInfo : public jni::object_base<"android/media/AudioDeviceInfo",
	java::lang::Object>
{
public:

	static jint TYPE_AUX_LINE() { return get_static_field<"TYPE_AUX_LINE", jint>(); }
	static jint TYPE_BLUETOOTH_A2DP() { return get_static_field<"TYPE_BLUETOOTH_A2DP", jint>(); }
	static jint TYPE_BLUETOOTH_SCO() { return get_static_field<"TYPE_BLUETOOTH_SCO", jint>(); }
	static jint TYPE_BUILTIN_EARPIECE() { return get_static_field<"TYPE_BUILTIN_EARPIECE", jint>(); }
	static jint TYPE_BUILTIN_MIC() { return get_static_field<"TYPE_BUILTIN_MIC", jint>(); }
	static jint TYPE_BUILTIN_SPEAKER() { return get_static_field<"TYPE_BUILTIN_SPEAKER", jint>(); }
	static jint TYPE_BUS() { return get_static_field<"TYPE_BUS", jint>(); }
	static jint TYPE_DOCK() { return get_static_field<"TYPE_DOCK", jint>(); }
	static jint TYPE_FM() { return get_static_field<"TYPE_FM", jint>(); }
	static jint TYPE_FM_TUNER() { return get_static_field<"TYPE_FM_TUNER", jint>(); }
	static jint TYPE_HDMI() { return get_static_field<"TYPE_HDMI", jint>(); }
	static jint TYPE_HDMI_ARC() { return get_static_field<"TYPE_HDMI_ARC", jint>(); }
	static jint TYPE_IP() { return get_static_field<"TYPE_IP", jint>(); }
	static jint TYPE_LINE_ANALOG() { return get_static_field<"TYPE_LINE_ANALOG", jint>(); }
	static jint TYPE_LINE_DIGITAL() { return get_static_field<"TYPE_LINE_DIGITAL", jint>(); }
	static jint TYPE_TELEPHONY() { return get_static_field<"TYPE_TELEPHONY", jint>(); }
	static jint TYPE_TV_TUNER() { return get_static_field<"TYPE_TV_TUNER", jint>(); }
	static jint TYPE_UNKNOWN() { return get_static_field<"TYPE_UNKNOWN", jint>(); }
	static jint TYPE_USB_ACCESSORY() { return get_static_field<"TYPE_USB_ACCESSORY", jint>(); }
	static jint TYPE_USB_DEVICE() { return get_static_field<"TYPE_USB_DEVICE", jint>(); }
	static jint TYPE_WIRED_HEADPHONES() { return get_static_field<"TYPE_WIRED_HEADPHONES", jint>(); }
	static jint TYPE_WIRED_HEADSET() { return get_static_field<"TYPE_WIRED_HEADSET", jint>(); }

	jint getId() { return call_method<"getId", jint>(); }
	jni::ref<java::lang::CharSequence> getProductName() { return call_method<"getProductName", jni::ref<java::lang::CharSequence>>(); }
	jboolean isSource() { return call_method<"isSource", jboolean>(); }
	jboolean isSink() { return call_method<"isSink", jboolean>(); }
	jni::ref<jni::array<jint>> getSampleRates() { return call_method<"getSampleRates", jni::ref<jni::array<jint>>>(); }
	jni::ref<jni::array<jint>> getChannelMasks() { return call_method<"getChannelMasks", jni::ref<jni::array<jint>>>(); }
	jni::ref<jni::array<jint>> getChannelIndexMasks() { return call_method<"getChannelIndexMasks", jni::ref<jni::array<jint>>>(); }
	jni::ref<jni::array<jint>> getChannelCounts() { return call_method<"getChannelCounts", jni::ref<jni::array<jint>>>(); }
	jni::ref<jni::array<jint>> getEncodings() { return call_method<"getEncodings", jni::ref<jni::array<jint>>>(); }
	jint getType() { return call_method<"getType", jint>(); }

protected:

	AudioDeviceInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIODEVICEINFO
