// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/health/connect/datatypes/InstantRecord.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BASALMETABOLICRATERECORD_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BASALMETABOLICRATERECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes { class BasalMetabolicRateRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::BasalMetabolicRateRecord>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/BasalMetabolicRateRecord";
	using base_classes = std::tuple<scapix::java_api::android::health::connect::datatypes::InstantRecord>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BASALMETABOLICRATERECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BASALMETABOLICRATERECORD)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BASALMETABOLICRATERECORD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/health/connect/datatypes/AggregationType.h>
#include <scapix/java_api/android/health/connect/datatypes/units/Power.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/health/connect/datatypes/BasalMetabolicRateRecord_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::BasalMetabolicRateRecord : public jni::object_base<"android/health/connect/datatypes/BasalMetabolicRateRecord",
	android::health::connect::datatypes::InstantRecord>
{
public:

	using Builder = BasalMetabolicRateRecord_Builder;

	static jni::ref<android::health::connect::datatypes::AggregationType> BASAL_CALORIES_TOTAL() { return get_static_field<"BASAL_CALORIES_TOTAL", jni::ref<android::health::connect::datatypes::AggregationType>>(); }

	jni::ref<android::health::connect::datatypes::units::Power> getBasalMetabolicRate() { return call_method<"getBasalMetabolicRate", jni::ref<android::health::connect::datatypes::units::Power>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	BasalMetabolicRateRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BASALMETABOLICRATERECORD