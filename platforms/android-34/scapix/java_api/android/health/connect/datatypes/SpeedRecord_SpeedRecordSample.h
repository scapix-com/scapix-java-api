// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_SPEEDRECORD_SPEEDRECORDSAMPLE_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_SPEEDRECORD_SPEEDRECORDSAMPLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes { class SpeedRecord_SpeedRecordSample; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::SpeedRecord_SpeedRecordSample>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/SpeedRecord$SpeedRecordSample";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_SPEEDRECORD_SPEEDRECORDSAMPLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_SPEEDRECORD_SPEEDRECORDSAMPLE)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_SPEEDRECORD_SPEEDRECORDSAMPLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/health/connect/datatypes/units/Velocity.h>
#include <scapix/java_api/java/time/Instant.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::SpeedRecord_SpeedRecordSample : public jni::object_base<"android/health/connect/datatypes/SpeedRecord$SpeedRecordSample",
	java::lang::Object>
{
public:

	static jni::ref<android::health::connect::datatypes::SpeedRecord_SpeedRecordSample> new_object(jni::ref<android::health::connect::datatypes::units::Velocity> speed, jni::ref<java::time::Instant> time) { return base_::new_object(speed, time); }
	jni::ref<android::health::connect::datatypes::units::Velocity> getSpeed() { return call_method<"getSpeed", jni::ref<android::health::connect::datatypes::units::Velocity>>(); }
	jni::ref<java::time::Instant> getTime() { return call_method<"getTime", jni::ref<java::time::Instant>>(); }
	jboolean equals(jni::ref<java::lang::Object> object) { return call_method<"equals", jboolean>(object); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	SpeedRecord_SpeedRecordSample(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_SPEEDRECORD_SPEEDRECORDSAMPLE
