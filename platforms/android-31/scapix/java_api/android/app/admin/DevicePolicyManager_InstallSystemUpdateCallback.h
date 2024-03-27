// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_ADMIN_DEVICEPOLICYMANAGER_INSTALLSYSTEMUPDATECALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_ADMIN_DEVICEPOLICYMANAGER_INSTALLSYSTEMUPDATECALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::admin { class DevicePolicyManager_InstallSystemUpdateCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::admin::DevicePolicyManager_InstallSystemUpdateCallback>
{
	static constexpr fixed_string class_name = "android/app/admin/DevicePolicyManager$InstallSystemUpdateCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ADMIN_DEVICEPOLICYMANAGER_INSTALLSYSTEMUPDATECALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_ADMIN_DEVICEPOLICYMANAGER_INSTALLSYSTEMUPDATECALLBACK)
#define SCAPIX_JAVA_API_ANDROID_APP_ADMIN_DEVICEPOLICYMANAGER_INSTALLSYSTEMUPDATECALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::admin::DevicePolicyManager_InstallSystemUpdateCallback : public jni::object_base<"android/app/admin/DevicePolicyManager$InstallSystemUpdateCallback",
	java::lang::Object>
{
public:

	static jint UPDATE_ERROR_BATTERY_LOW() { return get_static_field<"UPDATE_ERROR_BATTERY_LOW", jint>(); }
	static jint UPDATE_ERROR_FILE_NOT_FOUND() { return get_static_field<"UPDATE_ERROR_FILE_NOT_FOUND", jint>(); }
	static jint UPDATE_ERROR_INCORRECT_OS_VERSION() { return get_static_field<"UPDATE_ERROR_INCORRECT_OS_VERSION", jint>(); }
	static jint UPDATE_ERROR_UNKNOWN() { return get_static_field<"UPDATE_ERROR_UNKNOWN", jint>(); }
	static jint UPDATE_ERROR_UPDATE_FILE_INVALID() { return get_static_field<"UPDATE_ERROR_UPDATE_FILE_INVALID", jint>(); }

	static jni::ref<android::app::admin::DevicePolicyManager_InstallSystemUpdateCallback> new_object() { return base_::new_object(); }
	void onInstallUpdateError(jint errorCode, jni::ref<java::lang::String> errorMessage) { return call_method<"onInstallUpdateError", void>(errorCode, errorMessage); }

protected:

	DevicePolicyManager_InstallSystemUpdateCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ADMIN_DEVICEPOLICYMANAGER_INSTALLSYSTEMUPDATECALLBACK
