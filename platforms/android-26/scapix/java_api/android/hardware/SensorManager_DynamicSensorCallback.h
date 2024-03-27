// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSORMANAGER_DYNAMICSENSORCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSORMANAGER_DYNAMICSENSORCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware { class SensorManager_DynamicSensorCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::SensorManager_DynamicSensorCallback>
{
	static constexpr fixed_string class_name = "android/hardware/SensorManager$DynamicSensorCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSORMANAGER_DYNAMICSENSORCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSORMANAGER_DYNAMICSENSORCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSORMANAGER_DYNAMICSENSORCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/Sensor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::SensorManager_DynamicSensorCallback : public jni::object_base<"android/hardware/SensorManager$DynamicSensorCallback",
	java::lang::Object>
{
public:

	static jni::ref<android::hardware::SensorManager_DynamicSensorCallback> new_object() { return base_::new_object(); }
	void onDynamicSensorConnected(jni::ref<android::hardware::Sensor> sensor) { return call_method<"onDynamicSensorConnected", void>(sensor); }
	void onDynamicSensorDisconnected(jni::ref<android::hardware::Sensor> sensor) { return call_method<"onDynamicSensorDisconnected", void>(sensor); }

protected:

	SensorManager_DynamicSensorCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSORMANAGER_DYNAMICSENSORCALLBACK