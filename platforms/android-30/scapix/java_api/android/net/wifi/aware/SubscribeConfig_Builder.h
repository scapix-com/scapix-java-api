// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_SUBSCRIBECONFIG_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_SUBSCRIBECONFIG_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::aware { class SubscribeConfig_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::aware::SubscribeConfig_Builder>
{
	static constexpr fixed_string class_name = "android/net/wifi/aware/SubscribeConfig$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_SUBSCRIBECONFIG_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_SUBSCRIBECONFIG_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_SUBSCRIBECONFIG_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/wifi/aware/SubscribeConfig.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::aware::SubscribeConfig_Builder : public jni::object_base<"android/net/wifi/aware/SubscribeConfig$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::net::wifi::aware::SubscribeConfig_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::net::wifi::aware::SubscribeConfig_Builder> setServiceName(jni::ref<java::lang::String> serviceName) { return call_method<"setServiceName", jni::ref<android::net::wifi::aware::SubscribeConfig_Builder>>(serviceName); }
	jni::ref<android::net::wifi::aware::SubscribeConfig_Builder> setServiceSpecificInfo(jni::ref<jni::array<jbyte>> serviceSpecificInfo) { return call_method<"setServiceSpecificInfo", jni::ref<android::net::wifi::aware::SubscribeConfig_Builder>>(serviceSpecificInfo); }
	jni::ref<android::net::wifi::aware::SubscribeConfig_Builder> setMatchFilter(jni::ref<java::util::List> matchFilter) { return call_method<"setMatchFilter", jni::ref<android::net::wifi::aware::SubscribeConfig_Builder>>(matchFilter); }
	jni::ref<android::net::wifi::aware::SubscribeConfig_Builder> setSubscribeType(jint subscribeType) { return call_method<"setSubscribeType", jni::ref<android::net::wifi::aware::SubscribeConfig_Builder>>(subscribeType); }
	jni::ref<android::net::wifi::aware::SubscribeConfig_Builder> setTtlSec(jint ttlSec) { return call_method<"setTtlSec", jni::ref<android::net::wifi::aware::SubscribeConfig_Builder>>(ttlSec); }
	jni::ref<android::net::wifi::aware::SubscribeConfig_Builder> setTerminateNotificationEnabled(jboolean enable) { return call_method<"setTerminateNotificationEnabled", jni::ref<android::net::wifi::aware::SubscribeConfig_Builder>>(enable); }
	jni::ref<android::net::wifi::aware::SubscribeConfig_Builder> setMinDistanceMm(jint minDistanceMm) { return call_method<"setMinDistanceMm", jni::ref<android::net::wifi::aware::SubscribeConfig_Builder>>(minDistanceMm); }
	jni::ref<android::net::wifi::aware::SubscribeConfig_Builder> setMaxDistanceMm(jint maxDistanceMm) { return call_method<"setMaxDistanceMm", jni::ref<android::net::wifi::aware::SubscribeConfig_Builder>>(maxDistanceMm); }
	jni::ref<android::net::wifi::aware::SubscribeConfig> build() { return call_method<"build", jni::ref<android::net::wifi::aware::SubscribeConfig>>(); }

protected:

	SubscribeConfig_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_SUBSCRIBECONFIG_BUILDER
