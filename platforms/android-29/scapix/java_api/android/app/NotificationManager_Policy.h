// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATIONMANAGER_POLICY_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATIONMANAGER_POLICY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class NotificationManager_Policy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::NotificationManager_Policy>
{
	static constexpr fixed_string class_name = "android/app/NotificationManager$Policy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATIONMANAGER_POLICY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATIONMANAGER_POLICY)
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATIONMANAGER_POLICY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::NotificationManager_Policy : public jni::object_base<"android/app/NotificationManager$Policy",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint PRIORITY_CATEGORY_ALARMS() { return get_static_field<"PRIORITY_CATEGORY_ALARMS", jint>(); }
	static jint PRIORITY_CATEGORY_CALLS() { return get_static_field<"PRIORITY_CATEGORY_CALLS", jint>(); }
	static jint PRIORITY_CATEGORY_EVENTS() { return get_static_field<"PRIORITY_CATEGORY_EVENTS", jint>(); }
	static jint PRIORITY_CATEGORY_MEDIA() { return get_static_field<"PRIORITY_CATEGORY_MEDIA", jint>(); }
	static jint PRIORITY_CATEGORY_MESSAGES() { return get_static_field<"PRIORITY_CATEGORY_MESSAGES", jint>(); }
	static jint PRIORITY_CATEGORY_REMINDERS() { return get_static_field<"PRIORITY_CATEGORY_REMINDERS", jint>(); }
	static jint PRIORITY_CATEGORY_REPEAT_CALLERS() { return get_static_field<"PRIORITY_CATEGORY_REPEAT_CALLERS", jint>(); }
	static jint PRIORITY_CATEGORY_SYSTEM() { return get_static_field<"PRIORITY_CATEGORY_SYSTEM", jint>(); }
	static jint PRIORITY_SENDERS_ANY() { return get_static_field<"PRIORITY_SENDERS_ANY", jint>(); }
	static jint PRIORITY_SENDERS_CONTACTS() { return get_static_field<"PRIORITY_SENDERS_CONTACTS", jint>(); }
	static jint PRIORITY_SENDERS_STARRED() { return get_static_field<"PRIORITY_SENDERS_STARRED", jint>(); }
	static jint SUPPRESSED_EFFECT_AMBIENT() { return get_static_field<"SUPPRESSED_EFFECT_AMBIENT", jint>(); }
	static jint SUPPRESSED_EFFECT_BADGE() { return get_static_field<"SUPPRESSED_EFFECT_BADGE", jint>(); }
	static jint SUPPRESSED_EFFECT_FULL_SCREEN_INTENT() { return get_static_field<"SUPPRESSED_EFFECT_FULL_SCREEN_INTENT", jint>(); }
	static jint SUPPRESSED_EFFECT_LIGHTS() { return get_static_field<"SUPPRESSED_EFFECT_LIGHTS", jint>(); }
	static jint SUPPRESSED_EFFECT_NOTIFICATION_LIST() { return get_static_field<"SUPPRESSED_EFFECT_NOTIFICATION_LIST", jint>(); }
	static jint SUPPRESSED_EFFECT_PEEK() { return get_static_field<"SUPPRESSED_EFFECT_PEEK", jint>(); }
	static jint SUPPRESSED_EFFECT_SCREEN_OFF() { return get_static_field<"SUPPRESSED_EFFECT_SCREEN_OFF", jint>(); }
	static jint SUPPRESSED_EFFECT_SCREEN_ON() { return get_static_field<"SUPPRESSED_EFFECT_SCREEN_ON", jint>(); }
	static jint SUPPRESSED_EFFECT_STATUS_BAR() { return get_static_field<"SUPPRESSED_EFFECT_STATUS_BAR", jint>(); }
	jint priorityCallSenders() { return get_field<"priorityCallSenders", jint>(); }
	jint priorityCategories() { return get_field<"priorityCategories", jint>(); }
	jint priorityMessageSenders() { return get_field<"priorityMessageSenders", jint>(); }
	jint suppressedVisualEffects() { return get_field<"suppressedVisualEffects", jint>(); }

	static jni::ref<android::app::NotificationManager_Policy> new_object(jint priorityCategories, jint priorityCallSenders, jint priorityMessageSenders) { return base_::new_object(priorityCategories, priorityCallSenders, priorityMessageSenders); }
	static jni::ref<android::app::NotificationManager_Policy> new_object(jint priorityCategories, jint priorityCallSenders, jint priorityMessageSenders, jint suppressedVisualEffects) { return base_::new_object(priorityCategories, priorityCallSenders, priorityMessageSenders, suppressedVisualEffects); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> suppressedEffectsToString(jint effects) { return call_static_method<"suppressedEffectsToString", jni::ref<java::lang::String>>(effects); }
	static jni::ref<java::lang::String> priorityCategoriesToString(jint priorityCategories) { return call_static_method<"priorityCategoriesToString", jni::ref<java::lang::String>>(priorityCategories); }
	static jni::ref<java::lang::String> prioritySendersToString(jint prioritySenders) { return call_static_method<"prioritySendersToString", jni::ref<java::lang::String>>(prioritySenders); }

protected:

	NotificationManager_Policy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATIONMANAGER_POLICY
