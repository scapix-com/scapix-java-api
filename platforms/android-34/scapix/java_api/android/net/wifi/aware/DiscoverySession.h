// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_DISCOVERYSESSION_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_DISCOVERYSESSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::aware { class DiscoverySession; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::aware::DiscoverySession>
{
	static constexpr fixed_string class_name = "android/net/wifi/aware/DiscoverySession";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_DISCOVERYSESSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_DISCOVERYSESSION)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_DISCOVERYSESSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/NetworkSpecifier.h>
#include <scapix/java_api/android/net/wifi/aware/PeerHandle.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::aware::DiscoverySession : public jni::object_base<"android/net/wifi/aware/DiscoverySession",
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	void close() { return call_method<"close", void>(); }
	void sendMessage(jni::ref<android::net::wifi::aware::PeerHandle> peerHandle, jint messageId, jni::ref<jni::array<jbyte>> message) { return call_method<"sendMessage", void>(peerHandle, messageId, message); }
	void initiatePairingRequest(jni::ref<android::net::wifi::aware::PeerHandle> peerHandle, jni::ref<java::lang::String> peerDeviceAlias, jint cipherSuite, jni::ref<java::lang::String> password) { return call_method<"initiatePairingRequest", void>(peerHandle, peerDeviceAlias, cipherSuite, password); }
	void acceptPairingRequest(jint requestId, jni::ref<android::net::wifi::aware::PeerHandle> peerHandle, jni::ref<java::lang::String> peerDeviceAlias, jint cipherSuite, jni::ref<java::lang::String> password) { return call_method<"acceptPairingRequest", void>(requestId, peerHandle, peerDeviceAlias, cipherSuite, password); }
	void rejectPairingRequest(jint requestId, jni::ref<android::net::wifi::aware::PeerHandle> peerHandle) { return call_method<"rejectPairingRequest", void>(requestId, peerHandle); }
	void initiateBootstrappingRequest(jni::ref<android::net::wifi::aware::PeerHandle> peerHandle, jint method) { return call_method<"initiateBootstrappingRequest", void>(peerHandle, method); }
	jni::ref<android::net::NetworkSpecifier> createNetworkSpecifierOpen(jni::ref<android::net::wifi::aware::PeerHandle> peerHandle) { return call_method<"createNetworkSpecifierOpen", jni::ref<android::net::NetworkSpecifier>>(peerHandle); }
	jni::ref<android::net::NetworkSpecifier> createNetworkSpecifierPassphrase(jni::ref<android::net::wifi::aware::PeerHandle> peerHandle, jni::ref<java::lang::String> passphrase) { return call_method<"createNetworkSpecifierPassphrase", jni::ref<android::net::NetworkSpecifier>>(peerHandle, passphrase); }

protected:

	DiscoverySession(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_DISCOVERYSESSION
