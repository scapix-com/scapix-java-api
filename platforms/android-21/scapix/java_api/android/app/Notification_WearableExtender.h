// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/app/Notification_Extender.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_WEARABLEEXTENDER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_WEARABLEEXTENDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class Notification_WearableExtender; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::Notification_WearableExtender>
{
	static constexpr fixed_string class_name = "android/app/Notification$WearableExtender";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::app::Notification_Extender>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_WEARABLEEXTENDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_WEARABLEEXTENDER)
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_WEARABLEEXTENDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Notification.h>
#include <scapix/java_api/android/app/Notification_Action.h>
#include <scapix/java_api/android/app/Notification_Builder.h>
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::Notification_WearableExtender : public jni::object_base<"android/app/Notification$WearableExtender",
	java::lang::Object,
	android::app::Notification_Extender>
{
public:

	static jint SIZE_DEFAULT() { return get_static_field<"SIZE_DEFAULT", jint>(); }
	static jint SIZE_FULL_SCREEN() { return get_static_field<"SIZE_FULL_SCREEN", jint>(); }
	static jint SIZE_LARGE() { return get_static_field<"SIZE_LARGE", jint>(); }
	static jint SIZE_MEDIUM() { return get_static_field<"SIZE_MEDIUM", jint>(); }
	static jint SIZE_SMALL() { return get_static_field<"SIZE_SMALL", jint>(); }
	static jint SIZE_XSMALL() { return get_static_field<"SIZE_XSMALL", jint>(); }
	static jint UNSET_ACTION_INDEX() { return get_static_field<"UNSET_ACTION_INDEX", jint>(); }

	static jni::ref<android::app::Notification_WearableExtender> new_object() { return base_::new_object(); }
	static jni::ref<android::app::Notification_WearableExtender> new_object(jni::ref<android::app::Notification> notif) { return base_::new_object(notif); }
	jni::ref<android::app::Notification_Builder> extend(jni::ref<android::app::Notification_Builder> builder) { return call_method<"extend", jni::ref<android::app::Notification_Builder>>(builder); }
	jni::ref<android::app::Notification_WearableExtender> clone() { return call_method<"clone", jni::ref<android::app::Notification_WearableExtender>>(); }
	jni::ref<android::app::Notification_WearableExtender> addAction(jni::ref<android::app::Notification_Action> action) { return call_method<"addAction", jni::ref<android::app::Notification_WearableExtender>>(action); }
	jni::ref<android::app::Notification_WearableExtender> addActions(jni::ref<java::util::List> actions) { return call_method<"addActions", jni::ref<android::app::Notification_WearableExtender>>(actions); }
	jni::ref<android::app::Notification_WearableExtender> clearActions() { return call_method<"clearActions", jni::ref<android::app::Notification_WearableExtender>>(); }
	jni::ref<java::util::List> getActions() { return call_method<"getActions", jni::ref<java::util::List>>(); }
	jni::ref<android::app::Notification_WearableExtender> setDisplayIntent(jni::ref<android::app::PendingIntent> intent) { return call_method<"setDisplayIntent", jni::ref<android::app::Notification_WearableExtender>>(intent); }
	jni::ref<android::app::PendingIntent> getDisplayIntent() { return call_method<"getDisplayIntent", jni::ref<android::app::PendingIntent>>(); }
	jni::ref<android::app::Notification_WearableExtender> addPage(jni::ref<android::app::Notification> page) { return call_method<"addPage", jni::ref<android::app::Notification_WearableExtender>>(page); }
	jni::ref<android::app::Notification_WearableExtender> addPages(jni::ref<java::util::List> pages) { return call_method<"addPages", jni::ref<android::app::Notification_WearableExtender>>(pages); }
	jni::ref<android::app::Notification_WearableExtender> clearPages() { return call_method<"clearPages", jni::ref<android::app::Notification_WearableExtender>>(); }
	jni::ref<java::util::List> getPages() { return call_method<"getPages", jni::ref<java::util::List>>(); }
	jni::ref<android::app::Notification_WearableExtender> setBackground(jni::ref<android::graphics::Bitmap> background) { return call_method<"setBackground", jni::ref<android::app::Notification_WearableExtender>>(background); }
	jni::ref<android::graphics::Bitmap> getBackground() { return call_method<"getBackground", jni::ref<android::graphics::Bitmap>>(); }
	jni::ref<android::app::Notification_WearableExtender> setContentIcon(jint icon) { return call_method<"setContentIcon", jni::ref<android::app::Notification_WearableExtender>>(icon); }
	jint getContentIcon() { return call_method<"getContentIcon", jint>(); }
	jni::ref<android::app::Notification_WearableExtender> setContentIconGravity(jint contentIconGravity) { return call_method<"setContentIconGravity", jni::ref<android::app::Notification_WearableExtender>>(contentIconGravity); }
	jint getContentIconGravity() { return call_method<"getContentIconGravity", jint>(); }
	jni::ref<android::app::Notification_WearableExtender> setContentAction(jint actionIndex) { return call_method<"setContentAction", jni::ref<android::app::Notification_WearableExtender>>(actionIndex); }
	jint getContentAction() { return call_method<"getContentAction", jint>(); }
	jni::ref<android::app::Notification_WearableExtender> setGravity(jint gravity) { return call_method<"setGravity", jni::ref<android::app::Notification_WearableExtender>>(gravity); }
	jint getGravity() { return call_method<"getGravity", jint>(); }
	jni::ref<android::app::Notification_WearableExtender> setCustomSizePreset(jint sizePreset) { return call_method<"setCustomSizePreset", jni::ref<android::app::Notification_WearableExtender>>(sizePreset); }
	jint getCustomSizePreset() { return call_method<"getCustomSizePreset", jint>(); }
	jni::ref<android::app::Notification_WearableExtender> setCustomContentHeight(jint height) { return call_method<"setCustomContentHeight", jni::ref<android::app::Notification_WearableExtender>>(height); }
	jint getCustomContentHeight() { return call_method<"getCustomContentHeight", jint>(); }
	jni::ref<android::app::Notification_WearableExtender> setStartScrollBottom(jboolean startScrollBottom) { return call_method<"setStartScrollBottom", jni::ref<android::app::Notification_WearableExtender>>(startScrollBottom); }
	jboolean getStartScrollBottom() { return call_method<"getStartScrollBottom", jboolean>(); }
	jni::ref<android::app::Notification_WearableExtender> setContentIntentAvailableOffline(jboolean contentIntentAvailableOffline) { return call_method<"setContentIntentAvailableOffline", jni::ref<android::app::Notification_WearableExtender>>(contentIntentAvailableOffline); }
	jboolean getContentIntentAvailableOffline() { return call_method<"getContentIntentAvailableOffline", jboolean>(); }
	jni::ref<android::app::Notification_WearableExtender> setHintHideIcon(jboolean hintHideIcon) { return call_method<"setHintHideIcon", jni::ref<android::app::Notification_WearableExtender>>(hintHideIcon); }
	jboolean getHintHideIcon() { return call_method<"getHintHideIcon", jboolean>(); }
	jni::ref<android::app::Notification_WearableExtender> setHintShowBackgroundOnly(jboolean hintShowBackgroundOnly) { return call_method<"setHintShowBackgroundOnly", jni::ref<android::app::Notification_WearableExtender>>(hintShowBackgroundOnly); }
	jboolean getHintShowBackgroundOnly() { return call_method<"getHintShowBackgroundOnly", jboolean>(); }

protected:

	Notification_WearableExtender(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_WEARABLEEXTENDER
