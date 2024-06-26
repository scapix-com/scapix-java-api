// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/hardware/camera2/CameraMetadata.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAPTURERESULT_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAPTURERESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::camera2 { class CaptureResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::camera2::CaptureResult>
{
	static constexpr fixed_string class_name = "android/hardware/camera2/CaptureResult";
	using base_classes = std::tuple<scapix::java_api::android::hardware::camera2::CameraMetadata>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAPTURERESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAPTURERESULT)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAPTURERESULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/camera2/CaptureRequest.h>
#include <scapix/java_api/android/hardware/camera2/CaptureResult_Key.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::camera2::CaptureResult : public jni::object_base<"android/hardware/camera2/CaptureResult",
	android::hardware::camera2::CameraMetadata>
{
public:

	using Key = CaptureResult_Key;

	static jni::ref<android::hardware::camera2::CaptureResult_Key> BLACK_LEVEL_LOCK() { return get_static_field<"BLACK_LEVEL_LOCK", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> COLOR_CORRECTION_ABERRATION_MODE() { return get_static_field<"COLOR_CORRECTION_ABERRATION_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> COLOR_CORRECTION_GAINS() { return get_static_field<"COLOR_CORRECTION_GAINS", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> COLOR_CORRECTION_MODE() { return get_static_field<"COLOR_CORRECTION_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> COLOR_CORRECTION_TRANSFORM() { return get_static_field<"COLOR_CORRECTION_TRANSFORM", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AE_ANTIBANDING_MODE() { return get_static_field<"CONTROL_AE_ANTIBANDING_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AE_EXPOSURE_COMPENSATION() { return get_static_field<"CONTROL_AE_EXPOSURE_COMPENSATION", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AE_LOCK() { return get_static_field<"CONTROL_AE_LOCK", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AE_MODE() { return get_static_field<"CONTROL_AE_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AE_PRECAPTURE_TRIGGER() { return get_static_field<"CONTROL_AE_PRECAPTURE_TRIGGER", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AE_REGIONS() { return get_static_field<"CONTROL_AE_REGIONS", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AE_STATE() { return get_static_field<"CONTROL_AE_STATE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AE_TARGET_FPS_RANGE() { return get_static_field<"CONTROL_AE_TARGET_FPS_RANGE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AF_MODE() { return get_static_field<"CONTROL_AF_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AF_REGIONS() { return get_static_field<"CONTROL_AF_REGIONS", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AF_STATE() { return get_static_field<"CONTROL_AF_STATE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AF_TRIGGER() { return get_static_field<"CONTROL_AF_TRIGGER", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AWB_LOCK() { return get_static_field<"CONTROL_AWB_LOCK", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AWB_MODE() { return get_static_field<"CONTROL_AWB_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AWB_REGIONS() { return get_static_field<"CONTROL_AWB_REGIONS", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AWB_STATE() { return get_static_field<"CONTROL_AWB_STATE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_CAPTURE_INTENT() { return get_static_field<"CONTROL_CAPTURE_INTENT", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_EFFECT_MODE() { return get_static_field<"CONTROL_EFFECT_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_ENABLE_ZSL() { return get_static_field<"CONTROL_ENABLE_ZSL", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_MODE() { return get_static_field<"CONTROL_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_POST_RAW_SENSITIVITY_BOOST() { return get_static_field<"CONTROL_POST_RAW_SENSITIVITY_BOOST", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_SCENE_MODE() { return get_static_field<"CONTROL_SCENE_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> CONTROL_VIDEO_STABILIZATION_MODE() { return get_static_field<"CONTROL_VIDEO_STABILIZATION_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> EDGE_MODE() { return get_static_field<"EDGE_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> FLASH_MODE() { return get_static_field<"FLASH_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> FLASH_STATE() { return get_static_field<"FLASH_STATE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> HOT_PIXEL_MODE() { return get_static_field<"HOT_PIXEL_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> JPEG_GPS_LOCATION() { return get_static_field<"JPEG_GPS_LOCATION", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> JPEG_ORIENTATION() { return get_static_field<"JPEG_ORIENTATION", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> JPEG_QUALITY() { return get_static_field<"JPEG_QUALITY", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> JPEG_THUMBNAIL_QUALITY() { return get_static_field<"JPEG_THUMBNAIL_QUALITY", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> JPEG_THUMBNAIL_SIZE() { return get_static_field<"JPEG_THUMBNAIL_SIZE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> LENS_APERTURE() { return get_static_field<"LENS_APERTURE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> LENS_FILTER_DENSITY() { return get_static_field<"LENS_FILTER_DENSITY", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> LENS_FOCAL_LENGTH() { return get_static_field<"LENS_FOCAL_LENGTH", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> LENS_FOCUS_DISTANCE() { return get_static_field<"LENS_FOCUS_DISTANCE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> LENS_FOCUS_RANGE() { return get_static_field<"LENS_FOCUS_RANGE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> LENS_INTRINSIC_CALIBRATION() { return get_static_field<"LENS_INTRINSIC_CALIBRATION", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> LENS_OPTICAL_STABILIZATION_MODE() { return get_static_field<"LENS_OPTICAL_STABILIZATION_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> LENS_POSE_ROTATION() { return get_static_field<"LENS_POSE_ROTATION", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> LENS_POSE_TRANSLATION() { return get_static_field<"LENS_POSE_TRANSLATION", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> LENS_RADIAL_DISTORTION() { return get_static_field<"LENS_RADIAL_DISTORTION", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> LENS_STATE() { return get_static_field<"LENS_STATE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> NOISE_REDUCTION_MODE() { return get_static_field<"NOISE_REDUCTION_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> REPROCESS_EFFECTIVE_EXPOSURE_FACTOR() { return get_static_field<"REPROCESS_EFFECTIVE_EXPOSURE_FACTOR", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> REQUEST_PIPELINE_DEPTH() { return get_static_field<"REQUEST_PIPELINE_DEPTH", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> SCALER_CROP_REGION() { return get_static_field<"SCALER_CROP_REGION", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> SENSOR_DYNAMIC_BLACK_LEVEL() { return get_static_field<"SENSOR_DYNAMIC_BLACK_LEVEL", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> SENSOR_DYNAMIC_WHITE_LEVEL() { return get_static_field<"SENSOR_DYNAMIC_WHITE_LEVEL", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> SENSOR_EXPOSURE_TIME() { return get_static_field<"SENSOR_EXPOSURE_TIME", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> SENSOR_FRAME_DURATION() { return get_static_field<"SENSOR_FRAME_DURATION", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> SENSOR_GREEN_SPLIT() { return get_static_field<"SENSOR_GREEN_SPLIT", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> SENSOR_NEUTRAL_COLOR_POINT() { return get_static_field<"SENSOR_NEUTRAL_COLOR_POINT", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> SENSOR_NOISE_PROFILE() { return get_static_field<"SENSOR_NOISE_PROFILE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> SENSOR_ROLLING_SHUTTER_SKEW() { return get_static_field<"SENSOR_ROLLING_SHUTTER_SKEW", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> SENSOR_SENSITIVITY() { return get_static_field<"SENSOR_SENSITIVITY", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> SENSOR_TEST_PATTERN_DATA() { return get_static_field<"SENSOR_TEST_PATTERN_DATA", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> SENSOR_TEST_PATTERN_MODE() { return get_static_field<"SENSOR_TEST_PATTERN_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> SENSOR_TIMESTAMP() { return get_static_field<"SENSOR_TIMESTAMP", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> SHADING_MODE() { return get_static_field<"SHADING_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> STATISTICS_FACES() { return get_static_field<"STATISTICS_FACES", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> STATISTICS_FACE_DETECT_MODE() { return get_static_field<"STATISTICS_FACE_DETECT_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> STATISTICS_HOT_PIXEL_MAP() { return get_static_field<"STATISTICS_HOT_PIXEL_MAP", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> STATISTICS_HOT_PIXEL_MAP_MODE() { return get_static_field<"STATISTICS_HOT_PIXEL_MAP_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> STATISTICS_LENS_SHADING_CORRECTION_MAP() { return get_static_field<"STATISTICS_LENS_SHADING_CORRECTION_MAP", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> STATISTICS_LENS_SHADING_MAP_MODE() { return get_static_field<"STATISTICS_LENS_SHADING_MAP_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> STATISTICS_SCENE_FLICKER() { return get_static_field<"STATISTICS_SCENE_FLICKER", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> TONEMAP_CURVE() { return get_static_field<"TONEMAP_CURVE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> TONEMAP_GAMMA() { return get_static_field<"TONEMAP_GAMMA", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> TONEMAP_MODE() { return get_static_field<"TONEMAP_MODE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }
	static jni::ref<android::hardware::camera2::CaptureResult_Key> TONEMAP_PRESET_CURVE() { return get_static_field<"TONEMAP_PRESET_CURVE", jni::ref<android::hardware::camera2::CaptureResult_Key>>(); }

	jni::ref<java::lang::Object> get(jni::ref<android::hardware::camera2::CaptureResult_Key> key) { return call_method<"get", jni::ref<java::lang::Object>>(key); }
	jni::ref<java::util::List> getKeys() { return call_method<"getKeys", jni::ref<java::util::List>>(); }
	jni::ref<android::hardware::camera2::CaptureRequest> getRequest() { return call_method<"getRequest", jni::ref<android::hardware::camera2::CaptureRequest>>(); }
	jlong getFrameNumber() { return call_method<"getFrameNumber", jlong>(); }
	jint getSequenceId() { return call_method<"getSequenceId", jint>(); }

protected:

	CaptureResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAPTURERESULT
