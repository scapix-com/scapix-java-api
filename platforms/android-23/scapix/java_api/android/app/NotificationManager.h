// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATIONMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATIONMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class NotificationManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::NotificationManager>
{
	static constexpr fixed_string class_name = "android/app/NotificationManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATIONMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATIONMANAGER)
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATIONMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Notification.h>
#include <scapix/java_api/android/app/NotificationManager_Policy.h>
#include <scapix/java_api/android/service/notification/StatusBarNotification.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::NotificationManager : public jni::object_base<"android/app/NotificationManager",
	java::lang::Object>
{
public:

	using Policy = NotificationManager_Policy;

	static jni::ref<java::lang::String> ACTION_INTERRUPTION_FILTER_CHANGED() { return get_static_field<"ACTION_INTERRUPTION_FILTER_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_NOTIFICATION_POLICY_ACCESS_GRANTED_CHANGED() { return get_static_field<"ACTION_NOTIFICATION_POLICY_ACCESS_GRANTED_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_NOTIFICATION_POLICY_CHANGED() { return get_static_field<"ACTION_NOTIFICATION_POLICY_CHANGED", jni::ref<java::lang::String>>(); }
	static jint INTERRUPTION_FILTER_ALARMS() { return get_static_field<"INTERRUPTION_FILTER_ALARMS", jint>(); }
	static jint INTERRUPTION_FILTER_ALL() { return get_static_field<"INTERRUPTION_FILTER_ALL", jint>(); }
	static jint INTERRUPTION_FILTER_NONE() { return get_static_field<"INTERRUPTION_FILTER_NONE", jint>(); }
	static jint INTERRUPTION_FILTER_PRIORITY() { return get_static_field<"INTERRUPTION_FILTER_PRIORITY", jint>(); }
	static jint INTERRUPTION_FILTER_UNKNOWN() { return get_static_field<"INTERRUPTION_FILTER_UNKNOWN", jint>(); }

	void notify(jint id, jni::ref<android::app::Notification> notification) { return call_method<"notify", void>(id, notification); }
	void notify(jni::ref<java::lang::String> tag, jint id, jni::ref<android::app::Notification> notification) { return call_method<"notify", void>(tag, id, notification); }
	void cancel(jint id) { return call_method<"cancel", void>(id); }
	void cancel(jni::ref<java::lang::String> tag, jint id) { return call_method<"cancel", void>(tag, id); }
	void cancelAll() { return call_method<"cancelAll", void>(); }
	jboolean isNotificationPolicyAccessGranted() { return call_method<"isNotificationPolicyAccessGranted", jboolean>(); }
	jni::ref<android::app::NotificationManager_Policy> getNotificationPolicy() { return call_method<"getNotificationPolicy", jni::ref<android::app::NotificationManager_Policy>>(); }
	void setNotificationPolicy(jni::ref<android::app::NotificationManager_Policy> policy) { return call_method<"setNotificationPolicy", void>(policy); }
	jni::ref<jni::array<android::service::notification::StatusBarNotification>> getActiveNotifications() { return call_method<"getActiveNotifications", jni::ref<jni::array<android::service::notification::StatusBarNotification>>>(); }
	jint getCurrentInterruptionFilter() { return call_method<"getCurrentInterruptionFilter", jint>(); }
	void setInterruptionFilter(jint interruptionFilter) { return call_method<"setInterruptionFilter", void>(interruptionFilter); }

protected:

	NotificationManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATIONMANAGER
