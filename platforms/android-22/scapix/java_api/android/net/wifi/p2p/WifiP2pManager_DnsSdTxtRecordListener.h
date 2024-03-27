// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_DNSSDTXTRECORDLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_DNSSDTXTRECORDLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::p2p { class WifiP2pManager_DnsSdTxtRecordListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::p2p::WifiP2pManager_DnsSdTxtRecordListener>
{
	static constexpr fixed_string class_name = "android/net/wifi/p2p/WifiP2pManager$DnsSdTxtRecordListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_DNSSDTXTRECORDLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_DNSSDTXTRECORDLISTENER)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_DNSSDTXTRECORDLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/wifi/p2p/WifiP2pDevice.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::p2p::WifiP2pManager_DnsSdTxtRecordListener : public jni::object_base<"android/net/wifi/p2p/WifiP2pManager$DnsSdTxtRecordListener",
	java::lang::Object>
{
public:

	void onDnsSdTxtRecordAvailable(jni::ref<java::lang::String> p1, jni::ref<java::util::Map> p2, jni::ref<android::net::wifi::p2p::WifiP2pDevice> p3) { return call_method<"onDnsSdTxtRecordAvailable", void>(p1, p2, p3); }

protected:

	WifiP2pManager_DnsSdTxtRecordListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_DNSSDTXTRECORDLISTENER