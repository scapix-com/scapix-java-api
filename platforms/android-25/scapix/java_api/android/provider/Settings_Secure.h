// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/provider/Settings_NameValueTable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_SECURE_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_SECURE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class Settings_Secure; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::Settings_Secure>
{
	static constexpr fixed_string class_name = "android/provider/Settings$Secure";
	using base_classes = std::tuple<scapix::java_api::android::provider::Settings_NameValueTable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_SECURE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_SECURE)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_SECURE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ContentResolver.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::Settings_Secure : public jni::object_base<"android/provider/Settings$Secure",
	android::provider::Settings_NameValueTable>
{
public:

	static jni::ref<java::lang::String> ACCESSIBILITY_DISPLAY_INVERSION_ENABLED() { return get_static_field<"ACCESSIBILITY_DISPLAY_INVERSION_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBILITY_ENABLED() { return get_static_field<"ACCESSIBILITY_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBILITY_SPEAK_PASSWORD() { return get_static_field<"ACCESSIBILITY_SPEAK_PASSWORD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ADB_ENABLED() { return get_static_field<"ADB_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ALLOWED_GEOLOCATION_ORIGINS() { return get_static_field<"ALLOWED_GEOLOCATION_ORIGINS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ALLOW_MOCK_LOCATION() { return get_static_field<"ALLOW_MOCK_LOCATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ANDROID_ID() { return get_static_field<"ANDROID_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BACKGROUND_DATA() { return get_static_field<"BACKGROUND_DATA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BLUETOOTH_ON() { return get_static_field<"BLUETOOTH_ON", jni::ref<java::lang::String>>(); }
	static jni::ref<android::net::Uri> CONTENT_URI() { return get_static_field<"CONTENT_URI", jni::ref<android::net::Uri>>(); }
	static jni::ref<java::lang::String> DATA_ROAMING() { return get_static_field<"DATA_ROAMING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DEFAULT_INPUT_METHOD() { return get_static_field<"DEFAULT_INPUT_METHOD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DEVELOPMENT_SETTINGS_ENABLED() { return get_static_field<"DEVELOPMENT_SETTINGS_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DEVICE_PROVISIONED() { return get_static_field<"DEVICE_PROVISIONED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ENABLED_ACCESSIBILITY_SERVICES() { return get_static_field<"ENABLED_ACCESSIBILITY_SERVICES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ENABLED_INPUT_METHODS() { return get_static_field<"ENABLED_INPUT_METHODS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HTTP_PROXY() { return get_static_field<"HTTP_PROXY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INPUT_METHOD_SELECTOR_VISIBILITY() { return get_static_field<"INPUT_METHOD_SELECTOR_VISIBILITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INSTALL_NON_MARKET_APPS() { return get_static_field<"INSTALL_NON_MARKET_APPS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOCATION_MODE() { return get_static_field<"LOCATION_MODE", jni::ref<java::lang::String>>(); }
	static jint LOCATION_MODE_BATTERY_SAVING() { return get_static_field<"LOCATION_MODE_BATTERY_SAVING", jint>(); }
	static jint LOCATION_MODE_HIGH_ACCURACY() { return get_static_field<"LOCATION_MODE_HIGH_ACCURACY", jint>(); }
	static jint LOCATION_MODE_OFF() { return get_static_field<"LOCATION_MODE_OFF", jint>(); }
	static jint LOCATION_MODE_SENSORS_ONLY() { return get_static_field<"LOCATION_MODE_SENSORS_ONLY", jint>(); }
	static jni::ref<java::lang::String> LOCATION_PROVIDERS_ALLOWED() { return get_static_field<"LOCATION_PROVIDERS_ALLOWED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOCK_PATTERN_ENABLED() { return get_static_field<"LOCK_PATTERN_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOCK_PATTERN_TACTILE_FEEDBACK_ENABLED() { return get_static_field<"LOCK_PATTERN_TACTILE_FEEDBACK_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOCK_PATTERN_VISIBLE() { return get_static_field<"LOCK_PATTERN_VISIBLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOGGING_ID() { return get_static_field<"LOGGING_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NETWORK_PREFERENCE() { return get_static_field<"NETWORK_PREFERENCE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PARENTAL_CONTROL_ENABLED() { return get_static_field<"PARENTAL_CONTROL_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PARENTAL_CONTROL_LAST_UPDATE() { return get_static_field<"PARENTAL_CONTROL_LAST_UPDATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PARENTAL_CONTROL_REDIRECT_URL() { return get_static_field<"PARENTAL_CONTROL_REDIRECT_URL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SELECTED_INPUT_METHOD_SUBTYPE() { return get_static_field<"SELECTED_INPUT_METHOD_SUBTYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SETTINGS_CLASSNAME() { return get_static_field<"SETTINGS_CLASSNAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SKIP_FIRST_USE_HINTS() { return get_static_field<"SKIP_FIRST_USE_HINTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TOUCH_EXPLORATION_ENABLED() { return get_static_field<"TOUCH_EXPLORATION_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TTS_DEFAULT_COUNTRY() { return get_static_field<"TTS_DEFAULT_COUNTRY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TTS_DEFAULT_LANG() { return get_static_field<"TTS_DEFAULT_LANG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TTS_DEFAULT_PITCH() { return get_static_field<"TTS_DEFAULT_PITCH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TTS_DEFAULT_RATE() { return get_static_field<"TTS_DEFAULT_RATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TTS_DEFAULT_SYNTH() { return get_static_field<"TTS_DEFAULT_SYNTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TTS_DEFAULT_VARIANT() { return get_static_field<"TTS_DEFAULT_VARIANT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TTS_ENABLED_PLUGINS() { return get_static_field<"TTS_ENABLED_PLUGINS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TTS_USE_DEFAULTS() { return get_static_field<"TTS_USE_DEFAULTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> USB_MASS_STORAGE_ENABLED() { return get_static_field<"USB_MASS_STORAGE_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> USE_GOOGLE_MAIL() { return get_static_field<"USE_GOOGLE_MAIL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_MAX_DHCP_RETRY_COUNT() { return get_static_field<"WIFI_MAX_DHCP_RETRY_COUNT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS() { return get_static_field<"WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON() { return get_static_field<"WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY() { return get_static_field<"WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_NUM_OPEN_NETWORKS_KEPT() { return get_static_field<"WIFI_NUM_OPEN_NETWORKS_KEPT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_ON() { return get_static_field<"WIFI_ON", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_WATCHDOG_ACCEPTABLE_PACKET_LOSS_PERCENTAGE() { return get_static_field<"WIFI_WATCHDOG_ACCEPTABLE_PACKET_LOSS_PERCENTAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_WATCHDOG_AP_COUNT() { return get_static_field<"WIFI_WATCHDOG_AP_COUNT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_WATCHDOG_BACKGROUND_CHECK_DELAY_MS() { return get_static_field<"WIFI_WATCHDOG_BACKGROUND_CHECK_DELAY_MS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_WATCHDOG_BACKGROUND_CHECK_ENABLED() { return get_static_field<"WIFI_WATCHDOG_BACKGROUND_CHECK_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_WATCHDOG_BACKGROUND_CHECK_TIMEOUT_MS() { return get_static_field<"WIFI_WATCHDOG_BACKGROUND_CHECK_TIMEOUT_MS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_WATCHDOG_INITIAL_IGNORED_PING_COUNT() { return get_static_field<"WIFI_WATCHDOG_INITIAL_IGNORED_PING_COUNT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_WATCHDOG_MAX_AP_CHECKS() { return get_static_field<"WIFI_WATCHDOG_MAX_AP_CHECKS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_WATCHDOG_ON() { return get_static_field<"WIFI_WATCHDOG_ON", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_WATCHDOG_PING_COUNT() { return get_static_field<"WIFI_WATCHDOG_PING_COUNT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_WATCHDOG_PING_DELAY_MS() { return get_static_field<"WIFI_WATCHDOG_PING_DELAY_MS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_WATCHDOG_PING_TIMEOUT_MS() { return get_static_field<"WIFI_WATCHDOG_PING_TIMEOUT_MS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_WATCHDOG_WATCH_LIST() { return get_static_field<"WIFI_WATCHDOG_WATCH_LIST", jni::ref<java::lang::String>>(); }

	static jni::ref<android::provider::Settings_Secure> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> getString(jni::ref<android::content::ContentResolver> resolver, jni::ref<java::lang::String> name) { return call_static_method<"getString", jni::ref<java::lang::String>>(resolver, name); }
	static jboolean putString(jni::ref<android::content::ContentResolver> resolver, jni::ref<java::lang::String> name, jni::ref<java::lang::String> value) { return call_static_method<"putString", jboolean>(resolver, name, value); }
	static jni::ref<android::net::Uri> getUriFor(jni::ref<java::lang::String> name) { return call_static_method<"getUriFor", jni::ref<android::net::Uri>>(name); }
	static jint getInt(jni::ref<android::content::ContentResolver> cr, jni::ref<java::lang::String> name, jint def) { return call_static_method<"getInt", jint>(cr, name, def); }
	static jint getInt(jni::ref<android::content::ContentResolver> cr, jni::ref<java::lang::String> name) { return call_static_method<"getInt", jint>(cr, name); }
	static jboolean putInt(jni::ref<android::content::ContentResolver> cr, jni::ref<java::lang::String> name, jint value) { return call_static_method<"putInt", jboolean>(cr, name, value); }
	static jlong getLong(jni::ref<android::content::ContentResolver> cr, jni::ref<java::lang::String> name, jlong def) { return call_static_method<"getLong", jlong>(cr, name, def); }
	static jlong getLong(jni::ref<android::content::ContentResolver> cr, jni::ref<java::lang::String> name) { return call_static_method<"getLong", jlong>(cr, name); }
	static jboolean putLong(jni::ref<android::content::ContentResolver> cr, jni::ref<java::lang::String> name, jlong value) { return call_static_method<"putLong", jboolean>(cr, name, value); }
	static jfloat getFloat(jni::ref<android::content::ContentResolver> cr, jni::ref<java::lang::String> name, jfloat def) { return call_static_method<"getFloat", jfloat>(cr, name, def); }
	static jfloat getFloat(jni::ref<android::content::ContentResolver> cr, jni::ref<java::lang::String> name) { return call_static_method<"getFloat", jfloat>(cr, name); }
	static jboolean putFloat(jni::ref<android::content::ContentResolver> cr, jni::ref<java::lang::String> name, jfloat value) { return call_static_method<"putFloat", jboolean>(cr, name, value); }
	static jboolean isLocationProviderEnabled(jni::ref<android::content::ContentResolver> cr, jni::ref<java::lang::String> provider) { return call_static_method<"isLocationProviderEnabled", jboolean>(cr, provider); }
	static void setLocationProviderEnabled(jni::ref<android::content::ContentResolver> cr, jni::ref<java::lang::String> provider, jboolean enabled) { return call_static_method<"setLocationProviderEnabled", void>(cr, provider, enabled); }

protected:

	Settings_Secure(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_SECURE
