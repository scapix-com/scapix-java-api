// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_PROJECTION_MEDIAPROJECTIONMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_PROJECTION_MEDIAPROJECTIONMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::projection { class MediaProjectionManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::projection::MediaProjectionManager>
{
	static constexpr fixed_string class_name = "android/media/projection/MediaProjectionManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_PROJECTION_MEDIAPROJECTIONMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_PROJECTION_MEDIAPROJECTIONMANAGER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_PROJECTION_MEDIAPROJECTIONMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/media/projection/MediaProjection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::projection::MediaProjectionManager : public jni::object_base<"android/media/projection/MediaProjectionManager",
	java::lang::Object>
{
public:

	jni::ref<android::content::Intent> createScreenCaptureIntent() { return call_method<"createScreenCaptureIntent", jni::ref<android::content::Intent>>(); }
	jni::ref<android::media::projection::MediaProjection> getMediaProjection(jint resultCode, jni::ref<android::content::Intent> resultData) { return call_method<"getMediaProjection", jni::ref<android::media::projection::MediaProjection>>(resultCode, resultData); }

protected:

	MediaProjectionManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_PROJECTION_MEDIAPROJECTIONMANAGER
