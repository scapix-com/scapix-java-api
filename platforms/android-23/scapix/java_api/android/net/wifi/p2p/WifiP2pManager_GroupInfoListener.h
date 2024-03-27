// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_GROUPINFOLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_GROUPINFOLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::p2p { class WifiP2pManager_GroupInfoListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::p2p::WifiP2pManager_GroupInfoListener>
{
	static constexpr fixed_string class_name = "android/net/wifi/p2p/WifiP2pManager$GroupInfoListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_GROUPINFOLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_GROUPINFOLISTENER)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_GROUPINFOLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/wifi/p2p/WifiP2pGroup.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::p2p::WifiP2pManager_GroupInfoListener : public jni::object_base<"android/net/wifi/p2p/WifiP2pManager$GroupInfoListener",
	java::lang::Object>
{
public:

	void onGroupInfoAvailable(jni::ref<android::net::wifi::p2p::WifiP2pGroup> p1) { return call_method<"onGroupInfoAvailable", void>(p1); }

protected:

	WifiP2pManager_GroupInfoListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_GROUPINFOLISTENER
