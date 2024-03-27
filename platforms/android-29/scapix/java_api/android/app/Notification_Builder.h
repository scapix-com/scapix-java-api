// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class Notification_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::Notification_Builder>
{
	static constexpr fixed_string class_name = "android/app/Notification$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Notification.h>
#include <scapix/java_api/android/app/Notification_Action.h>
#include <scapix/java_api/android/app/Notification_BubbleMetadata.h>
#include <scapix/java_api/android/app/Notification_Extender.h>
#include <scapix/java_api/android/app/Notification_Style.h>
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/app/Person.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/LocusId.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/drawable/Icon.h>
#include <scapix/java_api/android/media/AudioAttributes.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/widget/RemoteViews.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::Notification_Builder : public jni::object_base<"android/app/Notification$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::app::Notification_Builder> new_object(jni::ref<android::content::Context> context, jni::ref<java::lang::String> channelId) { return base_::new_object(context, channelId); }
	static jni::ref<android::app::Notification_Builder> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	jni::ref<android::app::Notification_Builder> setShortcutId(jni::ref<java::lang::String> shortcutId) { return call_method<"setShortcutId", jni::ref<android::app::Notification_Builder>>(shortcutId); }
	jni::ref<android::app::Notification_Builder> setLocusId(jni::ref<android::content::LocusId> locusId) { return call_method<"setLocusId", jni::ref<android::app::Notification_Builder>>(locusId); }
	jni::ref<android::app::Notification_Builder> setBadgeIconType(jint icon) { return call_method<"setBadgeIconType", jni::ref<android::app::Notification_Builder>>(icon); }
	jni::ref<android::app::Notification_Builder> setGroupAlertBehavior(jint groupAlertBehavior) { return call_method<"setGroupAlertBehavior", jni::ref<android::app::Notification_Builder>>(groupAlertBehavior); }
	jni::ref<android::app::Notification_Builder> setBubbleMetadata(jni::ref<android::app::Notification_BubbleMetadata> data) { return call_method<"setBubbleMetadata", jni::ref<android::app::Notification_Builder>>(data); }
	jni::ref<android::app::Notification_Builder> setChannelId(jni::ref<java::lang::String> channelId) { return call_method<"setChannelId", jni::ref<android::app::Notification_Builder>>(channelId); }
	jni::ref<android::app::Notification_Builder> setTimeoutAfter(jlong durationMs) { return call_method<"setTimeoutAfter", jni::ref<android::app::Notification_Builder>>(durationMs); }
	jni::ref<android::app::Notification_Builder> setWhen(jlong when) { return call_method<"setWhen", jni::ref<android::app::Notification_Builder>>(when); }
	jni::ref<android::app::Notification_Builder> setShowWhen(jboolean show) { return call_method<"setShowWhen", jni::ref<android::app::Notification_Builder>>(show); }
	jni::ref<android::app::Notification_Builder> setUsesChronometer(jboolean b) { return call_method<"setUsesChronometer", jni::ref<android::app::Notification_Builder>>(b); }
	jni::ref<android::app::Notification_Builder> setChronometerCountDown(jboolean countDown) { return call_method<"setChronometerCountDown", jni::ref<android::app::Notification_Builder>>(countDown); }
	jni::ref<android::app::Notification_Builder> setSmallIcon(jint icon) { return call_method<"setSmallIcon", jni::ref<android::app::Notification_Builder>>(icon); }
	jni::ref<android::app::Notification_Builder> setSmallIcon(jint icon, jint level) { return call_method<"setSmallIcon", jni::ref<android::app::Notification_Builder>>(icon, level); }
	jni::ref<android::app::Notification_Builder> setSmallIcon(jni::ref<android::graphics::drawable::Icon> icon) { return call_method<"setSmallIcon", jni::ref<android::app::Notification_Builder>>(icon); }
	jni::ref<android::app::Notification_Builder> setContentTitle(jni::ref<java::lang::CharSequence> title) { return call_method<"setContentTitle", jni::ref<android::app::Notification_Builder>>(title); }
	jni::ref<android::app::Notification_Builder> setContentText(jni::ref<java::lang::CharSequence> text) { return call_method<"setContentText", jni::ref<android::app::Notification_Builder>>(text); }
	jni::ref<android::app::Notification_Builder> setSubText(jni::ref<java::lang::CharSequence> text) { return call_method<"setSubText", jni::ref<android::app::Notification_Builder>>(text); }
	jni::ref<android::app::Notification_Builder> setSettingsText(jni::ref<java::lang::CharSequence> text) { return call_method<"setSettingsText", jni::ref<android::app::Notification_Builder>>(text); }
	jni::ref<android::app::Notification_Builder> setRemoteInputHistory(jni::ref<jni::array<java::lang::CharSequence>> text) { return call_method<"setRemoteInputHistory", jni::ref<android::app::Notification_Builder>>(text); }
	jni::ref<android::app::Notification_Builder> setNumber(jint number) { return call_method<"setNumber", jni::ref<android::app::Notification_Builder>>(number); }
	jni::ref<android::app::Notification_Builder> setContentInfo(jni::ref<java::lang::CharSequence> info) { return call_method<"setContentInfo", jni::ref<android::app::Notification_Builder>>(info); }
	jni::ref<android::app::Notification_Builder> setProgress(jint max, jint progress, jboolean indeterminate) { return call_method<"setProgress", jni::ref<android::app::Notification_Builder>>(max, progress, indeterminate); }
	jni::ref<android::app::Notification_Builder> setContent(jni::ref<android::widget::RemoteViews> views) { return call_method<"setContent", jni::ref<android::app::Notification_Builder>>(views); }
	jni::ref<android::app::Notification_Builder> setCustomContentView(jni::ref<android::widget::RemoteViews> contentView) { return call_method<"setCustomContentView", jni::ref<android::app::Notification_Builder>>(contentView); }
	jni::ref<android::app::Notification_Builder> setCustomBigContentView(jni::ref<android::widget::RemoteViews> contentView) { return call_method<"setCustomBigContentView", jni::ref<android::app::Notification_Builder>>(contentView); }
	jni::ref<android::app::Notification_Builder> setCustomHeadsUpContentView(jni::ref<android::widget::RemoteViews> contentView) { return call_method<"setCustomHeadsUpContentView", jni::ref<android::app::Notification_Builder>>(contentView); }
	jni::ref<android::app::Notification_Builder> setContentIntent(jni::ref<android::app::PendingIntent> intent) { return call_method<"setContentIntent", jni::ref<android::app::Notification_Builder>>(intent); }
	jni::ref<android::app::Notification_Builder> setDeleteIntent(jni::ref<android::app::PendingIntent> intent) { return call_method<"setDeleteIntent", jni::ref<android::app::Notification_Builder>>(intent); }
	jni::ref<android::app::Notification_Builder> setFullScreenIntent(jni::ref<android::app::PendingIntent> intent, jboolean highPriority) { return call_method<"setFullScreenIntent", jni::ref<android::app::Notification_Builder>>(intent, highPriority); }
	jni::ref<android::app::Notification_Builder> setTicker(jni::ref<java::lang::CharSequence> tickerText) { return call_method<"setTicker", jni::ref<android::app::Notification_Builder>>(tickerText); }
	jni::ref<android::app::Notification_Builder> setTicker(jni::ref<java::lang::CharSequence> tickerText, jni::ref<android::widget::RemoteViews> views) { return call_method<"setTicker", jni::ref<android::app::Notification_Builder>>(tickerText, views); }
	jni::ref<android::app::Notification_Builder> setLargeIcon(jni::ref<android::graphics::Bitmap> b) { return call_method<"setLargeIcon", jni::ref<android::app::Notification_Builder>>(b); }
	jni::ref<android::app::Notification_Builder> setLargeIcon(jni::ref<android::graphics::drawable::Icon> icon) { return call_method<"setLargeIcon", jni::ref<android::app::Notification_Builder>>(icon); }
	jni::ref<android::app::Notification_Builder> setSound(jni::ref<android::net::Uri> sound) { return call_method<"setSound", jni::ref<android::app::Notification_Builder>>(sound); }
	jni::ref<android::app::Notification_Builder> setSound(jni::ref<android::net::Uri> sound, jint streamType) { return call_method<"setSound", jni::ref<android::app::Notification_Builder>>(sound, streamType); }
	jni::ref<android::app::Notification_Builder> setSound(jni::ref<android::net::Uri> sound, jni::ref<android::media::AudioAttributes> audioAttributes) { return call_method<"setSound", jni::ref<android::app::Notification_Builder>>(sound, audioAttributes); }
	jni::ref<android::app::Notification_Builder> setVibrate(jni::ref<jni::array<jlong>> pattern) { return call_method<"setVibrate", jni::ref<android::app::Notification_Builder>>(pattern); }
	jni::ref<android::app::Notification_Builder> setLights(jint argb, jint onMs, jint offMs) { return call_method<"setLights", jni::ref<android::app::Notification_Builder>>(argb, onMs, offMs); }
	jni::ref<android::app::Notification_Builder> setOngoing(jboolean ongoing) { return call_method<"setOngoing", jni::ref<android::app::Notification_Builder>>(ongoing); }
	jni::ref<android::app::Notification_Builder> setColorized(jboolean colorize) { return call_method<"setColorized", jni::ref<android::app::Notification_Builder>>(colorize); }
	jni::ref<android::app::Notification_Builder> setOnlyAlertOnce(jboolean onlyAlertOnce) { return call_method<"setOnlyAlertOnce", jni::ref<android::app::Notification_Builder>>(onlyAlertOnce); }
	jni::ref<android::app::Notification_Builder> setAutoCancel(jboolean autoCancel) { return call_method<"setAutoCancel", jni::ref<android::app::Notification_Builder>>(autoCancel); }
	jni::ref<android::app::Notification_Builder> setLocalOnly(jboolean localOnly) { return call_method<"setLocalOnly", jni::ref<android::app::Notification_Builder>>(localOnly); }
	jni::ref<android::app::Notification_Builder> setDefaults(jint defaults) { return call_method<"setDefaults", jni::ref<android::app::Notification_Builder>>(defaults); }
	jni::ref<android::app::Notification_Builder> setPriority(jint pri) { return call_method<"setPriority", jni::ref<android::app::Notification_Builder>>(pri); }
	jni::ref<android::app::Notification_Builder> setCategory(jni::ref<java::lang::String> category) { return call_method<"setCategory", jni::ref<android::app::Notification_Builder>>(category); }
	jni::ref<android::app::Notification_Builder> addPerson(jni::ref<java::lang::String> uri) { return call_method<"addPerson", jni::ref<android::app::Notification_Builder>>(uri); }
	jni::ref<android::app::Notification_Builder> addPerson(jni::ref<android::app::Person> person) { return call_method<"addPerson", jni::ref<android::app::Notification_Builder>>(person); }
	jni::ref<android::app::Notification_Builder> setGroup(jni::ref<java::lang::String> groupKey) { return call_method<"setGroup", jni::ref<android::app::Notification_Builder>>(groupKey); }
	jni::ref<android::app::Notification_Builder> setGroupSummary(jboolean isGroupSummary) { return call_method<"setGroupSummary", jni::ref<android::app::Notification_Builder>>(isGroupSummary); }
	jni::ref<android::app::Notification_Builder> setSortKey(jni::ref<java::lang::String> sortKey) { return call_method<"setSortKey", jni::ref<android::app::Notification_Builder>>(sortKey); }
	jni::ref<android::app::Notification_Builder> addExtras(jni::ref<android::os::Bundle> extras) { return call_method<"addExtras", jni::ref<android::app::Notification_Builder>>(extras); }
	jni::ref<android::app::Notification_Builder> setExtras(jni::ref<android::os::Bundle> extras) { return call_method<"setExtras", jni::ref<android::app::Notification_Builder>>(extras); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }
	jni::ref<android::app::Notification_Builder> addAction(jint icon, jni::ref<java::lang::CharSequence> title, jni::ref<android::app::PendingIntent> intent) { return call_method<"addAction", jni::ref<android::app::Notification_Builder>>(icon, title, intent); }
	jni::ref<android::app::Notification_Builder> addAction(jni::ref<android::app::Notification_Action> action) { return call_method<"addAction", jni::ref<android::app::Notification_Builder>>(action); }
	jni::ref<android::app::Notification_Builder> setActions(jni::ref<jni::array<android::app::Notification_Action>> actions) { return call_method<"setActions", jni::ref<android::app::Notification_Builder>>(actions); }
	jni::ref<android::app::Notification_Builder> setStyle(jni::ref<android::app::Notification_Style> style) { return call_method<"setStyle", jni::ref<android::app::Notification_Builder>>(style); }
	jni::ref<android::app::Notification_Style> getStyle() { return call_method<"getStyle", jni::ref<android::app::Notification_Style>>(); }
	jni::ref<android::app::Notification_Builder> setVisibility(jint visibility) { return call_method<"setVisibility", jni::ref<android::app::Notification_Builder>>(visibility); }
	jni::ref<android::app::Notification_Builder> setPublicVersion(jni::ref<android::app::Notification> n) { return call_method<"setPublicVersion", jni::ref<android::app::Notification_Builder>>(n); }
	jni::ref<android::app::Notification_Builder> extend(jni::ref<android::app::Notification_Extender> extender) { return call_method<"extend", jni::ref<android::app::Notification_Builder>>(extender); }
	jni::ref<android::app::Notification_Builder> setColor(jint argb) { return call_method<"setColor", jni::ref<android::app::Notification_Builder>>(argb); }
	jni::ref<android::widget::RemoteViews> createContentView() { return call_method<"createContentView", jni::ref<android::widget::RemoteViews>>(); }
	jni::ref<android::widget::RemoteViews> createBigContentView() { return call_method<"createBigContentView", jni::ref<android::widget::RemoteViews>>(); }
	jni::ref<android::widget::RemoteViews> createHeadsUpContentView() { return call_method<"createHeadsUpContentView", jni::ref<android::widget::RemoteViews>>(); }
	static jni::ref<android::app::Notification_Builder> recoverBuilder(jni::ref<android::content::Context> context, jni::ref<android::app::Notification> n) { return call_static_method<"recoverBuilder", jni::ref<android::app::Notification_Builder>>(context, n); }
	jni::ref<android::app::Notification_Builder> setAllowSystemGeneratedContextualActions(jboolean allowed) { return call_method<"setAllowSystemGeneratedContextualActions", jni::ref<android::app::Notification_Builder>>(allowed); }
	jni::ref<android::app::Notification> getNotification() { return call_method<"getNotification", jni::ref<android::app::Notification>>(); }
	jni::ref<android::app::Notification> build() { return call_method<"build", jni::ref<android::app::Notification>>(); }

protected:

	Notification_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_BUILDER