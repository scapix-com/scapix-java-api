// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_KEYMGMT_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_KEYMGMT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi { class WifiConfiguration_KeyMgmt; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::WifiConfiguration_KeyMgmt>
{
	static constexpr fixed_string class_name = "android/net/wifi/WifiConfiguration$KeyMgmt";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_KEYMGMT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_KEYMGMT)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_KEYMGMT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::WifiConfiguration_KeyMgmt : public jni::object_base<"android/net/wifi/WifiConfiguration$KeyMgmt",
	java::lang::Object>
{
public:

	static jint IEEE8021X() { return get_static_field<"IEEE8021X", jint>(); }
	static jint NONE() { return get_static_field<"NONE", jint>(); }
	static jint WPA_EAP() { return get_static_field<"WPA_EAP", jint>(); }
	static jint WPA_PSK() { return get_static_field<"WPA_PSK", jint>(); }
	static jni::ref<jni::array<java::lang::String>> strings() { return get_static_field<"strings", jni::ref<jni::array<java::lang::String>>>(); }
	static jni::ref<java::lang::String> varName() { return get_static_field<"varName", jni::ref<java::lang::String>>(); }


protected:

	WifiConfiguration_KeyMgmt(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_KEYMGMT
