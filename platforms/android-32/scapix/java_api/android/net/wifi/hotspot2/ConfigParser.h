// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_HOTSPOT2_CONFIGPARSER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_HOTSPOT2_CONFIGPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::hotspot2 { class ConfigParser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::hotspot2::ConfigParser>
{
	static constexpr fixed_string class_name = "android/net/wifi/hotspot2/ConfigParser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_HOTSPOT2_CONFIGPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_HOTSPOT2_CONFIGPARSER)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_HOTSPOT2_CONFIGPARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/wifi/hotspot2/PasspointConfiguration.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::hotspot2::ConfigParser : public jni::object_base<"android/net/wifi/hotspot2/ConfigParser",
	java::lang::Object>
{
public:

	static jni::ref<android::net::wifi::hotspot2::PasspointConfiguration> parsePasspointConfig(jni::ref<java::lang::String> mimeType, jni::ref<jni::array<jbyte>> data) { return call_static_method<"parsePasspointConfig", jni::ref<android::net::wifi::hotspot2::PasspointConfiguration>>(mimeType, data); }

protected:

	ConfigParser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_HOTSPOT2_CONFIGPARSER