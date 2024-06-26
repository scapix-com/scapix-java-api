// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_NOTIFICATION_NOTIFICATIONLISTENERSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_NOTIFICATION_NOTIFICATIONLISTENERSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::notification { class NotificationListenerService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::notification::NotificationListenerService>
{
	static constexpr fixed_string class_name = "android/service/notification/NotificationListenerService";
	using base_classes = std::tuple<scapix::java_api::android::app::Service>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_NOTIFICATION_NOTIFICATIONLISTENERSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_NOTIFICATION_NOTIFICATIONLISTENERSERVICE)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_NOTIFICATION_NOTIFICATIONLISTENERSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/service/notification/NotificationListenerService_RankingMap.h>
#include <scapix/java_api/android/service/notification/StatusBarNotification.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/service/notification/NotificationListenerService_Ranking.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::notification::NotificationListenerService : public jni::object_base<"android/service/notification/NotificationListenerService",
	android::app::Service>
{
public:

	using RankingMap = NotificationListenerService_RankingMap;
	using Ranking = NotificationListenerService_Ranking;

	static jint HINT_HOST_DISABLE_EFFECTS() { return get_static_field<"HINT_HOST_DISABLE_EFFECTS", jint>(); }
	static jint INTERRUPTION_FILTER_ALL() { return get_static_field<"INTERRUPTION_FILTER_ALL", jint>(); }
	static jint INTERRUPTION_FILTER_NONE() { return get_static_field<"INTERRUPTION_FILTER_NONE", jint>(); }
	static jint INTERRUPTION_FILTER_PRIORITY() { return get_static_field<"INTERRUPTION_FILTER_PRIORITY", jint>(); }
	static jni::ref<java::lang::String> SERVICE_INTERFACE() { return get_static_field<"SERVICE_INTERFACE", jni::ref<java::lang::String>>(); }

	static jni::ref<android::service::notification::NotificationListenerService> new_object() { return base_::new_object(); }
	void onNotificationPosted(jni::ref<android::service::notification::StatusBarNotification> sbn) { return call_method<"onNotificationPosted", void>(sbn); }
	void onNotificationPosted(jni::ref<android::service::notification::StatusBarNotification> sbn, jni::ref<android::service::notification::NotificationListenerService_RankingMap> rankingMap) { return call_method<"onNotificationPosted", void>(sbn, rankingMap); }
	void onNotificationRemoved(jni::ref<android::service::notification::StatusBarNotification> sbn) { return call_method<"onNotificationRemoved", void>(sbn); }
	void onNotificationRemoved(jni::ref<android::service::notification::StatusBarNotification> sbn, jni::ref<android::service::notification::NotificationListenerService_RankingMap> rankingMap) { return call_method<"onNotificationRemoved", void>(sbn, rankingMap); }
	void onListenerConnected() { return call_method<"onListenerConnected", void>(); }
	void onNotificationRankingUpdate(jni::ref<android::service::notification::NotificationListenerService_RankingMap> rankingMap) { return call_method<"onNotificationRankingUpdate", void>(rankingMap); }
	void onListenerHintsChanged(jint hints) { return call_method<"onListenerHintsChanged", void>(hints); }
	void onInterruptionFilterChanged(jint interruptionFilter) { return call_method<"onInterruptionFilterChanged", void>(interruptionFilter); }
	void cancelNotification(jni::ref<java::lang::String> pkg, jni::ref<java::lang::String> tag, jint id) { return call_method<"cancelNotification", void>(pkg, tag, id); }
	void cancelNotification(jni::ref<java::lang::String> key) { return call_method<"cancelNotification", void>(key); }
	void cancelAllNotifications() { return call_method<"cancelAllNotifications", void>(); }
	void cancelNotifications(jni::ref<jni::array<java::lang::String>> keys) { return call_method<"cancelNotifications", void>(keys); }
	jni::ref<jni::array<android::service::notification::StatusBarNotification>> getActiveNotifications() { return call_method<"getActiveNotifications", jni::ref<jni::array<android::service::notification::StatusBarNotification>>>(); }
	jni::ref<jni::array<android::service::notification::StatusBarNotification>> getActiveNotifications(jni::ref<jni::array<java::lang::String>> keys) { return call_method<"getActiveNotifications", jni::ref<jni::array<android::service::notification::StatusBarNotification>>>(keys); }
	jint getCurrentListenerHints() { return call_method<"getCurrentListenerHints", jint>(); }
	jint getCurrentInterruptionFilter() { return call_method<"getCurrentInterruptionFilter", jint>(); }
	void requestListenerHints(jint hints) { return call_method<"requestListenerHints", void>(hints); }
	void requestInterruptionFilter(jint interruptionFilter) { return call_method<"requestInterruptionFilter", void>(interruptionFilter); }
	jni::ref<android::service::notification::NotificationListenerService_RankingMap> getCurrentRanking() { return call_method<"getCurrentRanking", jni::ref<android::service::notification::NotificationListenerService_RankingMap>>(); }
	jni::ref<android::os::IBinder> onBind(jni::ref<android::content::Intent> intent) { return call_method<"onBind", jni::ref<android::os::IBinder>>(intent); }

protected:

	NotificationListenerService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_NOTIFICATION_NOTIFICATIONLISTENERSERVICE
