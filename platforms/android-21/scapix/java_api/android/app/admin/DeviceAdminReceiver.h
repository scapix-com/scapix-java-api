// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/content/BroadcastReceiver.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_ADMIN_DEVICEADMINRECEIVER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_ADMIN_DEVICEADMINRECEIVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::admin { class DeviceAdminReceiver; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::admin::DeviceAdminReceiver>
{
	static constexpr fixed_string class_name = "android/app/admin/DeviceAdminReceiver";
	using base_classes = std::tuple<scapix::java_api::android::content::BroadcastReceiver>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ADMIN_DEVICEADMINRECEIVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_ADMIN_DEVICEADMINRECEIVER)
#define SCAPIX_JAVA_API_ANDROID_APP_ADMIN_DEVICEADMINRECEIVER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/admin/DevicePolicyManager.h>
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::admin::DeviceAdminReceiver : public jni::object_base<"android/app/admin/DeviceAdminReceiver",
	android::content::BroadcastReceiver>
{
public:

	static jni::ref<java::lang::String> ACTION_DEVICE_ADMIN_DISABLED() { return get_static_field<"ACTION_DEVICE_ADMIN_DISABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_DEVICE_ADMIN_DISABLE_REQUESTED() { return get_static_field<"ACTION_DEVICE_ADMIN_DISABLE_REQUESTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_DEVICE_ADMIN_ENABLED() { return get_static_field<"ACTION_DEVICE_ADMIN_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_LOCK_TASK_ENTERING() { return get_static_field<"ACTION_LOCK_TASK_ENTERING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_LOCK_TASK_EXITING() { return get_static_field<"ACTION_LOCK_TASK_EXITING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_PASSWORD_CHANGED() { return get_static_field<"ACTION_PASSWORD_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_PASSWORD_EXPIRING() { return get_static_field<"ACTION_PASSWORD_EXPIRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_PASSWORD_FAILED() { return get_static_field<"ACTION_PASSWORD_FAILED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_PASSWORD_SUCCEEDED() { return get_static_field<"ACTION_PASSWORD_SUCCEEDED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_PROFILE_PROVISIONING_COMPLETE() { return get_static_field<"ACTION_PROFILE_PROVISIONING_COMPLETE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DEVICE_ADMIN_META_DATA() { return get_static_field<"DEVICE_ADMIN_META_DATA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_DISABLE_WARNING() { return get_static_field<"EXTRA_DISABLE_WARNING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_LOCK_TASK_PACKAGE() { return get_static_field<"EXTRA_LOCK_TASK_PACKAGE", jni::ref<java::lang::String>>(); }

	static jni::ref<android::app::admin::DeviceAdminReceiver> new_object() { return base_::new_object(); }
	jni::ref<android::app::admin::DevicePolicyManager> getManager(jni::ref<android::content::Context> context) { return call_method<"getManager", jni::ref<android::app::admin::DevicePolicyManager>>(context); }
	jni::ref<android::content::ComponentName> getWho(jni::ref<android::content::Context> context) { return call_method<"getWho", jni::ref<android::content::ComponentName>>(context); }
	void onEnabled(jni::ref<android::content::Context> context, jni::ref<android::content::Intent> intent) { return call_method<"onEnabled", void>(context, intent); }
	jni::ref<java::lang::CharSequence> onDisableRequested(jni::ref<android::content::Context> context, jni::ref<android::content::Intent> intent) { return call_method<"onDisableRequested", jni::ref<java::lang::CharSequence>>(context, intent); }
	void onDisabled(jni::ref<android::content::Context> context, jni::ref<android::content::Intent> intent) { return call_method<"onDisabled", void>(context, intent); }
	void onPasswordChanged(jni::ref<android::content::Context> context, jni::ref<android::content::Intent> intent) { return call_method<"onPasswordChanged", void>(context, intent); }
	void onPasswordFailed(jni::ref<android::content::Context> context, jni::ref<android::content::Intent> intent) { return call_method<"onPasswordFailed", void>(context, intent); }
	void onPasswordSucceeded(jni::ref<android::content::Context> context, jni::ref<android::content::Intent> intent) { return call_method<"onPasswordSucceeded", void>(context, intent); }
	void onPasswordExpiring(jni::ref<android::content::Context> context, jni::ref<android::content::Intent> intent) { return call_method<"onPasswordExpiring", void>(context, intent); }
	void onProfileProvisioningComplete(jni::ref<android::content::Context> context, jni::ref<android::content::Intent> intent) { return call_method<"onProfileProvisioningComplete", void>(context, intent); }
	void onLockTaskModeEntering(jni::ref<android::content::Context> context, jni::ref<android::content::Intent> intent, jni::ref<java::lang::String> pkg) { return call_method<"onLockTaskModeEntering", void>(context, intent, pkg); }
	void onLockTaskModeExiting(jni::ref<android::content::Context> context, jni::ref<android::content::Intent> intent) { return call_method<"onLockTaskModeExiting", void>(context, intent); }
	void onReceive(jni::ref<android::content::Context> context, jni::ref<android::content::Intent> intent) { return call_method<"onReceive", void>(context, intent); }

protected:

	DeviceAdminReceiver(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ADMIN_DEVICEADMINRECEIVER
