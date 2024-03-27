// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi { class WifiConfiguration; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::WifiConfiguration>
{
	static constexpr fixed_string class_name = "android/net/wifi/WifiConfiguration";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/wifi/WifiEnterpriseConfig.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/BitSet.h>
#include <scapix/java_api/android/net/wifi/WifiConfiguration_Status.h>
#include <scapix/java_api/android/net/wifi/WifiConfiguration_GroupCipher.h>
#include <scapix/java_api/android/net/wifi/WifiConfiguration_PairwiseCipher.h>
#include <scapix/java_api/android/net/wifi/WifiConfiguration_AuthAlgorithm.h>
#include <scapix/java_api/android/net/wifi/WifiConfiguration_Protocol.h>
#include <scapix/java_api/android/net/wifi/WifiConfiguration_KeyMgmt.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::WifiConfiguration : public jni::object_base<"android/net/wifi/WifiConfiguration",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Status = WifiConfiguration_Status;
	using GroupCipher = WifiConfiguration_GroupCipher;
	using PairwiseCipher = WifiConfiguration_PairwiseCipher;
	using AuthAlgorithm = WifiConfiguration_AuthAlgorithm;
	using Protocol = WifiConfiguration_Protocol;
	using KeyMgmt = WifiConfiguration_KeyMgmt;

	jni::ref<java::lang::String> BSSID() { return get_field<"BSSID", jni::ref<java::lang::String>>(); }
	void BSSID(jni::ref<java::lang::String> v) { set_field<"BSSID", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> FQDN() { return get_field<"FQDN", jni::ref<java::lang::String>>(); }
	void FQDN(jni::ref<java::lang::String> v) { set_field<"FQDN", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> SSID() { return get_field<"SSID", jni::ref<java::lang::String>>(); }
	void SSID(jni::ref<java::lang::String> v) { set_field<"SSID", jni::ref<java::lang::String>>(v); }
	jni::ref<java::util::BitSet> allowedAuthAlgorithms() { return get_field<"allowedAuthAlgorithms", jni::ref<java::util::BitSet>>(); }
	void allowedAuthAlgorithms(jni::ref<java::util::BitSet> v) { set_field<"allowedAuthAlgorithms", jni::ref<java::util::BitSet>>(v); }
	jni::ref<java::util::BitSet> allowedGroupCiphers() { return get_field<"allowedGroupCiphers", jni::ref<java::util::BitSet>>(); }
	void allowedGroupCiphers(jni::ref<java::util::BitSet> v) { set_field<"allowedGroupCiphers", jni::ref<java::util::BitSet>>(v); }
	jni::ref<java::util::BitSet> allowedKeyManagement() { return get_field<"allowedKeyManagement", jni::ref<java::util::BitSet>>(); }
	void allowedKeyManagement(jni::ref<java::util::BitSet> v) { set_field<"allowedKeyManagement", jni::ref<java::util::BitSet>>(v); }
	jni::ref<java::util::BitSet> allowedPairwiseCiphers() { return get_field<"allowedPairwiseCiphers", jni::ref<java::util::BitSet>>(); }
	void allowedPairwiseCiphers(jni::ref<java::util::BitSet> v) { set_field<"allowedPairwiseCiphers", jni::ref<java::util::BitSet>>(v); }
	jni::ref<java::util::BitSet> allowedProtocols() { return get_field<"allowedProtocols", jni::ref<java::util::BitSet>>(); }
	void allowedProtocols(jni::ref<java::util::BitSet> v) { set_field<"allowedProtocols", jni::ref<java::util::BitSet>>(v); }
	jni::ref<android::net::wifi::WifiEnterpriseConfig> enterpriseConfig() { return get_field<"enterpriseConfig", jni::ref<android::net::wifi::WifiEnterpriseConfig>>(); }
	void enterpriseConfig(jni::ref<android::net::wifi::WifiEnterpriseConfig> v) { set_field<"enterpriseConfig", jni::ref<android::net::wifi::WifiEnterpriseConfig>>(v); }
	jboolean hiddenSSID() { return get_field<"hiddenSSID", jboolean>(); }
	void hiddenSSID(jboolean v) { set_field<"hiddenSSID", jboolean>(v); }
	jint networkId() { return get_field<"networkId", jint>(); }
	void networkId(jint v) { set_field<"networkId", jint>(v); }
	jni::ref<java::lang::String> preSharedKey() { return get_field<"preSharedKey", jni::ref<java::lang::String>>(); }
	void preSharedKey(jni::ref<java::lang::String> v) { set_field<"preSharedKey", jni::ref<java::lang::String>>(v); }
	jint priority() { return get_field<"priority", jint>(); }
	void priority(jint v) { set_field<"priority", jint>(v); }
	jni::ref<java::lang::String> providerFriendlyName() { return get_field<"providerFriendlyName", jni::ref<java::lang::String>>(); }
	void providerFriendlyName(jni::ref<java::lang::String> v) { set_field<"providerFriendlyName", jni::ref<java::lang::String>>(v); }
	jni::ref<jni::array<jlong>> roamingConsortiumIds() { return get_field<"roamingConsortiumIds", jni::ref<jni::array<jlong>>>(); }
	void roamingConsortiumIds(jni::ref<jni::array<jlong>> v) { set_field<"roamingConsortiumIds", jni::ref<jni::array<jlong>>>(v); }
	jint status() { return get_field<"status", jint>(); }
	void status(jint v) { set_field<"status", jint>(v); }
	jni::ref<jni::array<java::lang::String>> wepKeys() { return get_field<"wepKeys", jni::ref<jni::array<java::lang::String>>>(); }
	void wepKeys(jni::ref<jni::array<java::lang::String>> v) { set_field<"wepKeys", jni::ref<jni::array<java::lang::String>>>(v); }
	jint wepTxKeyIndex() { return get_field<"wepTxKeyIndex", jint>(); }
	void wepTxKeyIndex(jint v) { set_field<"wepTxKeyIndex", jint>(v); }

	static jni::ref<android::net::wifi::WifiConfiguration> new_object() { return base_::new_object(); }
	jboolean isPasspoint() { return call_method<"isPasspoint", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	WifiConfiguration(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION
