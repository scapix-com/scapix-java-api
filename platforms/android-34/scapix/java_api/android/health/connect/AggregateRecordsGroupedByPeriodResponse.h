// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_AGGREGATERECORDSGROUPEDBYPERIODRESPONSE_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_AGGREGATERECORDSGROUPEDBYPERIODRESPONSE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect { class AggregateRecordsGroupedByPeriodResponse; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::AggregateRecordsGroupedByPeriodResponse>
{
	static constexpr fixed_string class_name = "android/health/connect/AggregateRecordsGroupedByPeriodResponse";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_AGGREGATERECORDSGROUPEDBYPERIODRESPONSE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_AGGREGATERECORDSGROUPEDBYPERIODRESPONSE)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_AGGREGATERECORDSGROUPEDBYPERIODRESPONSE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/health/connect/datatypes/AggregationType.h>
#include <scapix/java_api/java/time/LocalDateTime.h>
#include <scapix/java_api/java/time/ZoneOffset.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::AggregateRecordsGroupedByPeriodResponse : public jni::object_base<"android/health/connect/AggregateRecordsGroupedByPeriodResponse",
	java::lang::Object>
{
public:

	jni::ref<java::time::LocalDateTime> getStartTime() { return call_method<"getStartTime", jni::ref<java::time::LocalDateTime>>(); }
	jni::ref<java::time::LocalDateTime> getEndTime() { return call_method<"getEndTime", jni::ref<java::time::LocalDateTime>>(); }
	jni::ref<java::lang::Object> get(jni::ref<android::health::connect::datatypes::AggregationType> aggregationType) { return call_method<"get", jni::ref<java::lang::Object>>(aggregationType); }
	jni::ref<java::time::ZoneOffset> getZoneOffset(jni::ref<android::health::connect::datatypes::AggregationType> aggregationType) { return call_method<"getZoneOffset", jni::ref<java::time::ZoneOffset>>(aggregationType); }

protected:

	AggregateRecordsGroupedByPeriodResponse(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_AGGREGATERECORDSGROUPEDBYPERIODRESPONSE