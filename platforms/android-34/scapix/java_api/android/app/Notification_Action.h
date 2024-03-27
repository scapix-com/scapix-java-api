// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_ACTION_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_ACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class Notification_Action; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::Notification_Action>
{
	static constexpr fixed_string class_name = "android/app/Notification$Action";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_ACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_ACTION)
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_ACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/app/RemoteInput.h>
#include <scapix/java_api/android/graphics/drawable/Icon.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/android/app/Notification_Action_WearableExtender.h>
#include <scapix/java_api/android/app/Notification_Action_Extender.h>
#include <scapix/java_api/android/app/Notification_Action_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::Notification_Action : public jni::object_base<"android/app/Notification$Action",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using WearableExtender = Notification_Action_WearableExtender;
	using Extender = Notification_Action_Extender;
	using Builder = Notification_Action_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint SEMANTIC_ACTION_ARCHIVE() { return get_static_field<"SEMANTIC_ACTION_ARCHIVE", jint>(); }
	static jint SEMANTIC_ACTION_CALL() { return get_static_field<"SEMANTIC_ACTION_CALL", jint>(); }
	static jint SEMANTIC_ACTION_DELETE() { return get_static_field<"SEMANTIC_ACTION_DELETE", jint>(); }
	static jint SEMANTIC_ACTION_MARK_AS_READ() { return get_static_field<"SEMANTIC_ACTION_MARK_AS_READ", jint>(); }
	static jint SEMANTIC_ACTION_MARK_AS_UNREAD() { return get_static_field<"SEMANTIC_ACTION_MARK_AS_UNREAD", jint>(); }
	static jint SEMANTIC_ACTION_MUTE() { return get_static_field<"SEMANTIC_ACTION_MUTE", jint>(); }
	static jint SEMANTIC_ACTION_NONE() { return get_static_field<"SEMANTIC_ACTION_NONE", jint>(); }
	static jint SEMANTIC_ACTION_REPLY() { return get_static_field<"SEMANTIC_ACTION_REPLY", jint>(); }
	static jint SEMANTIC_ACTION_THUMBS_DOWN() { return get_static_field<"SEMANTIC_ACTION_THUMBS_DOWN", jint>(); }
	static jint SEMANTIC_ACTION_THUMBS_UP() { return get_static_field<"SEMANTIC_ACTION_THUMBS_UP", jint>(); }
	static jint SEMANTIC_ACTION_UNMUTE() { return get_static_field<"SEMANTIC_ACTION_UNMUTE", jint>(); }
	jni::ref<android::app::PendingIntent> actionIntent() { return get_field<"actionIntent", jni::ref<android::app::PendingIntent>>(); }
	void actionIntent(jni::ref<android::app::PendingIntent> v) { set_field<"actionIntent", jni::ref<android::app::PendingIntent>>(v); }
	jint icon() { return get_field<"icon", jint>(); }
	void icon(jint v) { set_field<"icon", jint>(v); }
	jni::ref<java::lang::CharSequence> title() { return get_field<"title", jni::ref<java::lang::CharSequence>>(); }
	void title(jni::ref<java::lang::CharSequence> v) { set_field<"title", jni::ref<java::lang::CharSequence>>(v); }

	static jni::ref<android::app::Notification_Action> new_object(jint icon, jni::ref<java::lang::CharSequence> title, jni::ref<android::app::PendingIntent> intent) { return base_::new_object(icon, title, intent); }
	jni::ref<android::graphics::drawable::Icon> getIcon() { return call_method<"getIcon", jni::ref<android::graphics::drawable::Icon>>(); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }
	jboolean getAllowGeneratedReplies() { return call_method<"getAllowGeneratedReplies", jboolean>(); }
	jni::ref<jni::array<android::app::RemoteInput>> getRemoteInputs() { return call_method<"getRemoteInputs", jni::ref<jni::array<android::app::RemoteInput>>>(); }
	jint getSemanticAction() { return call_method<"getSemanticAction", jint>(); }
	jboolean isContextual() { return call_method<"isContextual", jboolean>(); }
	jni::ref<jni::array<android::app::RemoteInput>> getDataOnlyRemoteInputs() { return call_method<"getDataOnlyRemoteInputs", jni::ref<jni::array<android::app::RemoteInput>>>(); }
	jboolean isAuthenticationRequired() { return call_method<"isAuthenticationRequired", jboolean>(); }
	jni::ref<android::app::Notification_Action> clone() { return call_method<"clone", jni::ref<android::app::Notification_Action>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }

protected:

	Notification_Action(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_ACTION