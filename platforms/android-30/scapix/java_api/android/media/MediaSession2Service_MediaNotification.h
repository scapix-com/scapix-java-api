// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIASESSION2SERVICE_MEDIANOTIFICATION_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIASESSION2SERVICE_MEDIANOTIFICATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaSession2Service_MediaNotification; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaSession2Service_MediaNotification>
{
	static constexpr fixed_string class_name = "android/media/MediaSession2Service$MediaNotification";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIASESSION2SERVICE_MEDIANOTIFICATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIASESSION2SERVICE_MEDIANOTIFICATION)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIASESSION2SERVICE_MEDIANOTIFICATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Notification.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaSession2Service_MediaNotification : public jni::object_base<"android/media/MediaSession2Service$MediaNotification",
	java::lang::Object>
{
public:

	static jni::ref<android::media::MediaSession2Service_MediaNotification> new_object(jint notificationId, jni::ref<android::app::Notification> notification) { return base_::new_object(notificationId, notification); }
	jint getNotificationId() { return call_method<"getNotificationId", jint>(); }
	jni::ref<android::app::Notification> getNotification() { return call_method<"getNotification", jni::ref<android::app::Notification>>(); }

protected:

	MediaSession2Service_MediaNotification(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIASESSION2SERVICE_MEDIANOTIFICATION
