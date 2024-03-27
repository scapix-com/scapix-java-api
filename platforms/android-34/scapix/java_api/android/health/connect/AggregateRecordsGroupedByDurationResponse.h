// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_AGGREGATERECORDSGROUPEDBYDURATIONRESPONSE_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_AGGREGATERECORDSGROUPEDBYDURATIONRESPONSE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect { class AggregateRecordsGroupedByDurationResponse; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::AggregateRecordsGroupedByDurationResponse>
{
	static constexpr fixed_string class_name = "android/health/connect/AggregateRecordsGroupedByDurationResponse";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_AGGREGATERECORDSGROUPEDBYDURATIONRESPONSE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_AGGREGATERECORDSGROUPEDBYDURATIONRESPONSE)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_AGGREGATERECORDSGROUPEDBYDURATIONRESPONSE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/health/connect/datatypes/AggregationType.h>
#include <scapix/java_api/java/time/Instant.h>
#include <scapix/java_api/java/time/ZoneOffset.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::AggregateRecordsGroupedByDurationResponse : public jni::object_base<"android/health/connect/AggregateRecordsGroupedByDurationResponse",
	java::lang::Object>
{
public:

	jni::ref<java::time::Instant> getStartTime() { return call_method<"getStartTime", jni::ref<java::time::Instant>>(); }
	jni::ref<java::time::Instant> getEndTime() { return call_method<"getEndTime", jni::ref<java::time::Instant>>(); }
	jni::ref<java::lang::Object> get(jni::ref<android::health::connect::datatypes::AggregationType> aggregationType) { return call_method<"get", jni::ref<java::lang::Object>>(aggregationType); }
	jni::ref<java::time::ZoneOffset> getZoneOffset(jni::ref<android::health::connect::datatypes::AggregationType> aggregationType) { return call_method<"getZoneOffset", jni::ref<java::time::ZoneOffset>>(aggregationType); }

protected:

	AggregateRecordsGroupedByDurationResponse(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_AGGREGATERECORDSGROUPEDBYDURATIONRESPONSE