// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/health/connect/datatypes/IntervalRecord.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_STEPSRECORD_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_STEPSRECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes { class StepsRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::StepsRecord>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/StepsRecord";
	using base_classes = std::tuple<scapix::java_api::android::health::connect::datatypes::IntervalRecord>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_STEPSRECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_STEPSRECORD)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_STEPSRECORD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/health/connect/datatypes/AggregationType.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/health/connect/datatypes/StepsRecord_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::StepsRecord : public jni::object_base<"android/health/connect/datatypes/StepsRecord",
	android::health::connect::datatypes::IntervalRecord>
{
public:

	using Builder = StepsRecord_Builder;

	static jni::ref<android::health::connect::datatypes::AggregationType> STEPS_COUNT_TOTAL() { return get_static_field<"STEPS_COUNT_TOTAL", jni::ref<android::health::connect::datatypes::AggregationType>>(); }

	jlong getCount() { return call_method<"getCount", jlong>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	StepsRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_STEPSRECORD
