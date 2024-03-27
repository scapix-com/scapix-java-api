// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_NOTIFICATION_STATUSBARNOTIFICATION_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_NOTIFICATION_STATUSBARNOTIFICATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::notification { class StatusBarNotification; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::notification::StatusBarNotification>
{
	static constexpr fixed_string class_name = "android/service/notification/StatusBarNotification";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_NOTIFICATION_STATUSBARNOTIFICATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_NOTIFICATION_STATUSBARNOTIFICATION)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_NOTIFICATION_STATUSBARNOTIFICATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Notification.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/os/UserHandle.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::notification::StatusBarNotification : public jni::object_base<"android/service/notification/StatusBarNotification",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::service::notification::StatusBarNotification> new_object(jni::ref<java::lang::String> pkg, jni::ref<java::lang::String> opPkg, jint id, jni::ref<java::lang::String> tag, jint uid, jint initialPid, jint score, jni::ref<android::app::Notification> notification, jni::ref<android::os::UserHandle> user, jlong postTime) { return base_::new_object(pkg, opPkg, id, tag, uid, initialPid, score, notification, user, postTime); }
	static jni::ref<android::service::notification::StatusBarNotification> new_object(jni::ref<android::os::Parcel> in) { return base_::new_object(in); }
	jboolean isGroup() { return call_method<"isGroup", jboolean>(); }
	jboolean isAppGroup() { return call_method<"isAppGroup", jboolean>(); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jni::ref<android::service::notification::StatusBarNotification> clone() { return call_method<"clone", jni::ref<android::service::notification::StatusBarNotification>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean isOngoing() { return call_method<"isOngoing", jboolean>(); }
	jboolean isClearable() { return call_method<"isClearable", jboolean>(); }
	jint getUserId() { return call_method<"getUserId", jint>(); }
	jni::ref<java::lang::String> getPackageName() { return call_method<"getPackageName", jni::ref<java::lang::String>>(); }
	jint getId() { return call_method<"getId", jint>(); }
	jni::ref<java::lang::String> getTag() { return call_method<"getTag", jni::ref<java::lang::String>>(); }
	jint getUid() { return call_method<"getUid", jint>(); }
	jni::ref<java::lang::String> getOpPkg() { return call_method<"getOpPkg", jni::ref<java::lang::String>>(); }
	jni::ref<android::app::Notification> getNotification() { return call_method<"getNotification", jni::ref<android::app::Notification>>(); }
	jni::ref<android::os::UserHandle> getUser() { return call_method<"getUser", jni::ref<android::os::UserHandle>>(); }
	jlong getPostTime() { return call_method<"getPostTime", jlong>(); }
	jni::ref<java::lang::String> getKey() { return call_method<"getKey", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getGroupKey() { return call_method<"getGroupKey", jni::ref<java::lang::String>>(); }
	void setOverrideGroupKey(jni::ref<java::lang::String> overrideGroupKey) { return call_method<"setOverrideGroupKey", void>(overrideGroupKey); }
	jni::ref<java::lang::String> getOverrideGroupKey() { return call_method<"getOverrideGroupKey", jni::ref<java::lang::String>>(); }

protected:

	StatusBarNotification(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_NOTIFICATION_STATUSBARNOTIFICATION