// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_PARAMETERS_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_PARAMETERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware { class Camera_Parameters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::Camera_Parameters>
{
	static constexpr fixed_string class_name = "android/hardware/Camera$Parameters";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_PARAMETERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_PARAMETERS)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_PARAMETERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/Camera_Size.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::Camera_Parameters : public jni::object_base<"android/hardware/Camera$Parameters",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ANTIBANDING_50HZ() { return get_static_field<"ANTIBANDING_50HZ", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ANTIBANDING_60HZ() { return get_static_field<"ANTIBANDING_60HZ", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ANTIBANDING_AUTO() { return get_static_field<"ANTIBANDING_AUTO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ANTIBANDING_OFF() { return get_static_field<"ANTIBANDING_OFF", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_AQUA() { return get_static_field<"EFFECT_AQUA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_BLACKBOARD() { return get_static_field<"EFFECT_BLACKBOARD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_MONO() { return get_static_field<"EFFECT_MONO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_NEGATIVE() { return get_static_field<"EFFECT_NEGATIVE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_NONE() { return get_static_field<"EFFECT_NONE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_POSTERIZE() { return get_static_field<"EFFECT_POSTERIZE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_SEPIA() { return get_static_field<"EFFECT_SEPIA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_SOLARIZE() { return get_static_field<"EFFECT_SOLARIZE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_WHITEBOARD() { return get_static_field<"EFFECT_WHITEBOARD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FLASH_MODE_AUTO() { return get_static_field<"FLASH_MODE_AUTO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FLASH_MODE_OFF() { return get_static_field<"FLASH_MODE_OFF", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FLASH_MODE_ON() { return get_static_field<"FLASH_MODE_ON", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FLASH_MODE_RED_EYE() { return get_static_field<"FLASH_MODE_RED_EYE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FLASH_MODE_TORCH() { return get_static_field<"FLASH_MODE_TORCH", jni::ref<java::lang::String>>(); }
	static jint FOCUS_DISTANCE_FAR_INDEX() { return get_static_field<"FOCUS_DISTANCE_FAR_INDEX", jint>(); }
	static jint FOCUS_DISTANCE_NEAR_INDEX() { return get_static_field<"FOCUS_DISTANCE_NEAR_INDEX", jint>(); }
	static jint FOCUS_DISTANCE_OPTIMAL_INDEX() { return get_static_field<"FOCUS_DISTANCE_OPTIMAL_INDEX", jint>(); }
	static jni::ref<java::lang::String> FOCUS_MODE_AUTO() { return get_static_field<"FOCUS_MODE_AUTO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FOCUS_MODE_CONTINUOUS_PICTURE() { return get_static_field<"FOCUS_MODE_CONTINUOUS_PICTURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FOCUS_MODE_CONTINUOUS_VIDEO() { return get_static_field<"FOCUS_MODE_CONTINUOUS_VIDEO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FOCUS_MODE_EDOF() { return get_static_field<"FOCUS_MODE_EDOF", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FOCUS_MODE_FIXED() { return get_static_field<"FOCUS_MODE_FIXED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FOCUS_MODE_INFINITY() { return get_static_field<"FOCUS_MODE_INFINITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FOCUS_MODE_MACRO() { return get_static_field<"FOCUS_MODE_MACRO", jni::ref<java::lang::String>>(); }
	static jint PREVIEW_FPS_MAX_INDEX() { return get_static_field<"PREVIEW_FPS_MAX_INDEX", jint>(); }
	static jint PREVIEW_FPS_MIN_INDEX() { return get_static_field<"PREVIEW_FPS_MIN_INDEX", jint>(); }
	static jni::ref<java::lang::String> SCENE_MODE_ACTION() { return get_static_field<"SCENE_MODE_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCENE_MODE_AUTO() { return get_static_field<"SCENE_MODE_AUTO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCENE_MODE_BARCODE() { return get_static_field<"SCENE_MODE_BARCODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCENE_MODE_BEACH() { return get_static_field<"SCENE_MODE_BEACH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCENE_MODE_CANDLELIGHT() { return get_static_field<"SCENE_MODE_CANDLELIGHT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCENE_MODE_FIREWORKS() { return get_static_field<"SCENE_MODE_FIREWORKS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCENE_MODE_HDR() { return get_static_field<"SCENE_MODE_HDR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCENE_MODE_LANDSCAPE() { return get_static_field<"SCENE_MODE_LANDSCAPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCENE_MODE_NIGHT() { return get_static_field<"SCENE_MODE_NIGHT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCENE_MODE_NIGHT_PORTRAIT() { return get_static_field<"SCENE_MODE_NIGHT_PORTRAIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCENE_MODE_PARTY() { return get_static_field<"SCENE_MODE_PARTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCENE_MODE_PORTRAIT() { return get_static_field<"SCENE_MODE_PORTRAIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCENE_MODE_SNOW() { return get_static_field<"SCENE_MODE_SNOW", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCENE_MODE_SPORTS() { return get_static_field<"SCENE_MODE_SPORTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCENE_MODE_STEADYPHOTO() { return get_static_field<"SCENE_MODE_STEADYPHOTO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCENE_MODE_SUNSET() { return get_static_field<"SCENE_MODE_SUNSET", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCENE_MODE_THEATRE() { return get_static_field<"SCENE_MODE_THEATRE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WHITE_BALANCE_AUTO() { return get_static_field<"WHITE_BALANCE_AUTO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WHITE_BALANCE_CLOUDY_DAYLIGHT() { return get_static_field<"WHITE_BALANCE_CLOUDY_DAYLIGHT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WHITE_BALANCE_DAYLIGHT() { return get_static_field<"WHITE_BALANCE_DAYLIGHT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WHITE_BALANCE_FLUORESCENT() { return get_static_field<"WHITE_BALANCE_FLUORESCENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WHITE_BALANCE_INCANDESCENT() { return get_static_field<"WHITE_BALANCE_INCANDESCENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WHITE_BALANCE_SHADE() { return get_static_field<"WHITE_BALANCE_SHADE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WHITE_BALANCE_TWILIGHT() { return get_static_field<"WHITE_BALANCE_TWILIGHT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WHITE_BALANCE_WARM_FLUORESCENT() { return get_static_field<"WHITE_BALANCE_WARM_FLUORESCENT", jni::ref<java::lang::String>>(); }

	jni::ref<java::lang::String> flatten() { return call_method<"flatten", jni::ref<java::lang::String>>(); }
	void unflatten(jni::ref<java::lang::String> flattened) { return call_method<"unflatten", void>(flattened); }
	void remove(jni::ref<java::lang::String> key) { return call_method<"remove", void>(key); }
	void set(jni::ref<java::lang::String> key, jni::ref<java::lang::String> value) { return call_method<"set", void>(key, value); }
	void set(jni::ref<java::lang::String> key, jint value) { return call_method<"set", void>(key, value); }
	jni::ref<java::lang::String> get(jni::ref<java::lang::String> key) { return call_method<"get", jni::ref<java::lang::String>>(key); }
	jint getInt(jni::ref<java::lang::String> key) { return call_method<"getInt", jint>(key); }
	void setPreviewSize(jint width, jint height) { return call_method<"setPreviewSize", void>(width, height); }
	jni::ref<android::hardware::Camera_Size> getPreviewSize() { return call_method<"getPreviewSize", jni::ref<android::hardware::Camera_Size>>(); }
	jni::ref<java::util::List> getSupportedPreviewSizes() { return call_method<"getSupportedPreviewSizes", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getSupportedVideoSizes() { return call_method<"getSupportedVideoSizes", jni::ref<java::util::List>>(); }
	jni::ref<android::hardware::Camera_Size> getPreferredPreviewSizeForVideo() { return call_method<"getPreferredPreviewSizeForVideo", jni::ref<android::hardware::Camera_Size>>(); }
	void setJpegThumbnailSize(jint width, jint height) { return call_method<"setJpegThumbnailSize", void>(width, height); }
	jni::ref<android::hardware::Camera_Size> getJpegThumbnailSize() { return call_method<"getJpegThumbnailSize", jni::ref<android::hardware::Camera_Size>>(); }
	jni::ref<java::util::List> getSupportedJpegThumbnailSizes() { return call_method<"getSupportedJpegThumbnailSizes", jni::ref<java::util::List>>(); }
	void setJpegThumbnailQuality(jint quality) { return call_method<"setJpegThumbnailQuality", void>(quality); }
	jint getJpegThumbnailQuality() { return call_method<"getJpegThumbnailQuality", jint>(); }
	void setJpegQuality(jint quality) { return call_method<"setJpegQuality", void>(quality); }
	jint getJpegQuality() { return call_method<"getJpegQuality", jint>(); }
	void setPreviewFrameRate(jint fps) { return call_method<"setPreviewFrameRate", void>(fps); }
	jint getPreviewFrameRate() { return call_method<"getPreviewFrameRate", jint>(); }
	jni::ref<java::util::List> getSupportedPreviewFrameRates() { return call_method<"getSupportedPreviewFrameRates", jni::ref<java::util::List>>(); }
	void setPreviewFpsRange(jint min, jint max) { return call_method<"setPreviewFpsRange", void>(min, max); }
	void getPreviewFpsRange(jni::ref<jni::array<jint>> range) { return call_method<"getPreviewFpsRange", void>(range); }
	jni::ref<java::util::List> getSupportedPreviewFpsRange() { return call_method<"getSupportedPreviewFpsRange", jni::ref<java::util::List>>(); }
	void setPreviewFormat(jint pixel_format) { return call_method<"setPreviewFormat", void>(pixel_format); }
	jint getPreviewFormat() { return call_method<"getPreviewFormat", jint>(); }
	jni::ref<java::util::List> getSupportedPreviewFormats() { return call_method<"getSupportedPreviewFormats", jni::ref<java::util::List>>(); }
	void setPictureSize(jint width, jint height) { return call_method<"setPictureSize", void>(width, height); }
	jni::ref<android::hardware::Camera_Size> getPictureSize() { return call_method<"getPictureSize", jni::ref<android::hardware::Camera_Size>>(); }
	jni::ref<java::util::List> getSupportedPictureSizes() { return call_method<"getSupportedPictureSizes", jni::ref<java::util::List>>(); }
	void setPictureFormat(jint pixel_format) { return call_method<"setPictureFormat", void>(pixel_format); }
	jint getPictureFormat() { return call_method<"getPictureFormat", jint>(); }
	jni::ref<java::util::List> getSupportedPictureFormats() { return call_method<"getSupportedPictureFormats", jni::ref<java::util::List>>(); }
	void setRotation(jint rotation) { return call_method<"setRotation", void>(rotation); }
	void setGpsLatitude(jdouble latitude) { return call_method<"setGpsLatitude", void>(latitude); }
	void setGpsLongitude(jdouble longitude) { return call_method<"setGpsLongitude", void>(longitude); }
	void setGpsAltitude(jdouble altitude) { return call_method<"setGpsAltitude", void>(altitude); }
	void setGpsTimestamp(jlong timestamp) { return call_method<"setGpsTimestamp", void>(timestamp); }
	void setGpsProcessingMethod(jni::ref<java::lang::String> processing_method) { return call_method<"setGpsProcessingMethod", void>(processing_method); }
	void removeGpsData() { return call_method<"removeGpsData", void>(); }
	jni::ref<java::lang::String> getWhiteBalance() { return call_method<"getWhiteBalance", jni::ref<java::lang::String>>(); }
	void setWhiteBalance(jni::ref<java::lang::String> value) { return call_method<"setWhiteBalance", void>(value); }
	jni::ref<java::util::List> getSupportedWhiteBalance() { return call_method<"getSupportedWhiteBalance", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::String> getColorEffect() { return call_method<"getColorEffect", jni::ref<java::lang::String>>(); }
	void setColorEffect(jni::ref<java::lang::String> value) { return call_method<"setColorEffect", void>(value); }
	jni::ref<java::util::List> getSupportedColorEffects() { return call_method<"getSupportedColorEffects", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::String> getAntibanding() { return call_method<"getAntibanding", jni::ref<java::lang::String>>(); }
	void setAntibanding(jni::ref<java::lang::String> antibanding) { return call_method<"setAntibanding", void>(antibanding); }
	jni::ref<java::util::List> getSupportedAntibanding() { return call_method<"getSupportedAntibanding", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::String> getSceneMode() { return call_method<"getSceneMode", jni::ref<java::lang::String>>(); }
	void setSceneMode(jni::ref<java::lang::String> value) { return call_method<"setSceneMode", void>(value); }
	jni::ref<java::util::List> getSupportedSceneModes() { return call_method<"getSupportedSceneModes", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::String> getFlashMode() { return call_method<"getFlashMode", jni::ref<java::lang::String>>(); }
	void setFlashMode(jni::ref<java::lang::String> value) { return call_method<"setFlashMode", void>(value); }
	jni::ref<java::util::List> getSupportedFlashModes() { return call_method<"getSupportedFlashModes", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::String> getFocusMode() { return call_method<"getFocusMode", jni::ref<java::lang::String>>(); }
	void setFocusMode(jni::ref<java::lang::String> value) { return call_method<"setFocusMode", void>(value); }
	jni::ref<java::util::List> getSupportedFocusModes() { return call_method<"getSupportedFocusModes", jni::ref<java::util::List>>(); }
	jfloat getFocalLength() { return call_method<"getFocalLength", jfloat>(); }
	jfloat getHorizontalViewAngle() { return call_method<"getHorizontalViewAngle", jfloat>(); }
	jfloat getVerticalViewAngle() { return call_method<"getVerticalViewAngle", jfloat>(); }
	jint getExposureCompensation() { return call_method<"getExposureCompensation", jint>(); }
	void setExposureCompensation(jint value) { return call_method<"setExposureCompensation", void>(value); }
	jint getMaxExposureCompensation() { return call_method<"getMaxExposureCompensation", jint>(); }
	jint getMinExposureCompensation() { return call_method<"getMinExposureCompensation", jint>(); }
	jfloat getExposureCompensationStep() { return call_method<"getExposureCompensationStep", jfloat>(); }
	void setAutoExposureLock(jboolean toggle) { return call_method<"setAutoExposureLock", void>(toggle); }
	jboolean getAutoExposureLock() { return call_method<"getAutoExposureLock", jboolean>(); }
	jboolean isAutoExposureLockSupported() { return call_method<"isAutoExposureLockSupported", jboolean>(); }
	void setAutoWhiteBalanceLock(jboolean toggle) { return call_method<"setAutoWhiteBalanceLock", void>(toggle); }
	jboolean getAutoWhiteBalanceLock() { return call_method<"getAutoWhiteBalanceLock", jboolean>(); }
	jboolean isAutoWhiteBalanceLockSupported() { return call_method<"isAutoWhiteBalanceLockSupported", jboolean>(); }
	jint getZoom() { return call_method<"getZoom", jint>(); }
	void setZoom(jint value) { return call_method<"setZoom", void>(value); }
	jboolean isZoomSupported() { return call_method<"isZoomSupported", jboolean>(); }
	jint getMaxZoom() { return call_method<"getMaxZoom", jint>(); }
	jni::ref<java::util::List> getZoomRatios() { return call_method<"getZoomRatios", jni::ref<java::util::List>>(); }
	jboolean isSmoothZoomSupported() { return call_method<"isSmoothZoomSupported", jboolean>(); }
	void getFocusDistances(jni::ref<jni::array<jfloat>> output) { return call_method<"getFocusDistances", void>(output); }
	jint getMaxNumFocusAreas() { return call_method<"getMaxNumFocusAreas", jint>(); }
	jni::ref<java::util::List> getFocusAreas() { return call_method<"getFocusAreas", jni::ref<java::util::List>>(); }
	void setFocusAreas(jni::ref<java::util::List> focusAreas) { return call_method<"setFocusAreas", void>(focusAreas); }
	jint getMaxNumMeteringAreas() { return call_method<"getMaxNumMeteringAreas", jint>(); }
	jni::ref<java::util::List> getMeteringAreas() { return call_method<"getMeteringAreas", jni::ref<java::util::List>>(); }
	void setMeteringAreas(jni::ref<java::util::List> meteringAreas) { return call_method<"setMeteringAreas", void>(meteringAreas); }
	jint getMaxNumDetectedFaces() { return call_method<"getMaxNumDetectedFaces", jint>(); }
	void setRecordingHint(jboolean hint) { return call_method<"setRecordingHint", void>(hint); }
	jboolean isVideoSnapshotSupported() { return call_method<"isVideoSnapshotSupported", jboolean>(); }
	void setVideoStabilization(jboolean toggle) { return call_method<"setVideoStabilization", void>(toggle); }
	jboolean getVideoStabilization() { return call_method<"getVideoStabilization", jboolean>(); }
	jboolean isVideoStabilizationSupported() { return call_method<"isVideoStabilizationSupported", jboolean>(); }

protected:

	Camera_Parameters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_PARAMETERS