// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_USERMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_USERMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class UserManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::UserManager>
{
	static constexpr fixed_string class_name = "android/os/UserManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_USERMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_USERMANAGER)
#define SCAPIX_JAVA_API_ANDROID_OS_USERMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/PersistableBundle.h>
#include <scapix/java_api/android/os/UserHandle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/os/UserManager_UserOperationException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::UserManager : public jni::object_base<"android/os/UserManager",
	java::lang::Object>
{
public:

	using UserOperationException = UserManager_UserOperationException;

	static jni::ref<java::lang::String> ALLOW_PARENT_PROFILE_APP_LINKING() { return get_static_field<"ALLOW_PARENT_PROFILE_APP_LINKING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_ADD_MANAGED_PROFILE() { return get_static_field<"DISALLOW_ADD_MANAGED_PROFILE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_ADD_USER() { return get_static_field<"DISALLOW_ADD_USER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_ADJUST_VOLUME() { return get_static_field<"DISALLOW_ADJUST_VOLUME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_AIRPLANE_MODE() { return get_static_field<"DISALLOW_AIRPLANE_MODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_AMBIENT_DISPLAY() { return get_static_field<"DISALLOW_AMBIENT_DISPLAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_APPS_CONTROL() { return get_static_field<"DISALLOW_APPS_CONTROL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_AUTOFILL() { return get_static_field<"DISALLOW_AUTOFILL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_BLUETOOTH() { return get_static_field<"DISALLOW_BLUETOOTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_BLUETOOTH_SHARING() { return get_static_field<"DISALLOW_BLUETOOTH_SHARING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_CONFIG_BLUETOOTH() { return get_static_field<"DISALLOW_CONFIG_BLUETOOTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_CONFIG_BRIGHTNESS() { return get_static_field<"DISALLOW_CONFIG_BRIGHTNESS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_CONFIG_CELL_BROADCASTS() { return get_static_field<"DISALLOW_CONFIG_CELL_BROADCASTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_CONFIG_CREDENTIALS() { return get_static_field<"DISALLOW_CONFIG_CREDENTIALS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_CONFIG_DATE_TIME() { return get_static_field<"DISALLOW_CONFIG_DATE_TIME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_CONFIG_LOCALE() { return get_static_field<"DISALLOW_CONFIG_LOCALE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_CONFIG_LOCATION() { return get_static_field<"DISALLOW_CONFIG_LOCATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_CONFIG_MOBILE_NETWORKS() { return get_static_field<"DISALLOW_CONFIG_MOBILE_NETWORKS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_CONFIG_SCREEN_TIMEOUT() { return get_static_field<"DISALLOW_CONFIG_SCREEN_TIMEOUT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_CONFIG_TETHERING() { return get_static_field<"DISALLOW_CONFIG_TETHERING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_CONFIG_VPN() { return get_static_field<"DISALLOW_CONFIG_VPN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_CONFIG_WIFI() { return get_static_field<"DISALLOW_CONFIG_WIFI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_CREATE_WINDOWS() { return get_static_field<"DISALLOW_CREATE_WINDOWS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_CROSS_PROFILE_COPY_PASTE() { return get_static_field<"DISALLOW_CROSS_PROFILE_COPY_PASTE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_DATA_ROAMING() { return get_static_field<"DISALLOW_DATA_ROAMING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_DEBUGGING_FEATURES() { return get_static_field<"DISALLOW_DEBUGGING_FEATURES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_FACTORY_RESET() { return get_static_field<"DISALLOW_FACTORY_RESET", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_FUN() { return get_static_field<"DISALLOW_FUN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_INSTALL_APPS() { return get_static_field<"DISALLOW_INSTALL_APPS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_INSTALL_UNKNOWN_SOURCES() { return get_static_field<"DISALLOW_INSTALL_UNKNOWN_SOURCES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_MODIFY_ACCOUNTS() { return get_static_field<"DISALLOW_MODIFY_ACCOUNTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_MOUNT_PHYSICAL_MEDIA() { return get_static_field<"DISALLOW_MOUNT_PHYSICAL_MEDIA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_NETWORK_RESET() { return get_static_field<"DISALLOW_NETWORK_RESET", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_OUTGOING_BEAM() { return get_static_field<"DISALLOW_OUTGOING_BEAM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_OUTGOING_CALLS() { return get_static_field<"DISALLOW_OUTGOING_CALLS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_PRINTING() { return get_static_field<"DISALLOW_PRINTING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_REMOVE_MANAGED_PROFILE() { return get_static_field<"DISALLOW_REMOVE_MANAGED_PROFILE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_REMOVE_USER() { return get_static_field<"DISALLOW_REMOVE_USER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_SAFE_BOOT() { return get_static_field<"DISALLOW_SAFE_BOOT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_SET_USER_ICON() { return get_static_field<"DISALLOW_SET_USER_ICON", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_SET_WALLPAPER() { return get_static_field<"DISALLOW_SET_WALLPAPER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_SHARE_INTO_MANAGED_PROFILE() { return get_static_field<"DISALLOW_SHARE_INTO_MANAGED_PROFILE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_SHARE_LOCATION() { return get_static_field<"DISALLOW_SHARE_LOCATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_SMS() { return get_static_field<"DISALLOW_SMS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_SYSTEM_ERROR_DIALOGS() { return get_static_field<"DISALLOW_SYSTEM_ERROR_DIALOGS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_UNIFIED_PASSWORD() { return get_static_field<"DISALLOW_UNIFIED_PASSWORD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_UNINSTALL_APPS() { return get_static_field<"DISALLOW_UNINSTALL_APPS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_UNMUTE_MICROPHONE() { return get_static_field<"DISALLOW_UNMUTE_MICROPHONE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_USB_FILE_TRANSFER() { return get_static_field<"DISALLOW_USB_FILE_TRANSFER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_USER_SWITCH() { return get_static_field<"DISALLOW_USER_SWITCH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ENSURE_VERIFY_APPS() { return get_static_field<"ENSURE_VERIFY_APPS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_RESTRICTIONS_PENDING() { return get_static_field<"KEY_RESTRICTIONS_PENDING", jni::ref<java::lang::String>>(); }
	static jint USER_CREATION_FAILED_NOT_PERMITTED() { return get_static_field<"USER_CREATION_FAILED_NOT_PERMITTED", jint>(); }
	static jint USER_CREATION_FAILED_NO_MORE_USERS() { return get_static_field<"USER_CREATION_FAILED_NO_MORE_USERS", jint>(); }
	static jint USER_OPERATION_ERROR_CURRENT_USER() { return get_static_field<"USER_OPERATION_ERROR_CURRENT_USER", jint>(); }
	static jint USER_OPERATION_ERROR_LOW_STORAGE() { return get_static_field<"USER_OPERATION_ERROR_LOW_STORAGE", jint>(); }
	static jint USER_OPERATION_ERROR_MANAGED_PROFILE() { return get_static_field<"USER_OPERATION_ERROR_MANAGED_PROFILE", jint>(); }
	static jint USER_OPERATION_ERROR_MAX_RUNNING_USERS() { return get_static_field<"USER_OPERATION_ERROR_MAX_RUNNING_USERS", jint>(); }
	static jint USER_OPERATION_ERROR_MAX_USERS() { return get_static_field<"USER_OPERATION_ERROR_MAX_USERS", jint>(); }
	static jint USER_OPERATION_ERROR_UNKNOWN() { return get_static_field<"USER_OPERATION_ERROR_UNKNOWN", jint>(); }
	static jint USER_OPERATION_SUCCESS() { return get_static_field<"USER_OPERATION_SUCCESS", jint>(); }

	static jboolean supportsMultipleUsers() { return call_static_method<"supportsMultipleUsers", jboolean>(); }
	jni::ref<java::lang::String> getUserName() { return call_method<"getUserName", jni::ref<java::lang::String>>(); }
	jboolean isUserAGoat() { return call_method<"isUserAGoat", jboolean>(); }
	jboolean isSystemUser() { return call_method<"isSystemUser", jboolean>(); }
	jboolean isDemoUser() { return call_method<"isDemoUser", jboolean>(); }
	jboolean isUserRunning(jni::ref<android::os::UserHandle> user) { return call_method<"isUserRunning", jboolean>(user); }
	jboolean isUserRunningOrStopping(jni::ref<android::os::UserHandle> user) { return call_method<"isUserRunningOrStopping", jboolean>(user); }
	jboolean isUserUnlocked() { return call_method<"isUserUnlocked", jboolean>(); }
	jboolean isUserUnlocked(jni::ref<android::os::UserHandle> user) { return call_method<"isUserUnlocked", jboolean>(user); }
	jni::ref<android::os::Bundle> getUserRestrictions() { return call_method<"getUserRestrictions", jni::ref<android::os::Bundle>>(); }
	jni::ref<android::os::Bundle> getUserRestrictions(jni::ref<android::os::UserHandle> userHandle) { return call_method<"getUserRestrictions", jni::ref<android::os::Bundle>>(userHandle); }
	void setUserRestrictions(jni::ref<android::os::Bundle> restrictions) { return call_method<"setUserRestrictions", void>(restrictions); }
	void setUserRestrictions(jni::ref<android::os::Bundle> restrictions, jni::ref<android::os::UserHandle> userHandle) { return call_method<"setUserRestrictions", void>(restrictions, userHandle); }
	void setUserRestriction(jni::ref<java::lang::String> key, jboolean value) { return call_method<"setUserRestriction", void>(key, value); }
	jboolean hasUserRestriction(jni::ref<java::lang::String> restrictionKey) { return call_method<"hasUserRestriction", jboolean>(restrictionKey); }
	jlong getSerialNumberForUser(jni::ref<android::os::UserHandle> user) { return call_method<"getSerialNumberForUser", jlong>(user); }
	jni::ref<android::os::UserHandle> getUserForSerialNumber(jlong serialNumber) { return call_method<"getUserForSerialNumber", jni::ref<android::os::UserHandle>>(serialNumber); }
	static jni::ref<android::content::Intent> createUserCreationIntent(jni::ref<java::lang::String> userName, jni::ref<java::lang::String> accountName, jni::ref<java::lang::String> accountType, jni::ref<android::os::PersistableBundle> accountOptions) { return call_static_method<"createUserCreationIntent", jni::ref<android::content::Intent>>(userName, accountName, accountType, accountOptions); }
	jint getUserCount() { return call_method<"getUserCount", jint>(); }
	jni::ref<java::util::List> getUserProfiles() { return call_method<"getUserProfiles", jni::ref<java::util::List>>(); }
	jboolean requestQuietModeEnabled(jboolean enableQuietMode, jni::ref<android::os::UserHandle> userHandle) { return call_method<"requestQuietModeEnabled", jboolean>(enableQuietMode, userHandle); }
	jboolean isQuietModeEnabled(jni::ref<android::os::UserHandle> userHandle) { return call_method<"isQuietModeEnabled", jboolean>(userHandle); }
	jni::ref<android::os::Bundle> getApplicationRestrictions(jni::ref<java::lang::String> packageName) { return call_method<"getApplicationRestrictions", jni::ref<android::os::Bundle>>(packageName); }
	jboolean setRestrictionsChallenge(jni::ref<java::lang::String> newPin) { return call_method<"setRestrictionsChallenge", jboolean>(newPin); }
	jlong getUserCreationTime(jni::ref<android::os::UserHandle> userHandle) { return call_method<"getUserCreationTime", jlong>(userHandle); }

protected:

	UserManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_USERMANAGER
