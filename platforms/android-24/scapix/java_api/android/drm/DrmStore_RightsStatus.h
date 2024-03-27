// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_DRM_DRMSTORE_RIGHTSSTATUS_FWD
#define SCAPIX_JAVA_API_ANDROID_DRM_DRMSTORE_RIGHTSSTATUS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::drm { class DrmStore_RightsStatus; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::drm::DrmStore_RightsStatus>
{
	static constexpr fixed_string class_name = "android/drm/DrmStore$RightsStatus";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DRM_DRMSTORE_RIGHTSSTATUS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_DRM_DRMSTORE_RIGHTSSTATUS)
#define SCAPIX_JAVA_API_ANDROID_DRM_DRMSTORE_RIGHTSSTATUS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::drm::DrmStore_RightsStatus : public jni::object_base<"android/drm/DrmStore$RightsStatus",
	java::lang::Object>
{
public:

	static jint RIGHTS_EXPIRED() { return get_static_field<"RIGHTS_EXPIRED", jint>(); }
	static jint RIGHTS_INVALID() { return get_static_field<"RIGHTS_INVALID", jint>(); }
	static jint RIGHTS_NOT_ACQUIRED() { return get_static_field<"RIGHTS_NOT_ACQUIRED", jint>(); }
	static jint RIGHTS_VALID() { return get_static_field<"RIGHTS_VALID", jint>(); }

	static jni::ref<android::drm::DrmStore_RightsStatus> new_object() { return base_::new_object(); }

protected:

	DrmStore_RightsStatus(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DRM_DRMSTORE_RIGHTSSTATUS
