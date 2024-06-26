// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_SUGGESTIONUSERAPPROVALSTATUSLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_SUGGESTIONUSERAPPROVALSTATUSLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi { class WifiManager_SuggestionUserApprovalStatusListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::WifiManager_SuggestionUserApprovalStatusListener>
{
	static constexpr fixed_string class_name = "android/net/wifi/WifiManager$SuggestionUserApprovalStatusListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_SUGGESTIONUSERAPPROVALSTATUSLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_SUGGESTIONUSERAPPROVALSTATUSLISTENER)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_SUGGESTIONUSERAPPROVALSTATUSLISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::WifiManager_SuggestionUserApprovalStatusListener : public jni::object_base<"android/net/wifi/WifiManager$SuggestionUserApprovalStatusListener",
	java::lang::Object>
{
public:

	void onUserApprovalStatusChange(jint p1) { return call_method<"onUserApprovalStatusChange", void>(p1); }

protected:

	WifiManager_SuggestionUserApprovalStatusListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIMANAGER_SUGGESTIONUSERAPPROVALSTATUSLISTENER
