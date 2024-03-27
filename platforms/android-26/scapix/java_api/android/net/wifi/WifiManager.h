// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi { class WifiManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::WifiManager>
{
	static constexpr fixed_string class_name = "android/net/wifi/WifiManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/DhcpInfo.h>
#include <scapix/java_api/android/net/wifi/WifiConfiguration.h>
#include <scapix/java_api/android/net/wifi/WifiInfo.h>
#include <scapix/java_api/android/net/wifi/WifiManager_LocalOnlyHotspotCallback.h>
#include <scapix/java_api/android/net/wifi/WifiManager_MulticastLock.h>
#include <scapix/java_api/android/net/wifi/WifiManager_WifiLock.h>
#include <scapix/java_api/android/net/wifi/WifiManager_WpsCallback.h>
#include <scapix/java_api/android/net/wifi/WpsInfo.h>
#include <scapix/java_api/android/net/wifi/hotspot2/PasspointConfiguration.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/net/wifi/WifiManager_LocalOnlyHotspotReservation.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::WifiManager : public jni::object_base<"android/net/wifi/WifiManager",
	java::lang::Object>
{
public:

	using MulticastLock = WifiManager_MulticastLock;
	using WifiLock = WifiManager_WifiLock;
	using LocalOnlyHotspotCallback = WifiManager_LocalOnlyHotspotCallback;
	using LocalOnlyHotspotReservation = WifiManager_LocalOnlyHotspotReservation;
	using WpsCallback = WifiManager_WpsCallback;

	static jni::ref<java::lang::String> ACTION_PICK_WIFI_NETWORK() { return get_static_field<"ACTION_PICK_WIFI_NETWORK", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_REQUEST_SCAN_ALWAYS_AVAILABLE() { return get_static_field<"ACTION_REQUEST_SCAN_ALWAYS_AVAILABLE", jni::ref<java::lang::String>>(); }
	static jint ERROR_AUTHENTICATING() { return get_static_field<"ERROR_AUTHENTICATING", jint>(); }
	static jni::ref<java::lang::String> EXTRA_BSSID() { return get_static_field<"EXTRA_BSSID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_NETWORK_INFO() { return get_static_field<"EXTRA_NETWORK_INFO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_NEW_RSSI() { return get_static_field<"EXTRA_NEW_RSSI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_NEW_STATE() { return get_static_field<"EXTRA_NEW_STATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_PREVIOUS_WIFI_STATE() { return get_static_field<"EXTRA_PREVIOUS_WIFI_STATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_RESULTS_UPDATED() { return get_static_field<"EXTRA_RESULTS_UPDATED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_SUPPLICANT_CONNECTED() { return get_static_field<"EXTRA_SUPPLICANT_CONNECTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_SUPPLICANT_ERROR() { return get_static_field<"EXTRA_SUPPLICANT_ERROR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_WIFI_INFO() { return get_static_field<"EXTRA_WIFI_INFO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_WIFI_STATE() { return get_static_field<"EXTRA_WIFI_STATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NETWORK_IDS_CHANGED_ACTION() { return get_static_field<"NETWORK_IDS_CHANGED_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NETWORK_STATE_CHANGED_ACTION() { return get_static_field<"NETWORK_STATE_CHANGED_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RSSI_CHANGED_ACTION() { return get_static_field<"RSSI_CHANGED_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCAN_RESULTS_AVAILABLE_ACTION() { return get_static_field<"SCAN_RESULTS_AVAILABLE_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUPPLICANT_CONNECTION_CHANGE_ACTION() { return get_static_field<"SUPPLICANT_CONNECTION_CHANGE_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUPPLICANT_STATE_CHANGED_ACTION() { return get_static_field<"SUPPLICANT_STATE_CHANGED_ACTION", jni::ref<java::lang::String>>(); }
	static jint WIFI_MODE_FULL() { return get_static_field<"WIFI_MODE_FULL", jint>(); }
	static jint WIFI_MODE_FULL_HIGH_PERF() { return get_static_field<"WIFI_MODE_FULL_HIGH_PERF", jint>(); }
	static jint WIFI_MODE_SCAN_ONLY() { return get_static_field<"WIFI_MODE_SCAN_ONLY", jint>(); }
	static jni::ref<java::lang::String> WIFI_STATE_CHANGED_ACTION() { return get_static_field<"WIFI_STATE_CHANGED_ACTION", jni::ref<java::lang::String>>(); }
	static jint WIFI_STATE_DISABLED() { return get_static_field<"WIFI_STATE_DISABLED", jint>(); }
	static jint WIFI_STATE_DISABLING() { return get_static_field<"WIFI_STATE_DISABLING", jint>(); }
	static jint WIFI_STATE_ENABLED() { return get_static_field<"WIFI_STATE_ENABLED", jint>(); }
	static jint WIFI_STATE_ENABLING() { return get_static_field<"WIFI_STATE_ENABLING", jint>(); }
	static jint WIFI_STATE_UNKNOWN() { return get_static_field<"WIFI_STATE_UNKNOWN", jint>(); }
	static jint WPS_AUTH_FAILURE() { return get_static_field<"WPS_AUTH_FAILURE", jint>(); }
	static jint WPS_OVERLAP_ERROR() { return get_static_field<"WPS_OVERLAP_ERROR", jint>(); }
	static jint WPS_TIMED_OUT() { return get_static_field<"WPS_TIMED_OUT", jint>(); }
	static jint WPS_TKIP_ONLY_PROHIBITED() { return get_static_field<"WPS_TKIP_ONLY_PROHIBITED", jint>(); }
	static jint WPS_WEP_PROHIBITED() { return get_static_field<"WPS_WEP_PROHIBITED", jint>(); }

	jni::ref<java::util::List> getConfiguredNetworks() { return call_method<"getConfiguredNetworks", jni::ref<java::util::List>>(); }
	jint addNetwork(jni::ref<android::net::wifi::WifiConfiguration> config) { return call_method<"addNetwork", jint>(config); }
	jint updateNetwork(jni::ref<android::net::wifi::WifiConfiguration> config) { return call_method<"updateNetwork", jint>(config); }
	void addOrUpdatePasspointConfiguration(jni::ref<android::net::wifi::hotspot2::PasspointConfiguration> config) { return call_method<"addOrUpdatePasspointConfiguration", void>(config); }
	void removePasspointConfiguration(jni::ref<java::lang::String> fqdn) { return call_method<"removePasspointConfiguration", void>(fqdn); }
	jni::ref<java::util::List> getPasspointConfigurations() { return call_method<"getPasspointConfigurations", jni::ref<java::util::List>>(); }
	jboolean removeNetwork(jint netId) { return call_method<"removeNetwork", jboolean>(netId); }
	jboolean enableNetwork(jint netId, jboolean attemptConnect) { return call_method<"enableNetwork", jboolean>(netId, attemptConnect); }
	jboolean disableNetwork(jint netId) { return call_method<"disableNetwork", jboolean>(netId); }
	jboolean disconnect() { return call_method<"disconnect", jboolean>(); }
	jboolean reconnect() { return call_method<"reconnect", jboolean>(); }
	jboolean reassociate() { return call_method<"reassociate", jboolean>(); }
	jboolean pingSupplicant() { return call_method<"pingSupplicant", jboolean>(); }
	jboolean is5GHzBandSupported() { return call_method<"is5GHzBandSupported", jboolean>(); }
	jboolean isP2pSupported() { return call_method<"isP2pSupported", jboolean>(); }
	jboolean isDeviceToApRttSupported() { return call_method<"isDeviceToApRttSupported", jboolean>(); }
	jboolean isPreferredNetworkOffloadSupported() { return call_method<"isPreferredNetworkOffloadSupported", jboolean>(); }
	jboolean isTdlsSupported() { return call_method<"isTdlsSupported", jboolean>(); }
	jboolean isEnhancedPowerReportingSupported() { return call_method<"isEnhancedPowerReportingSupported", jboolean>(); }
	jboolean startScan() { return call_method<"startScan", jboolean>(); }
	jni::ref<android::net::wifi::WifiInfo> getConnectionInfo() { return call_method<"getConnectionInfo", jni::ref<android::net::wifi::WifiInfo>>(); }
	jni::ref<java::util::List> getScanResults() { return call_method<"getScanResults", jni::ref<java::util::List>>(); }
	jboolean isScanAlwaysAvailable() { return call_method<"isScanAlwaysAvailable", jboolean>(); }
	jboolean saveConfiguration() { return call_method<"saveConfiguration", jboolean>(); }
	jni::ref<android::net::DhcpInfo> getDhcpInfo() { return call_method<"getDhcpInfo", jni::ref<android::net::DhcpInfo>>(); }
	jboolean setWifiEnabled(jboolean enabled) { return call_method<"setWifiEnabled", jboolean>(enabled); }
	jint getWifiState() { return call_method<"getWifiState", jint>(); }
	jboolean isWifiEnabled() { return call_method<"isWifiEnabled", jboolean>(); }
	static jint calculateSignalLevel(jint rssi, jint numLevels) { return call_static_method<"calculateSignalLevel", jint>(rssi, numLevels); }
	static jint compareSignalLevel(jint rssiA, jint rssiB) { return call_static_method<"compareSignalLevel", jint>(rssiA, rssiB); }
	void startLocalOnlyHotspot(jni::ref<android::net::wifi::WifiManager_LocalOnlyHotspotCallback> callback, jni::ref<android::os::Handler> handler) { return call_method<"startLocalOnlyHotspot", void>(callback, handler); }
	void setTdlsEnabled(jni::ref<java::net::InetAddress> remoteIPAddress, jboolean enable) { return call_method<"setTdlsEnabled", void>(remoteIPAddress, enable); }
	void setTdlsEnabledWithMacAddress(jni::ref<java::lang::String> remoteMacAddress, jboolean enable) { return call_method<"setTdlsEnabledWithMacAddress", void>(remoteMacAddress, enable); }
	void startWps(jni::ref<android::net::wifi::WpsInfo> config, jni::ref<android::net::wifi::WifiManager_WpsCallback> listener) { return call_method<"startWps", void>(config, listener); }
	void cancelWps(jni::ref<android::net::wifi::WifiManager_WpsCallback> listener) { return call_method<"cancelWps", void>(listener); }
	jni::ref<android::net::wifi::WifiManager_WifiLock> createWifiLock(jint lockType, jni::ref<java::lang::String> tag) { return call_method<"createWifiLock", jni::ref<android::net::wifi::WifiManager_WifiLock>>(lockType, tag); }
	jni::ref<android::net::wifi::WifiManager_WifiLock> createWifiLock(jni::ref<java::lang::String> tag) { return call_method<"createWifiLock", jni::ref<android::net::wifi::WifiManager_WifiLock>>(tag); }
	jni::ref<android::net::wifi::WifiManager_MulticastLock> createMulticastLock(jni::ref<java::lang::String> tag) { return call_method<"createMulticastLock", jni::ref<android::net::wifi::WifiManager_MulticastLock>>(tag); }

protected:

	WifiManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER
