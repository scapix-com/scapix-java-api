// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_LOCALONLYHOTSPOTCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_LOCALONLYHOTSPOTCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi { class WifiManager_LocalOnlyHotspotCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::WifiManager_LocalOnlyHotspotCallback>
{
	static constexpr fixed_string class_name = "android/net/wifi/WifiManager$LocalOnlyHotspotCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_LOCALONLYHOTSPOTCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_LOCALONLYHOTSPOTCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_LOCALONLYHOTSPOTCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/wifi/WifiManager_LocalOnlyHotspotReservation.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::WifiManager_LocalOnlyHotspotCallback : public jni::object_base<"android/net/wifi/WifiManager$LocalOnlyHotspotCallback",
	java::lang::Object>
{
public:

	static jint ERROR_GENERIC() { return get_static_field<"ERROR_GENERIC", jint>(); }
	static jint ERROR_INCOMPATIBLE_MODE() { return get_static_field<"ERROR_INCOMPATIBLE_MODE", jint>(); }
	static jint ERROR_NO_CHANNEL() { return get_static_field<"ERROR_NO_CHANNEL", jint>(); }
	static jint ERROR_TETHERING_DISALLOWED() { return get_static_field<"ERROR_TETHERING_DISALLOWED", jint>(); }

	static jni::ref<android::net::wifi::WifiManager_LocalOnlyHotspotCallback> new_object() { return base_::new_object(); }
	void onStarted(jni::ref<android::net::wifi::WifiManager_LocalOnlyHotspotReservation> reservation) { return call_method<"onStarted", void>(reservation); }
	void onStopped() { return call_method<"onStopped", void>(); }
	void onFailed(jint reason) { return call_method<"onFailed", void>(reason); }

protected:

	WifiManager_LocalOnlyHotspotCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_LOCALONLYHOTSPOTCALLBACK
