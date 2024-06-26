// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/health/connect/datatypes/IntervalRecord.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_SLEEPSESSIONRECORD_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_SLEEPSESSIONRECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes { class SleepSessionRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::SleepSessionRecord>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/SleepSessionRecord";
	using base_classes = std::tuple<scapix::java_api::android::health::connect::datatypes::IntervalRecord>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_SLEEPSESSIONRECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_SLEEPSESSIONRECORD)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_SLEEPSESSIONRECORD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/health/connect/datatypes/AggregationType.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/health/connect/datatypes/SleepSessionRecord_StageType.h>
#include <scapix/java_api/android/health/connect/datatypes/SleepSessionRecord_Stage.h>
#include <scapix/java_api/android/health/connect/datatypes/SleepSessionRecord_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::SleepSessionRecord : public jni::object_base<"android/health/connect/datatypes/SleepSessionRecord",
	android::health::connect::datatypes::IntervalRecord>
{
public:

	using StageType = SleepSessionRecord_StageType;
	using Stage = SleepSessionRecord_Stage;
	using Builder = SleepSessionRecord_Builder;

	static jni::ref<android::health::connect::datatypes::AggregationType> SLEEP_DURATION_TOTAL() { return get_static_field<"SLEEP_DURATION_TOTAL", jni::ref<android::health::connect::datatypes::AggregationType>>(); }

	jni::ref<java::lang::CharSequence> getNotes() { return call_method<"getNotes", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<java::lang::CharSequence> getTitle() { return call_method<"getTitle", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<java::util::List> getStages() { return call_method<"getStages", jni::ref<java::util::List>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	SleepSessionRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_SLEEPSESSIONRECORD
