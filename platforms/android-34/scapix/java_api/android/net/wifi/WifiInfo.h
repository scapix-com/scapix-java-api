// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/net/TransportInfo.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi { class WifiInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::WifiInfo>
{
	static constexpr fixed_string class_name = "android/net/wifi/WifiInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::net::TransportInfo, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIINFO)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/MacAddress.h>
#include <scapix/java_api/android/net/NetworkInfo_DetailedState.h>
#include <scapix/java_api/android/net/wifi/SupplicantState.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/net/wifi/WifiInfo_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::WifiInfo : public jni::object_base<"android/net/wifi/WifiInfo",
	java::lang::Object,
	android::net::TransportInfo,
	android::os::Parcelable>
{
public:

	using Builder = WifiInfo_Builder;

	static jni::ref<java::lang::String> FREQUENCY_UNITS() { return get_static_field<"FREQUENCY_UNITS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LINK_SPEED_UNITS() { return get_static_field<"LINK_SPEED_UNITS", jni::ref<java::lang::String>>(); }
	static jint LINK_SPEED_UNKNOWN() { return get_static_field<"LINK_SPEED_UNKNOWN", jint>(); }
	static jint SECURITY_TYPE_DPP() { return get_static_field<"SECURITY_TYPE_DPP", jint>(); }
	static jint SECURITY_TYPE_EAP() { return get_static_field<"SECURITY_TYPE_EAP", jint>(); }
	static jint SECURITY_TYPE_EAP_WPA3_ENTERPRISE() { return get_static_field<"SECURITY_TYPE_EAP_WPA3_ENTERPRISE", jint>(); }
	static jint SECURITY_TYPE_EAP_WPA3_ENTERPRISE_192_BIT() { return get_static_field<"SECURITY_TYPE_EAP_WPA3_ENTERPRISE_192_BIT", jint>(); }
	static jint SECURITY_TYPE_OPEN() { return get_static_field<"SECURITY_TYPE_OPEN", jint>(); }
	static jint SECURITY_TYPE_OSEN() { return get_static_field<"SECURITY_TYPE_OSEN", jint>(); }
	static jint SECURITY_TYPE_OWE() { return get_static_field<"SECURITY_TYPE_OWE", jint>(); }
	static jint SECURITY_TYPE_PASSPOINT_R1_R2() { return get_static_field<"SECURITY_TYPE_PASSPOINT_R1_R2", jint>(); }
	static jint SECURITY_TYPE_PASSPOINT_R3() { return get_static_field<"SECURITY_TYPE_PASSPOINT_R3", jint>(); }
	static jint SECURITY_TYPE_PSK() { return get_static_field<"SECURITY_TYPE_PSK", jint>(); }
	static jint SECURITY_TYPE_SAE() { return get_static_field<"SECURITY_TYPE_SAE", jint>(); }
	static jint SECURITY_TYPE_UNKNOWN() { return get_static_field<"SECURITY_TYPE_UNKNOWN", jint>(); }
	static jint SECURITY_TYPE_WAPI_CERT() { return get_static_field<"SECURITY_TYPE_WAPI_CERT", jint>(); }
	static jint SECURITY_TYPE_WAPI_PSK() { return get_static_field<"SECURITY_TYPE_WAPI_PSK", jint>(); }
	static jint SECURITY_TYPE_WEP() { return get_static_field<"SECURITY_TYPE_WEP", jint>(); }

	jni::ref<java::lang::String> getSSID() { return call_method<"getSSID", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getBSSID() { return call_method<"getBSSID", jni::ref<java::lang::String>>(); }
	jni::ref<android::net::MacAddress> getApMldMacAddress() { return call_method<"getApMldMacAddress", jni::ref<android::net::MacAddress>>(); }
	jint getApMloLinkId() { return call_method<"getApMloLinkId", jint>(); }
	jni::ref<java::util::List> getAffiliatedMloLinks() { return call_method<"getAffiliatedMloLinks", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getAssociatedMloLinks() { return call_method<"getAssociatedMloLinks", jni::ref<java::util::List>>(); }
	jint getRssi() { return call_method<"getRssi", jint>(); }
	jint getWifiStandard() { return call_method<"getWifiStandard", jint>(); }
	jint getLinkSpeed() { return call_method<"getLinkSpeed", jint>(); }
	jint getTxLinkSpeedMbps() { return call_method<"getTxLinkSpeedMbps", jint>(); }
	jint getMaxSupportedTxLinkSpeedMbps() { return call_method<"getMaxSupportedTxLinkSpeedMbps", jint>(); }
	jint getRxLinkSpeedMbps() { return call_method<"getRxLinkSpeedMbps", jint>(); }
	jint getMaxSupportedRxLinkSpeedMbps() { return call_method<"getMaxSupportedRxLinkSpeedMbps", jint>(); }
	jint getFrequency() { return call_method<"getFrequency", jint>(); }
	jni::ref<java::lang::String> getMacAddress() { return call_method<"getMacAddress", jni::ref<java::lang::String>>(); }
	jboolean isRestricted() { return call_method<"isRestricted", jboolean>(); }
	jni::ref<java::lang::String> getPasspointFqdn() { return call_method<"getPasspointFqdn", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getPasspointProviderFriendlyName() { return call_method<"getPasspointProviderFriendlyName", jni::ref<java::lang::String>>(); }
	jint getSubscriptionId() { return call_method<"getSubscriptionId", jint>(); }
	jint getNetworkId() { return call_method<"getNetworkId", jint>(); }
	jni::ref<android::net::wifi::SupplicantState> getSupplicantState() { return call_method<"getSupplicantState", jni::ref<android::net::wifi::SupplicantState>>(); }
	jint getIpAddress() { return call_method<"getIpAddress", jint>(); }
	jboolean getHiddenSSID() { return call_method<"getHiddenSSID", jboolean>(); }
	static jni::ref<android::net::NetworkInfo_DetailedState> getDetailedStateOf(jni::ref<android::net::wifi::SupplicantState> suppState) { return call_static_method<"getDetailedStateOf", jni::ref<android::net::NetworkInfo_DetailedState>>(suppState); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jni::ref<java::util::List> getInformationElements() { return call_method<"getInformationElements", jni::ref<java::util::List>>(); }
	jboolean equals(jni::ref<java::lang::Object> that) { return call_method<"equals", jboolean>(that); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<android::net::wifi::WifiInfo> makeCopy(jlong redactions) { return call_method<"makeCopy", jni::ref<android::net::wifi::WifiInfo>>(redactions); }
	jlong getApplicableRedactions() { return call_method<"getApplicableRedactions", jlong>(); }
	jint getCurrentSecurityType() { return call_method<"getCurrentSecurityType", jint>(); }

protected:

	WifiInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIINFO
