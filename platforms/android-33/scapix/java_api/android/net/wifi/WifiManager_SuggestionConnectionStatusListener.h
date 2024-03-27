// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_SUGGESTIONCONNECTIONSTATUSLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_SUGGESTIONCONNECTIONSTATUSLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi { class WifiManager_SuggestionConnectionStatusListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::WifiManager_SuggestionConnectionStatusListener>
{
	static constexpr fixed_string class_name = "android/net/wifi/WifiManager$SuggestionConnectionStatusListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_SUGGESTIONCONNECTIONSTATUSLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_SUGGESTIONCONNECTIONSTATUSLISTENER)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_SUGGESTIONCONNECTIONSTATUSLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/wifi/WifiNetworkSuggestion.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::WifiManager_SuggestionConnectionStatusListener : public jni::object_base<"android/net/wifi/WifiManager$SuggestionConnectionStatusListener",
	java::lang::Object>
{
public:

	void onConnectionStatus(jni::ref<android::net::wifi::WifiNetworkSuggestion> p1, jint p2) { return call_method<"onConnectionStatus", void>(p1, p2); }

protected:

	WifiManager_SuggestionConnectionStatusListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_SUGGESTIONCONNECTIONSTATUSLISTENER