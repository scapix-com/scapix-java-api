// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_CAREXTENDER_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_CAREXTENDER_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class Notification_CarExtender_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::Notification_CarExtender_Builder>
{
	static constexpr fixed_string class_name = "android/app/Notification$CarExtender$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_CAREXTENDER_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_CAREXTENDER_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_CAREXTENDER_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Notification_CarExtender_UnreadConversation.h>
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/app/RemoteInput.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::Notification_CarExtender_Builder : public jni::object_base<"android/app/Notification$CarExtender$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::app::Notification_CarExtender_Builder> new_object(jni::ref<java::lang::String> name) { return base_::new_object(name); }
	jni::ref<android::app::Notification_CarExtender_Builder> addMessage(jni::ref<java::lang::String> message) { return call_method<"addMessage", jni::ref<android::app::Notification_CarExtender_Builder>>(message); }
	jni::ref<android::app::Notification_CarExtender_Builder> setReplyAction(jni::ref<android::app::PendingIntent> pendingIntent, jni::ref<android::app::RemoteInput> remoteInput) { return call_method<"setReplyAction", jni::ref<android::app::Notification_CarExtender_Builder>>(pendingIntent, remoteInput); }
	jni::ref<android::app::Notification_CarExtender_Builder> setReadPendingIntent(jni::ref<android::app::PendingIntent> pendingIntent) { return call_method<"setReadPendingIntent", jni::ref<android::app::Notification_CarExtender_Builder>>(pendingIntent); }
	jni::ref<android::app::Notification_CarExtender_Builder> setLatestTimestamp(jlong timestamp) { return call_method<"setLatestTimestamp", jni::ref<android::app::Notification_CarExtender_Builder>>(timestamp); }
	jni::ref<android::app::Notification_CarExtender_UnreadConversation> build() { return call_method<"build", jni::ref<android::app::Notification_CarExtender_UnreadConversation>>(); }

protected:

	Notification_CarExtender_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_CAREXTENDER_BUILDER