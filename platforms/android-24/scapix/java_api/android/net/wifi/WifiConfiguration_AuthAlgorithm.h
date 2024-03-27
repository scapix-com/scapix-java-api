// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_AUTHALGORITHM_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_AUTHALGORITHM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi { class WifiConfiguration_AuthAlgorithm; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::WifiConfiguration_AuthAlgorithm>
{
	static constexpr fixed_string class_name = "android/net/wifi/WifiConfiguration$AuthAlgorithm";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_AUTHALGORITHM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_AUTHALGORITHM)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_AUTHALGORITHM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::WifiConfiguration_AuthAlgorithm : public jni::object_base<"android/net/wifi/WifiConfiguration$AuthAlgorithm",
	java::lang::Object>
{
public:

	static jint LEAP() { return get_static_field<"LEAP", jint>(); }
	static jint OPEN() { return get_static_field<"OPEN", jint>(); }
	static jint SHARED() { return get_static_field<"SHARED", jint>(); }
	static jni::ref<jni::array<java::lang::String>> strings() { return get_static_field<"strings", jni::ref<jni::array<java::lang::String>>>(); }
	static jni::ref<java::lang::String> varName() { return get_static_field<"varName", jni::ref<java::lang::String>>(); }


protected:

	WifiConfiguration_AuthAlgorithm(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_AUTHALGORITHM
