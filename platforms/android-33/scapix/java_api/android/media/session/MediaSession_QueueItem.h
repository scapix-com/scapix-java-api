// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION_MEDIASESSION_QUEUEITEM_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION_MEDIASESSION_QUEUEITEM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::session { class MediaSession_QueueItem; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::session::MediaSession_QueueItem>
{
	static constexpr fixed_string class_name = "android/media/session/MediaSession$QueueItem";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION_MEDIASESSION_QUEUEITEM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION_MEDIASESSION_QUEUEITEM)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION_MEDIASESSION_QUEUEITEM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/MediaDescription.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::session::MediaSession_QueueItem : public jni::object_base<"android/media/session/MediaSession$QueueItem",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint UNKNOWN_ID() { return get_static_field<"UNKNOWN_ID", jint>(); }

	static jni::ref<android::media::session::MediaSession_QueueItem> new_object(jni::ref<android::media::MediaDescription> description, jlong id) { return base_::new_object(description, id); }
	jni::ref<android::media::MediaDescription> getDescription() { return call_method<"getDescription", jni::ref<android::media::MediaDescription>>(); }
	jlong getQueueId() { return call_method<"getQueueId", jlong>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }

protected:

	MediaSession_QueueItem(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION_MEDIASESSION_QUEUEITEM
