// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFINETWORKSPECIFIER_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFINETWORKSPECIFIER_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi { class WifiNetworkSpecifier_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::WifiNetworkSpecifier_Builder>
{
	static constexpr fixed_string class_name = "android/net/wifi/WifiNetworkSpecifier$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFINETWORKSPECIFIER_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFINETWORKSPECIFIER_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFINETWORKSPECIFIER_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/MacAddress.h>
#include <scapix/java_api/android/net/wifi/WifiEnterpriseConfig.h>
#include <scapix/java_api/android/net/wifi/WifiNetworkSpecifier.h>
#include <scapix/java_api/android/os/PatternMatcher.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::WifiNetworkSpecifier_Builder : public jni::object_base<"android/net/wifi/WifiNetworkSpecifier$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder> setSsidPattern(jni::ref<android::os::PatternMatcher> ssidPattern) { return call_method<"setSsidPattern", jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder>>(ssidPattern); }
	jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder> setSsid(jni::ref<java::lang::String> ssid) { return call_method<"setSsid", jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder>>(ssid); }
	jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder> setBssidPattern(jni::ref<android::net::MacAddress> baseAddress, jni::ref<android::net::MacAddress> mask) { return call_method<"setBssidPattern", jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder>>(baseAddress, mask); }
	jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder> setBssid(jni::ref<android::net::MacAddress> bssid) { return call_method<"setBssid", jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder>>(bssid); }
	jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder> setIsEnhancedOpen(jboolean isEnhancedOpen) { return call_method<"setIsEnhancedOpen", jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder>>(isEnhancedOpen); }
	jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder> setWpa2Passphrase(jni::ref<java::lang::String> passphrase) { return call_method<"setWpa2Passphrase", jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder>>(passphrase); }
	jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder> setWpa3Passphrase(jni::ref<java::lang::String> passphrase) { return call_method<"setWpa3Passphrase", jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder>>(passphrase); }
	jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder> setWpa2EnterpriseConfig(jni::ref<android::net::wifi::WifiEnterpriseConfig> enterpriseConfig) { return call_method<"setWpa2EnterpriseConfig", jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder>>(enterpriseConfig); }
	jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder> setWpa3EnterpriseConfig(jni::ref<android::net::wifi::WifiEnterpriseConfig> enterpriseConfig) { return call_method<"setWpa3EnterpriseConfig", jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder>>(enterpriseConfig); }
	jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder> setWpa3EnterpriseStandardModeConfig(jni::ref<android::net::wifi::WifiEnterpriseConfig> enterpriseConfig) { return call_method<"setWpa3EnterpriseStandardModeConfig", jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder>>(enterpriseConfig); }
	jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder> setWpa3Enterprise192BitModeConfig(jni::ref<android::net::wifi::WifiEnterpriseConfig> enterpriseConfig) { return call_method<"setWpa3Enterprise192BitModeConfig", jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder>>(enterpriseConfig); }
	jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder> setIsHiddenSsid(jboolean isHiddenSsid) { return call_method<"setIsHiddenSsid", jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder>>(isHiddenSsid); }
	jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder> setBand(jint band) { return call_method<"setBand", jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder>>(band); }
	jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder> setPreferredChannelsFrequenciesMhz(jni::ref<jni::array<jint>> channelFreqs) { return call_method<"setPreferredChannelsFrequenciesMhz", jni::ref<android::net::wifi::WifiNetworkSpecifier_Builder>>(channelFreqs); }
	jni::ref<android::net::wifi::WifiNetworkSpecifier> build() { return call_method<"build", jni::ref<android::net::wifi::WifiNetworkSpecifier>>(); }

protected:

	WifiNetworkSpecifier_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFINETWORKSPECIFIER_BUILDER
