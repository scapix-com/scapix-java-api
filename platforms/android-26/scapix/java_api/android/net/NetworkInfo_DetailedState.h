// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_NETWORKINFO_DETAILEDSTATE_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_NETWORKINFO_DETAILEDSTATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class NetworkInfo_DetailedState; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::NetworkInfo_DetailedState>
{
	static constexpr fixed_string class_name = "android/net/NetworkInfo$DetailedState";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_NETWORKINFO_DETAILEDSTATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_NETWORKINFO_DETAILEDSTATE)
#define SCAPIX_JAVA_API_ANDROID_NET_NETWORKINFO_DETAILEDSTATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::NetworkInfo_DetailedState : public jni::object_base<"android/net/NetworkInfo$DetailedState",
	java::lang::Enum>
{
public:

	static jni::ref<android::net::NetworkInfo_DetailedState> AUTHENTICATING() { return get_static_field<"AUTHENTICATING", jni::ref<android::net::NetworkInfo_DetailedState>>(); }
	static jni::ref<android::net::NetworkInfo_DetailedState> BLOCKED() { return get_static_field<"BLOCKED", jni::ref<android::net::NetworkInfo_DetailedState>>(); }
	static jni::ref<android::net::NetworkInfo_DetailedState> CAPTIVE_PORTAL_CHECK() { return get_static_field<"CAPTIVE_PORTAL_CHECK", jni::ref<android::net::NetworkInfo_DetailedState>>(); }
	static jni::ref<android::net::NetworkInfo_DetailedState> CONNECTED() { return get_static_field<"CONNECTED", jni::ref<android::net::NetworkInfo_DetailedState>>(); }
	static jni::ref<android::net::NetworkInfo_DetailedState> CONNECTING() { return get_static_field<"CONNECTING", jni::ref<android::net::NetworkInfo_DetailedState>>(); }
	static jni::ref<android::net::NetworkInfo_DetailedState> DISCONNECTED() { return get_static_field<"DISCONNECTED", jni::ref<android::net::NetworkInfo_DetailedState>>(); }
	static jni::ref<android::net::NetworkInfo_DetailedState> DISCONNECTING() { return get_static_field<"DISCONNECTING", jni::ref<android::net::NetworkInfo_DetailedState>>(); }
	static jni::ref<android::net::NetworkInfo_DetailedState> FAILED() { return get_static_field<"FAILED", jni::ref<android::net::NetworkInfo_DetailedState>>(); }
	static jni::ref<android::net::NetworkInfo_DetailedState> IDLE() { return get_static_field<"IDLE", jni::ref<android::net::NetworkInfo_DetailedState>>(); }
	static jni::ref<android::net::NetworkInfo_DetailedState> OBTAINING_IPADDR() { return get_static_field<"OBTAINING_IPADDR", jni::ref<android::net::NetworkInfo_DetailedState>>(); }
	static jni::ref<android::net::NetworkInfo_DetailedState> SCANNING() { return get_static_field<"SCANNING", jni::ref<android::net::NetworkInfo_DetailedState>>(); }
	static jni::ref<android::net::NetworkInfo_DetailedState> SUSPENDED() { return get_static_field<"SUSPENDED", jni::ref<android::net::NetworkInfo_DetailedState>>(); }
	static jni::ref<android::net::NetworkInfo_DetailedState> VERIFYING_POOR_LINK() { return get_static_field<"VERIFYING_POOR_LINK", jni::ref<android::net::NetworkInfo_DetailedState>>(); }

	static jni::ref<jni::array<android::net::NetworkInfo_DetailedState>> values() { return call_static_method<"values", jni::ref<jni::array<android::net::NetworkInfo_DetailedState>>>(); }
	static jni::ref<android::net::NetworkInfo_DetailedState> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::net::NetworkInfo_DetailedState>>(name); }

protected:

	NetworkInfo_DetailedState(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_NETWORKINFO_DETAILEDSTATE
