// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_OUTPUTCONFIGURATION_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_OUTPUTCONFIGURATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::camera2::params { class OutputConfiguration; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::camera2::params::OutputConfiguration>
{
	static constexpr fixed_string class_name = "android/hardware/camera2/params/OutputConfiguration";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_OUTPUTCONFIGURATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_OUTPUTCONFIGURATION)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_OUTPUTCONFIGURATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/camera2/MultiResolutionImageReader.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/util/Size.h>
#include <scapix/java_api/android/view/Surface.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::camera2::params::OutputConfiguration : public jni::object_base<"android/hardware/camera2/params/OutputConfiguration",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint MIRROR_MODE_AUTO() { return get_static_field<"MIRROR_MODE_AUTO", jint>(); }
	static jint MIRROR_MODE_H() { return get_static_field<"MIRROR_MODE_H", jint>(); }
	static jint MIRROR_MODE_NONE() { return get_static_field<"MIRROR_MODE_NONE", jint>(); }
	static jint MIRROR_MODE_V() { return get_static_field<"MIRROR_MODE_V", jint>(); }
	static jint SURFACE_GROUP_ID_NONE() { return get_static_field<"SURFACE_GROUP_ID_NONE", jint>(); }
	static jint TIMESTAMP_BASE_CHOREOGRAPHER_SYNCED() { return get_static_field<"TIMESTAMP_BASE_CHOREOGRAPHER_SYNCED", jint>(); }
	static jint TIMESTAMP_BASE_DEFAULT() { return get_static_field<"TIMESTAMP_BASE_DEFAULT", jint>(); }
	static jint TIMESTAMP_BASE_MONOTONIC() { return get_static_field<"TIMESTAMP_BASE_MONOTONIC", jint>(); }
	static jint TIMESTAMP_BASE_REALTIME() { return get_static_field<"TIMESTAMP_BASE_REALTIME", jint>(); }
	static jint TIMESTAMP_BASE_SENSOR() { return get_static_field<"TIMESTAMP_BASE_SENSOR", jint>(); }

	static jni::ref<android::hardware::camera2::params::OutputConfiguration> new_object(jni::ref<android::view::Surface> surface) { return base_::new_object(surface); }
	static jni::ref<android::hardware::camera2::params::OutputConfiguration> new_object(jint surfaceGroupId, jni::ref<android::view::Surface> surface) { return base_::new_object(surfaceGroupId, surface); }
	static jni::ref<android::hardware::camera2::params::OutputConfiguration> new_object(jni::ref<android::util::Size> surfaceSize, jni::ref<java::lang::Class> klass) { return base_::new_object(surfaceSize, klass); }
	void setDynamicRangeProfile(jlong profile) { return call_method<"setDynamicRangeProfile", void>(profile); }
	jlong getDynamicRangeProfile() { return call_method<"getDynamicRangeProfile", jlong>(); }
	static jni::ref<java::util::Collection> createInstancesForMultiResolutionOutput(jni::ref<android::hardware::camera2::MultiResolutionImageReader> multiResolutionImageReader) { return call_static_method<"createInstancesForMultiResolutionOutput", jni::ref<java::util::Collection>>(multiResolutionImageReader); }
	void enableSurfaceSharing() { return call_method<"enableSurfaceSharing", void>(); }
	void setPhysicalCameraId(jni::ref<java::lang::String> physicalCameraId) { return call_method<"setPhysicalCameraId", void>(physicalCameraId); }
	void addSensorPixelModeUsed(jint sensorPixelModeUsed) { return call_method<"addSensorPixelModeUsed", void>(sensorPixelModeUsed); }
	void removeSensorPixelModeUsed(jint sensorPixelModeUsed) { return call_method<"removeSensorPixelModeUsed", void>(sensorPixelModeUsed); }
	void addSurface(jni::ref<android::view::Surface> surface) { return call_method<"addSurface", void>(surface); }
	void removeSurface(jni::ref<android::view::Surface> surface) { return call_method<"removeSurface", void>(surface); }
	void setStreamUseCase(jlong streamUseCase) { return call_method<"setStreamUseCase", void>(streamUseCase); }
	jlong getStreamUseCase() { return call_method<"getStreamUseCase", jlong>(); }
	void setTimestampBase(jint timestampBase) { return call_method<"setTimestampBase", void>(timestampBase); }
	jint getTimestampBase() { return call_method<"getTimestampBase", jint>(); }
	void setMirrorMode(jint mirrorMode) { return call_method<"setMirrorMode", void>(mirrorMode); }
	jint getMirrorMode() { return call_method<"getMirrorMode", jint>(); }
	void setReadoutTimestampEnabled(jboolean on) { return call_method<"setReadoutTimestampEnabled", void>(on); }
	jboolean isReadoutTimestampEnabled() { return call_method<"isReadoutTimestampEnabled", jboolean>(); }
	jint getMaxSharedSurfaceCount() { return call_method<"getMaxSharedSurfaceCount", jint>(); }
	jni::ref<android::view::Surface> getSurface() { return call_method<"getSurface", jni::ref<android::view::Surface>>(); }
	jni::ref<java::util::List> getSurfaces() { return call_method<"getSurfaces", jni::ref<java::util::List>>(); }
	jint getSurfaceGroupId() { return call_method<"getSurfaceGroupId", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	OutputConfiguration(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_OUTPUTCONFIGURATION
