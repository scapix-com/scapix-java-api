// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/provider/Settings_NameValueTable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_SYSTEM_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_SYSTEM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class Settings_System; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::Settings_System>
{
	static constexpr fixed_string class_name = "android/provider/Settings$System";
	using base_classes = std::tuple<scapix::java_api::android::provider::Settings_NameValueTable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_SYSTEM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_SYSTEM)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_SYSTEM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ContentResolver.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/Configuration.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::Settings_System : public jni::object_base<"android/provider/Settings$System",
	android::provider::Settings_NameValueTable>
{
public:

	static jni::ref<java::lang::String> ACCELEROMETER_ROTATION() { return get_static_field<"ACCELEROMETER_ROTATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ADB_ENABLED() { return get_static_field<"ADB_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> AIRPLANE_MODE_ON() { return get_static_field<"AIRPLANE_MODE_ON", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> AIRPLANE_MODE_RADIOS() { return get_static_field<"AIRPLANE_MODE_RADIOS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ALARM_ALERT() { return get_static_field<"ALARM_ALERT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ALWAYS_FINISH_ACTIVITIES() { return get_static_field<"ALWAYS_FINISH_ACTIVITIES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ANDROID_ID() { return get_static_field<"ANDROID_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ANIMATOR_DURATION_SCALE() { return get_static_field<"ANIMATOR_DURATION_SCALE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> AUTO_TIME() { return get_static_field<"AUTO_TIME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> AUTO_TIME_ZONE() { return get_static_field<"AUTO_TIME_ZONE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BLUETOOTH_DISCOVERABILITY() { return get_static_field<"BLUETOOTH_DISCOVERABILITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BLUETOOTH_DISCOVERABILITY_TIMEOUT() { return get_static_field<"BLUETOOTH_DISCOVERABILITY_TIMEOUT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BLUETOOTH_ON() { return get_static_field<"BLUETOOTH_ON", jni::ref<java::lang::String>>(); }
	static jni::ref<android::net::Uri> CONTENT_URI() { return get_static_field<"CONTENT_URI", jni::ref<android::net::Uri>>(); }
	static jni::ref<java::lang::String> DATA_ROAMING() { return get_static_field<"DATA_ROAMING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATE_FORMAT() { return get_static_field<"DATE_FORMAT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DEBUG_APP() { return get_static_field<"DEBUG_APP", jni::ref<java::lang::String>>(); }
	static jni::ref<android::net::Uri> DEFAULT_ALARM_ALERT_URI() { return get_static_field<"DEFAULT_ALARM_ALERT_URI", jni::ref<android::net::Uri>>(); }
	static jni::ref<android::net::Uri> DEFAULT_NOTIFICATION_URI() { return get_static_field<"DEFAULT_NOTIFICATION_URI", jni::ref<android::net::Uri>>(); }
	static jni::ref<android::net::Uri> DEFAULT_RINGTONE_URI() { return get_static_field<"DEFAULT_RINGTONE_URI", jni::ref<android::net::Uri>>(); }
	static jni::ref<java::lang::String> DEVICE_PROVISIONED() { return get_static_field<"DEVICE_PROVISIONED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DIM_SCREEN() { return get_static_field<"DIM_SCREEN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DTMF_TONE_TYPE_WHEN_DIALING() { return get_static_field<"DTMF_TONE_TYPE_WHEN_DIALING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DTMF_TONE_WHEN_DIALING() { return get_static_field<"DTMF_TONE_WHEN_DIALING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> END_BUTTON_BEHAVIOR() { return get_static_field<"END_BUTTON_BEHAVIOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FONT_SCALE() { return get_static_field<"FONT_SCALE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HAPTIC_FEEDBACK_ENABLED() { return get_static_field<"HAPTIC_FEEDBACK_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HTTP_PROXY() { return get_static_field<"HTTP_PROXY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INSTALL_NON_MARKET_APPS() { return get_static_field<"INSTALL_NON_MARKET_APPS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOCATION_PROVIDERS_ALLOWED() { return get_static_field<"LOCATION_PROVIDERS_ALLOWED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOCK_PATTERN_ENABLED() { return get_static_field<"LOCK_PATTERN_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOCK_PATTERN_TACTILE_FEEDBACK_ENABLED() { return get_static_field<"LOCK_PATTERN_TACTILE_FEEDBACK_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOCK_PATTERN_VISIBLE() { return get_static_field<"LOCK_PATTERN_VISIBLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOGGING_ID() { return get_static_field<"LOGGING_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MODE_RINGER() { return get_static_field<"MODE_RINGER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MODE_RINGER_STREAMS_AFFECTED() { return get_static_field<"MODE_RINGER_STREAMS_AFFECTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MUTE_STREAMS_AFFECTED() { return get_static_field<"MUTE_STREAMS_AFFECTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NETWORK_PREFERENCE() { return get_static_field<"NETWORK_PREFERENCE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NEXT_ALARM_FORMATTED() { return get_static_field<"NEXT_ALARM_FORMATTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NOTIFICATION_SOUND() { return get_static_field<"NOTIFICATION_SOUND", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PARENTAL_CONTROL_ENABLED() { return get_static_field<"PARENTAL_CONTROL_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PARENTAL_CONTROL_LAST_UPDATE() { return get_static_field<"PARENTAL_CONTROL_LAST_UPDATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PARENTAL_CONTROL_REDIRECT_URL() { return get_static_field<"PARENTAL_CONTROL_REDIRECT_URL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RADIO_BLUETOOTH() { return get_static_field<"RADIO_BLUETOOTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RADIO_CELL() { return get_static_field<"RADIO_CELL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RADIO_NFC() { return get_static_field<"RADIO_NFC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RADIO_WIFI() { return get_static_field<"RADIO_WIFI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RINGTONE() { return get_static_field<"RINGTONE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCREEN_BRIGHTNESS() { return get_static_field<"SCREEN_BRIGHTNESS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCREEN_BRIGHTNESS_MODE() { return get_static_field<"SCREEN_BRIGHTNESS_MODE", jni::ref<java::lang::String>>(); }
	static jint SCREEN_BRIGHTNESS_MODE_AUTOMATIC() { return get_static_field<"SCREEN_BRIGHTNESS_MODE_AUTOMATIC", jint>(); }
	static jint SCREEN_BRIGHTNESS_MODE_MANUAL() { return get_static_field<"SCREEN_BRIGHTNESS_MODE_MANUAL", jint>(); }
	static jni::ref<java::lang::String> SCREEN_OFF_TIMEOUT() { return get_static_field<"SCREEN_OFF_TIMEOUT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SETTINGS_CLASSNAME() { return get_static_field<"SETTINGS_CLASSNAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SETUP_WIZARD_HAS_RUN() { return get_static_field<"SETUP_WIZARD_HAS_RUN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SHOW_GTALK_SERVICE_STATUS() { return get_static_field<"SHOW_GTALK_SERVICE_STATUS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SHOW_PROCESSES() { return get_static_field<"SHOW_PROCESSES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SHOW_WEB_SUGGESTIONS() { return get_static_field<"SHOW_WEB_SUGGESTIONS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SOUND_EFFECTS_ENABLED() { return get_static_field<"SOUND_EFFECTS_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STAY_ON_WHILE_PLUGGED_IN() { return get_static_field<"STAY_ON_WHILE_PLUGGED_IN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TEXT_AUTO_CAPS() { return get_static_field<"TEXT_AUTO_CAPS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TEXT_AUTO_PUNCTUATE() { return get_static_field<"TEXT_AUTO_PUNCTUATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TEXT_AUTO_REPLACE() { return get_static_field<"TEXT_AUTO_REPLACE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TEXT_SHOW_PASSWORD() { return get_static_field<"TEXT_SHOW_PASSWORD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TIME_12_24() { return get_static_field<"TIME_12_24", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TRANSITION_ANIMATION_SCALE() { return get_static_field<"TRANSITION_ANIMATION_SCALE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> USB_MASS_STORAGE_ENABLED() { return get_static_field<"USB_MASS_STORAGE_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> USER_ROTATION() { return get_static_field<"USER_ROTATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> USE_GOOGLE_MAIL() { return get_static_field<"USE_GOOGLE_MAIL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VIBRATE_ON() { return get_static_field<"VIBRATE_ON", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VIBRATE_WHEN_RINGING() { return get_static_field<"VIBRATE_WHEN_RINGING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WAIT_FOR_DEBUGGER() { return get_static_field<"WAIT_FOR_DEBUGGER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WALLPAPER_ACTIVITY() { return get_static_field<"WALLPAPER_ACTIVITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_MAX_DHCP_RETRY_COUNT() { return get_static_field<"WIFI_MAX_DHCP_RETRY_COUNT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS() { return get_static_field<"WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON() { return get_static_field<"WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY() { return get_static_field<"WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_NUM_OPEN_NETWORKS_KEPT() { return get_static_field<"WIFI_NUM_OPEN_NETWORKS_KEPT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_ON() { return get_static_field<"WIFI_ON", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_SLEEP_POLICY() { return get_static_field<"WIFI_SLEEP_POLICY", jni::ref<java::lang::String>>(); }
	static jint WIFI_SLEEP_POLICY_DEFAULT() { return get_static_field<"WIFI_SLEEP_POLICY_DEFAULT", jint>(); }
	static jint WIFI_SLEEP_POLICY_NEVER() { return get_static_field<"WIFI_SLEEP_POLICY_NEVER", jint>(); }
	static jint WIFI_SLEEP_POLICY_NEVER_WHILE_PLUGGED() { return get_static_field<"WIFI_SLEEP_POLICY_NEVER_WHILE_PLUGGED", jint>(); }
	static jni::ref<java::lang::String> WIFI_STATIC_DNS1() { return get_static_field<"WIFI_STATIC_DNS1", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_STATIC_DNS2() { return get_static_field<"WIFI_STATIC_DNS2", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_STATIC_GATEWAY() { return get_static_field<"WIFI_STATIC_GATEWAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_STATIC_IP() { return get_static_field<"WIFI_STATIC_IP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_STATIC_NETMASK() { return get_static_field<"WIFI_STATIC_NETMASK", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIFI_USE_STATIC_IP() { return get_static_field<"WIFI_USE_STATIC_IP", jni::ref<java::lang::String>>(); }
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
	static jni::ref<java::lang::String> WINDOW_ANIMATION_SCALE() { return get_static_field<"WINDOW_ANIMATION_SCALE", jni::ref<java::lang::String>>(); }

	static jni::ref<android::provider::Settings_System> new_object() { return base_::new_object(); }
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
	static void getConfiguration(jni::ref<android::content::ContentResolver> cr, jni::ref<android::content::res::Configuration> outConfig) { return call_static_method<"getConfiguration", void>(cr, outConfig); }
	static jboolean putConfiguration(jni::ref<android::content::ContentResolver> cr, jni::ref<android::content::res::Configuration> config) { return call_static_method<"putConfiguration", jboolean>(cr, config); }
	static jboolean getShowGTalkServiceStatus(jni::ref<android::content::ContentResolver> cr) { return call_static_method<"getShowGTalkServiceStatus", jboolean>(cr); }
	static void setShowGTalkServiceStatus(jni::ref<android::content::ContentResolver> cr, jboolean flag) { return call_static_method<"setShowGTalkServiceStatus", void>(cr, flag); }
	static jboolean canWrite(jni::ref<android::content::Context> context) { return call_static_method<"canWrite", jboolean>(context); }

protected:

	Settings_System(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_SETTINGS_SYSTEM
