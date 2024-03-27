// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_CHANNEL_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_CHANNEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::p2p { class WifiP2pManager_Channel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::p2p::WifiP2pManager_Channel>
{
	static constexpr fixed_string class_name = "android/net/wifi/p2p/WifiP2pManager$Channel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_CHANNEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_CHANNEL)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_CHANNEL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::p2p::WifiP2pManager_Channel : public jni::object_base<"android/net/wifi/p2p/WifiP2pManager$Channel",
	java::lang::Object>
{
public:


protected:

	WifiP2pManager_Channel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_CHANNEL
