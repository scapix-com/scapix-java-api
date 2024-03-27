// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFINETWORKSUGGESTION_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFINETWORKSUGGESTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi { class WifiNetworkSuggestion; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::WifiNetworkSuggestion>
{
	static constexpr fixed_string class_name = "android/net/wifi/WifiNetworkSuggestion";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFINETWORKSUGGESTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFINETWORKSUGGESTION)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFINETWORKSUGGESTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/MacAddress.h>
#include <scapix/java_api/android/net/wifi/WifiEnterpriseConfig.h>
#include <scapix/java_api/android/net/wifi/WifiSsid.h>
#include <scapix/java_api/android/net/wifi/hotspot2/PasspointConfiguration.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/ParcelUuid.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/net/wifi/WifiNetworkSuggestion_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::WifiNetworkSuggestion : public jni::object_base<"android/net/wifi/WifiNetworkSuggestion",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = WifiNetworkSuggestion_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint RANDOMIZATION_NON_PERSISTENT() { return get_static_field<"RANDOMIZATION_NON_PERSISTENT", jint>(); }
	static jint RANDOMIZATION_PERSISTENT() { return get_static_field<"RANDOMIZATION_PERSISTENT", jint>(); }

	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<android::net::MacAddress> getBssid() { return call_method<"getBssid", jni::ref<android::net::MacAddress>>(); }
	jboolean isCredentialSharedWithUser() { return call_method<"isCredentialSharedWithUser", jboolean>(); }
	jboolean isAppInteractionRequired() { return call_method<"isAppInteractionRequired", jboolean>(); }
	jboolean isEnhancedOpen() { return call_method<"isEnhancedOpen", jboolean>(); }
	jboolean isHiddenSsid() { return call_method<"isHiddenSsid", jboolean>(); }
	jboolean isInitialAutojoinEnabled() { return call_method<"isInitialAutojoinEnabled", jboolean>(); }
	jboolean isMetered() { return call_method<"isMetered", jboolean>(); }
	jboolean isUserInteractionRequired() { return call_method<"isUserInteractionRequired", jboolean>(); }
	jni::ref<android::net::wifi::hotspot2::PasspointConfiguration> getPasspointConfig() { return call_method<"getPasspointConfig", jni::ref<android::net::wifi::hotspot2::PasspointConfiguration>>(); }
	jint getPriority() { return call_method<"getPriority", jint>(); }
	jni::ref<java::lang::String> getSsid() { return call_method<"getSsid", jni::ref<java::lang::String>>(); }
	jni::ref<android::net::wifi::WifiSsid> getWifiSsid() { return call_method<"getWifiSsid", jni::ref<android::net::wifi::WifiSsid>>(); }
	jboolean isUntrusted() { return call_method<"isUntrusted", jboolean>(); }
	jboolean isRestricted() { return call_method<"isRestricted", jboolean>(); }
	jboolean isCarrierMerged() { return call_method<"isCarrierMerged", jboolean>(); }
	jni::ref<android::net::wifi::WifiEnterpriseConfig> getEnterpriseConfig() { return call_method<"getEnterpriseConfig", jni::ref<android::net::wifi::WifiEnterpriseConfig>>(); }
	jni::ref<java::lang::String> getPassphrase() { return call_method<"getPassphrase", jni::ref<java::lang::String>>(); }
	jint getPriorityGroup() { return call_method<"getPriorityGroup", jint>(); }
	jint getSubscriptionId() { return call_method<"getSubscriptionId", jint>(); }
	jint getMacRandomizationSetting() { return call_method<"getMacRandomizationSetting", jint>(); }
	jni::ref<android::os::ParcelUuid> getSubscriptionGroup() { return call_method<"getSubscriptionGroup", jni::ref<android::os::ParcelUuid>>(); }

protected:

	WifiNetworkSuggestion(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFINETWORKSUGGESTION