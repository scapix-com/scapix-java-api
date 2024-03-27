// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_SLEEPSESSIONRECORD_STAGE_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_SLEEPSESSIONRECORD_STAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes { class SleepSessionRecord_Stage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::SleepSessionRecord_Stage>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/SleepSessionRecord$Stage";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_SLEEPSESSIONRECORD_STAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_SLEEPSESSIONRECORD_STAGE)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_SLEEPSESSIONRECORD_STAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/time/Instant.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::SleepSessionRecord_Stage : public jni::object_base<"android/health/connect/datatypes/SleepSessionRecord$Stage",
	java::lang::Object>
{
public:

	static jni::ref<android::health::connect::datatypes::SleepSessionRecord_Stage> new_object(jni::ref<java::time::Instant> startTime, jni::ref<java::time::Instant> endTime, jint stageType) { return base_::new_object(startTime, endTime, stageType); }
	jni::ref<java::time::Instant> getStartTime() { return call_method<"getStartTime", jni::ref<java::time::Instant>>(); }
	jni::ref<java::time::Instant> getEndTime() { return call_method<"getEndTime", jni::ref<java::time::Instant>>(); }
	jint getType() { return call_method<"getType", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	SleepSessionRecord_Stage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_SLEEPSESSIONRECORD_STAGE
