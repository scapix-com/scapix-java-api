// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_NSD_NSDMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_NSD_NSDMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::nsd { class NsdManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::nsd::NsdManager>
{
	static constexpr fixed_string class_name = "android/net/nsd/NsdManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_NSD_NSDMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_NSD_NSDMANAGER)
#define SCAPIX_JAVA_API_ANDROID_NET_NSD_NSDMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Network.h>
#include <scapix/java_api/android/net/NetworkRequest.h>
#include <scapix/java_api/android/net/nsd/NsdManager_DiscoveryListener.h>
#include <scapix/java_api/android/net/nsd/NsdManager_RegistrationListener.h>
#include <scapix/java_api/android/net/nsd/NsdManager_ResolveListener.h>
#include <scapix/java_api/android/net/nsd/NsdManager_ServiceInfoCallback.h>
#include <scapix/java_api/android/net/nsd/NsdServiceInfo.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::nsd::NsdManager : public jni::object_base<"android/net/nsd/NsdManager",
	java::lang::Object>
{
public:

	using ServiceInfoCallback = NsdManager_ServiceInfoCallback;
	using ResolveListener = NsdManager_ResolveListener;
	using RegistrationListener = NsdManager_RegistrationListener;
	using DiscoveryListener = NsdManager_DiscoveryListener;

	static jni::ref<java::lang::String> ACTION_NSD_STATE_CHANGED() { return get_static_field<"ACTION_NSD_STATE_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_NSD_STATE() { return get_static_field<"EXTRA_NSD_STATE", jni::ref<java::lang::String>>(); }
	static jint FAILURE_ALREADY_ACTIVE() { return get_static_field<"FAILURE_ALREADY_ACTIVE", jint>(); }
	static jint FAILURE_BAD_PARAMETERS() { return get_static_field<"FAILURE_BAD_PARAMETERS", jint>(); }
	static jint FAILURE_INTERNAL_ERROR() { return get_static_field<"FAILURE_INTERNAL_ERROR", jint>(); }
	static jint FAILURE_MAX_LIMIT() { return get_static_field<"FAILURE_MAX_LIMIT", jint>(); }
	static jint FAILURE_OPERATION_NOT_RUNNING() { return get_static_field<"FAILURE_OPERATION_NOT_RUNNING", jint>(); }
	static jint NSD_STATE_DISABLED() { return get_static_field<"NSD_STATE_DISABLED", jint>(); }
	static jint NSD_STATE_ENABLED() { return get_static_field<"NSD_STATE_ENABLED", jint>(); }
	static jint PROTOCOL_DNS_SD() { return get_static_field<"PROTOCOL_DNS_SD", jint>(); }

	void registerService(jni::ref<android::net::nsd::NsdServiceInfo> serviceInfo, jint protocolType, jni::ref<android::net::nsd::NsdManager_RegistrationListener> listener) { return call_method<"registerService", void>(serviceInfo, protocolType, listener); }
	void registerService(jni::ref<android::net::nsd::NsdServiceInfo> serviceInfo, jint protocolType, jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::net::nsd::NsdManager_RegistrationListener> listener) { return call_method<"registerService", void>(serviceInfo, protocolType, executor, listener); }
	void unregisterService(jni::ref<android::net::nsd::NsdManager_RegistrationListener> listener) { return call_method<"unregisterService", void>(listener); }
	void discoverServices(jni::ref<java::lang::String> serviceType, jint protocolType, jni::ref<android::net::nsd::NsdManager_DiscoveryListener> listener) { return call_method<"discoverServices", void>(serviceType, protocolType, listener); }
	void discoverServices(jni::ref<java::lang::String> serviceType, jint protocolType, jni::ref<android::net::Network> network, jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::net::nsd::NsdManager_DiscoveryListener> listener) { return call_method<"discoverServices", void>(serviceType, protocolType, network, executor, listener); }
	void discoverServices(jni::ref<java::lang::String> serviceType, jint protocolType, jni::ref<android::net::NetworkRequest> networkRequest, jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::net::nsd::NsdManager_DiscoveryListener> listener) { return call_method<"discoverServices", void>(serviceType, protocolType, networkRequest, executor, listener); }
	void stopServiceDiscovery(jni::ref<android::net::nsd::NsdManager_DiscoveryListener> listener) { return call_method<"stopServiceDiscovery", void>(listener); }
	void resolveService(jni::ref<android::net::nsd::NsdServiceInfo> serviceInfo, jni::ref<android::net::nsd::NsdManager_ResolveListener> listener) { return call_method<"resolveService", void>(serviceInfo, listener); }
	void resolveService(jni::ref<android::net::nsd::NsdServiceInfo> serviceInfo, jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::net::nsd::NsdManager_ResolveListener> listener) { return call_method<"resolveService", void>(serviceInfo, executor, listener); }
	void stopServiceResolution(jni::ref<android::net::nsd::NsdManager_ResolveListener> listener) { return call_method<"stopServiceResolution", void>(listener); }
	void registerServiceInfoCallback(jni::ref<android::net::nsd::NsdServiceInfo> serviceInfo, jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::net::nsd::NsdManager_ServiceInfoCallback> listener) { return call_method<"registerServiceInfoCallback", void>(serviceInfo, executor, listener); }
	void unregisterServiceInfoCallback(jni::ref<android::net::nsd::NsdManager_ServiceInfoCallback> listener) { return call_method<"unregisterServiceInfoCallback", void>(listener); }

protected:

	NsdManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_NSD_NSDMANAGER
