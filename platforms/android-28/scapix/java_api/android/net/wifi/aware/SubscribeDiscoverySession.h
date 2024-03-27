// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/net/wifi/aware/DiscoverySession.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_SUBSCRIBEDISCOVERYSESSION_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_SUBSCRIBEDISCOVERYSESSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::aware { class SubscribeDiscoverySession; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::aware::SubscribeDiscoverySession>
{
	static constexpr fixed_string class_name = "android/net/wifi/aware/SubscribeDiscoverySession";
	using base_classes = std::tuple<scapix::java_api::android::net::wifi::aware::DiscoverySession>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_SUBSCRIBEDISCOVERYSESSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_SUBSCRIBEDISCOVERYSESSION)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_SUBSCRIBEDISCOVERYSESSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/wifi/aware/SubscribeConfig.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::aware::SubscribeDiscoverySession : public jni::object_base<"android/net/wifi/aware/SubscribeDiscoverySession",
	android::net::wifi::aware::DiscoverySession>
{
public:

	void updateSubscribe(jni::ref<android::net::wifi::aware::SubscribeConfig> subscribeConfig) { return call_method<"updateSubscribe", void>(subscribeConfig); }

protected:

	SubscribeDiscoverySession(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_SUBSCRIBEDISCOVERYSESSION