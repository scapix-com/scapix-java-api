// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_DRM_DRMCONVERTEDSTATUS_FWD
#define SCAPIX_JAVA_API_ANDROID_DRM_DRMCONVERTEDSTATUS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::drm { class DrmConvertedStatus; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::drm::DrmConvertedStatus>
{
	static constexpr fixed_string class_name = "android/drm/DrmConvertedStatus";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DRM_DRMCONVERTEDSTATUS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_DRM_DRMCONVERTEDSTATUS)
#define SCAPIX_JAVA_API_ANDROID_DRM_DRMCONVERTEDSTATUS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::drm::DrmConvertedStatus : public jni::object_base<"android/drm/DrmConvertedStatus",
	java::lang::Object>
{
public:

	static jint STATUS_ERROR() { return get_static_field<"STATUS_ERROR", jint>(); }
	static jint STATUS_INPUTDATA_ERROR() { return get_static_field<"STATUS_INPUTDATA_ERROR", jint>(); }
	static jint STATUS_OK() { return get_static_field<"STATUS_OK", jint>(); }
	jni::ref<jni::array<jbyte>> convertedData() { return get_field<"convertedData", jni::ref<jni::array<jbyte>>>(); }
	jint offset() { return get_field<"offset", jint>(); }
	jint statusCode() { return get_field<"statusCode", jint>(); }

	static jni::ref<android::drm::DrmConvertedStatus> new_object(jint statusCode, jni::ref<jni::array<jbyte>> convertedData, jint offset) { return base_::new_object(statusCode, convertedData, offset); }

protected:

	DrmConvertedStatus(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DRM_DRMCONVERTEDSTATUS