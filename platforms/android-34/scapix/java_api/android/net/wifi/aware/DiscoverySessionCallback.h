// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_DISCOVERYSESSIONCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_DISCOVERYSESSIONCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::aware { class DiscoverySessionCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::aware::DiscoverySessionCallback>
{
	static constexpr fixed_string class_name = "android/net/wifi/aware/DiscoverySessionCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_DISCOVERYSESSIONCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_DISCOVERYSESSIONCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_DISCOVERYSESSIONCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/wifi/aware/PeerHandle.h>
#include <scapix/java_api/android/net/wifi/aware/PublishDiscoverySession.h>
#include <scapix/java_api/android/net/wifi/aware/ServiceDiscoveryInfo.h>
#include <scapix/java_api/android/net/wifi/aware/SubscribeDiscoverySession.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::aware::DiscoverySessionCallback : public jni::object_base<"android/net/wifi/aware/DiscoverySessionCallback",
	java::lang::Object>
{
public:

	static jni::ref<android::net::wifi::aware::DiscoverySessionCallback> new_object() { return base_::new_object(); }
	void onPublishStarted(jni::ref<android::net::wifi::aware::PublishDiscoverySession> session) { return call_method<"onPublishStarted", void>(session); }
	void onSubscribeStarted(jni::ref<android::net::wifi::aware::SubscribeDiscoverySession> session) { return call_method<"onSubscribeStarted", void>(session); }
	void onSessionConfigUpdated() { return call_method<"onSessionConfigUpdated", void>(); }
	void onSessionConfigFailed() { return call_method<"onSessionConfigFailed", void>(); }
	void onSessionTerminated() { return call_method<"onSessionTerminated", void>(); }
	void onServiceDiscovered(jni::ref<android::net::wifi::aware::PeerHandle> peerHandle, jni::ref<jni::array<jbyte>> serviceSpecificInfo, jni::ref<java::util::List> matchFilter) { return call_method<"onServiceDiscovered", void>(peerHandle, serviceSpecificInfo, matchFilter); }
	void onServiceDiscovered(jni::ref<android::net::wifi::aware::ServiceDiscoveryInfo> info) { return call_method<"onServiceDiscovered", void>(info); }
	void onServiceDiscoveredWithinRange(jni::ref<android::net::wifi::aware::PeerHandle> peerHandle, jni::ref<jni::array<jbyte>> serviceSpecificInfo, jni::ref<java::util::List> matchFilter, jint distanceMm) { return call_method<"onServiceDiscoveredWithinRange", void>(peerHandle, serviceSpecificInfo, matchFilter, distanceMm); }
	void onServiceDiscoveredWithinRange(jni::ref<android::net::wifi::aware::ServiceDiscoveryInfo> info, jint distanceMm) { return call_method<"onServiceDiscoveredWithinRange", void>(info, distanceMm); }
	void onMessageSendSucceeded(jint messageId) { return call_method<"onMessageSendSucceeded", void>(messageId); }
	void onMessageSendFailed(jint messageId) { return call_method<"onMessageSendFailed", void>(messageId); }
	void onMessageReceived(jni::ref<android::net::wifi::aware::PeerHandle> peerHandle, jni::ref<jni::array<jbyte>> message) { return call_method<"onMessageReceived", void>(peerHandle, message); }
	void onServiceLost(jni::ref<android::net::wifi::aware::PeerHandle> peerHandle, jint reason) { return call_method<"onServiceLost", void>(peerHandle, reason); }
	void onPairingSetupRequestReceived(jni::ref<android::net::wifi::aware::PeerHandle> peerHandle, jint requestId) { return call_method<"onPairingSetupRequestReceived", void>(peerHandle, requestId); }
	void onPairingSetupSucceeded(jni::ref<android::net::wifi::aware::PeerHandle> peerHandle, jni::ref<java::lang::String> alias) { return call_method<"onPairingSetupSucceeded", void>(peerHandle, alias); }
	void onPairingSetupFailed(jni::ref<android::net::wifi::aware::PeerHandle> peerHandle) { return call_method<"onPairingSetupFailed", void>(peerHandle); }
	void onPairingVerificationSucceed(jni::ref<android::net::wifi::aware::PeerHandle> peerHandle, jni::ref<java::lang::String> alias) { return call_method<"onPairingVerificationSucceed", void>(peerHandle, alias); }
	void onPairingVerificationFailed(jni::ref<android::net::wifi::aware::PeerHandle> peerHandle) { return call_method<"onPairingVerificationFailed", void>(peerHandle); }
	void onBootstrappingSucceeded(jni::ref<android::net::wifi::aware::PeerHandle> peerHandle, jint method) { return call_method<"onBootstrappingSucceeded", void>(peerHandle, method); }
	void onBootstrappingFailed(jni::ref<android::net::wifi::aware::PeerHandle> peerHandle) { return call_method<"onBootstrappingFailed", void>(peerHandle); }

protected:

	DiscoverySessionCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_DISCOVERYSESSIONCALLBACK
