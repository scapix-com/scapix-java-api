// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSORMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSORMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware { class SensorManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::SensorManager>
{
	static constexpr fixed_string class_name = "android/hardware/SensorManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSORMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSORMANAGER)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSORMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/Sensor.h>
#include <scapix/java_api/android/hardware/SensorEventListener.h>
#include <scapix/java_api/android/hardware/SensorListener.h>
#include <scapix/java_api/android/hardware/SensorManager_DynamicSensorCallback.h>
#include <scapix/java_api/android/hardware/TriggerEventListener.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::SensorManager : public jni::object_base<"android/hardware/SensorManager",
	java::lang::Object>
{
public:

	using DynamicSensorCallback = SensorManager_DynamicSensorCallback;

	static jint AXIS_MINUS_X() { return get_static_field<"AXIS_MINUS_X", jint>(); }
	static jint AXIS_MINUS_Y() { return get_static_field<"AXIS_MINUS_Y", jint>(); }
	static jint AXIS_MINUS_Z() { return get_static_field<"AXIS_MINUS_Z", jint>(); }
	static jint AXIS_X() { return get_static_field<"AXIS_X", jint>(); }
	static jint AXIS_Y() { return get_static_field<"AXIS_Y", jint>(); }
	static jint AXIS_Z() { return get_static_field<"AXIS_Z", jint>(); }
	static jint DATA_X() { return get_static_field<"DATA_X", jint>(); }
	static jint DATA_Y() { return get_static_field<"DATA_Y", jint>(); }
	static jint DATA_Z() { return get_static_field<"DATA_Z", jint>(); }
	static jfloat GRAVITY_DEATH_STAR_I() { return get_static_field<"GRAVITY_DEATH_STAR_I", jfloat>(); }
	static jfloat GRAVITY_EARTH() { return get_static_field<"GRAVITY_EARTH", jfloat>(); }
	static jfloat GRAVITY_JUPITER() { return get_static_field<"GRAVITY_JUPITER", jfloat>(); }
	static jfloat GRAVITY_MARS() { return get_static_field<"GRAVITY_MARS", jfloat>(); }
	static jfloat GRAVITY_MERCURY() { return get_static_field<"GRAVITY_MERCURY", jfloat>(); }
	static jfloat GRAVITY_MOON() { return get_static_field<"GRAVITY_MOON", jfloat>(); }
	static jfloat GRAVITY_NEPTUNE() { return get_static_field<"GRAVITY_NEPTUNE", jfloat>(); }
	static jfloat GRAVITY_PLUTO() { return get_static_field<"GRAVITY_PLUTO", jfloat>(); }
	static jfloat GRAVITY_SATURN() { return get_static_field<"GRAVITY_SATURN", jfloat>(); }
	static jfloat GRAVITY_SUN() { return get_static_field<"GRAVITY_SUN", jfloat>(); }
	static jfloat GRAVITY_THE_ISLAND() { return get_static_field<"GRAVITY_THE_ISLAND", jfloat>(); }
	static jfloat GRAVITY_URANUS() { return get_static_field<"GRAVITY_URANUS", jfloat>(); }
	static jfloat GRAVITY_VENUS() { return get_static_field<"GRAVITY_VENUS", jfloat>(); }
	static jfloat LIGHT_CLOUDY() { return get_static_field<"LIGHT_CLOUDY", jfloat>(); }
	static jfloat LIGHT_FULLMOON() { return get_static_field<"LIGHT_FULLMOON", jfloat>(); }
	static jfloat LIGHT_NO_MOON() { return get_static_field<"LIGHT_NO_MOON", jfloat>(); }
	static jfloat LIGHT_OVERCAST() { return get_static_field<"LIGHT_OVERCAST", jfloat>(); }
	static jfloat LIGHT_SHADE() { return get_static_field<"LIGHT_SHADE", jfloat>(); }
	static jfloat LIGHT_SUNLIGHT() { return get_static_field<"LIGHT_SUNLIGHT", jfloat>(); }
	static jfloat LIGHT_SUNLIGHT_MAX() { return get_static_field<"LIGHT_SUNLIGHT_MAX", jfloat>(); }
	static jfloat LIGHT_SUNRISE() { return get_static_field<"LIGHT_SUNRISE", jfloat>(); }
	static jfloat MAGNETIC_FIELD_EARTH_MAX() { return get_static_field<"MAGNETIC_FIELD_EARTH_MAX", jfloat>(); }
	static jfloat MAGNETIC_FIELD_EARTH_MIN() { return get_static_field<"MAGNETIC_FIELD_EARTH_MIN", jfloat>(); }
	static jfloat PRESSURE_STANDARD_ATMOSPHERE() { return get_static_field<"PRESSURE_STANDARD_ATMOSPHERE", jfloat>(); }
	static jint RAW_DATA_INDEX() { return get_static_field<"RAW_DATA_INDEX", jint>(); }
	static jint RAW_DATA_X() { return get_static_field<"RAW_DATA_X", jint>(); }
	static jint RAW_DATA_Y() { return get_static_field<"RAW_DATA_Y", jint>(); }
	static jint RAW_DATA_Z() { return get_static_field<"RAW_DATA_Z", jint>(); }
	static jint SENSOR_ACCELEROMETER() { return get_static_field<"SENSOR_ACCELEROMETER", jint>(); }
	static jint SENSOR_ALL() { return get_static_field<"SENSOR_ALL", jint>(); }
	static jint SENSOR_DELAY_FASTEST() { return get_static_field<"SENSOR_DELAY_FASTEST", jint>(); }
	static jint SENSOR_DELAY_GAME() { return get_static_field<"SENSOR_DELAY_GAME", jint>(); }
	static jint SENSOR_DELAY_NORMAL() { return get_static_field<"SENSOR_DELAY_NORMAL", jint>(); }
	static jint SENSOR_DELAY_UI() { return get_static_field<"SENSOR_DELAY_UI", jint>(); }
	static jint SENSOR_LIGHT() { return get_static_field<"SENSOR_LIGHT", jint>(); }
	static jint SENSOR_MAGNETIC_FIELD() { return get_static_field<"SENSOR_MAGNETIC_FIELD", jint>(); }
	static jint SENSOR_MAX() { return get_static_field<"SENSOR_MAX", jint>(); }
	static jint SENSOR_MIN() { return get_static_field<"SENSOR_MIN", jint>(); }
	static jint SENSOR_ORIENTATION() { return get_static_field<"SENSOR_ORIENTATION", jint>(); }
	static jint SENSOR_ORIENTATION_RAW() { return get_static_field<"SENSOR_ORIENTATION_RAW", jint>(); }
	static jint SENSOR_PROXIMITY() { return get_static_field<"SENSOR_PROXIMITY", jint>(); }
	static jint SENSOR_STATUS_ACCURACY_HIGH() { return get_static_field<"SENSOR_STATUS_ACCURACY_HIGH", jint>(); }
	static jint SENSOR_STATUS_ACCURACY_LOW() { return get_static_field<"SENSOR_STATUS_ACCURACY_LOW", jint>(); }
	static jint SENSOR_STATUS_ACCURACY_MEDIUM() { return get_static_field<"SENSOR_STATUS_ACCURACY_MEDIUM", jint>(); }
	static jint SENSOR_STATUS_NO_CONTACT() { return get_static_field<"SENSOR_STATUS_NO_CONTACT", jint>(); }
	static jint SENSOR_STATUS_UNRELIABLE() { return get_static_field<"SENSOR_STATUS_UNRELIABLE", jint>(); }
	static jint SENSOR_TEMPERATURE() { return get_static_field<"SENSOR_TEMPERATURE", jint>(); }
	static jint SENSOR_TRICORDER() { return get_static_field<"SENSOR_TRICORDER", jint>(); }
	static jfloat STANDARD_GRAVITY() { return get_static_field<"STANDARD_GRAVITY", jfloat>(); }

	jint getSensors() { return call_method<"getSensors", jint>(); }
	jni::ref<java::util::List> getSensorList(jint type) { return call_method<"getSensorList", jni::ref<java::util::List>>(type); }
	jni::ref<java::util::List> getDynamicSensorList(jint type) { return call_method<"getDynamicSensorList", jni::ref<java::util::List>>(type); }
	jni::ref<android::hardware::Sensor> getDefaultSensor(jint type) { return call_method<"getDefaultSensor", jni::ref<android::hardware::Sensor>>(type); }
	jni::ref<android::hardware::Sensor> getDefaultSensor(jint type, jboolean wakeUp) { return call_method<"getDefaultSensor", jni::ref<android::hardware::Sensor>>(type, wakeUp); }
	jboolean registerListener(jni::ref<android::hardware::SensorListener> listener, jint sensors) { return call_method<"registerListener", jboolean>(listener, sensors); }
	jboolean registerListener(jni::ref<android::hardware::SensorListener> listener, jint sensors, jint rate) { return call_method<"registerListener", jboolean>(listener, sensors, rate); }
	void unregisterListener(jni::ref<android::hardware::SensorListener> listener) { return call_method<"unregisterListener", void>(listener); }
	void unregisterListener(jni::ref<android::hardware::SensorListener> listener, jint sensors) { return call_method<"unregisterListener", void>(listener, sensors); }
	void unregisterListener(jni::ref<android::hardware::SensorEventListener> listener, jni::ref<android::hardware::Sensor> sensor) { return call_method<"unregisterListener", void>(listener, sensor); }
	void unregisterListener(jni::ref<android::hardware::SensorEventListener> listener) { return call_method<"unregisterListener", void>(listener); }
	jboolean registerListener(jni::ref<android::hardware::SensorEventListener> listener, jni::ref<android::hardware::Sensor> sensor, jint samplingPeriodUs) { return call_method<"registerListener", jboolean>(listener, sensor, samplingPeriodUs); }
	jboolean registerListener(jni::ref<android::hardware::SensorEventListener> listener, jni::ref<android::hardware::Sensor> sensor, jint samplingPeriodUs, jint maxReportLatencyUs) { return call_method<"registerListener", jboolean>(listener, sensor, samplingPeriodUs, maxReportLatencyUs); }
	jboolean registerListener(jni::ref<android::hardware::SensorEventListener> listener, jni::ref<android::hardware::Sensor> sensor, jint samplingPeriodUs, jni::ref<android::os::Handler> handler) { return call_method<"registerListener", jboolean>(listener, sensor, samplingPeriodUs, handler); }
	jboolean registerListener(jni::ref<android::hardware::SensorEventListener> listener, jni::ref<android::hardware::Sensor> sensor, jint samplingPeriodUs, jint maxReportLatencyUs, jni::ref<android::os::Handler> handler) { return call_method<"registerListener", jboolean>(listener, sensor, samplingPeriodUs, maxReportLatencyUs, handler); }
	jboolean flush(jni::ref<android::hardware::SensorEventListener> listener) { return call_method<"flush", jboolean>(listener); }
	void registerDynamicSensorCallback(jni::ref<android::hardware::SensorManager_DynamicSensorCallback> callback) { return call_method<"registerDynamicSensorCallback", void>(callback); }
	void registerDynamicSensorCallback(jni::ref<android::hardware::SensorManager_DynamicSensorCallback> callback, jni::ref<android::os::Handler> handler) { return call_method<"registerDynamicSensorCallback", void>(callback, handler); }
	void unregisterDynamicSensorCallback(jni::ref<android::hardware::SensorManager_DynamicSensorCallback> callback) { return call_method<"unregisterDynamicSensorCallback", void>(callback); }
	jboolean isDynamicSensorDiscoverySupported() { return call_method<"isDynamicSensorDiscoverySupported", jboolean>(); }
	static jboolean getRotationMatrix(jni::ref<jni::array<jfloat>> R, jni::ref<jni::array<jfloat>> I, jni::ref<jni::array<jfloat>> gravity, jni::ref<jni::array<jfloat>> geomagnetic) { return call_static_method<"getRotationMatrix", jboolean>(R, I, gravity, geomagnetic); }
	static jfloat getInclination(jni::ref<jni::array<jfloat>> I) { return call_static_method<"getInclination", jfloat>(I); }
	static jboolean remapCoordinateSystem(jni::ref<jni::array<jfloat>> inR, jint X, jint Y, jni::ref<jni::array<jfloat>> outR) { return call_static_method<"remapCoordinateSystem", jboolean>(inR, X, Y, outR); }
	static jni::ref<jni::array<jfloat>> getOrientation(jni::ref<jni::array<jfloat>> R, jni::ref<jni::array<jfloat>> values) { return call_static_method<"getOrientation", jni::ref<jni::array<jfloat>>>(R, values); }
	static jfloat getAltitude(jfloat p0, jfloat p) { return call_static_method<"getAltitude", jfloat>(p0, p); }
	static void getAngleChange(jni::ref<jni::array<jfloat>> angleChange, jni::ref<jni::array<jfloat>> R, jni::ref<jni::array<jfloat>> prevR) { return call_static_method<"getAngleChange", void>(angleChange, R, prevR); }
	static void getRotationMatrixFromVector(jni::ref<jni::array<jfloat>> R, jni::ref<jni::array<jfloat>> rotationVector) { return call_static_method<"getRotationMatrixFromVector", void>(R, rotationVector); }
	static void getQuaternionFromVector(jni::ref<jni::array<jfloat>> Q, jni::ref<jni::array<jfloat>> rv) { return call_static_method<"getQuaternionFromVector", void>(Q, rv); }
	jboolean requestTriggerSensor(jni::ref<android::hardware::TriggerEventListener> listener, jni::ref<android::hardware::Sensor> sensor) { return call_method<"requestTriggerSensor", jboolean>(listener, sensor); }
	jboolean cancelTriggerSensor(jni::ref<android::hardware::TriggerEventListener> listener, jni::ref<android::hardware::Sensor> sensor) { return call_method<"cancelTriggerSensor", jboolean>(listener, sensor); }

protected:

	SensorManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSORMANAGER