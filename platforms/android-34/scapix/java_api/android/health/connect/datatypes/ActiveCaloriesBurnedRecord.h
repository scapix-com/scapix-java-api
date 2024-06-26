// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/health/connect/datatypes/IntervalRecord.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_ACTIVECALORIESBURNEDRECORD_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_ACTIVECALORIESBURNEDRECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes { class ActiveCaloriesBurnedRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::ActiveCaloriesBurnedRecord>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/ActiveCaloriesBurnedRecord";
	using base_classes = std::tuple<scapix::java_api::android::health::connect::datatypes::IntervalRecord>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_ACTIVECALORIESBURNEDRECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_ACTIVECALORIESBURNEDRECORD)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_ACTIVECALORIESBURNEDRECORD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/health/connect/datatypes/AggregationType.h>
#include <scapix/java_api/android/health/connect/datatypes/units/Energy.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/health/connect/datatypes/ActiveCaloriesBurnedRecord_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::ActiveCaloriesBurnedRecord : public jni::object_base<"android/health/connect/datatypes/ActiveCaloriesBurnedRecord",
	android::health::connect::datatypes::IntervalRecord>
{
public:

	using Builder = ActiveCaloriesBurnedRecord_Builder;

	static jni::ref<android::health::connect::datatypes::AggregationType> ACTIVE_CALORIES_TOTAL() { return get_static_field<"ACTIVE_CALORIES_TOTAL", jni::ref<android::health::connect::datatypes::AggregationType>>(); }

	jni::ref<android::health::connect::datatypes::units::Energy> getEnergy() { return call_method<"getEnergy", jni::ref<android::health::connect::datatypes::units::Energy>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	ActiveCaloriesBurnedRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_ACTIVECALORIESBURNEDRECORD
