// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_UPNPSERVICERESPONSELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_UPNPSERVICERESPONSELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::p2p { class WifiP2pManager_UpnpServiceResponseListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::p2p::WifiP2pManager_UpnpServiceResponseListener>
{
	static constexpr fixed_string class_name = "android/net/wifi/p2p/WifiP2pManager$UpnpServiceResponseListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_UPNPSERVICERESPONSELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_UPNPSERVICERESPONSELISTENER)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_UPNPSERVICERESPONSELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/wifi/p2p/WifiP2pDevice.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::p2p::WifiP2pManager_UpnpServiceResponseListener : public jni::object_base<"android/net/wifi/p2p/WifiP2pManager$UpnpServiceResponseListener",
	java::lang::Object>
{
public:

	void onUpnpServiceAvailable(jni::ref<java::util::List> p1, jni::ref<android::net::wifi::p2p::WifiP2pDevice> p2) { return call_method<"onUpnpServiceAvailable", void>(p1, p2); }

protected:

	WifiP2pManager_UpnpServiceResponseListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_UPNPSERVICERESPONSELISTENER
