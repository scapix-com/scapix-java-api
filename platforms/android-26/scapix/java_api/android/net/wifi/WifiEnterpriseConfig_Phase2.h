// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIENTERPRISECONFIG_PHASE2_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIENTERPRISECONFIG_PHASE2_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi { class WifiEnterpriseConfig_Phase2; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::WifiEnterpriseConfig_Phase2>
{
	static constexpr fixed_string class_name = "android/net/wifi/WifiEnterpriseConfig$Phase2";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIENTERPRISECONFIG_PHASE2_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIENTERPRISECONFIG_PHASE2)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIENTERPRISECONFIG_PHASE2

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::WifiEnterpriseConfig_Phase2 : public jni::object_base<"android/net/wifi/WifiEnterpriseConfig$Phase2",
	java::lang::Object>
{
public:

	static jint AKA() { return get_static_field<"AKA", jint>(); }
	static jint AKA_PRIME() { return get_static_field<"AKA_PRIME", jint>(); }
	static jint GTC() { return get_static_field<"GTC", jint>(); }
	static jint MSCHAP() { return get_static_field<"MSCHAP", jint>(); }
	static jint MSCHAPV2() { return get_static_field<"MSCHAPV2", jint>(); }
	static jint NONE() { return get_static_field<"NONE", jint>(); }
	static jint PAP() { return get_static_field<"PAP", jint>(); }
	static jint SIM() { return get_static_field<"SIM", jint>(); }


protected:

	WifiEnterpriseConfig_Phase2(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFIENTERPRISECONFIG_PHASE2