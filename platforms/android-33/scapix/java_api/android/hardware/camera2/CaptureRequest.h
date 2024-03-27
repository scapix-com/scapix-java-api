// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/hardware/camera2/CameraMetadata.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAPTUREREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAPTUREREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::camera2 { class CaptureRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::camera2::CaptureRequest>
{
	static constexpr fixed_string class_name = "android/hardware/camera2/CaptureRequest";
	using base_classes = std::tuple<scapix::java_api::android::hardware::camera2::CameraMetadata, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAPTUREREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAPTUREREQUEST)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAPTUREREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/camera2/CaptureRequest_Key.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/hardware/camera2/CaptureRequest_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::camera2::CaptureRequest : public jni::object_base<"android/hardware/camera2/CaptureRequest",
	android::hardware::camera2::CameraMetadata,
	android::os::Parcelable>
{
public:

	using Key = CaptureRequest_Key;
	using Builder = CaptureRequest_Builder;

	static jni::ref<android::hardware::camera2::CaptureRequest_Key> BLACK_LEVEL_LOCK() { return get_static_field<"BLACK_LEVEL_LOCK", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> COLOR_CORRECTION_ABERRATION_MODE() { return get_static_field<"COLOR_CORRECTION_ABERRATION_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> COLOR_CORRECTION_GAINS() { return get_static_field<"COLOR_CORRECTION_GAINS", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> COLOR_CORRECTION_MODE() { return get_static_field<"COLOR_CORRECTION_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> COLOR_CORRECTION_TRANSFORM() { return get_static_field<"COLOR_CORRECTION_TRANSFORM", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_AE_ANTIBANDING_MODE() { return get_static_field<"CONTROL_AE_ANTIBANDING_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_AE_EXPOSURE_COMPENSATION() { return get_static_field<"CONTROL_AE_EXPOSURE_COMPENSATION", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_AE_LOCK() { return get_static_field<"CONTROL_AE_LOCK", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_AE_MODE() { return get_static_field<"CONTROL_AE_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_AE_PRECAPTURE_TRIGGER() { return get_static_field<"CONTROL_AE_PRECAPTURE_TRIGGER", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_AE_REGIONS() { return get_static_field<"CONTROL_AE_REGIONS", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_AE_TARGET_FPS_RANGE() { return get_static_field<"CONTROL_AE_TARGET_FPS_RANGE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_AF_MODE() { return get_static_field<"CONTROL_AF_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_AF_REGIONS() { return get_static_field<"CONTROL_AF_REGIONS", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_AF_TRIGGER() { return get_static_field<"CONTROL_AF_TRIGGER", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_AWB_LOCK() { return get_static_field<"CONTROL_AWB_LOCK", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_AWB_MODE() { return get_static_field<"CONTROL_AWB_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_AWB_REGIONS() { return get_static_field<"CONTROL_AWB_REGIONS", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_CAPTURE_INTENT() { return get_static_field<"CONTROL_CAPTURE_INTENT", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_EFFECT_MODE() { return get_static_field<"CONTROL_EFFECT_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_ENABLE_ZSL() { return get_static_field<"CONTROL_ENABLE_ZSL", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_EXTENDED_SCENE_MODE() { return get_static_field<"CONTROL_EXTENDED_SCENE_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_MODE() { return get_static_field<"CONTROL_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_POST_RAW_SENSITIVITY_BOOST() { return get_static_field<"CONTROL_POST_RAW_SENSITIVITY_BOOST", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_SCENE_MODE() { return get_static_field<"CONTROL_SCENE_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_VIDEO_STABILIZATION_MODE() { return get_static_field<"CONTROL_VIDEO_STABILIZATION_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> CONTROL_ZOOM_RATIO() { return get_static_field<"CONTROL_ZOOM_RATIO", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> DISTORTION_CORRECTION_MODE() { return get_static_field<"DISTORTION_CORRECTION_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> EDGE_MODE() { return get_static_field<"EDGE_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> FLASH_MODE() { return get_static_field<"FLASH_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> HOT_PIXEL_MODE() { return get_static_field<"HOT_PIXEL_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> JPEG_GPS_LOCATION() { return get_static_field<"JPEG_GPS_LOCATION", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> JPEG_ORIENTATION() { return get_static_field<"JPEG_ORIENTATION", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> JPEG_QUALITY() { return get_static_field<"JPEG_QUALITY", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> JPEG_THUMBNAIL_QUALITY() { return get_static_field<"JPEG_THUMBNAIL_QUALITY", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> JPEG_THUMBNAIL_SIZE() { return get_static_field<"JPEG_THUMBNAIL_SIZE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> LENS_APERTURE() { return get_static_field<"LENS_APERTURE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> LENS_FILTER_DENSITY() { return get_static_field<"LENS_FILTER_DENSITY", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> LENS_FOCAL_LENGTH() { return get_static_field<"LENS_FOCAL_LENGTH", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> LENS_FOCUS_DISTANCE() { return get_static_field<"LENS_FOCUS_DISTANCE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> LENS_OPTICAL_STABILIZATION_MODE() { return get_static_field<"LENS_OPTICAL_STABILIZATION_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> NOISE_REDUCTION_MODE() { return get_static_field<"NOISE_REDUCTION_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> REPROCESS_EFFECTIVE_EXPOSURE_FACTOR() { return get_static_field<"REPROCESS_EFFECTIVE_EXPOSURE_FACTOR", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> SCALER_CROP_REGION() { return get_static_field<"SCALER_CROP_REGION", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> SCALER_ROTATE_AND_CROP() { return get_static_field<"SCALER_ROTATE_AND_CROP", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> SENSOR_EXPOSURE_TIME() { return get_static_field<"SENSOR_EXPOSURE_TIME", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> SENSOR_FRAME_DURATION() { return get_static_field<"SENSOR_FRAME_DURATION", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> SENSOR_PIXEL_MODE() { return get_static_field<"SENSOR_PIXEL_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> SENSOR_SENSITIVITY() { return get_static_field<"SENSOR_SENSITIVITY", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> SENSOR_TEST_PATTERN_DATA() { return get_static_field<"SENSOR_TEST_PATTERN_DATA", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> SENSOR_TEST_PATTERN_MODE() { return get_static_field<"SENSOR_TEST_PATTERN_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> SHADING_MODE() { return get_static_field<"SHADING_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> STATISTICS_FACE_DETECT_MODE() { return get_static_field<"STATISTICS_FACE_DETECT_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> STATISTICS_HOT_PIXEL_MAP_MODE() { return get_static_field<"STATISTICS_HOT_PIXEL_MAP_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> STATISTICS_LENS_SHADING_MAP_MODE() { return get_static_field<"STATISTICS_LENS_SHADING_MAP_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> STATISTICS_OIS_DATA_MODE() { return get_static_field<"STATISTICS_OIS_DATA_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> TONEMAP_CURVE() { return get_static_field<"TONEMAP_CURVE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> TONEMAP_GAMMA() { return get_static_field<"TONEMAP_GAMMA", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> TONEMAP_MODE() { return get_static_field<"TONEMAP_MODE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureRequest_Key> TONEMAP_PRESET_CURVE() { return get_static_field<"TONEMAP_PRESET_CURVE", jni::ref<android::hardware::camera2::CaptureRequest_Key>>(); }

	jni::ref<java::lang::Object> get(jni::ref<android::hardware::camera2::CaptureRequest_Key> key) { return call_method<"get", jni::ref<java::lang::Object>>(key); }
	jni::ref<java::util::List> getKeys() { return call_method<"getKeys", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::Object> getTag() { return call_method<"getTag", jni::ref<java::lang::Object>>(); }
	jboolean isReprocess() { return call_method<"isReprocess", jboolean>(); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	CaptureRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAPTUREREQUEST
