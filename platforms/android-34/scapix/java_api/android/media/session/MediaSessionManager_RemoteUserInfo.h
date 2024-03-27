// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION_MEDIASESSIONMANAGER_REMOTEUSERINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION_MEDIASESSIONMANAGER_REMOTEUSERINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::session { class MediaSessionManager_RemoteUserInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::session::MediaSessionManager_RemoteUserInfo>
{
	static constexpr fixed_string class_name = "android/media/session/MediaSessionManager$RemoteUserInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION_MEDIASESSIONMANAGER_REMOTEUSERINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION_MEDIASESSIONMANAGER_REMOTEUSERINFO)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION_MEDIASESSIONMANAGER_REMOTEUSERINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::session::MediaSessionManager_RemoteUserInfo : public jni::object_base<"android/media/session/MediaSessionManager$RemoteUserInfo",
	java::lang::Object>
{
public:

	static jni::ref<android::media::session::MediaSessionManager_RemoteUserInfo> new_object(jni::ref<java::lang::String> packageName, jint pid, jint uid) { return base_::new_object(packageName, pid, uid); }
	jni::ref<java::lang::String> getPackageName() { return call_method<"getPackageName", jni::ref<java::lang::String>>(); }
	jint getPid() { return call_method<"getPid", jint>(); }
	jint getUid() { return call_method<"getUid", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	MediaSessionManager_RemoteUserInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION_MEDIASESSIONMANAGER_REMOTEUSERINFO