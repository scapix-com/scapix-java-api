// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSORADDITIONALINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSORADDITIONALINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware { class SensorAdditionalInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::SensorAdditionalInfo>
{
	static constexpr fixed_string class_name = "android/hardware/SensorAdditionalInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSORADDITIONALINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSORADDITIONALINFO)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSORADDITIONALINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/Sensor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::SensorAdditionalInfo : public jni::object_base<"android/hardware/SensorAdditionalInfo",
	java::lang::Object>
{
public:

	static jint TYPE_FRAME_BEGIN() { return get_static_field<"TYPE_FRAME_BEGIN", jint>(); }
	static jint TYPE_FRAME_END() { return get_static_field<"TYPE_FRAME_END", jint>(); }
	static jint TYPE_INTERNAL_TEMPERATURE() { return get_static_field<"TYPE_INTERNAL_TEMPERATURE", jint>(); }
	static jint TYPE_SAMPLING() { return get_static_field<"TYPE_SAMPLING", jint>(); }
	static jint TYPE_SENSOR_PLACEMENT() { return get_static_field<"TYPE_SENSOR_PLACEMENT", jint>(); }
	static jint TYPE_UNTRACKED_DELAY() { return get_static_field<"TYPE_UNTRACKED_DELAY", jint>(); }
	static jint TYPE_VEC3_CALIBRATION() { return get_static_field<"TYPE_VEC3_CALIBRATION", jint>(); }
	jni::ref<jni::array<jfloat>> floatValues() { return get_field<"floatValues", jni::ref<jni::array<jfloat>>>(); }
	jni::ref<jni::array<jint>> intValues() { return get_field<"intValues", jni::ref<jni::array<jint>>>(); }
	jni::ref<android::hardware::Sensor> sensor() { return get_field<"sensor", jni::ref<android::hardware::Sensor>>(); }
	jint serial() { return get_field<"serial", jint>(); }
	jint type() { return get_field<"type", jint>(); }


protected:

	SensorAdditionalInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSORADDITIONALINFO
