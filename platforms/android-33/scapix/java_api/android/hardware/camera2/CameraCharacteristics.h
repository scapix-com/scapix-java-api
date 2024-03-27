// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/hardware/camera2/CameraMetadata.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERACHARACTERISTICS_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERACHARACTERISTICS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::camera2 { class CameraCharacteristics; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::camera2::CameraCharacteristics>
{
	static constexpr fixed_string class_name = "android/hardware/camera2/CameraCharacteristics";
	using base_classes = std::tuple<scapix::java_api::android::hardware::camera2::CameraMetadata>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERACHARACTERISTICS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERACHARACTERISTICS)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERACHARACTERISTICS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/camera2/CameraCharacteristics_Key.h>
#include <scapix/java_api/android/hardware/camera2/params/RecommendedStreamConfigurationMap.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::camera2::CameraCharacteristics : public jni::object_base<"android/hardware/camera2/CameraCharacteristics",
	android::hardware::camera2::CameraMetadata>
{
public:

	using Key = CameraCharacteristics_Key;

	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> AUTOMOTIVE_LENS_FACING() { return get_static_field<"AUTOMOTIVE_LENS_FACING", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> AUTOMOTIVE_LOCATION() { return get_static_field<"AUTOMOTIVE_LOCATION", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> COLOR_CORRECTION_AVAILABLE_ABERRATION_MODES() { return get_static_field<"COLOR_CORRECTION_AVAILABLE_ABERRATION_MODES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> CONTROL_AE_AVAILABLE_ANTIBANDING_MODES() { return get_static_field<"CONTROL_AE_AVAILABLE_ANTIBANDING_MODES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> CONTROL_AE_AVAILABLE_MODES() { return get_static_field<"CONTROL_AE_AVAILABLE_MODES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> CONTROL_AE_AVAILABLE_TARGET_FPS_RANGES() { return get_static_field<"CONTROL_AE_AVAILABLE_TARGET_FPS_RANGES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> CONTROL_AE_COMPENSATION_RANGE() { return get_static_field<"CONTROL_AE_COMPENSATION_RANGE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> CONTROL_AE_COMPENSATION_STEP() { return get_static_field<"CONTROL_AE_COMPENSATION_STEP", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> CONTROL_AE_LOCK_AVAILABLE() { return get_static_field<"CONTROL_AE_LOCK_AVAILABLE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> CONTROL_AF_AVAILABLE_MODES() { return get_static_field<"CONTROL_AF_AVAILABLE_MODES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> CONTROL_AVAILABLE_EFFECTS() { return get_static_field<"CONTROL_AVAILABLE_EFFECTS", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> CONTROL_AVAILABLE_EXTENDED_SCENE_MODE_CAPABILITIES() { return get_static_field<"CONTROL_AVAILABLE_EXTENDED_SCENE_MODE_CAPABILITIES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> CONTROL_AVAILABLE_MODES() { return get_static_field<"CONTROL_AVAILABLE_MODES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> CONTROL_AVAILABLE_SCENE_MODES() { return get_static_field<"CONTROL_AVAILABLE_SCENE_MODES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> CONTROL_AVAILABLE_VIDEO_STABILIZATION_MODES() { return get_static_field<"CONTROL_AVAILABLE_VIDEO_STABILIZATION_MODES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> CONTROL_AWB_AVAILABLE_MODES() { return get_static_field<"CONTROL_AWB_AVAILABLE_MODES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> CONTROL_AWB_LOCK_AVAILABLE() { return get_static_field<"CONTROL_AWB_LOCK_AVAILABLE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> CONTROL_MAX_REGIONS_AE() { return get_static_field<"CONTROL_MAX_REGIONS_AE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> CONTROL_MAX_REGIONS_AF() { return get_static_field<"CONTROL_MAX_REGIONS_AF", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> CONTROL_MAX_REGIONS_AWB() { return get_static_field<"CONTROL_MAX_REGIONS_AWB", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> CONTROL_POST_RAW_SENSITIVITY_BOOST_RANGE() { return get_static_field<"CONTROL_POST_RAW_SENSITIVITY_BOOST_RANGE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> CONTROL_ZOOM_RATIO_RANGE() { return get_static_field<"CONTROL_ZOOM_RATIO_RANGE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> DEPTH_DEPTH_IS_EXCLUSIVE() { return get_static_field<"DEPTH_DEPTH_IS_EXCLUSIVE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> DISTORTION_CORRECTION_AVAILABLE_MODES() { return get_static_field<"DISTORTION_CORRECTION_AVAILABLE_MODES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> EDGE_AVAILABLE_EDGE_MODES() { return get_static_field<"EDGE_AVAILABLE_EDGE_MODES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> FLASH_INFO_AVAILABLE() { return get_static_field<"FLASH_INFO_AVAILABLE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> FLASH_INFO_STRENGTH_DEFAULT_LEVEL() { return get_static_field<"FLASH_INFO_STRENGTH_DEFAULT_LEVEL", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> FLASH_INFO_STRENGTH_MAXIMUM_LEVEL() { return get_static_field<"FLASH_INFO_STRENGTH_MAXIMUM_LEVEL", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> HOT_PIXEL_AVAILABLE_HOT_PIXEL_MODES() { return get_static_field<"HOT_PIXEL_AVAILABLE_HOT_PIXEL_MODES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> INFO_DEVICE_STATE_SENSOR_ORIENTATION_MAP() { return get_static_field<"INFO_DEVICE_STATE_SENSOR_ORIENTATION_MAP", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> INFO_SUPPORTED_HARDWARE_LEVEL() { return get_static_field<"INFO_SUPPORTED_HARDWARE_LEVEL", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> INFO_VERSION() { return get_static_field<"INFO_VERSION", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> JPEG_AVAILABLE_THUMBNAIL_SIZES() { return get_static_field<"JPEG_AVAILABLE_THUMBNAIL_SIZES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> LENS_DISTORTION() { return get_static_field<"LENS_DISTORTION", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> LENS_DISTORTION_MAXIMUM_RESOLUTION() { return get_static_field<"LENS_DISTORTION_MAXIMUM_RESOLUTION", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> LENS_FACING() { return get_static_field<"LENS_FACING", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> LENS_INFO_AVAILABLE_APERTURES() { return get_static_field<"LENS_INFO_AVAILABLE_APERTURES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> LENS_INFO_AVAILABLE_FILTER_DENSITIES() { return get_static_field<"LENS_INFO_AVAILABLE_FILTER_DENSITIES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> LENS_INFO_AVAILABLE_FOCAL_LENGTHS() { return get_static_field<"LENS_INFO_AVAILABLE_FOCAL_LENGTHS", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> LENS_INFO_AVAILABLE_OPTICAL_STABILIZATION() { return get_static_field<"LENS_INFO_AVAILABLE_OPTICAL_STABILIZATION", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> LENS_INFO_FOCUS_DISTANCE_CALIBRATION() { return get_static_field<"LENS_INFO_FOCUS_DISTANCE_CALIBRATION", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> LENS_INFO_HYPERFOCAL_DISTANCE() { return get_static_field<"LENS_INFO_HYPERFOCAL_DISTANCE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> LENS_INFO_MINIMUM_FOCUS_DISTANCE() { return get_static_field<"LENS_INFO_MINIMUM_FOCUS_DISTANCE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> LENS_INTRINSIC_CALIBRATION() { return get_static_field<"LENS_INTRINSIC_CALIBRATION", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> LENS_INTRINSIC_CALIBRATION_MAXIMUM_RESOLUTION() { return get_static_field<"LENS_INTRINSIC_CALIBRATION_MAXIMUM_RESOLUTION", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> LENS_POSE_REFERENCE() { return get_static_field<"LENS_POSE_REFERENCE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> LENS_POSE_ROTATION() { return get_static_field<"LENS_POSE_ROTATION", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> LENS_POSE_TRANSLATION() { return get_static_field<"LENS_POSE_TRANSLATION", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> LENS_RADIAL_DISTORTION() { return get_static_field<"LENS_RADIAL_DISTORTION", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE() { return get_static_field<"LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> NOISE_REDUCTION_AVAILABLE_NOISE_REDUCTION_MODES() { return get_static_field<"NOISE_REDUCTION_AVAILABLE_NOISE_REDUCTION_MODES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> REPROCESS_MAX_CAPTURE_STALL() { return get_static_field<"REPROCESS_MAX_CAPTURE_STALL", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> REQUEST_AVAILABLE_CAPABILITIES() { return get_static_field<"REQUEST_AVAILABLE_CAPABILITIES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> REQUEST_AVAILABLE_DYNAMIC_RANGE_PROFILES() { return get_static_field<"REQUEST_AVAILABLE_DYNAMIC_RANGE_PROFILES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> REQUEST_MAX_NUM_INPUT_STREAMS() { return get_static_field<"REQUEST_MAX_NUM_INPUT_STREAMS", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> REQUEST_MAX_NUM_OUTPUT_PROC() { return get_static_field<"REQUEST_MAX_NUM_OUTPUT_PROC", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> REQUEST_MAX_NUM_OUTPUT_PROC_STALLING() { return get_static_field<"REQUEST_MAX_NUM_OUTPUT_PROC_STALLING", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> REQUEST_MAX_NUM_OUTPUT_RAW() { return get_static_field<"REQUEST_MAX_NUM_OUTPUT_RAW", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> REQUEST_PARTIAL_RESULT_COUNT() { return get_static_field<"REQUEST_PARTIAL_RESULT_COUNT", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> REQUEST_PIPELINE_MAX_DEPTH() { return get_static_field<"REQUEST_PIPELINE_MAX_DEPTH", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> REQUEST_RECOMMENDED_TEN_BIT_DYNAMIC_RANGE_PROFILE() { return get_static_field<"REQUEST_RECOMMENDED_TEN_BIT_DYNAMIC_RANGE_PROFILE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SCALER_AVAILABLE_MAX_DIGITAL_ZOOM() { return get_static_field<"SCALER_AVAILABLE_MAX_DIGITAL_ZOOM", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SCALER_AVAILABLE_ROTATE_AND_CROP_MODES() { return get_static_field<"SCALER_AVAILABLE_ROTATE_AND_CROP_MODES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SCALER_AVAILABLE_STREAM_USE_CASES() { return get_static_field<"SCALER_AVAILABLE_STREAM_USE_CASES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SCALER_CROPPING_TYPE() { return get_static_field<"SCALER_CROPPING_TYPE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SCALER_DEFAULT_SECURE_IMAGE_SIZE() { return get_static_field<"SCALER_DEFAULT_SECURE_IMAGE_SIZE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SCALER_MANDATORY_CONCURRENT_STREAM_COMBINATIONS() { return get_static_field<"SCALER_MANDATORY_CONCURRENT_STREAM_COMBINATIONS", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SCALER_MANDATORY_MAXIMUM_RESOLUTION_STREAM_COMBINATIONS() { return get_static_field<"SCALER_MANDATORY_MAXIMUM_RESOLUTION_STREAM_COMBINATIONS", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SCALER_MANDATORY_PREVIEW_STABILIZATION_OUTPUT_STREAM_COMBINATIONS() { return get_static_field<"SCALER_MANDATORY_PREVIEW_STABILIZATION_OUTPUT_STREAM_COMBINATIONS", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SCALER_MANDATORY_STREAM_COMBINATIONS() { return get_static_field<"SCALER_MANDATORY_STREAM_COMBINATIONS", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SCALER_MANDATORY_TEN_BIT_OUTPUT_STREAM_COMBINATIONS() { return get_static_field<"SCALER_MANDATORY_TEN_BIT_OUTPUT_STREAM_COMBINATIONS", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SCALER_MANDATORY_USE_CASE_STREAM_COMBINATIONS() { return get_static_field<"SCALER_MANDATORY_USE_CASE_STREAM_COMBINATIONS", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SCALER_MULTI_RESOLUTION_STREAM_CONFIGURATION_MAP() { return get_static_field<"SCALER_MULTI_RESOLUTION_STREAM_CONFIGURATION_MAP", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SCALER_STREAM_CONFIGURATION_MAP() { return get_static_field<"SCALER_STREAM_CONFIGURATION_MAP", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SCALER_STREAM_CONFIGURATION_MAP_MAXIMUM_RESOLUTION() { return get_static_field<"SCALER_STREAM_CONFIGURATION_MAP_MAXIMUM_RESOLUTION", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_AVAILABLE_TEST_PATTERN_MODES() { return get_static_field<"SENSOR_AVAILABLE_TEST_PATTERN_MODES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_BLACK_LEVEL_PATTERN() { return get_static_field<"SENSOR_BLACK_LEVEL_PATTERN", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_CALIBRATION_TRANSFORM1() { return get_static_field<"SENSOR_CALIBRATION_TRANSFORM1", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_CALIBRATION_TRANSFORM2() { return get_static_field<"SENSOR_CALIBRATION_TRANSFORM2", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_COLOR_TRANSFORM1() { return get_static_field<"SENSOR_COLOR_TRANSFORM1", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_COLOR_TRANSFORM2() { return get_static_field<"SENSOR_COLOR_TRANSFORM2", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_FORWARD_MATRIX1() { return get_static_field<"SENSOR_FORWARD_MATRIX1", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_FORWARD_MATRIX2() { return get_static_field<"SENSOR_FORWARD_MATRIX2", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_INFO_ACTIVE_ARRAY_SIZE() { return get_static_field<"SENSOR_INFO_ACTIVE_ARRAY_SIZE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_INFO_ACTIVE_ARRAY_SIZE_MAXIMUM_RESOLUTION() { return get_static_field<"SENSOR_INFO_ACTIVE_ARRAY_SIZE_MAXIMUM_RESOLUTION", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_INFO_BINNING_FACTOR() { return get_static_field<"SENSOR_INFO_BINNING_FACTOR", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_INFO_COLOR_FILTER_ARRANGEMENT() { return get_static_field<"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_INFO_EXPOSURE_TIME_RANGE() { return get_static_field<"SENSOR_INFO_EXPOSURE_TIME_RANGE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_INFO_LENS_SHADING_APPLIED() { return get_static_field<"SENSOR_INFO_LENS_SHADING_APPLIED", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_INFO_MAX_FRAME_DURATION() { return get_static_field<"SENSOR_INFO_MAX_FRAME_DURATION", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_INFO_PHYSICAL_SIZE() { return get_static_field<"SENSOR_INFO_PHYSICAL_SIZE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_INFO_PIXEL_ARRAY_SIZE() { return get_static_field<"SENSOR_INFO_PIXEL_ARRAY_SIZE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_INFO_PIXEL_ARRAY_SIZE_MAXIMUM_RESOLUTION() { return get_static_field<"SENSOR_INFO_PIXEL_ARRAY_SIZE_MAXIMUM_RESOLUTION", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_INFO_PRE_CORRECTION_ACTIVE_ARRAY_SIZE() { return get_static_field<"SENSOR_INFO_PRE_CORRECTION_ACTIVE_ARRAY_SIZE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_INFO_PRE_CORRECTION_ACTIVE_ARRAY_SIZE_MAXIMUM_RESOLUTION() { return get_static_field<"SENSOR_INFO_PRE_CORRECTION_ACTIVE_ARRAY_SIZE_MAXIMUM_RESOLUTION", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_INFO_SENSITIVITY_RANGE() { return get_static_field<"SENSOR_INFO_SENSITIVITY_RANGE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_INFO_TIMESTAMP_SOURCE() { return get_static_field<"SENSOR_INFO_TIMESTAMP_SOURCE", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_INFO_WHITE_LEVEL() { return get_static_field<"SENSOR_INFO_WHITE_LEVEL", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_MAX_ANALOG_SENSITIVITY() { return get_static_field<"SENSOR_MAX_ANALOG_SENSITIVITY", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_OPTICAL_BLACK_REGIONS() { return get_static_field<"SENSOR_OPTICAL_BLACK_REGIONS", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_ORIENTATION() { return get_static_field<"SENSOR_ORIENTATION", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_REFERENCE_ILLUMINANT1() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT1", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SENSOR_REFERENCE_ILLUMINANT2() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT2", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SHADING_AVAILABLE_MODES() { return get_static_field<"SHADING_AVAILABLE_MODES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> STATISTICS_INFO_AVAILABLE_FACE_DETECT_MODES() { return get_static_field<"STATISTICS_INFO_AVAILABLE_FACE_DETECT_MODES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> STATISTICS_INFO_AVAILABLE_HOT_PIXEL_MAP_MODES() { return get_static_field<"STATISTICS_INFO_AVAILABLE_HOT_PIXEL_MAP_MODES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> STATISTICS_INFO_AVAILABLE_LENS_SHADING_MAP_MODES() { return get_static_field<"STATISTICS_INFO_AVAILABLE_LENS_SHADING_MAP_MODES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> STATISTICS_INFO_AVAILABLE_OIS_DATA_MODES() { return get_static_field<"STATISTICS_INFO_AVAILABLE_OIS_DATA_MODES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> STATISTICS_INFO_MAX_FACE_COUNT() { return get_static_field<"STATISTICS_INFO_MAX_FACE_COUNT", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> SYNC_MAX_LATENCY() { return get_static_field<"SYNC_MAX_LATENCY", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> TONEMAP_AVAILABLE_TONE_MAP_MODES() { return get_static_field<"TONEMAP_AVAILABLE_TONE_MAP_MODES", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }
	static jni::ref<android::hardware::camera2::CameraCharacteristics_Key> TONEMAP_MAX_CURVE_POINTS() { return get_static_field<"TONEMAP_MAX_CURVE_POINTS", jni::ref<android::hardware::camera2::CameraCharacteristics_Key>>(); }

	jni::ref<java::lang::Object> get(jni::ref<android::hardware::camera2::CameraCharacteristics_Key> key) { return call_method<"get", jni::ref<java::lang::Object>>(key); }
	jni::ref<java::util::List> getKeys() { return call_method<"getKeys", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getKeysNeedingPermission() { return call_method<"getKeysNeedingPermission", jni::ref<java::util::List>>(); }
	jni::ref<android::hardware::camera2::params::RecommendedStreamConfigurationMap> getRecommendedStreamConfigurationMap(jint usecase) { return call_method<"getRecommendedStreamConfigurationMap", jni::ref<android::hardware::camera2::params::RecommendedStreamConfigurationMap>>(usecase); }
	jni::ref<java::util::List> getAvailableSessionKeys() { return call_method<"getAvailableSessionKeys", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getAvailablePhysicalCameraRequestKeys() { return call_method<"getAvailablePhysicalCameraRequestKeys", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getAvailableCaptureRequestKeys() { return call_method<"getAvailableCaptureRequestKeys", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getAvailableCaptureResultKeys() { return call_method<"getAvailableCaptureResultKeys", jni::ref<java::util::List>>(); }
	jni::ref<java::util::Set> getPhysicalCameraIds() { return call_method<"getPhysicalCameraIds", jni::ref<java::util::Set>>(); }

protected:

	CameraCharacteristics(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERACHARACTERISTICS
