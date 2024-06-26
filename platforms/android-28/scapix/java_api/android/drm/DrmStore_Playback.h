// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_DRM_DRMSTORE_PLAYBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_DRM_DRMSTORE_PLAYBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::drm { class DrmStore_Playback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::drm::DrmStore_Playback>
{
	static constexpr fixed_string class_name = "android/drm/DrmStore$Playback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DRM_DRMSTORE_PLAYBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_DRM_DRMSTORE_PLAYBACK)
#define SCAPIX_JAVA_API_ANDROID_DRM_DRMSTORE_PLAYBACK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::drm::DrmStore_Playback : public jni::object_base<"android/drm/DrmStore$Playback",
	java::lang::Object>
{
public:

	static jint PAUSE() { return get_static_field<"PAUSE", jint>(); }
	static jint RESUME() { return get_static_field<"RESUME", jint>(); }
	static jint START() { return get_static_field<"START", jint>(); }
	static jint STOP() { return get_static_field<"STOP", jint>(); }

	static jni::ref<android::drm::DrmStore_Playback> new_object() { return base_::new_object(); }

protected:

	DrmStore_Playback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DRM_DRMSTORE_PLAYBACK
