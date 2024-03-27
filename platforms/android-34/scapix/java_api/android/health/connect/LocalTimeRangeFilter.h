// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/health/connect/TimeRangeFilter.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_LOCALTIMERANGEFILTER_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_LOCALTIMERANGEFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect { class LocalTimeRangeFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::LocalTimeRangeFilter>
{
	static constexpr fixed_string class_name = "android/health/connect/LocalTimeRangeFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::health::connect::TimeRangeFilter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_LOCALTIMERANGEFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_LOCALTIMERANGEFILTER)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_LOCALTIMERANGEFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/time/LocalDateTime.h>
#include <scapix/java_api/android/health/connect/LocalTimeRangeFilter_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::LocalTimeRangeFilter : public jni::object_base<"android/health/connect/LocalTimeRangeFilter",
	java::lang::Object,
	android::health::connect::TimeRangeFilter>
{
public:

	using Builder = LocalTimeRangeFilter_Builder;

	jni::ref<java::time::LocalDateTime> getStartTime() { return call_method<"getStartTime", jni::ref<java::time::LocalDateTime>>(); }
	jni::ref<java::time::LocalDateTime> getEndTime() { return call_method<"getEndTime", jni::ref<java::time::LocalDateTime>>(); }
	jboolean isBounded() { return call_method<"isBounded", jboolean>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	LocalTimeRangeFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_LOCALTIMERANGEFILTER
