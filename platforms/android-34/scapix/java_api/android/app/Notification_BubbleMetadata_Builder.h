// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_BUBBLEMETADATA_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_BUBBLEMETADATA_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class Notification_BubbleMetadata_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::Notification_BubbleMetadata_Builder>
{
	static constexpr fixed_string class_name = "android/app/Notification$BubbleMetadata$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_BUBBLEMETADATA_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_BUBBLEMETADATA_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_BUBBLEMETADATA_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Notification_BubbleMetadata.h>
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/graphics/drawable/Icon.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::Notification_BubbleMetadata_Builder : public jni::object_base<"android/app/Notification$BubbleMetadata$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::app::Notification_BubbleMetadata_Builder> new_object() { return base_::new_object(); }
	static jni::ref<android::app::Notification_BubbleMetadata_Builder> new_object(jni::ref<java::lang::String> shortcutId) { return base_::new_object(shortcutId); }
	static jni::ref<android::app::Notification_BubbleMetadata_Builder> new_object(jni::ref<android::app::PendingIntent> intent, jni::ref<android::graphics::drawable::Icon> icon) { return base_::new_object(intent, icon); }
	jni::ref<android::app::Notification_BubbleMetadata_Builder> setIntent(jni::ref<android::app::PendingIntent> intent) { return call_method<"setIntent", jni::ref<android::app::Notification_BubbleMetadata_Builder>>(intent); }
	jni::ref<android::app::Notification_BubbleMetadata_Builder> setIcon(jni::ref<android::graphics::drawable::Icon> icon) { return call_method<"setIcon", jni::ref<android::app::Notification_BubbleMetadata_Builder>>(icon); }
	jni::ref<android::app::Notification_BubbleMetadata_Builder> setDesiredHeight(jint height) { return call_method<"setDesiredHeight", jni::ref<android::app::Notification_BubbleMetadata_Builder>>(height); }
	jni::ref<android::app::Notification_BubbleMetadata_Builder> setDesiredHeightResId(jint heightResId) { return call_method<"setDesiredHeightResId", jni::ref<android::app::Notification_BubbleMetadata_Builder>>(heightResId); }
	jni::ref<android::app::Notification_BubbleMetadata_Builder> setAutoExpandBubble(jboolean shouldExpand) { return call_method<"setAutoExpandBubble", jni::ref<android::app::Notification_BubbleMetadata_Builder>>(shouldExpand); }
	jni::ref<android::app::Notification_BubbleMetadata_Builder> setSuppressNotification(jboolean shouldSuppressNotif) { return call_method<"setSuppressNotification", jni::ref<android::app::Notification_BubbleMetadata_Builder>>(shouldSuppressNotif); }
	jni::ref<android::app::Notification_BubbleMetadata_Builder> setSuppressableBubble(jboolean suppressBubble) { return call_method<"setSuppressableBubble", jni::ref<android::app::Notification_BubbleMetadata_Builder>>(suppressBubble); }
	jni::ref<android::app::Notification_BubbleMetadata_Builder> setDeleteIntent(jni::ref<android::app::PendingIntent> deleteIntent) { return call_method<"setDeleteIntent", jni::ref<android::app::Notification_BubbleMetadata_Builder>>(deleteIntent); }
	jni::ref<android::app::Notification_BubbleMetadata> build() { return call_method<"build", jni::ref<android::app::Notification_BubbleMetadata>>(); }

protected:

	Notification_BubbleMetadata_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_BUBBLEMETADATA_BUILDER