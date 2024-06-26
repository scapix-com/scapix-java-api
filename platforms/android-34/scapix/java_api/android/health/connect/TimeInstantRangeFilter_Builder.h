// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_TIMEINSTANTRANGEFILTER_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_TIMEINSTANTRANGEFILTER_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect { class TimeInstantRangeFilter_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::TimeInstantRangeFilter_Builder>
{
	static constexpr fixed_string class_name = "android/health/connect/TimeInstantRangeFilter$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_TIMEINSTANTRANGEFILTER_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_TIMEINSTANTRANGEFILTER_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_TIMEINSTANTRANGEFILTER_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/health/connect/TimeInstantRangeFilter.h>
#include <scapix/java_api/java/time/Instant.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::TimeInstantRangeFilter_Builder : public jni::object_base<"android/health/connect/TimeInstantRangeFilter$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::health::connect::TimeInstantRangeFilter_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::health::connect::TimeInstantRangeFilter_Builder> setStartTime(jni::ref<java::time::Instant> startTime) { return call_method<"setStartTime", jni::ref<android::health::connect::TimeInstantRangeFilter_Builder>>(startTime); }
	jni::ref<android::health::connect::TimeInstantRangeFilter_Builder> setEndTime(jni::ref<java::time::Instant> endTime) { return call_method<"setEndTime", jni::ref<android::health::connect::TimeInstantRangeFilter_Builder>>(endTime); }
	jni::ref<android::health::connect::TimeInstantRangeFilter> build() { return call_method<"build", jni::ref<android::health::connect::TimeInstantRangeFilter>>(); }

protected:

	TimeInstantRangeFilter_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_TIMEINSTANTRANGEFILTER_BUILDER
