// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RESPONDERCONFIG_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RESPONDERCONFIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::rtt { class ResponderConfig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::rtt::ResponderConfig>
{
	static constexpr fixed_string class_name = "android/net/wifi/rtt/ResponderConfig";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RESPONDERCONFIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RESPONDERCONFIG)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RESPONDERCONFIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/MacAddress.h>
#include <scapix/java_api/android/net/wifi/ScanResult.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/net/wifi/rtt/ResponderConfig_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::rtt::ResponderConfig : public jni::object_base<"android/net/wifi/rtt/ResponderConfig",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = ResponderConfig_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::net::wifi::rtt::ResponderConfig> fromScanResult(jni::ref<android::net::wifi::ScanResult> scanResult) { return call_static_method<"fromScanResult", jni::ref<android::net::wifi::rtt::ResponderConfig>>(scanResult); }
	jni::ref<android::net::MacAddress> getMacAddress() { return call_method<"getMacAddress", jni::ref<android::net::MacAddress>>(); }
	jboolean is80211mcSupported() { return call_method<"is80211mcSupported", jboolean>(); }
	jint getChannelWidth() { return call_method<"getChannelWidth", jint>(); }
	jint getFrequencyMhz() { return call_method<"getFrequencyMhz", jint>(); }
	jint getCenterFreq0Mhz() { return call_method<"getCenterFreq0Mhz", jint>(); }
	jint getCenterFreq1Mhz() { return call_method<"getCenterFreq1Mhz", jint>(); }
	jint getPreamble() { return call_method<"getPreamble", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ResponderConfig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RESPONDERCONFIG
