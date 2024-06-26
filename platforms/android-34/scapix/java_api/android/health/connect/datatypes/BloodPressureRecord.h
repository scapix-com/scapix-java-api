// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/health/connect/datatypes/InstantRecord.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BLOODPRESSURERECORD_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BLOODPRESSURERECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes { class BloodPressureRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::BloodPressureRecord>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/BloodPressureRecord";
	using base_classes = std::tuple<scapix::java_api::android::health::connect::datatypes::InstantRecord>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BLOODPRESSURERECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BLOODPRESSURERECORD)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BLOODPRESSURERECORD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/health/connect/datatypes/units/Pressure.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/health/connect/datatypes/BloodPressureRecord_Builder.h>
#include <scapix/java_api/android/health/connect/datatypes/BloodPressureRecord_BodyPosition.h>
#include <scapix/java_api/android/health/connect/datatypes/BloodPressureRecord_BloodPressureMeasurementLocation.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::BloodPressureRecord : public jni::object_base<"android/health/connect/datatypes/BloodPressureRecord",
	android::health::connect::datatypes::InstantRecord>
{
public:

	using Builder = BloodPressureRecord_Builder;
	using BodyPosition = BloodPressureRecord_BodyPosition;
	using BloodPressureMeasurementLocation = BloodPressureRecord_BloodPressureMeasurementLocation;

	jint getMeasurementLocation() { return call_method<"getMeasurementLocation", jint>(); }
	jni::ref<android::health::connect::datatypes::units::Pressure> getSystolic() { return call_method<"getSystolic", jni::ref<android::health::connect::datatypes::units::Pressure>>(); }
	jni::ref<android::health::connect::datatypes::units::Pressure> getDiastolic() { return call_method<"getDiastolic", jni::ref<android::health::connect::datatypes::units::Pressure>>(); }
	jint getBodyPosition() { return call_method<"getBodyPosition", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	BloodPressureRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BLOODPRESSURERECORD
