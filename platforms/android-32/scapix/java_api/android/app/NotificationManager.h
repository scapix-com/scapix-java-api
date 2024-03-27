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
#include <scapix/java_api/android/app/AutomaticZenRule.h>
#include <scapix/java_api/android/app/Notification.h>
#include <scapix/java_api/android/app/NotificationChannel.h>
#include <scapix/java_api/android/app/NotificationChannelGroup.h>
#include <scapix/java_api/android/app/NotificationManager_Policy.h>
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/service/notification/Condition.h>
#include <scapix/java_api/android/service/notification/StatusBarNotification.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::NotificationManager : public jni::object_base<"android/app/NotificationManager",
	java::lang::Object>
{
public:

	using Policy = NotificationManager_Policy;

	static jni::ref<java::lang::String> ACTION_APP_BLOCK_STATE_CHANGED() { return get_static_field<"ACTION_APP_BLOCK_STATE_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_AUTOMATIC_ZEN_RULE() { return get_static_field<"ACTION_AUTOMATIC_ZEN_RULE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_AUTOMATIC_ZEN_RULE_STATUS_CHANGED() { return get_static_field<"ACTION_AUTOMATIC_ZEN_RULE_STATUS_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_INTERRUPTION_FILTER_CHANGED() { return get_static_field<"ACTION_INTERRUPTION_FILTER_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_NOTIFICATION_CHANNEL_BLOCK_STATE_CHANGED() { return get_static_field<"ACTION_NOTIFICATION_CHANNEL_BLOCK_STATE_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_NOTIFICATION_CHANNEL_GROUP_BLOCK_STATE_CHANGED() { return get_static_field<"ACTION_NOTIFICATION_CHANNEL_GROUP_BLOCK_STATE_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_NOTIFICATION_POLICY_ACCESS_GRANTED_CHANGED() { return get_static_field<"ACTION_NOTIFICATION_POLICY_ACCESS_GRANTED_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_NOTIFICATION_POLICY_CHANGED() { return get_static_field<"ACTION_NOTIFICATION_POLICY_CHANGED", jni::ref<java::lang::String>>(); }
	static jint AUTOMATIC_RULE_STATUS_DISABLED() { return get_static_field<"AUTOMATIC_RULE_STATUS_DISABLED", jint>(); }
	static jint AUTOMATIC_RULE_STATUS_ENABLED() { return get_static_field<"AUTOMATIC_RULE_STATUS_ENABLED", jint>(); }
	static jint AUTOMATIC_RULE_STATUS_REMOVED() { return get_static_field<"AUTOMATIC_RULE_STATUS_REMOVED", jint>(); }
	static jint AUTOMATIC_RULE_STATUS_UNKNOWN() { return get_static_field<"AUTOMATIC_RULE_STATUS_UNKNOWN", jint>(); }
	static jint BUBBLE_PREFERENCE_ALL() { return get_static_field<"BUBBLE_PREFERENCE_ALL", jint>(); }
	static jint BUBBLE_PREFERENCE_NONE() { return get_static_field<"BUBBLE_PREFERENCE_NONE", jint>(); }
	static jint BUBBLE_PREFERENCE_SELECTED() { return get_static_field<"BUBBLE_PREFERENCE_SELECTED", jint>(); }
	static jni::ref<java::lang::String> EXTRA_AUTOMATIC_RULE_ID() { return get_static_field<"EXTRA_AUTOMATIC_RULE_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_AUTOMATIC_ZEN_RULE_ID() { return get_static_field<"EXTRA_AUTOMATIC_ZEN_RULE_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_AUTOMATIC_ZEN_RULE_STATUS() { return get_static_field<"EXTRA_AUTOMATIC_ZEN_RULE_STATUS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_BLOCKED_STATE() { return get_static_field<"EXTRA_BLOCKED_STATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_NOTIFICATION_CHANNEL_GROUP_ID() { return get_static_field<"EXTRA_NOTIFICATION_CHANNEL_GROUP_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_NOTIFICATION_CHANNEL_ID() { return get_static_field<"EXTRA_NOTIFICATION_CHANNEL_ID", jni::ref<java::lang::String>>(); }
	static jint IMPORTANCE_DEFAULT() { return get_static_field<"IMPORTANCE_DEFAULT", jint>(); }
	static jint IMPORTANCE_HIGH() { return get_static_field<"IMPORTANCE_HIGH", jint>(); }
	static jint IMPORTANCE_LOW() { return get_static_field<"IMPORTANCE_LOW", jint>(); }
	static jint IMPORTANCE_MAX() { return get_static_field<"IMPORTANCE_MAX", jint>(); }
	static jint IMPORTANCE_MIN() { return get_static_field<"IMPORTANCE_MIN", jint>(); }
	static jint IMPORTANCE_NONE() { return get_static_field<"IMPORTANCE_NONE", jint>(); }
	static jint IMPORTANCE_UNSPECIFIED() { return get_static_field<"IMPORTANCE_UNSPECIFIED", jint>(); }
	static jint INTERRUPTION_FILTER_ALARMS() { return get_static_field<"INTERRUPTION_FILTER_ALARMS", jint>(); }
	static jint INTERRUPTION_FILTER_ALL() { return get_static_field<"INTERRUPTION_FILTER_ALL", jint>(); }
	static jint INTERRUPTION_FILTER_NONE() { return get_static_field<"INTERRUPTION_FILTER_NONE", jint>(); }
	static jint INTERRUPTION_FILTER_PRIORITY() { return get_static_field<"INTERRUPTION_FILTER_PRIORITY", jint>(); }
	static jint INTERRUPTION_FILTER_UNKNOWN() { return get_static_field<"INTERRUPTION_FILTER_UNKNOWN", jint>(); }
	static jni::ref<java::lang::String> META_DATA_AUTOMATIC_RULE_TYPE() { return get_static_field<"META_DATA_AUTOMATIC_RULE_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> META_DATA_RULE_INSTANCE_LIMIT() { return get_static_field<"META_DATA_RULE_INSTANCE_LIMIT", jni::ref<java::lang::String>>(); }

	void notify(jint id, jni::ref<android::app::Notification> notification) { return call_method<"notify", void>(id, notification); }
	void notify(jni::ref<java::lang::String> tag, jint id, jni::ref<android::app::Notification> notification) { return call_method<"notify", void>(tag, id, notification); }
	void notifyAsPackage(jni::ref<java::lang::String> targetPackage, jni::ref<java::lang::String> tag, jint id, jni::ref<android::app::Notification> notification) { return call_method<"notifyAsPackage", void>(targetPackage, tag, id, notification); }
	void cancel(jint id) { return call_method<"cancel", void>(id); }
	void cancel(jni::ref<java::lang::String> tag, jint id) { return call_method<"cancel", void>(tag, id); }
	void cancelAsPackage(jni::ref<java::lang::String> targetPackage, jni::ref<java::lang::String> tag, jint id) { return call_method<"cancelAsPackage", void>(targetPackage, tag, id); }
	void cancelAll() { return call_method<"cancelAll", void>(); }
	void setNotificationDelegate(jni::ref<java::lang::String> delegate) { return call_method<"setNotificationDelegate", void>(delegate); }
	jni::ref<java::lang::String> getNotificationDelegate() { return call_method<"getNotificationDelegate", jni::ref<java::lang::String>>(); }
	jboolean canNotifyAsPackage(jni::ref<java::lang::String> pkg) { return call_method<"canNotifyAsPackage", jboolean>(pkg); }
	void createNotificationChannelGroup(jni::ref<android::app::NotificationChannelGroup> group) { return call_method<"createNotificationChannelGroup", void>(group); }
	void createNotificationChannelGroups(jni::ref<java::util::List> groups) { return call_method<"createNotificationChannelGroups", void>(groups); }
	void createNotificationChannel(jni::ref<android::app::NotificationChannel> channel) { return call_method<"createNotificationChannel", void>(channel); }
	void createNotificationChannels(jni::ref<java::util::List> channels) { return call_method<"createNotificationChannels", void>(channels); }
	jni::ref<android::app::NotificationChannel> getNotificationChannel(jni::ref<java::lang::String> channelId) { return call_method<"getNotificationChannel", jni::ref<android::app::NotificationChannel>>(channelId); }
	jni::ref<android::app::NotificationChannel> getNotificationChannel(jni::ref<java::lang::String> channelId, jni::ref<java::lang::String> conversationId) { return call_method<"getNotificationChannel", jni::ref<android::app::NotificationChannel>>(channelId, conversationId); }
	jni::ref<java::util::List> getNotificationChannels() { return call_method<"getNotificationChannels", jni::ref<java::util::List>>(); }
	void deleteNotificationChannel(jni::ref<java::lang::String> channelId) { return call_method<"deleteNotificationChannel", void>(channelId); }
	jni::ref<android::app::NotificationChannelGroup> getNotificationChannelGroup(jni::ref<java::lang::String> channelGroupId) { return call_method<"getNotificationChannelGroup", jni::ref<android::app::NotificationChannelGroup>>(channelGroupId); }
	jni::ref<java::util::List> getNotificationChannelGroups() { return call_method<"getNotificationChannelGroups", jni::ref<java::util::List>>(); }
	void deleteNotificationChannelGroup(jni::ref<java::lang::String> groupId) { return call_method<"deleteNotificationChannelGroup", void>(groupId); }
	jni::ref<android::app::NotificationManager_Policy> getConsolidatedNotificationPolicy() { return call_method<"getConsolidatedNotificationPolicy", jni::ref<android::app::NotificationManager_Policy>>(); }
	jni::ref<java::util::Map> getAutomaticZenRules() { return call_method<"getAutomaticZenRules", jni::ref<java::util::Map>>(); }
	jni::ref<android::app::AutomaticZenRule> getAutomaticZenRule(jni::ref<java::lang::String> id) { return call_method<"getAutomaticZenRule", jni::ref<android::app::AutomaticZenRule>>(id); }
	jni::ref<java::lang::String> addAutomaticZenRule(jni::ref<android::app::AutomaticZenRule> automaticZenRule) { return call_method<"addAutomaticZenRule", jni::ref<java::lang::String>>(automaticZenRule); }
	jboolean updateAutomaticZenRule(jni::ref<java::lang::String> id, jni::ref<android::app::AutomaticZenRule> automaticZenRule) { return call_method<"updateAutomaticZenRule", jboolean>(id, automaticZenRule); }
	void setAutomaticZenRuleState(jni::ref<java::lang::String> id, jni::ref<android::service::notification::Condition> condition) { return call_method<"setAutomaticZenRuleState", void>(id, condition); }
	jboolean removeAutomaticZenRule(jni::ref<java::lang::String> id) { return call_method<"removeAutomaticZenRule", jboolean>(id); }
	jint getImportance() { return call_method<"getImportance", jint>(); }
	jboolean areNotificationsEnabled() { return call_method<"areNotificationsEnabled", jboolean>(); }
	jboolean areBubblesAllowed() { return call_method<"areBubblesAllowed", jboolean>(); }
	jboolean areBubblesEnabled() { return call_method<"areBubblesEnabled", jboolean>(); }
	jint getBubblePreference() { return call_method<"getBubblePreference", jint>(); }
	jboolean areNotificationsPaused() { return call_method<"areNotificationsPaused", jboolean>(); }
	jboolean isNotificationPolicyAccessGranted() { return call_method<"isNotificationPolicyAccessGranted", jboolean>(); }
	jboolean isNotificationListenerAccessGranted(jni::ref<android::content::ComponentName> listener) { return call_method<"isNotificationListenerAccessGranted", jboolean>(listener); }
	jboolean shouldHideSilentStatusBarIcons() { return call_method<"shouldHideSilentStatusBarIcons", jboolean>(); }
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
