// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_DRM_DRMSTORE_FWD
#define SCAPIX_JAVA_API_ANDROID_DRM_DRMSTORE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::drm { class DrmStore; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::drm::DrmStore>
{
	static constexpr fixed_string class_name = "android/drm/DrmStore";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DRM_DRMSTORE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_DRM_DRMSTORE)
#define SCAPIX_JAVA_API_ANDROID_DRM_DRMSTORE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/drm/DrmStore_RightsStatus.h>
#include <scapix/java_api/android/drm/DrmStore_Playback.h>
#include <scapix/java_api/android/drm/DrmStore_DrmObjectType.h>
#include <scapix/java_api/android/drm/DrmStore_ConstraintsColumns.h>
#include <scapix/java_api/android/drm/DrmStore_Action.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::drm::DrmStore : public jni::object_base<"android/drm/DrmStore",
	java::lang::Object>
{
public:

	using RightsStatus = DrmStore_RightsStatus;
	using Playback = DrmStore_Playback;
	using DrmObjectType = DrmStore_DrmObjectType;
	using ConstraintsColumns = DrmStore_ConstraintsColumns;
	using Action = DrmStore_Action;

	static jni::ref<android::drm::DrmStore> new_object() { return base_::new_object(); }

protected:

	DrmStore(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DRM_DRMSTORE