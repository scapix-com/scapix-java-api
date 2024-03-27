// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_OVULATIONTESTRECORD_OVULATIONTESTRESULT_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_OVULATIONTESTRECORD_OVULATIONTESTRESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes { class OvulationTestRecord_OvulationTestResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::OvulationTestRecord_OvulationTestResult>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/OvulationTestRecord$OvulationTestResult";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_OVULATIONTESTRECORD_OVULATIONTESTRESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_OVULATIONTESTRECORD_OVULATIONTESTRESULT)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_OVULATIONTESTRECORD_OVULATIONTESTRESULT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::OvulationTestRecord_OvulationTestResult : public jni::object_base<"android/health/connect/datatypes/OvulationTestRecord$OvulationTestResult",
	java::lang::Object>
{
public:

	static jint RESULT_HIGH() { return get_static_field<"RESULT_HIGH", jint>(); }
	static jint RESULT_INCONCLUSIVE() { return get_static_field<"RESULT_INCONCLUSIVE", jint>(); }
	static jint RESULT_NEGATIVE() { return get_static_field<"RESULT_NEGATIVE", jint>(); }
	static jint RESULT_POSITIVE() { return get_static_field<"RESULT_POSITIVE", jint>(); }


protected:

	OvulationTestRecord_OvulationTestResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_OVULATIONTESTRECORD_OVULATIONTESTRESULT