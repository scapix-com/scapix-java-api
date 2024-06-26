// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_CONNECTIVITYMANAGER_NETWORKCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_CONNECTIVITYMANAGER_NETWORKCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class ConnectivityManager_NetworkCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::ConnectivityManager_NetworkCallback>
{
	static constexpr fixed_string class_name = "android/net/ConnectivityManager$NetworkCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_CONNECTIVITYMANAGER_NETWORKCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_CONNECTIVITYMANAGER_NETWORKCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_NET_CONNECTIVITYMANAGER_NETWORKCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/LinkProperties.h>
#include <scapix/java_api/android/net/Network.h>
#include <scapix/java_api/android/net/NetworkCapabilities.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::ConnectivityManager_NetworkCallback : public jni::object_base<"android/net/ConnectivityManager$NetworkCallback",
	java::lang::Object>
{
public:

	static jni::ref<android::net::ConnectivityManager_NetworkCallback> new_object() { return base_::new_object(); }
	void onAvailable(jni::ref<android::net::Network> network) { return call_method<"onAvailable", void>(network); }
	void onLosing(jni::ref<android::net::Network> network, jint maxMsToLive) { return call_method<"onLosing", void>(network, maxMsToLive); }
	void onLost(jni::ref<android::net::Network> network) { return call_method<"onLost", void>(network); }
	void onUnavailable() { return call_method<"onUnavailable", void>(); }
	void onCapabilitiesChanged(jni::ref<android::net::Network> network, jni::ref<android::net::NetworkCapabilities> networkCapabilities) { return call_method<"onCapabilitiesChanged", void>(network, networkCapabilities); }
	void onLinkPropertiesChanged(jni::ref<android::net::Network> network, jni::ref<android::net::LinkProperties> linkProperties) { return call_method<"onLinkPropertiesChanged", void>(network, linkProperties); }

protected:

	ConnectivityManager_NetworkCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_CONNECTIVITYMANAGER_NETWORKCALLBACK
