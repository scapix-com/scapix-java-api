// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_WIFIRTTMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_WIFIRTTMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::rtt { class WifiRttManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::rtt::WifiRttManager>
{
	static constexpr fixed_string class_name = "android/net/wifi/rtt/WifiRttManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_WIFIRTTMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_WIFIRTTMANAGER)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_WIFIRTTMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/wifi/rtt/RangingRequest.h>
#include <scapix/java_api/android/net/wifi/rtt/RangingResultCallback.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::rtt::WifiRttManager : public jni::object_base<"android/net/wifi/rtt/WifiRttManager",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACTION_WIFI_RTT_STATE_CHANGED() { return get_static_field<"ACTION_WIFI_RTT_STATE_CHANGED", jni::ref<java::lang::String>>(); }

	jboolean isAvailable() { return call_method<"isAvailable", jboolean>(); }
	void startRanging(jni::ref<android::net::wifi::rtt::RangingRequest> request, jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::net::wifi::rtt::RangingResultCallback> callback) { return call_method<"startRanging", void>(request, executor, callback); }

protected:

	WifiRttManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_WIFIRTTMANAGER
