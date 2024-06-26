// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSOREVENT_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSOREVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware { class SensorEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::SensorEvent>
{
	static constexpr fixed_string class_name = "android/hardware/SensorEvent";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSOREVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSOREVENT)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSOREVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/Sensor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::SensorEvent : public jni::object_base<"android/hardware/SensorEvent",
	java::lang::Object>
{
public:

	jint accuracy() { return get_field<"accuracy", jint>(); }
	void accuracy(jint v) { set_field<"accuracy", jint>(v); }
	jboolean firstEventAfterDiscontinuity() { return get_field<"firstEventAfterDiscontinuity", jboolean>(); }
	void firstEventAfterDiscontinuity(jboolean v) { set_field<"firstEventAfterDiscontinuity", jboolean>(v); }
	jni::ref<android::hardware::Sensor> sensor() { return get_field<"sensor", jni::ref<android::hardware::Sensor>>(); }
	void sensor(jni::ref<android::hardware::Sensor> v) { set_field<"sensor", jni::ref<android::hardware::Sensor>>(v); }
	jlong timestamp() { return get_field<"timestamp", jlong>(); }
	void timestamp(jlong v) { set_field<"timestamp", jlong>(v); }
	jni::ref<jni::array<jfloat>> values() { return get_field<"values", jni::ref<jni::array<jfloat>>>(); }


protected:

	SensorEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_SENSOREVENT
