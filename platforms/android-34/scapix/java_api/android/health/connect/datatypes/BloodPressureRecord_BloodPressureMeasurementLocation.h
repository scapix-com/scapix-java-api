// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BLOODPRESSURERECORD_BLOODPRESSUREMEASUREMENTLOCATION_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BLOODPRESSURERECORD_BLOODPRESSUREMEASUREMENTLOCATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes { class BloodPressureRecord_BloodPressureMeasurementLocation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::BloodPressureRecord_BloodPressureMeasurementLocation>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/BloodPressureRecord$BloodPressureMeasurementLocation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BLOODPRESSURERECORD_BLOODPRESSUREMEASUREMENTLOCATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BLOODPRESSURERECORD_BLOODPRESSUREMEASUREMENTLOCATION)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BLOODPRESSURERECORD_BLOODPRESSUREMEASUREMENTLOCATION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::BloodPressureRecord_BloodPressureMeasurementLocation : public jni::object_base<"android/health/connect/datatypes/BloodPressureRecord$BloodPressureMeasurementLocation",
	java::lang::Object>
{
public:

	static jint BLOOD_PRESSURE_MEASUREMENT_LOCATION_LEFT_UPPER_ARM() { return get_static_field<"BLOOD_PRESSURE_MEASUREMENT_LOCATION_LEFT_UPPER_ARM", jint>(); }
	static jint BLOOD_PRESSURE_MEASUREMENT_LOCATION_LEFT_WRIST() { return get_static_field<"BLOOD_PRESSURE_MEASUREMENT_LOCATION_LEFT_WRIST", jint>(); }
	static jint BLOOD_PRESSURE_MEASUREMENT_LOCATION_RIGHT_UPPER_ARM() { return get_static_field<"BLOOD_PRESSURE_MEASUREMENT_LOCATION_RIGHT_UPPER_ARM", jint>(); }
	static jint BLOOD_PRESSURE_MEASUREMENT_LOCATION_RIGHT_WRIST() { return get_static_field<"BLOOD_PRESSURE_MEASUREMENT_LOCATION_RIGHT_WRIST", jint>(); }
	static jint BLOOD_PRESSURE_MEASUREMENT_LOCATION_UNKNOWN() { return get_static_field<"BLOOD_PRESSURE_MEASUREMENT_LOCATION_UNKNOWN", jint>(); }


protected:

	BloodPressureRecord_BloodPressureMeasurementLocation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BLOODPRESSURERECORD_BLOODPRESSUREMEASUREMENTLOCATION