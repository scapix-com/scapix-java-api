// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/health/connect/datatypes/InstantRecord.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_VO2MAXRECORD_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_VO2MAXRECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes { class Vo2MaxRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::Vo2MaxRecord>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/Vo2MaxRecord";
	using base_classes = std::tuple<scapix::java_api::android::health::connect::datatypes::InstantRecord>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_VO2MAXRECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_VO2MAXRECORD)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_VO2MAXRECORD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/health/connect/datatypes/Vo2MaxRecord_Vo2MaxMeasurementMethod.h>
#include <scapix/java_api/android/health/connect/datatypes/Vo2MaxRecord_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::Vo2MaxRecord : public jni::object_base<"android/health/connect/datatypes/Vo2MaxRecord",
	android::health::connect::datatypes::InstantRecord>
{
public:

	using Vo2MaxMeasurementMethod = Vo2MaxRecord_Vo2MaxMeasurementMethod;
	using Builder = Vo2MaxRecord_Builder;

	jint getMeasurementMethod() { return call_method<"getMeasurementMethod", jint>(); }
	jdouble getVo2MillilitersPerMinuteKilogram() { return call_method<"getVo2MillilitersPerMinuteKilogram", jdouble>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	Vo2MaxRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_VO2MAXRECORD
