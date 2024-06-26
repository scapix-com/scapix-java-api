// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_LOCALONLYHOTSPOTRESERVATION_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_LOCALONLYHOTSPOTRESERVATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi { class WifiManager_LocalOnlyHotspotReservation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::WifiManager_LocalOnlyHotspotReservation>
{
	static constexpr fixed_string class_name = "android/net/wifi/WifiManager$LocalOnlyHotspotReservation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_LOCALONLYHOTSPOTRESERVATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_LOCALONLYHOTSPOTRESERVATION)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_LOCALONLYHOTSPOTRESERVATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/wifi/SoftApConfiguration.h>
#include <scapix/java_api/android/net/wifi/WifiConfiguration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::WifiManager_LocalOnlyHotspotReservation : public jni::object_base<"android/net/wifi/WifiManager$LocalOnlyHotspotReservation",
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	jni::ref<android::net::wifi::WifiConfiguration> getWifiConfiguration() { return call_method<"getWifiConfiguration", jni::ref<android::net::wifi::WifiConfiguration>>(); }
	jni::ref<android::net::wifi::SoftApConfiguration> getSoftApConfiguration() { return call_method<"getSoftApConfiguration", jni::ref<android::net::wifi::SoftApConfiguration>>(); }
	void close() { return call_method<"close", void>(); }

protected:

	WifiManager_LocalOnlyHotspotReservation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_LOCALONLYHOTSPOTRESERVATION
