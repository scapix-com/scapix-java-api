// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_CONNECTIVITYMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_CONNECTIVITYMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class ConnectivityManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::ConnectivityManager>
{
	static constexpr fixed_string class_name = "android/net/ConnectivityManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_CONNECTIVITYMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_CONNECTIVITYMANAGER)
#define SCAPIX_JAVA_API_ANDROID_NET_CONNECTIVITYMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/net/ConnectivityManager_NetworkCallback.h>
#include <scapix/java_api/android/net/ConnectivityManager_OnNetworkActiveListener.h>
#include <scapix/java_api/android/net/LinkProperties.h>
#include <scapix/java_api/android/net/Network.h>
#include <scapix/java_api/android/net/NetworkCapabilities.h>
#include <scapix/java_api/android/net/NetworkInfo.h>
#include <scapix/java_api/android/net/NetworkRequest.h>
#include <scapix/java_api/android/net/ProxyInfo.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::ConnectivityManager : public jni::object_base<"android/net/ConnectivityManager",
	java::lang::Object>
{
public:

	using NetworkCallback = ConnectivityManager_NetworkCallback;
	using OnNetworkActiveListener = ConnectivityManager_OnNetworkActiveListener;

	static jni::ref<java::lang::String> ACTION_BACKGROUND_DATA_SETTING_CHANGED() { return get_static_field<"ACTION_BACKGROUND_DATA_SETTING_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_CAPTIVE_PORTAL_SIGN_IN() { return get_static_field<"ACTION_CAPTIVE_PORTAL_SIGN_IN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_RESTRICT_BACKGROUND_CHANGED() { return get_static_field<"ACTION_RESTRICT_BACKGROUND_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CONNECTIVITY_ACTION() { return get_static_field<"CONNECTIVITY_ACTION", jni::ref<java::lang::String>>(); }
	static jint DEFAULT_NETWORK_PREFERENCE() { return get_static_field<"DEFAULT_NETWORK_PREFERENCE", jint>(); }
	static jni::ref<java::lang::String> EXTRA_CAPTIVE_PORTAL() { return get_static_field<"EXTRA_CAPTIVE_PORTAL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_CAPTIVE_PORTAL_URL() { return get_static_field<"EXTRA_CAPTIVE_PORTAL_URL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_EXTRA_INFO() { return get_static_field<"EXTRA_EXTRA_INFO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_IS_FAILOVER() { return get_static_field<"EXTRA_IS_FAILOVER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_NETWORK() { return get_static_field<"EXTRA_NETWORK", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_NETWORK_INFO() { return get_static_field<"EXTRA_NETWORK_INFO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_NETWORK_REQUEST() { return get_static_field<"EXTRA_NETWORK_REQUEST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_NETWORK_TYPE() { return get_static_field<"EXTRA_NETWORK_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_NO_CONNECTIVITY() { return get_static_field<"EXTRA_NO_CONNECTIVITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_OTHER_NETWORK_INFO() { return get_static_field<"EXTRA_OTHER_NETWORK_INFO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_REASON() { return get_static_field<"EXTRA_REASON", jni::ref<java::lang::String>>(); }
	static jint MULTIPATH_PREFERENCE_HANDOVER() { return get_static_field<"MULTIPATH_PREFERENCE_HANDOVER", jint>(); }
	static jint MULTIPATH_PREFERENCE_PERFORMANCE() { return get_static_field<"MULTIPATH_PREFERENCE_PERFORMANCE", jint>(); }
	static jint MULTIPATH_PREFERENCE_RELIABILITY() { return get_static_field<"MULTIPATH_PREFERENCE_RELIABILITY", jint>(); }
	static jint RESTRICT_BACKGROUND_STATUS_DISABLED() { return get_static_field<"RESTRICT_BACKGROUND_STATUS_DISABLED", jint>(); }
	static jint RESTRICT_BACKGROUND_STATUS_ENABLED() { return get_static_field<"RESTRICT_BACKGROUND_STATUS_ENABLED", jint>(); }
	static jint RESTRICT_BACKGROUND_STATUS_WHITELISTED() { return get_static_field<"RESTRICT_BACKGROUND_STATUS_WHITELISTED", jint>(); }
	static jint TYPE_BLUETOOTH() { return get_static_field<"TYPE_BLUETOOTH", jint>(); }
	static jint TYPE_DUMMY() { return get_static_field<"TYPE_DUMMY", jint>(); }
	static jint TYPE_ETHERNET() { return get_static_field<"TYPE_ETHERNET", jint>(); }
	static jint TYPE_MOBILE() { return get_static_field<"TYPE_MOBILE", jint>(); }
	static jint TYPE_MOBILE_DUN() { return get_static_field<"TYPE_MOBILE_DUN", jint>(); }
	static jint TYPE_MOBILE_HIPRI() { return get_static_field<"TYPE_MOBILE_HIPRI", jint>(); }
	static jint TYPE_MOBILE_MMS() { return get_static_field<"TYPE_MOBILE_MMS", jint>(); }
	static jint TYPE_MOBILE_SUPL() { return get_static_field<"TYPE_MOBILE_SUPL", jint>(); }
	static jint TYPE_VPN() { return get_static_field<"TYPE_VPN", jint>(); }
	static jint TYPE_WIFI() { return get_static_field<"TYPE_WIFI", jint>(); }
	static jint TYPE_WIMAX() { return get_static_field<"TYPE_WIMAX", jint>(); }

	static jboolean isNetworkTypeValid(jint networkType) { return call_static_method<"isNetworkTypeValid", jboolean>(networkType); }
	void setNetworkPreference(jint preference) { return call_method<"setNetworkPreference", void>(preference); }
	jint getNetworkPreference() { return call_method<"getNetworkPreference", jint>(); }
	jni::ref<android::net::NetworkInfo> getActiveNetworkInfo() { return call_method<"getActiveNetworkInfo", jni::ref<android::net::NetworkInfo>>(); }
	jni::ref<android::net::Network> getActiveNetwork() { return call_method<"getActiveNetwork", jni::ref<android::net::Network>>(); }
	jni::ref<android::net::NetworkInfo> getNetworkInfo(jint networkType) { return call_method<"getNetworkInfo", jni::ref<android::net::NetworkInfo>>(networkType); }
	jni::ref<android::net::NetworkInfo> getNetworkInfo(jni::ref<android::net::Network> network) { return call_method<"getNetworkInfo", jni::ref<android::net::NetworkInfo>>(network); }
	jni::ref<jni::array<android::net::NetworkInfo>> getAllNetworkInfo() { return call_method<"getAllNetworkInfo", jni::ref<jni::array<android::net::NetworkInfo>>>(); }
	jni::ref<jni::array<android::net::Network>> getAllNetworks() { return call_method<"getAllNetworks", jni::ref<jni::array<android::net::Network>>>(); }
	jni::ref<android::net::LinkProperties> getLinkProperties(jni::ref<android::net::Network> network) { return call_method<"getLinkProperties", jni::ref<android::net::LinkProperties>>(network); }
	jni::ref<android::net::NetworkCapabilities> getNetworkCapabilities(jni::ref<android::net::Network> network) { return call_method<"getNetworkCapabilities", jni::ref<android::net::NetworkCapabilities>>(network); }
	jboolean getBackgroundDataSetting() { return call_method<"getBackgroundDataSetting", jboolean>(); }
	void addDefaultNetworkActiveListener(jni::ref<android::net::ConnectivityManager_OnNetworkActiveListener> l) { return call_method<"addDefaultNetworkActiveListener", void>(l); }
	void removeDefaultNetworkActiveListener(jni::ref<android::net::ConnectivityManager_OnNetworkActiveListener> l) { return call_method<"removeDefaultNetworkActiveListener", void>(l); }
	jboolean isDefaultNetworkActive() { return call_method<"isDefaultNetworkActive", jboolean>(); }
	void reportBadNetwork(jni::ref<android::net::Network> network) { return call_method<"reportBadNetwork", void>(network); }
	void reportNetworkConnectivity(jni::ref<android::net::Network> network, jboolean hasConnectivity) { return call_method<"reportNetworkConnectivity", void>(network, hasConnectivity); }
	jni::ref<android::net::ProxyInfo> getDefaultProxy() { return call_method<"getDefaultProxy", jni::ref<android::net::ProxyInfo>>(); }
	jboolean isActiveNetworkMetered() { return call_method<"isActiveNetworkMetered", jboolean>(); }
	void requestNetwork(jni::ref<android::net::NetworkRequest> request, jni::ref<android::net::ConnectivityManager_NetworkCallback> networkCallback) { return call_method<"requestNetwork", void>(request, networkCallback); }
	void requestNetwork(jni::ref<android::net::NetworkRequest> request, jni::ref<android::net::ConnectivityManager_NetworkCallback> networkCallback, jni::ref<android::os::Handler> handler) { return call_method<"requestNetwork", void>(request, networkCallback, handler); }
	void requestNetwork(jni::ref<android::net::NetworkRequest> request, jni::ref<android::net::ConnectivityManager_NetworkCallback> networkCallback, jint timeoutMs) { return call_method<"requestNetwork", void>(request, networkCallback, timeoutMs); }
	void requestNetwork(jni::ref<android::net::NetworkRequest> request, jni::ref<android::net::ConnectivityManager_NetworkCallback> networkCallback, jni::ref<android::os::Handler> handler, jint timeoutMs) { return call_method<"requestNetwork", void>(request, networkCallback, handler, timeoutMs); }
	void requestNetwork(jni::ref<android::net::NetworkRequest> request, jni::ref<android::app::PendingIntent> operation) { return call_method<"requestNetwork", void>(request, operation); }
	void releaseNetworkRequest(jni::ref<android::app::PendingIntent> operation) { return call_method<"releaseNetworkRequest", void>(operation); }
	void registerNetworkCallback(jni::ref<android::net::NetworkRequest> request, jni::ref<android::net::ConnectivityManager_NetworkCallback> networkCallback) { return call_method<"registerNetworkCallback", void>(request, networkCallback); }
	void registerNetworkCallback(jni::ref<android::net::NetworkRequest> request, jni::ref<android::net::ConnectivityManager_NetworkCallback> networkCallback, jni::ref<android::os::Handler> handler) { return call_method<"registerNetworkCallback", void>(request, networkCallback, handler); }
	void registerNetworkCallback(jni::ref<android::net::NetworkRequest> request, jni::ref<android::app::PendingIntent> operation) { return call_method<"registerNetworkCallback", void>(request, operation); }
	void registerDefaultNetworkCallback(jni::ref<android::net::ConnectivityManager_NetworkCallback> networkCallback) { return call_method<"registerDefaultNetworkCallback", void>(networkCallback); }
	void registerDefaultNetworkCallback(jni::ref<android::net::ConnectivityManager_NetworkCallback> networkCallback, jni::ref<android::os::Handler> handler) { return call_method<"registerDefaultNetworkCallback", void>(networkCallback, handler); }
	jboolean requestBandwidthUpdate(jni::ref<android::net::Network> network) { return call_method<"requestBandwidthUpdate", jboolean>(network); }
	void unregisterNetworkCallback(jni::ref<android::net::ConnectivityManager_NetworkCallback> networkCallback) { return call_method<"unregisterNetworkCallback", void>(networkCallback); }
	void unregisterNetworkCallback(jni::ref<android::app::PendingIntent> operation) { return call_method<"unregisterNetworkCallback", void>(operation); }
	jint getMultipathPreference(jni::ref<android::net::Network> network) { return call_method<"getMultipathPreference", jint>(network); }
	jboolean bindProcessToNetwork(jni::ref<android::net::Network> network) { return call_method<"bindProcessToNetwork", jboolean>(network); }
	static jboolean setProcessDefaultNetwork(jni::ref<android::net::Network> network) { return call_static_method<"setProcessDefaultNetwork", jboolean>(network); }
	jni::ref<android::net::Network> getBoundNetworkForProcess() { return call_method<"getBoundNetworkForProcess", jni::ref<android::net::Network>>(); }
	static jni::ref<android::net::Network> getProcessDefaultNetwork() { return call_static_method<"getProcessDefaultNetwork", jni::ref<android::net::Network>>(); }
	jint getRestrictBackgroundStatus() { return call_method<"getRestrictBackgroundStatus", jint>(); }

protected:

	ConnectivityManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_CONNECTIVITYMANAGER
