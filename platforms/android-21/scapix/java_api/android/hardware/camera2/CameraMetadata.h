// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAMETADATA_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAMETADATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::camera2 { class CameraMetadata; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::camera2::CameraMetadata>
{
	static constexpr fixed_string class_name = "android/hardware/camera2/CameraMetadata";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAMETADATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAMETADATA)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAMETADATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::camera2::CameraMetadata : public jni::object_base<"android/hardware/camera2/CameraMetadata",
	java::lang::Object>
{
public:

	static jint COLOR_CORRECTION_ABERRATION_MODE_FAST() { return get_static_field<"COLOR_CORRECTION_ABERRATION_MODE_FAST", jint>(); }
	static jint COLOR_CORRECTION_ABERRATION_MODE_HIGH_QUALITY() { return get_static_field<"COLOR_CORRECTION_ABERRATION_MODE_HIGH_QUALITY", jint>(); }
	static jint COLOR_CORRECTION_ABERRATION_MODE_OFF() { return get_static_field<"COLOR_CORRECTION_ABERRATION_MODE_OFF", jint>(); }
	static jint COLOR_CORRECTION_MODE_FAST() { return get_static_field<"COLOR_CORRECTION_MODE_FAST", jint>(); }
	static jint COLOR_CORRECTION_MODE_HIGH_QUALITY() { return get_static_field<"COLOR_CORRECTION_MODE_HIGH_QUALITY", jint>(); }
	static jint COLOR_CORRECTION_MODE_TRANSFORM_MATRIX() { return get_static_field<"COLOR_CORRECTION_MODE_TRANSFORM_MATRIX", jint>(); }
	static jint CONTROL_AE_ANTIBANDING_MODE_50HZ() { return get_static_field<"CONTROL_AE_ANTIBANDING_MODE_50HZ", jint>(); }
	static jint CONTROL_AE_ANTIBANDING_MODE_60HZ() { return get_static_field<"CONTROL_AE_ANTIBANDING_MODE_60HZ", jint>(); }
	static jint CONTROL_AE_ANTIBANDING_MODE_AUTO() { return get_static_field<"CONTROL_AE_ANTIBANDING_MODE_AUTO", jint>(); }
	static jint CONTROL_AE_ANTIBANDING_MODE_OFF() { return get_static_field<"CONTROL_AE_ANTIBANDING_MODE_OFF", jint>(); }
	static jint CONTROL_AE_MODE_OFF() { return get_static_field<"CONTROL_AE_MODE_OFF", jint>(); }
	static jint CONTROL_AE_MODE_ON() { return get_static_field<"CONTROL_AE_MODE_ON", jint>(); }
	static jint CONTROL_AE_MODE_ON_ALWAYS_FLASH() { return get_static_field<"CONTROL_AE_MODE_ON_ALWAYS_FLASH", jint>(); }
	static jint CONTROL_AE_MODE_ON_AUTO_FLASH() { return get_static_field<"CONTROL_AE_MODE_ON_AUTO_FLASH", jint>(); }
	static jint CONTROL_AE_MODE_ON_AUTO_FLASH_REDEYE() { return get_static_field<"CONTROL_AE_MODE_ON_AUTO_FLASH_REDEYE", jint>(); }
	static jint CONTROL_AE_PRECAPTURE_TRIGGER_IDLE() { return get_static_field<"CONTROL_AE_PRECAPTURE_TRIGGER_IDLE", jint>(); }
	static jint CONTROL_AE_PRECAPTURE_TRIGGER_START() { return get_static_field<"CONTROL_AE_PRECAPTURE_TRIGGER_START", jint>(); }
	static jint CONTROL_AE_STATE_CONVERGED() { return get_static_field<"CONTROL_AE_STATE_CONVERGED", jint>(); }
	static jint CONTROL_AE_STATE_FLASH_REQUIRED() { return get_static_field<"CONTROL_AE_STATE_FLASH_REQUIRED", jint>(); }
	static jint CONTROL_AE_STATE_INACTIVE() { return get_static_field<"CONTROL_AE_STATE_INACTIVE", jint>(); }
	static jint CONTROL_AE_STATE_LOCKED() { return get_static_field<"CONTROL_AE_STATE_LOCKED", jint>(); }
	static jint CONTROL_AE_STATE_PRECAPTURE() { return get_static_field<"CONTROL_AE_STATE_PRECAPTURE", jint>(); }
	static jint CONTROL_AE_STATE_SEARCHING() { return get_static_field<"CONTROL_AE_STATE_SEARCHING", jint>(); }
	static jint CONTROL_AF_MODE_AUTO() { return get_static_field<"CONTROL_AF_MODE_AUTO", jint>(); }
	static jint CONTROL_AF_MODE_CONTINUOUS_PICTURE() { return get_static_field<"CONTROL_AF_MODE_CONTINUOUS_PICTURE", jint>(); }
	static jint CONTROL_AF_MODE_CONTINUOUS_VIDEO() { return get_static_field<"CONTROL_AF_MODE_CONTINUOUS_VIDEO", jint>(); }
	static jint CONTROL_AF_MODE_EDOF() { return get_static_field<"CONTROL_AF_MODE_EDOF", jint>(); }
	static jint CONTROL_AF_MODE_MACRO() { return get_static_field<"CONTROL_AF_MODE_MACRO", jint>(); }
	static jint CONTROL_AF_MODE_OFF() { return get_static_field<"CONTROL_AF_MODE_OFF", jint>(); }
	static jint CONTROL_AF_STATE_ACTIVE_SCAN() { return get_static_field<"CONTROL_AF_STATE_ACTIVE_SCAN", jint>(); }
	static jint CONTROL_AF_STATE_FOCUSED_LOCKED() { return get_static_field<"CONTROL_AF_STATE_FOCUSED_LOCKED", jint>(); }
	static jint CONTROL_AF_STATE_INACTIVE() { return get_static_field<"CONTROL_AF_STATE_INACTIVE", jint>(); }
	static jint CONTROL_AF_STATE_NOT_FOCUSED_LOCKED() { return get_static_field<"CONTROL_AF_STATE_NOT_FOCUSED_LOCKED", jint>(); }
	static jint CONTROL_AF_STATE_PASSIVE_FOCUSED() { return get_static_field<"CONTROL_AF_STATE_PASSIVE_FOCUSED", jint>(); }
	static jint CONTROL_AF_STATE_PASSIVE_SCAN() { return get_static_field<"CONTROL_AF_STATE_PASSIVE_SCAN", jint>(); }
	static jint CONTROL_AF_STATE_PASSIVE_UNFOCUSED() { return get_static_field<"CONTROL_AF_STATE_PASSIVE_UNFOCUSED", jint>(); }
	static jint CONTROL_AF_TRIGGER_CANCEL() { return get_static_field<"CONTROL_AF_TRIGGER_CANCEL", jint>(); }
	static jint CONTROL_AF_TRIGGER_IDLE() { return get_static_field<"CONTROL_AF_TRIGGER_IDLE", jint>(); }
	static jint CONTROL_AF_TRIGGER_START() { return get_static_field<"CONTROL_AF_TRIGGER_START", jint>(); }
	static jint CONTROL_AWB_MODE_AUTO() { return get_static_field<"CONTROL_AWB_MODE_AUTO", jint>(); }
	static jint CONTROL_AWB_MODE_CLOUDY_DAYLIGHT() { return get_static_field<"CONTROL_AWB_MODE_CLOUDY_DAYLIGHT", jint>(); }
	static jint CONTROL_AWB_MODE_DAYLIGHT() { return get_static_field<"CONTROL_AWB_MODE_DAYLIGHT", jint>(); }
	static jint CONTROL_AWB_MODE_FLUORESCENT() { return get_static_field<"CONTROL_AWB_MODE_FLUORESCENT", jint>(); }
	static jint CONTROL_AWB_MODE_INCANDESCENT() { return get_static_field<"CONTROL_AWB_MODE_INCANDESCENT", jint>(); }
	static jint CONTROL_AWB_MODE_OFF() { return get_static_field<"CONTROL_AWB_MODE_OFF", jint>(); }
	static jint CONTROL_AWB_MODE_SHADE() { return get_static_field<"CONTROL_AWB_MODE_SHADE", jint>(); }
	static jint CONTROL_AWB_MODE_TWILIGHT() { return get_static_field<"CONTROL_AWB_MODE_TWILIGHT", jint>(); }
	static jint CONTROL_AWB_MODE_WARM_FLUORESCENT() { return get_static_field<"CONTROL_AWB_MODE_WARM_FLUORESCENT", jint>(); }
	static jint CONTROL_AWB_STATE_CONVERGED() { return get_static_field<"CONTROL_AWB_STATE_CONVERGED", jint>(); }
	static jint CONTROL_AWB_STATE_INACTIVE() { return get_static_field<"CONTROL_AWB_STATE_INACTIVE", jint>(); }
	static jint CONTROL_AWB_STATE_LOCKED() { return get_static_field<"CONTROL_AWB_STATE_LOCKED", jint>(); }
	static jint CONTROL_AWB_STATE_SEARCHING() { return get_static_field<"CONTROL_AWB_STATE_SEARCHING", jint>(); }
	static jint CONTROL_CAPTURE_INTENT_CUSTOM() { return get_static_field<"CONTROL_CAPTURE_INTENT_CUSTOM", jint>(); }
	static jint CONTROL_CAPTURE_INTENT_MANUAL() { return get_static_field<"CONTROL_CAPTURE_INTENT_MANUAL", jint>(); }
	static jint CONTROL_CAPTURE_INTENT_PREVIEW() { return get_static_field<"CONTROL_CAPTURE_INTENT_PREVIEW", jint>(); }
	static jint CONTROL_CAPTURE_INTENT_STILL_CAPTURE() { return get_static_field<"CONTROL_CAPTURE_INTENT_STILL_CAPTURE", jint>(); }
	static jint CONTROL_CAPTURE_INTENT_VIDEO_RECORD() { return get_static_field<"CONTROL_CAPTURE_INTENT_VIDEO_RECORD", jint>(); }
	static jint CONTROL_CAPTURE_INTENT_VIDEO_SNAPSHOT() { return get_static_field<"CONTROL_CAPTURE_INTENT_VIDEO_SNAPSHOT", jint>(); }
	static jint CONTROL_CAPTURE_INTENT_ZERO_SHUTTER_LAG() { return get_static_field<"CONTROL_CAPTURE_INTENT_ZERO_SHUTTER_LAG", jint>(); }
	static jint CONTROL_EFFECT_MODE_AQUA() { return get_static_field<"CONTROL_EFFECT_MODE_AQUA", jint>(); }
	static jint CONTROL_EFFECT_MODE_BLACKBOARD() { return get_static_field<"CONTROL_EFFECT_MODE_BLACKBOARD", jint>(); }
	static jint CONTROL_EFFECT_MODE_MONO() { return get_static_field<"CONTROL_EFFECT_MODE_MONO", jint>(); }
	static jint CONTROL_EFFECT_MODE_NEGATIVE() { return get_static_field<"CONTROL_EFFECT_MODE_NEGATIVE", jint>(); }
	static jint CONTROL_EFFECT_MODE_OFF() { return get_static_field<"CONTROL_EFFECT_MODE_OFF", jint>(); }
	static jint CONTROL_EFFECT_MODE_POSTERIZE() { return get_static_field<"CONTROL_EFFECT_MODE_POSTERIZE", jint>(); }
	static jint CONTROL_EFFECT_MODE_SEPIA() { return get_static_field<"CONTROL_EFFECT_MODE_SEPIA", jint>(); }
	static jint CONTROL_EFFECT_MODE_SOLARIZE() { return get_static_field<"CONTROL_EFFECT_MODE_SOLARIZE", jint>(); }
	static jint CONTROL_EFFECT_MODE_WHITEBOARD() { return get_static_field<"CONTROL_EFFECT_MODE_WHITEBOARD", jint>(); }
	static jint CONTROL_MODE_AUTO() { return get_static_field<"CONTROL_MODE_AUTO", jint>(); }
	static jint CONTROL_MODE_OFF() { return get_static_field<"CONTROL_MODE_OFF", jint>(); }
	static jint CONTROL_MODE_OFF_KEEP_STATE() { return get_static_field<"CONTROL_MODE_OFF_KEEP_STATE", jint>(); }
	static jint CONTROL_MODE_USE_SCENE_MODE() { return get_static_field<"CONTROL_MODE_USE_SCENE_MODE", jint>(); }
	static jint CONTROL_SCENE_MODE_ACTION() { return get_static_field<"CONTROL_SCENE_MODE_ACTION", jint>(); }
	static jint CONTROL_SCENE_MODE_BARCODE() { return get_static_field<"CONTROL_SCENE_MODE_BARCODE", jint>(); }
	static jint CONTROL_SCENE_MODE_BEACH() { return get_static_field<"CONTROL_SCENE_MODE_BEACH", jint>(); }
	static jint CONTROL_SCENE_MODE_CANDLELIGHT() { return get_static_field<"CONTROL_SCENE_MODE_CANDLELIGHT", jint>(); }
	static jint CONTROL_SCENE_MODE_DISABLED() { return get_static_field<"CONTROL_SCENE_MODE_DISABLED", jint>(); }
	static jint CONTROL_SCENE_MODE_FACE_PRIORITY() { return get_static_field<"CONTROL_SCENE_MODE_FACE_PRIORITY", jint>(); }
	static jint CONTROL_SCENE_MODE_FIREWORKS() { return get_static_field<"CONTROL_SCENE_MODE_FIREWORKS", jint>(); }
	static jint CONTROL_SCENE_MODE_HIGH_SPEED_VIDEO() { return get_static_field<"CONTROL_SCENE_MODE_HIGH_SPEED_VIDEO", jint>(); }
	static jint CONTROL_SCENE_MODE_LANDSCAPE() { return get_static_field<"CONTROL_SCENE_MODE_LANDSCAPE", jint>(); }
	static jint CONTROL_SCENE_MODE_NIGHT() { return get_static_field<"CONTROL_SCENE_MODE_NIGHT", jint>(); }
	static jint CONTROL_SCENE_MODE_NIGHT_PORTRAIT() { return get_static_field<"CONTROL_SCENE_MODE_NIGHT_PORTRAIT", jint>(); }
	static jint CONTROL_SCENE_MODE_PARTY() { return get_static_field<"CONTROL_SCENE_MODE_PARTY", jint>(); }
	static jint CONTROL_SCENE_MODE_PORTRAIT() { return get_static_field<"CONTROL_SCENE_MODE_PORTRAIT", jint>(); }
	static jint CONTROL_SCENE_MODE_SNOW() { return get_static_field<"CONTROL_SCENE_MODE_SNOW", jint>(); }
	static jint CONTROL_SCENE_MODE_SPORTS() { return get_static_field<"CONTROL_SCENE_MODE_SPORTS", jint>(); }
	static jint CONTROL_SCENE_MODE_STEADYPHOTO() { return get_static_field<"CONTROL_SCENE_MODE_STEADYPHOTO", jint>(); }
	static jint CONTROL_SCENE_MODE_SUNSET() { return get_static_field<"CONTROL_SCENE_MODE_SUNSET", jint>(); }
	static jint CONTROL_SCENE_MODE_THEATRE() { return get_static_field<"CONTROL_SCENE_MODE_THEATRE", jint>(); }
	static jint CONTROL_VIDEO_STABILIZATION_MODE_OFF() { return get_static_field<"CONTROL_VIDEO_STABILIZATION_MODE_OFF", jint>(); }
	static jint CONTROL_VIDEO_STABILIZATION_MODE_ON() { return get_static_field<"CONTROL_VIDEO_STABILIZATION_MODE_ON", jint>(); }
	static jint EDGE_MODE_FAST() { return get_static_field<"EDGE_MODE_FAST", jint>(); }
	static jint EDGE_MODE_HIGH_QUALITY() { return get_static_field<"EDGE_MODE_HIGH_QUALITY", jint>(); }
	static jint EDGE_MODE_OFF() { return get_static_field<"EDGE_MODE_OFF", jint>(); }
	static jint FLASH_MODE_OFF() { return get_static_field<"FLASH_MODE_OFF", jint>(); }
	static jint FLASH_MODE_SINGLE() { return get_static_field<"FLASH_MODE_SINGLE", jint>(); }
	static jint FLASH_MODE_TORCH() { return get_static_field<"FLASH_MODE_TORCH", jint>(); }
	static jint FLASH_STATE_CHARGING() { return get_static_field<"FLASH_STATE_CHARGING", jint>(); }
	static jint FLASH_STATE_FIRED() { return get_static_field<"FLASH_STATE_FIRED", jint>(); }
	static jint FLASH_STATE_PARTIAL() { return get_static_field<"FLASH_STATE_PARTIAL", jint>(); }
	static jint FLASH_STATE_READY() { return get_static_field<"FLASH_STATE_READY", jint>(); }
	static jint FLASH_STATE_UNAVAILABLE() { return get_static_field<"FLASH_STATE_UNAVAILABLE", jint>(); }
	static jint HOT_PIXEL_MODE_FAST() { return get_static_field<"HOT_PIXEL_MODE_FAST", jint>(); }
	static jint HOT_PIXEL_MODE_HIGH_QUALITY() { return get_static_field<"HOT_PIXEL_MODE_HIGH_QUALITY", jint>(); }
	static jint HOT_PIXEL_MODE_OFF() { return get_static_field<"HOT_PIXEL_MODE_OFF", jint>(); }
	static jint INFO_SUPPORTED_HARDWARE_LEVEL_FULL() { return get_static_field<"INFO_SUPPORTED_HARDWARE_LEVEL_FULL", jint>(); }
	static jint INFO_SUPPORTED_HARDWARE_LEVEL_LEGACY() { return get_static_field<"INFO_SUPPORTED_HARDWARE_LEVEL_LEGACY", jint>(); }
	static jint INFO_SUPPORTED_HARDWARE_LEVEL_LIMITED() { return get_static_field<"INFO_SUPPORTED_HARDWARE_LEVEL_LIMITED", jint>(); }
	static jint LENS_FACING_BACK() { return get_static_field<"LENS_FACING_BACK", jint>(); }
	static jint LENS_FACING_FRONT() { return get_static_field<"LENS_FACING_FRONT", jint>(); }
	static jint LENS_INFO_FOCUS_DISTANCE_CALIBRATION_APPROXIMATE() { return get_static_field<"LENS_INFO_FOCUS_DISTANCE_CALIBRATION_APPROXIMATE", jint>(); }
	static jint LENS_INFO_FOCUS_DISTANCE_CALIBRATION_CALIBRATED() { return get_static_field<"LENS_INFO_FOCUS_DISTANCE_CALIBRATION_CALIBRATED", jint>(); }
	static jint LENS_INFO_FOCUS_DISTANCE_CALIBRATION_UNCALIBRATED() { return get_static_field<"LENS_INFO_FOCUS_DISTANCE_CALIBRATION_UNCALIBRATED", jint>(); }
	static jint LENS_OPTICAL_STABILIZATION_MODE_OFF() { return get_static_field<"LENS_OPTICAL_STABILIZATION_MODE_OFF", jint>(); }
	static jint LENS_OPTICAL_STABILIZATION_MODE_ON() { return get_static_field<"LENS_OPTICAL_STABILIZATION_MODE_ON", jint>(); }
	static jint LENS_STATE_MOVING() { return get_static_field<"LENS_STATE_MOVING", jint>(); }
	static jint LENS_STATE_STATIONARY() { return get_static_field<"LENS_STATE_STATIONARY", jint>(); }
	static jint NOISE_REDUCTION_MODE_FAST() { return get_static_field<"NOISE_REDUCTION_MODE_FAST", jint>(); }
	static jint NOISE_REDUCTION_MODE_HIGH_QUALITY() { return get_static_field<"NOISE_REDUCTION_MODE_HIGH_QUALITY", jint>(); }
	static jint NOISE_REDUCTION_MODE_OFF() { return get_static_field<"NOISE_REDUCTION_MODE_OFF", jint>(); }
	static jint REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE() { return get_static_field<"REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE", jint>(); }
	static jint REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING() { return get_static_field<"REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING", jint>(); }
	static jint REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR() { return get_static_field<"REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR", jint>(); }
	static jint REQUEST_AVAILABLE_CAPABILITIES_RAW() { return get_static_field<"REQUEST_AVAILABLE_CAPABILITIES_RAW", jint>(); }
	static jint SCALER_CROPPING_TYPE_CENTER_ONLY() { return get_static_field<"SCALER_CROPPING_TYPE_CENTER_ONLY", jint>(); }
	static jint SCALER_CROPPING_TYPE_FREEFORM() { return get_static_field<"SCALER_CROPPING_TYPE_FREEFORM", jint>(); }
	static jint SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_BGGR() { return get_static_field<"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_BGGR", jint>(); }
	static jint SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GBRG() { return get_static_field<"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GBRG", jint>(); }
	static jint SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GRBG() { return get_static_field<"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GRBG", jint>(); }
	static jint SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGB() { return get_static_field<"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGB", jint>(); }
	static jint SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGGB() { return get_static_field<"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGGB", jint>(); }
	static jint SENSOR_INFO_TIMESTAMP_SOURCE_REALTIME() { return get_static_field<"SENSOR_INFO_TIMESTAMP_SOURCE_REALTIME", jint>(); }
	static jint SENSOR_INFO_TIMESTAMP_SOURCE_UNKNOWN() { return get_static_field<"SENSOR_INFO_TIMESTAMP_SOURCE_UNKNOWN", jint>(); }
	static jint SENSOR_REFERENCE_ILLUMINANT1_CLOUDY_WEATHER() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT1_CLOUDY_WEATHER", jint>(); }
	static jint SENSOR_REFERENCE_ILLUMINANT1_COOL_WHITE_FLUORESCENT() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT1_COOL_WHITE_FLUORESCENT", jint>(); }
	static jint SENSOR_REFERENCE_ILLUMINANT1_D50() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT1_D50", jint>(); }
	static jint SENSOR_REFERENCE_ILLUMINANT1_D55() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT1_D55", jint>(); }
	static jint SENSOR_REFERENCE_ILLUMINANT1_D65() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT1_D65", jint>(); }
	static jint SENSOR_REFERENCE_ILLUMINANT1_D75() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT1_D75", jint>(); }
	static jint SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT", jint>(); }
	static jint SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT_FLUORESCENT() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT_FLUORESCENT", jint>(); }
	static jint SENSOR_REFERENCE_ILLUMINANT1_DAY_WHITE_FLUORESCENT() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT1_DAY_WHITE_FLUORESCENT", jint>(); }
	static jint SENSOR_REFERENCE_ILLUMINANT1_FINE_WEATHER() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT1_FINE_WEATHER", jint>(); }
	static jint SENSOR_REFERENCE_ILLUMINANT1_FLASH() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT1_FLASH", jint>(); }
	static jint SENSOR_REFERENCE_ILLUMINANT1_FLUORESCENT() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT1_FLUORESCENT", jint>(); }
	static jint SENSOR_REFERENCE_ILLUMINANT1_ISO_STUDIO_TUNGSTEN() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT1_ISO_STUDIO_TUNGSTEN", jint>(); }
	static jint SENSOR_REFERENCE_ILLUMINANT1_SHADE() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT1_SHADE", jint>(); }
	static jint SENSOR_REFERENCE_ILLUMINANT1_STANDARD_A() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT1_STANDARD_A", jint>(); }
	static jint SENSOR_REFERENCE_ILLUMINANT1_STANDARD_B() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT1_STANDARD_B", jint>(); }
	static jint SENSOR_REFERENCE_ILLUMINANT1_STANDARD_C() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT1_STANDARD_C", jint>(); }
	static jint SENSOR_REFERENCE_ILLUMINANT1_TUNGSTEN() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT1_TUNGSTEN", jint>(); }
	static jint SENSOR_REFERENCE_ILLUMINANT1_WHITE_FLUORESCENT() { return get_static_field<"SENSOR_REFERENCE_ILLUMINANT1_WHITE_FLUORESCENT", jint>(); }
	static jint SENSOR_TEST_PATTERN_MODE_COLOR_BARS() { return get_static_field<"SENSOR_TEST_PATTERN_MODE_COLOR_BARS", jint>(); }
	static jint SENSOR_TEST_PATTERN_MODE_COLOR_BARS_FADE_TO_GRAY() { return get_static_field<"SENSOR_TEST_PATTERN_MODE_COLOR_BARS_FADE_TO_GRAY", jint>(); }
	static jint SENSOR_TEST_PATTERN_MODE_CUSTOM1() { return get_static_field<"SENSOR_TEST_PATTERN_MODE_CUSTOM1", jint>(); }
	static jint SENSOR_TEST_PATTERN_MODE_OFF() { return get_static_field<"SENSOR_TEST_PATTERN_MODE_OFF", jint>(); }
	static jint SENSOR_TEST_PATTERN_MODE_PN9() { return get_static_field<"SENSOR_TEST_PATTERN_MODE_PN9", jint>(); }
	static jint SENSOR_TEST_PATTERN_MODE_SOLID_COLOR() { return get_static_field<"SENSOR_TEST_PATTERN_MODE_SOLID_COLOR", jint>(); }
	static jint SHADING_MODE_FAST() { return get_static_field<"SHADING_MODE_FAST", jint>(); }
	static jint SHADING_MODE_HIGH_QUALITY() { return get_static_field<"SHADING_MODE_HIGH_QUALITY", jint>(); }
	static jint SHADING_MODE_OFF() { return get_static_field<"SHADING_MODE_OFF", jint>(); }
	static jint STATISTICS_FACE_DETECT_MODE_FULL() { return get_static_field<"STATISTICS_FACE_DETECT_MODE_FULL", jint>(); }
	static jint STATISTICS_FACE_DETECT_MODE_OFF() { return get_static_field<"STATISTICS_FACE_DETECT_MODE_OFF", jint>(); }
	static jint STATISTICS_FACE_DETECT_MODE_SIMPLE() { return get_static_field<"STATISTICS_FACE_DETECT_MODE_SIMPLE", jint>(); }
	static jint STATISTICS_LENS_SHADING_MAP_MODE_OFF() { return get_static_field<"STATISTICS_LENS_SHADING_MAP_MODE_OFF", jint>(); }
	static jint STATISTICS_LENS_SHADING_MAP_MODE_ON() { return get_static_field<"STATISTICS_LENS_SHADING_MAP_MODE_ON", jint>(); }
	static jint STATISTICS_SCENE_FLICKER_50HZ() { return get_static_field<"STATISTICS_SCENE_FLICKER_50HZ", jint>(); }
	static jint STATISTICS_SCENE_FLICKER_60HZ() { return get_static_field<"STATISTICS_SCENE_FLICKER_60HZ", jint>(); }
	static jint STATISTICS_SCENE_FLICKER_NONE() { return get_static_field<"STATISTICS_SCENE_FLICKER_NONE", jint>(); }
	static jint SYNC_MAX_LATENCY_PER_FRAME_CONTROL() { return get_static_field<"SYNC_MAX_LATENCY_PER_FRAME_CONTROL", jint>(); }
	static jint SYNC_MAX_LATENCY_UNKNOWN() { return get_static_field<"SYNC_MAX_LATENCY_UNKNOWN", jint>(); }
	static jint TONEMAP_MODE_CONTRAST_CURVE() { return get_static_field<"TONEMAP_MODE_CONTRAST_CURVE", jint>(); }
	static jint TONEMAP_MODE_FAST() { return get_static_field<"TONEMAP_MODE_FAST", jint>(); }
	static jint TONEMAP_MODE_HIGH_QUALITY() { return get_static_field<"TONEMAP_MODE_HIGH_QUALITY", jint>(); }

	jni::ref<java::util::List> getKeys() { return call_method<"getKeys", jni::ref<java::util::List>>(); }

protected:

	CameraMetadata(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAMETADATA
