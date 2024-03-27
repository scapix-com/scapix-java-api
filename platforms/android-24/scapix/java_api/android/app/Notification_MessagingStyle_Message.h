// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_MESSAGINGSTYLE_MESSAGE_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_MESSAGINGSTYLE_MESSAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class Notification_MessagingStyle_Message; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::Notification_MessagingStyle_Message>
{
	static constexpr fixed_string class_name = "android/app/Notification$MessagingStyle$Message";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_MESSAGINGSTYLE_MESSAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_MESSAGINGSTYLE_MESSAGE)
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_MESSAGINGSTYLE_MESSAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::Notification_MessagingStyle_Message : public jni::object_base<"android/app/Notification$MessagingStyle$Message",
	java::lang::Object>
{
public:

	static jni::ref<android::app::Notification_MessagingStyle_Message> new_object(jni::ref<java::lang::CharSequence> text, jlong timestamp, jni::ref<java::lang::CharSequence> p3) { return base_::new_object(text, timestamp, p3); }
	jni::ref<android::app::Notification_MessagingStyle_Message> setData(jni::ref<java::lang::String> dataMimeType, jni::ref<android::net::Uri> dataUri) { return call_method<"setData", jni::ref<android::app::Notification_MessagingStyle_Message>>(dataMimeType, dataUri); }
	jni::ref<java::lang::CharSequence> getText() { return call_method<"getText", jni::ref<java::lang::CharSequence>>(); }
	jlong getTimestamp() { return call_method<"getTimestamp", jlong>(); }
	jni::ref<java::lang::CharSequence> getSender() { return call_method<"getSender", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<java::lang::String> getDataMimeType() { return call_method<"getDataMimeType", jni::ref<java::lang::String>>(); }
	jni::ref<android::net::Uri> getDataUri() { return call_method<"getDataUri", jni::ref<android::net::Uri>>(); }

protected:

	Notification_MessagingStyle_Message(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_MESSAGINGSTYLE_MESSAGE
