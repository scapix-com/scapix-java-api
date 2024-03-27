// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSOR_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware { class Sensor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::Sensor>
{
	static constexpr fixed_string class_name = "android/hardware/Sensor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSOR)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::Sensor : public jni::object_base<"android/hardware/Sensor",
	java::lang::Object>
{
public:

	static jint REPORTING_MODE_CONTINUOUS() { return get_static_field<"REPORTING_MODE_CONTINUOUS", jint>(); }
	static jint REPORTING_MODE_ONE_SHOT() { return get_static_field<"REPORTING_MODE_ONE_SHOT", jint>(); }
	static jint REPORTING_MODE_ON_CHANGE() { return get_static_field<"REPORTING_MODE_ON_CHANGE", jint>(); }
	static jint REPORTING_MODE_SPECIAL_TRIGGER() { return get_static_field<"REPORTING_MODE_SPECIAL_TRIGGER", jint>(); }
	static jni::ref<java::lang::String> STRING_TYPE_ACCELEROMETER() { return get_static_field<"STRING_TYPE_ACCELEROMETER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_ACCELEROMETER_LIMITED_AXES() { return get_static_field<"STRING_TYPE_ACCELEROMETER_LIMITED_AXES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_ACCELEROMETER_LIMITED_AXES_UNCALIBRATED() { return get_static_field<"STRING_TYPE_ACCELEROMETER_LIMITED_AXES_UNCALIBRATED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_ACCELEROMETER_UNCALIBRATED() { return get_static_field<"STRING_TYPE_ACCELEROMETER_UNCALIBRATED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_AMBIENT_TEMPERATURE() { return get_static_field<"STRING_TYPE_AMBIENT_TEMPERATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_GAME_ROTATION_VECTOR() { return get_static_field<"STRING_TYPE_GAME_ROTATION_VECTOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_GEOMAGNETIC_ROTATION_VECTOR() { return get_static_field<"STRING_TYPE_GEOMAGNETIC_ROTATION_VECTOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_GRAVITY() { return get_static_field<"STRING_TYPE_GRAVITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_GYROSCOPE() { return get_static_field<"STRING_TYPE_GYROSCOPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_GYROSCOPE_LIMITED_AXES() { return get_static_field<"STRING_TYPE_GYROSCOPE_LIMITED_AXES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_GYROSCOPE_LIMITED_AXES_UNCALIBRATED() { return get_static_field<"STRING_TYPE_GYROSCOPE_LIMITED_AXES_UNCALIBRATED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_GYROSCOPE_UNCALIBRATED() { return get_static_field<"STRING_TYPE_GYROSCOPE_UNCALIBRATED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_HEADING() { return get_static_field<"STRING_TYPE_HEADING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_HEAD_TRACKER() { return get_static_field<"STRING_TYPE_HEAD_TRACKER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_HEART_BEAT() { return get_static_field<"STRING_TYPE_HEART_BEAT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_HEART_RATE() { return get_static_field<"STRING_TYPE_HEART_RATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_HINGE_ANGLE() { return get_static_field<"STRING_TYPE_HINGE_ANGLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_LIGHT() { return get_static_field<"STRING_TYPE_LIGHT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_LINEAR_ACCELERATION() { return get_static_field<"STRING_TYPE_LINEAR_ACCELERATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_LOW_LATENCY_OFFBODY_DETECT() { return get_static_field<"STRING_TYPE_LOW_LATENCY_OFFBODY_DETECT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_MAGNETIC_FIELD() { return get_static_field<"STRING_TYPE_MAGNETIC_FIELD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_MAGNETIC_FIELD_UNCALIBRATED() { return get_static_field<"STRING_TYPE_MAGNETIC_FIELD_UNCALIBRATED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_MOTION_DETECT() { return get_static_field<"STRING_TYPE_MOTION_DETECT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_ORIENTATION() { return get_static_field<"STRING_TYPE_ORIENTATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_POSE_6DOF() { return get_static_field<"STRING_TYPE_POSE_6DOF", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_PRESSURE() { return get_static_field<"STRING_TYPE_PRESSURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_PROXIMITY() { return get_static_field<"STRING_TYPE_PROXIMITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_RELATIVE_HUMIDITY() { return get_static_field<"STRING_TYPE_RELATIVE_HUMIDITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_ROTATION_VECTOR() { return get_static_field<"STRING_TYPE_ROTATION_VECTOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_SIGNIFICANT_MOTION() { return get_static_field<"STRING_TYPE_SIGNIFICANT_MOTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_STATIONARY_DETECT() { return get_static_field<"STRING_TYPE_STATIONARY_DETECT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_STEP_COUNTER() { return get_static_field<"STRING_TYPE_STEP_COUNTER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_STEP_DETECTOR() { return get_static_field<"STRING_TYPE_STEP_DETECTOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TYPE_TEMPERATURE() { return get_static_field<"STRING_TYPE_TEMPERATURE", jni::ref<java::lang::String>>(); }
	static jint TYPE_ACCELEROMETER() { return get_static_field<"TYPE_ACCELEROMETER", jint>(); }
	static jint TYPE_ACCELEROMETER_LIMITED_AXES() { return get_static_field<"TYPE_ACCELEROMETER_LIMITED_AXES", jint>(); }
	static jint TYPE_ACCELEROMETER_LIMITED_AXES_UNCALIBRATED() { return get_static_field<"TYPE_ACCELEROMETER_LIMITED_AXES_UNCALIBRATED", jint>(); }
	static jint TYPE_ACCELEROMETER_UNCALIBRATED() { return get_static_field<"TYPE_ACCELEROMETER_UNCALIBRATED", jint>(); }
	static jint TYPE_ALL() { return get_static_field<"TYPE_ALL", jint>(); }
	static jint TYPE_AMBIENT_TEMPERATURE() { return get_static_field<"TYPE_AMBIENT_TEMPERATURE", jint>(); }
	static jint TYPE_DEVICE_PRIVATE_BASE() { return get_static_field<"TYPE_DEVICE_PRIVATE_BASE", jint>(); }
	static jint TYPE_GAME_ROTATION_VECTOR() { return get_static_field<"TYPE_GAME_ROTATION_VECTOR", jint>(); }
	static jint TYPE_GEOMAGNETIC_ROTATION_VECTOR() { return get_static_field<"TYPE_GEOMAGNETIC_ROTATION_VECTOR", jint>(); }
	static jint TYPE_GRAVITY() { return get_static_field<"TYPE_GRAVITY", jint>(); }
	static jint TYPE_GYROSCOPE() { return get_static_field<"TYPE_GYROSCOPE", jint>(); }
	static jint TYPE_GYROSCOPE_LIMITED_AXES() { return get_static_field<"TYPE_GYROSCOPE_LIMITED_AXES", jint>(); }
	static jint TYPE_GYROSCOPE_LIMITED_AXES_UNCALIBRATED() { return get_static_field<"TYPE_GYROSCOPE_LIMITED_AXES_UNCALIBRATED", jint>(); }
	static jint TYPE_GYROSCOPE_UNCALIBRATED() { return get_static_field<"TYPE_GYROSCOPE_UNCALIBRATED", jint>(); }
	static jint TYPE_HEADING() { return get_static_field<"TYPE_HEADING", jint>(); }
	static jint TYPE_HEAD_TRACKER() { return get_static_field<"TYPE_HEAD_TRACKER", jint>(); }
	static jint TYPE_HEART_BEAT() { return get_static_field<"TYPE_HEART_BEAT", jint>(); }
	static jint TYPE_HEART_RATE() { return get_static_field<"TYPE_HEART_RATE", jint>(); }
	static jint TYPE_HINGE_ANGLE() { return get_static_field<"TYPE_HINGE_ANGLE", jint>(); }
	static jint TYPE_LIGHT() { return get_static_field<"TYPE_LIGHT", jint>(); }
	static jint TYPE_LINEAR_ACCELERATION() { return get_static_field<"TYPE_LINEAR_ACCELERATION", jint>(); }
	static jint TYPE_LOW_LATENCY_OFFBODY_DETECT() { return get_static_field<"TYPE_LOW_LATENCY_OFFBODY_DETECT", jint>(); }
	static jint TYPE_MAGNETIC_FIELD() { return get_static_field<"TYPE_MAGNETIC_FIELD", jint>(); }
	static jint TYPE_MAGNETIC_FIELD_UNCALIBRATED() { return get_static_field<"TYPE_MAGNETIC_FIELD_UNCALIBRATED", jint>(); }
	static jint TYPE_MOTION_DETECT() { return get_static_field<"TYPE_MOTION_DETECT", jint>(); }
	static jint TYPE_ORIENTATION() { return get_static_field<"TYPE_ORIENTATION", jint>(); }
	static jint TYPE_POSE_6DOF() { return get_static_field<"TYPE_POSE_6DOF", jint>(); }
	static jint TYPE_PRESSURE() { return get_static_field<"TYPE_PRESSURE", jint>(); }
	static jint TYPE_PROXIMITY() { return get_static_field<"TYPE_PROXIMITY", jint>(); }
	static jint TYPE_RELATIVE_HUMIDITY() { return get_static_field<"TYPE_RELATIVE_HUMIDITY", jint>(); }
	static jint TYPE_ROTATION_VECTOR() { return get_static_field<"TYPE_ROTATION_VECTOR", jint>(); }
	static jint TYPE_SIGNIFICANT_MOTION() { return get_static_field<"TYPE_SIGNIFICANT_MOTION", jint>(); }
	static jint TYPE_STATIONARY_DETECT() { return get_static_field<"TYPE_STATIONARY_DETECT", jint>(); }
	static jint TYPE_STEP_COUNTER() { return get_static_field<"TYPE_STEP_COUNTER", jint>(); }
	static jint TYPE_STEP_DETECTOR() { return get_static_field<"TYPE_STEP_DETECTOR", jint>(); }
	static jint TYPE_TEMPERATURE() { return get_static_field<"TYPE_TEMPERATURE", jint>(); }

	jint getReportingMode() { return call_method<"getReportingMode", jint>(); }
	jint getHighestDirectReportRateLevel() { return call_method<"getHighestDirectReportRateLevel", jint>(); }
	jboolean isDirectChannelTypeSupported(jint sharedMemType) { return call_method<"isDirectChannelTypeSupported", jboolean>(sharedMemType); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getVendor() { return call_method<"getVendor", jni::ref<java::lang::String>>(); }
	jint getType() { return call_method<"getType", jint>(); }
	jint getVersion() { return call_method<"getVersion", jint>(); }
	jfloat getMaximumRange() { return call_method<"getMaximumRange", jfloat>(); }
	jfloat getResolution() { return call_method<"getResolution", jfloat>(); }
	jfloat getPower() { return call_method<"getPower", jfloat>(); }
	jint getMinDelay() { return call_method<"getMinDelay", jint>(); }
	jint getFifoReservedEventCount() { return call_method<"getFifoReservedEventCount", jint>(); }
	jint getFifoMaxEventCount() { return call_method<"getFifoMaxEventCount", jint>(); }
	jni::ref<java::lang::String> getStringType() { return call_method<"getStringType", jni::ref<java::lang::String>>(); }
	jint getId() { return call_method<"getId", jint>(); }
	jint getMaxDelay() { return call_method<"getMaxDelay", jint>(); }
	jboolean isWakeUpSensor() { return call_method<"isWakeUpSensor", jboolean>(); }
	jboolean isDynamicSensor() { return call_method<"isDynamicSensor", jboolean>(); }
	jboolean isAdditionalInfoSupported() { return call_method<"isAdditionalInfoSupported", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Sensor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSOR