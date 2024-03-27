// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_STATUS_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_STATUS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi { class WifiConfiguration_Status; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::WifiConfiguration_Status>
{
	static constexpr fixed_string class_name = "android/net/wifi/WifiConfiguration$Status";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_STATUS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_STATUS)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_STATUS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::WifiConfiguration_Status : public jni::object_base<"android/net/wifi/WifiConfiguration$Status",
	java::lang::Object>
{
public:

	static jint CURRENT() { return get_static_field<"CURRENT", jint>(); }
	static jint DISABLED() { return get_static_field<"DISABLED", jint>(); }
	static jint ENABLED() { return get_static_field<"ENABLED", jint>(); }
	static jni::ref<jni::array<java::lang::String>> strings() { return get_static_field<"strings", jni::ref<jni::array<java::lang::String>>>(); }


protected:

	WifiConfiguration_Status(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_STATUS
