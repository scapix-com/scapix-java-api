// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_AWAREPAIRINGCONFIG_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_AWAREPAIRINGCONFIG_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::aware { class AwarePairingConfig_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::aware::AwarePairingConfig_Builder>
{
	static constexpr fixed_string class_name = "android/net/wifi/aware/AwarePairingConfig$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_AWAREPAIRINGCONFIG_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_AWAREPAIRINGCONFIG_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_AWAREPAIRINGCONFIG_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/wifi/aware/AwarePairingConfig.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::aware::AwarePairingConfig_Builder : public jni::object_base<"android/net/wifi/aware/AwarePairingConfig$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::net::wifi::aware::AwarePairingConfig_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::net::wifi::aware::AwarePairingConfig_Builder> setPairingSetupEnabled(jboolean enabled) { return call_method<"setPairingSetupEnabled", jni::ref<android::net::wifi::aware::AwarePairingConfig_Builder>>(enabled); }
	jni::ref<android::net::wifi::aware::AwarePairingConfig_Builder> setPairingVerificationEnabled(jboolean enabled) { return call_method<"setPairingVerificationEnabled", jni::ref<android::net::wifi::aware::AwarePairingConfig_Builder>>(enabled); }
	jni::ref<android::net::wifi::aware::AwarePairingConfig_Builder> setPairingCacheEnabled(jboolean enabled) { return call_method<"setPairingCacheEnabled", jni::ref<android::net::wifi::aware::AwarePairingConfig_Builder>>(enabled); }
	jni::ref<android::net::wifi::aware::AwarePairingConfig_Builder> setBootstrappingMethods(jint methods) { return call_method<"setBootstrappingMethods", jni::ref<android::net::wifi::aware::AwarePairingConfig_Builder>>(methods); }
	jni::ref<android::net::wifi::aware::AwarePairingConfig> build() { return call_method<"build", jni::ref<android::net::wifi::aware::AwarePairingConfig>>(); }

protected:

	AwarePairingConfig_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_AWAREPAIRINGCONFIG_BUILDER
