// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_CAREXTENDER_UNREADCONVERSATION_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_CAREXTENDER_UNREADCONVERSATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class Notification_CarExtender_UnreadConversation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::Notification_CarExtender_UnreadConversation>
{
	static constexpr fixed_string class_name = "android/app/Notification$CarExtender$UnreadConversation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_CAREXTENDER_UNREADCONVERSATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_CAREXTENDER_UNREADCONVERSATION)
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_CAREXTENDER_UNREADCONVERSATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/app/RemoteInput.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::Notification_CarExtender_UnreadConversation : public jni::object_base<"android/app/Notification$CarExtender$UnreadConversation",
	java::lang::Object>
{
public:

	jni::ref<jni::array<java::lang::String>> getMessages() { return call_method<"getMessages", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<android::app::RemoteInput> getRemoteInput() { return call_method<"getRemoteInput", jni::ref<android::app::RemoteInput>>(); }
	jni::ref<android::app::PendingIntent> getReplyPendingIntent() { return call_method<"getReplyPendingIntent", jni::ref<android::app::PendingIntent>>(); }
	jni::ref<android::app::PendingIntent> getReadPendingIntent() { return call_method<"getReadPendingIntent", jni::ref<android::app::PendingIntent>>(); }
	jni::ref<jni::array<java::lang::String>> getParticipants() { return call_method<"getParticipants", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<java::lang::String> getParticipant() { return call_method<"getParticipant", jni::ref<java::lang::String>>(); }
	jlong getLatestTimestamp() { return call_method<"getLatestTimestamp", jlong>(); }

protected:

	Notification_CarExtender_UnreadConversation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_CAREXTENDER_UNREADCONVERSATION
