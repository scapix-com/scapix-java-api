// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class PackageManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::PackageManager>
{
	static constexpr fixed_string class_name = "android/content/pm/PackageManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEMANAGER)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/content/IntentFilter.h>
#include <scapix/java_api/android/content/pm/ActivityInfo.h>
#include <scapix/java_api/android/content/pm/ApplicationInfo.h>
#include <scapix/java_api/android/content/pm/FeatureInfo.h>
#include <scapix/java_api/android/content/pm/InstrumentationInfo.h>
#include <scapix/java_api/android/content/pm/PackageInfo.h>
#include <scapix/java_api/android/content/pm/PackageInstaller.h>
#include <scapix/java_api/android/content/pm/PermissionGroupInfo.h>
#include <scapix/java_api/android/content/pm/PermissionInfo.h>
#include <scapix/java_api/android/content/pm/ProviderInfo.h>
#include <scapix/java_api/android/content/pm/ResolveInfo.h>
#include <scapix/java_api/android/content/pm/ServiceInfo.h>
#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/content/res/XmlResourceParser.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/os/UserHandle.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/content/pm/PackageManager_NameNotFoundException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::PackageManager : public jni::object_base<"android/content/pm/PackageManager",
	java::lang::Object>
{
public:

	using NameNotFoundException = PackageManager_NameNotFoundException;

	static jint COMPONENT_ENABLED_STATE_DEFAULT() { return get_static_field<"COMPONENT_ENABLED_STATE_DEFAULT", jint>(); }
	static jint COMPONENT_ENABLED_STATE_DISABLED() { return get_static_field<"COMPONENT_ENABLED_STATE_DISABLED", jint>(); }
	static jint COMPONENT_ENABLED_STATE_DISABLED_UNTIL_USED() { return get_static_field<"COMPONENT_ENABLED_STATE_DISABLED_UNTIL_USED", jint>(); }
	static jint COMPONENT_ENABLED_STATE_DISABLED_USER() { return get_static_field<"COMPONENT_ENABLED_STATE_DISABLED_USER", jint>(); }
	static jint COMPONENT_ENABLED_STATE_ENABLED() { return get_static_field<"COMPONENT_ENABLED_STATE_ENABLED", jint>(); }
	static jint DONT_KILL_APP() { return get_static_field<"DONT_KILL_APP", jint>(); }
	static jni::ref<java::lang::String> EXTRA_VERIFICATION_ID() { return get_static_field<"EXTRA_VERIFICATION_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_VERIFICATION_RESULT() { return get_static_field<"EXTRA_VERIFICATION_RESULT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_APP_WIDGETS() { return get_static_field<"FEATURE_APP_WIDGETS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_AUDIO_LOW_LATENCY() { return get_static_field<"FEATURE_AUDIO_LOW_LATENCY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_AUDIO_OUTPUT() { return get_static_field<"FEATURE_AUDIO_OUTPUT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_BACKUP() { return get_static_field<"FEATURE_BACKUP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_BLUETOOTH() { return get_static_field<"FEATURE_BLUETOOTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_BLUETOOTH_LE() { return get_static_field<"FEATURE_BLUETOOTH_LE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_CAMERA() { return get_static_field<"FEATURE_CAMERA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_CAMERA_ANY() { return get_static_field<"FEATURE_CAMERA_ANY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_CAMERA_AUTOFOCUS() { return get_static_field<"FEATURE_CAMERA_AUTOFOCUS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_CAMERA_CAPABILITY_MANUAL_POST_PROCESSING() { return get_static_field<"FEATURE_CAMERA_CAPABILITY_MANUAL_POST_PROCESSING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_CAMERA_CAPABILITY_MANUAL_SENSOR() { return get_static_field<"FEATURE_CAMERA_CAPABILITY_MANUAL_SENSOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_CAMERA_CAPABILITY_RAW() { return get_static_field<"FEATURE_CAMERA_CAPABILITY_RAW", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_CAMERA_EXTERNAL() { return get_static_field<"FEATURE_CAMERA_EXTERNAL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_CAMERA_FLASH() { return get_static_field<"FEATURE_CAMERA_FLASH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_CAMERA_FRONT() { return get_static_field<"FEATURE_CAMERA_FRONT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_CAMERA_LEVEL_FULL() { return get_static_field<"FEATURE_CAMERA_LEVEL_FULL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_CONNECTION_SERVICE() { return get_static_field<"FEATURE_CONNECTION_SERVICE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_CONSUMER_IR() { return get_static_field<"FEATURE_CONSUMER_IR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_DEVICE_ADMIN() { return get_static_field<"FEATURE_DEVICE_ADMIN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_FAKETOUCH() { return get_static_field<"FEATURE_FAKETOUCH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_FAKETOUCH_MULTITOUCH_DISTINCT() { return get_static_field<"FEATURE_FAKETOUCH_MULTITOUCH_DISTINCT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_FAKETOUCH_MULTITOUCH_JAZZHAND() { return get_static_field<"FEATURE_FAKETOUCH_MULTITOUCH_JAZZHAND", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_GAMEPAD() { return get_static_field<"FEATURE_GAMEPAD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_HOME_SCREEN() { return get_static_field<"FEATURE_HOME_SCREEN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_INPUT_METHODS() { return get_static_field<"FEATURE_INPUT_METHODS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_LEANBACK() { return get_static_field<"FEATURE_LEANBACK", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_LIVE_TV() { return get_static_field<"FEATURE_LIVE_TV", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_LIVE_WALLPAPER() { return get_static_field<"FEATURE_LIVE_WALLPAPER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_LOCATION() { return get_static_field<"FEATURE_LOCATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_LOCATION_GPS() { return get_static_field<"FEATURE_LOCATION_GPS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_LOCATION_NETWORK() { return get_static_field<"FEATURE_LOCATION_NETWORK", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_MANAGED_USERS() { return get_static_field<"FEATURE_MANAGED_USERS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_MICROPHONE() { return get_static_field<"FEATURE_MICROPHONE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_NFC() { return get_static_field<"FEATURE_NFC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_NFC_HOST_CARD_EMULATION() { return get_static_field<"FEATURE_NFC_HOST_CARD_EMULATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_OPENGLES_EXTENSION_PACK() { return get_static_field<"FEATURE_OPENGLES_EXTENSION_PACK", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_PRINTING() { return get_static_field<"FEATURE_PRINTING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_SCREEN_LANDSCAPE() { return get_static_field<"FEATURE_SCREEN_LANDSCAPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_SCREEN_PORTRAIT() { return get_static_field<"FEATURE_SCREEN_PORTRAIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_SECURELY_REMOVES_USERS() { return get_static_field<"FEATURE_SECURELY_REMOVES_USERS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_SENSOR_ACCELEROMETER() { return get_static_field<"FEATURE_SENSOR_ACCELEROMETER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_SENSOR_AMBIENT_TEMPERATURE() { return get_static_field<"FEATURE_SENSOR_AMBIENT_TEMPERATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_SENSOR_BAROMETER() { return get_static_field<"FEATURE_SENSOR_BAROMETER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_SENSOR_COMPASS() { return get_static_field<"FEATURE_SENSOR_COMPASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_SENSOR_GYROSCOPE() { return get_static_field<"FEATURE_SENSOR_GYROSCOPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_SENSOR_HEART_RATE() { return get_static_field<"FEATURE_SENSOR_HEART_RATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_SENSOR_HEART_RATE_ECG() { return get_static_field<"FEATURE_SENSOR_HEART_RATE_ECG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_SENSOR_LIGHT() { return get_static_field<"FEATURE_SENSOR_LIGHT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_SENSOR_PROXIMITY() { return get_static_field<"FEATURE_SENSOR_PROXIMITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_SENSOR_RELATIVE_HUMIDITY() { return get_static_field<"FEATURE_SENSOR_RELATIVE_HUMIDITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_SENSOR_STEP_COUNTER() { return get_static_field<"FEATURE_SENSOR_STEP_COUNTER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_SENSOR_STEP_DETECTOR() { return get_static_field<"FEATURE_SENSOR_STEP_DETECTOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_SIP() { return get_static_field<"FEATURE_SIP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_SIP_VOIP() { return get_static_field<"FEATURE_SIP_VOIP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_TELEPHONY() { return get_static_field<"FEATURE_TELEPHONY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_TELEPHONY_CDMA() { return get_static_field<"FEATURE_TELEPHONY_CDMA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_TELEPHONY_GSM() { return get_static_field<"FEATURE_TELEPHONY_GSM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_TELEVISION() { return get_static_field<"FEATURE_TELEVISION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_TOUCHSCREEN() { return get_static_field<"FEATURE_TOUCHSCREEN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_TOUCHSCREEN_MULTITOUCH() { return get_static_field<"FEATURE_TOUCHSCREEN_MULTITOUCH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_TOUCHSCREEN_MULTITOUCH_DISTINCT() { return get_static_field<"FEATURE_TOUCHSCREEN_MULTITOUCH_DISTINCT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_TOUCHSCREEN_MULTITOUCH_JAZZHAND() { return get_static_field<"FEATURE_TOUCHSCREEN_MULTITOUCH_JAZZHAND", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_USB_ACCESSORY() { return get_static_field<"FEATURE_USB_ACCESSORY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_USB_HOST() { return get_static_field<"FEATURE_USB_HOST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_VERIFIED_BOOT() { return get_static_field<"FEATURE_VERIFIED_BOOT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_WATCH() { return get_static_field<"FEATURE_WATCH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_WEBVIEW() { return get_static_field<"FEATURE_WEBVIEW", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_WIFI() { return get_static_field<"FEATURE_WIFI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_WIFI_DIRECT() { return get_static_field<"FEATURE_WIFI_DIRECT", jni::ref<java::lang::String>>(); }
	static jint GET_ACTIVITIES() { return get_static_field<"GET_ACTIVITIES", jint>(); }
	static jint GET_CONFIGURATIONS() { return get_static_field<"GET_CONFIGURATIONS", jint>(); }
	static jint GET_DISABLED_COMPONENTS() { return get_static_field<"GET_DISABLED_COMPONENTS", jint>(); }
	static jint GET_DISABLED_UNTIL_USED_COMPONENTS() { return get_static_field<"GET_DISABLED_UNTIL_USED_COMPONENTS", jint>(); }
	static jint GET_GIDS() { return get_static_field<"GET_GIDS", jint>(); }
	static jint GET_INSTRUMENTATION() { return get_static_field<"GET_INSTRUMENTATION", jint>(); }
	static jint GET_INTENT_FILTERS() { return get_static_field<"GET_INTENT_FILTERS", jint>(); }
	static jint GET_META_DATA() { return get_static_field<"GET_META_DATA", jint>(); }
	static jint GET_PERMISSIONS() { return get_static_field<"GET_PERMISSIONS", jint>(); }
	static jint GET_PROVIDERS() { return get_static_field<"GET_PROVIDERS", jint>(); }
	static jint GET_RECEIVERS() { return get_static_field<"GET_RECEIVERS", jint>(); }
	static jint GET_RESOLVED_FILTER() { return get_static_field<"GET_RESOLVED_FILTER", jint>(); }
	static jint GET_SERVICES() { return get_static_field<"GET_SERVICES", jint>(); }
	static jint GET_SHARED_LIBRARY_FILES() { return get_static_field<"GET_SHARED_LIBRARY_FILES", jint>(); }
	static jint GET_SIGNATURES() { return get_static_field<"GET_SIGNATURES", jint>(); }
	static jint GET_UNINSTALLED_PACKAGES() { return get_static_field<"GET_UNINSTALLED_PACKAGES", jint>(); }
	static jint GET_URI_PERMISSION_PATTERNS() { return get_static_field<"GET_URI_PERMISSION_PATTERNS", jint>(); }
	static jint MATCH_DEFAULT_ONLY() { return get_static_field<"MATCH_DEFAULT_ONLY", jint>(); }
	static jlong MAXIMUM_VERIFICATION_TIMEOUT() { return get_static_field<"MAXIMUM_VERIFICATION_TIMEOUT", jlong>(); }
	static jint PERMISSION_DENIED() { return get_static_field<"PERMISSION_DENIED", jint>(); }
	static jint PERMISSION_GRANTED() { return get_static_field<"PERMISSION_GRANTED", jint>(); }
	static jint SIGNATURE_FIRST_NOT_SIGNED() { return get_static_field<"SIGNATURE_FIRST_NOT_SIGNED", jint>(); }
	static jint SIGNATURE_MATCH() { return get_static_field<"SIGNATURE_MATCH", jint>(); }
	static jint SIGNATURE_NEITHER_SIGNED() { return get_static_field<"SIGNATURE_NEITHER_SIGNED", jint>(); }
	static jint SIGNATURE_NO_MATCH() { return get_static_field<"SIGNATURE_NO_MATCH", jint>(); }
	static jint SIGNATURE_SECOND_NOT_SIGNED() { return get_static_field<"SIGNATURE_SECOND_NOT_SIGNED", jint>(); }
	static jint SIGNATURE_UNKNOWN_PACKAGE() { return get_static_field<"SIGNATURE_UNKNOWN_PACKAGE", jint>(); }
	static jint VERIFICATION_ALLOW() { return get_static_field<"VERIFICATION_ALLOW", jint>(); }
	static jint VERIFICATION_REJECT() { return get_static_field<"VERIFICATION_REJECT", jint>(); }

	static jni::ref<android::content::pm::PackageManager> new_object() { return base_::new_object(); }
	jni::ref<android::content::pm::PackageInfo> getPackageInfo(jni::ref<java::lang::String> p1, jint p2) { return call_method<"getPackageInfo", jni::ref<android::content::pm::PackageInfo>>(p1, p2); }
	jni::ref<jni::array<java::lang::String>> currentToCanonicalPackageNames(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"currentToCanonicalPackageNames", jni::ref<jni::array<java::lang::String>>>(p1); }
	jni::ref<jni::array<java::lang::String>> canonicalToCurrentPackageNames(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"canonicalToCurrentPackageNames", jni::ref<jni::array<java::lang::String>>>(p1); }
	jni::ref<android::content::Intent> getLaunchIntentForPackage(jni::ref<java::lang::String> p1) { return call_method<"getLaunchIntentForPackage", jni::ref<android::content::Intent>>(p1); }
	jni::ref<android::content::Intent> getLeanbackLaunchIntentForPackage(jni::ref<java::lang::String> p1) { return call_method<"getLeanbackLaunchIntentForPackage", jni::ref<android::content::Intent>>(p1); }
	jni::ref<jni::array<jint>> getPackageGids(jni::ref<java::lang::String> p1) { return call_method<"getPackageGids", jni::ref<jni::array<jint>>>(p1); }
	jni::ref<android::content::pm::PermissionInfo> getPermissionInfo(jni::ref<java::lang::String> p1, jint p2) { return call_method<"getPermissionInfo", jni::ref<android::content::pm::PermissionInfo>>(p1, p2); }
	jni::ref<java::util::List> queryPermissionsByGroup(jni::ref<java::lang::String> p1, jint p2) { return call_method<"queryPermissionsByGroup", jni::ref<java::util::List>>(p1, p2); }
	jni::ref<android::content::pm::PermissionGroupInfo> getPermissionGroupInfo(jni::ref<java::lang::String> p1, jint p2) { return call_method<"getPermissionGroupInfo", jni::ref<android::content::pm::PermissionGroupInfo>>(p1, p2); }
	jni::ref<java::util::List> getAllPermissionGroups(jint p1) { return call_method<"getAllPermissionGroups", jni::ref<java::util::List>>(p1); }
	jni::ref<android::content::pm::ApplicationInfo> getApplicationInfo(jni::ref<java::lang::String> p1, jint p2) { return call_method<"getApplicationInfo", jni::ref<android::content::pm::ApplicationInfo>>(p1, p2); }
	jni::ref<android::content::pm::ActivityInfo> getActivityInfo(jni::ref<android::content::ComponentName> p1, jint p2) { return call_method<"getActivityInfo", jni::ref<android::content::pm::ActivityInfo>>(p1, p2); }
	jni::ref<android::content::pm::ActivityInfo> getReceiverInfo(jni::ref<android::content::ComponentName> p1, jint p2) { return call_method<"getReceiverInfo", jni::ref<android::content::pm::ActivityInfo>>(p1, p2); }
	jni::ref<android::content::pm::ServiceInfo> getServiceInfo(jni::ref<android::content::ComponentName> p1, jint p2) { return call_method<"getServiceInfo", jni::ref<android::content::pm::ServiceInfo>>(p1, p2); }
	jni::ref<android::content::pm::ProviderInfo> getProviderInfo(jni::ref<android::content::ComponentName> p1, jint p2) { return call_method<"getProviderInfo", jni::ref<android::content::pm::ProviderInfo>>(p1, p2); }
	jni::ref<java::util::List> getInstalledPackages(jint p1) { return call_method<"getInstalledPackages", jni::ref<java::util::List>>(p1); }
	jni::ref<java::util::List> getPackagesHoldingPermissions(jni::ref<jni::array<java::lang::String>> p1, jint p2) { return call_method<"getPackagesHoldingPermissions", jni::ref<java::util::List>>(p1, p2); }
	jint checkPermission(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"checkPermission", jint>(p1, p2); }
	jboolean addPermission(jni::ref<android::content::pm::PermissionInfo> p1) { return call_method<"addPermission", jboolean>(p1); }
	jboolean addPermissionAsync(jni::ref<android::content::pm::PermissionInfo> p1) { return call_method<"addPermissionAsync", jboolean>(p1); }
	void removePermission(jni::ref<java::lang::String> p1) { return call_method<"removePermission", void>(p1); }
	jint checkSignatures(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"checkSignatures", jint>(p1, p2); }
	jint checkSignatures(jint p1, jint p2) { return call_method<"checkSignatures", jint>(p1, p2); }
	jni::ref<jni::array<java::lang::String>> getPackagesForUid(jint p1) { return call_method<"getPackagesForUid", jni::ref<jni::array<java::lang::String>>>(p1); }
	jni::ref<java::lang::String> getNameForUid(jint p1) { return call_method<"getNameForUid", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::util::List> getInstalledApplications(jint p1) { return call_method<"getInstalledApplications", jni::ref<java::util::List>>(p1); }
	jni::ref<jni::array<java::lang::String>> getSystemSharedLibraryNames() { return call_method<"getSystemSharedLibraryNames", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<android::content::pm::FeatureInfo>> getSystemAvailableFeatures() { return call_method<"getSystemAvailableFeatures", jni::ref<jni::array<android::content::pm::FeatureInfo>>>(); }
	jboolean hasSystemFeature(jni::ref<java::lang::String> p1) { return call_method<"hasSystemFeature", jboolean>(p1); }
	jni::ref<android::content::pm::ResolveInfo> resolveActivity(jni::ref<android::content::Intent> p1, jint p2) { return call_method<"resolveActivity", jni::ref<android::content::pm::ResolveInfo>>(p1, p2); }
	jni::ref<java::util::List> queryIntentActivities(jni::ref<android::content::Intent> p1, jint p2) { return call_method<"queryIntentActivities", jni::ref<java::util::List>>(p1, p2); }
	jni::ref<java::util::List> queryIntentActivityOptions(jni::ref<android::content::ComponentName> p1, jni::ref<jni::array<android::content::Intent>> p2, jni::ref<android::content::Intent> p3, jint p4) { return call_method<"queryIntentActivityOptions", jni::ref<java::util::List>>(p1, p2, p3, p4); }
	jni::ref<java::util::List> queryBroadcastReceivers(jni::ref<android::content::Intent> p1, jint p2) { return call_method<"queryBroadcastReceivers", jni::ref<java::util::List>>(p1, p2); }
	jni::ref<android::content::pm::ResolveInfo> resolveService(jni::ref<android::content::Intent> p1, jint p2) { return call_method<"resolveService", jni::ref<android::content::pm::ResolveInfo>>(p1, p2); }
	jni::ref<java::util::List> queryIntentServices(jni::ref<android::content::Intent> p1, jint p2) { return call_method<"queryIntentServices", jni::ref<java::util::List>>(p1, p2); }
	jni::ref<java::util::List> queryIntentContentProviders(jni::ref<android::content::Intent> p1, jint p2) { return call_method<"queryIntentContentProviders", jni::ref<java::util::List>>(p1, p2); }
	jni::ref<android::content::pm::ProviderInfo> resolveContentProvider(jni::ref<java::lang::String> p1, jint p2) { return call_method<"resolveContentProvider", jni::ref<android::content::pm::ProviderInfo>>(p1, p2); }
	jni::ref<java::util::List> queryContentProviders(jni::ref<java::lang::String> p1, jint p2, jint p3) { return call_method<"queryContentProviders", jni::ref<java::util::List>>(p1, p2, p3); }
	jni::ref<android::content::pm::InstrumentationInfo> getInstrumentationInfo(jni::ref<android::content::ComponentName> p1, jint p2) { return call_method<"getInstrumentationInfo", jni::ref<android::content::pm::InstrumentationInfo>>(p1, p2); }
	jni::ref<java::util::List> queryInstrumentation(jni::ref<java::lang::String> p1, jint p2) { return call_method<"queryInstrumentation", jni::ref<java::util::List>>(p1, p2); }
	jni::ref<android::graphics::drawable::Drawable> getDrawable(jni::ref<java::lang::String> p1, jint p2, jni::ref<android::content::pm::ApplicationInfo> p3) { return call_method<"getDrawable", jni::ref<android::graphics::drawable::Drawable>>(p1, p2, p3); }
	jni::ref<android::graphics::drawable::Drawable> getActivityIcon(jni::ref<android::content::ComponentName> p1) { return call_method<"getActivityIcon", jni::ref<android::graphics::drawable::Drawable>>(p1); }
	jni::ref<android::graphics::drawable::Drawable> getActivityIcon(jni::ref<android::content::Intent> p1) { return call_method<"getActivityIcon", jni::ref<android::graphics::drawable::Drawable>>(p1); }
	jni::ref<android::graphics::drawable::Drawable> getActivityBanner(jni::ref<android::content::ComponentName> p1) { return call_method<"getActivityBanner", jni::ref<android::graphics::drawable::Drawable>>(p1); }
	jni::ref<android::graphics::drawable::Drawable> getActivityBanner(jni::ref<android::content::Intent> p1) { return call_method<"getActivityBanner", jni::ref<android::graphics::drawable::Drawable>>(p1); }
	jni::ref<android::graphics::drawable::Drawable> getDefaultActivityIcon() { return call_method<"getDefaultActivityIcon", jni::ref<android::graphics::drawable::Drawable>>(); }
	jni::ref<android::graphics::drawable::Drawable> getApplicationIcon(jni::ref<android::content::pm::ApplicationInfo> p1) { return call_method<"getApplicationIcon", jni::ref<android::graphics::drawable::Drawable>>(p1); }
	jni::ref<android::graphics::drawable::Drawable> getApplicationIcon(jni::ref<java::lang::String> p1) { return call_method<"getApplicationIcon", jni::ref<android::graphics::drawable::Drawable>>(p1); }
	jni::ref<android::graphics::drawable::Drawable> getApplicationBanner(jni::ref<android::content::pm::ApplicationInfo> p1) { return call_method<"getApplicationBanner", jni::ref<android::graphics::drawable::Drawable>>(p1); }
	jni::ref<android::graphics::drawable::Drawable> getApplicationBanner(jni::ref<java::lang::String> p1) { return call_method<"getApplicationBanner", jni::ref<android::graphics::drawable::Drawable>>(p1); }
	jni::ref<android::graphics::drawable::Drawable> getActivityLogo(jni::ref<android::content::ComponentName> p1) { return call_method<"getActivityLogo", jni::ref<android::graphics::drawable::Drawable>>(p1); }
	jni::ref<android::graphics::drawable::Drawable> getActivityLogo(jni::ref<android::content::Intent> p1) { return call_method<"getActivityLogo", jni::ref<android::graphics::drawable::Drawable>>(p1); }
	jni::ref<android::graphics::drawable::Drawable> getApplicationLogo(jni::ref<android::content::pm::ApplicationInfo> p1) { return call_method<"getApplicationLogo", jni::ref<android::graphics::drawable::Drawable>>(p1); }
	jni::ref<android::graphics::drawable::Drawable> getApplicationLogo(jni::ref<java::lang::String> p1) { return call_method<"getApplicationLogo", jni::ref<android::graphics::drawable::Drawable>>(p1); }
	jni::ref<android::graphics::drawable::Drawable> getUserBadgedIcon(jni::ref<android::graphics::drawable::Drawable> p1, jni::ref<android::os::UserHandle> p2) { return call_method<"getUserBadgedIcon", jni::ref<android::graphics::drawable::Drawable>>(p1, p2); }
	jni::ref<android::graphics::drawable::Drawable> getUserBadgedDrawableForDensity(jni::ref<android::graphics::drawable::Drawable> p1, jni::ref<android::os::UserHandle> p2, jni::ref<android::graphics::Rect> p3, jint p4) { return call_method<"getUserBadgedDrawableForDensity", jni::ref<android::graphics::drawable::Drawable>>(p1, p2, p3, p4); }
	jni::ref<java::lang::CharSequence> getUserBadgedLabel(jni::ref<java::lang::CharSequence> p1, jni::ref<android::os::UserHandle> p2) { return call_method<"getUserBadgedLabel", jni::ref<java::lang::CharSequence>>(p1, p2); }
	jni::ref<java::lang::CharSequence> getText(jni::ref<java::lang::String> p1, jint p2, jni::ref<android::content::pm::ApplicationInfo> p3) { return call_method<"getText", jni::ref<java::lang::CharSequence>>(p1, p2, p3); }
	jni::ref<android::content::res::XmlResourceParser> getXml(jni::ref<java::lang::String> p1, jint p2, jni::ref<android::content::pm::ApplicationInfo> p3) { return call_method<"getXml", jni::ref<android::content::res::XmlResourceParser>>(p1, p2, p3); }
	jni::ref<java::lang::CharSequence> getApplicationLabel(jni::ref<android::content::pm::ApplicationInfo> p1) { return call_method<"getApplicationLabel", jni::ref<java::lang::CharSequence>>(p1); }
	jni::ref<android::content::res::Resources> getResourcesForActivity(jni::ref<android::content::ComponentName> p1) { return call_method<"getResourcesForActivity", jni::ref<android::content::res::Resources>>(p1); }
	jni::ref<android::content::res::Resources> getResourcesForApplication(jni::ref<android::content::pm::ApplicationInfo> p1) { return call_method<"getResourcesForApplication", jni::ref<android::content::res::Resources>>(p1); }
	jni::ref<android::content::res::Resources> getResourcesForApplication(jni::ref<java::lang::String> p1) { return call_method<"getResourcesForApplication", jni::ref<android::content::res::Resources>>(p1); }
	jni::ref<android::content::pm::PackageInfo> getPackageArchiveInfo(jni::ref<java::lang::String> archiveFilePath, jint flags) { return call_method<"getPackageArchiveInfo", jni::ref<android::content::pm::PackageInfo>>(archiveFilePath, flags); }
	void verifyPendingInstall(jint p1, jint p2) { return call_method<"verifyPendingInstall", void>(p1, p2); }
	void extendVerificationTimeout(jint p1, jint p2, jlong p3) { return call_method<"extendVerificationTimeout", void>(p1, p2, p3); }
	void setInstallerPackageName(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"setInstallerPackageName", void>(p1, p2); }
	jni::ref<java::lang::String> getInstallerPackageName(jni::ref<java::lang::String> p1) { return call_method<"getInstallerPackageName", jni::ref<java::lang::String>>(p1); }
	void addPackageToPreferred(jni::ref<java::lang::String> p1) { return call_method<"addPackageToPreferred", void>(p1); }
	void removePackageFromPreferred(jni::ref<java::lang::String> p1) { return call_method<"removePackageFromPreferred", void>(p1); }
	jni::ref<java::util::List> getPreferredPackages(jint p1) { return call_method<"getPreferredPackages", jni::ref<java::util::List>>(p1); }
	void addPreferredActivity(jni::ref<android::content::IntentFilter> p1, jint p2, jni::ref<jni::array<android::content::ComponentName>> p3, jni::ref<android::content::ComponentName> p4) { return call_method<"addPreferredActivity", void>(p1, p2, p3, p4); }
	void clearPackagePreferredActivities(jni::ref<java::lang::String> p1) { return call_method<"clearPackagePreferredActivities", void>(p1); }
	jint getPreferredActivities(jni::ref<java::util::List> p1, jni::ref<java::util::List> p2, jni::ref<java::lang::String> p3) { return call_method<"getPreferredActivities", jint>(p1, p2, p3); }
	void setComponentEnabledSetting(jni::ref<android::content::ComponentName> p1, jint p2, jint p3) { return call_method<"setComponentEnabledSetting", void>(p1, p2, p3); }
	jint getComponentEnabledSetting(jni::ref<android::content::ComponentName> p1) { return call_method<"getComponentEnabledSetting", jint>(p1); }
	void setApplicationEnabledSetting(jni::ref<java::lang::String> p1, jint p2, jint p3) { return call_method<"setApplicationEnabledSetting", void>(p1, p2, p3); }
	jint getApplicationEnabledSetting(jni::ref<java::lang::String> p1) { return call_method<"getApplicationEnabledSetting", jint>(p1); }
	jboolean isSafeMode() { return call_method<"isSafeMode", jboolean>(); }
	jni::ref<android::content::pm::PackageInstaller> getPackageInstaller() { return call_method<"getPackageInstaller", jni::ref<android::content::pm::PackageInstaller>>(); }

protected:

	PackageManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEMANAGER
