// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/health/connect/datatypes/InstantRecord.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_OVULATIONTESTRECORD_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_OVULATIONTESTRECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes { class OvulationTestRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::OvulationTestRecord>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/OvulationTestRecord";
	using base_classes = std::tuple<scapix::java_api::android::health::connect::datatypes::InstantRecord>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_OVULATIONTESTRECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_OVULATIONTESTRECORD)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_OVULATIONTESTRECORD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/health/connect/datatypes/OvulationTestRecord_OvulationTestResult.h>
#include <scapix/java_api/android/health/connect/datatypes/OvulationTestRecord_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::OvulationTestRecord : public jni::object_base<"android/health/connect/datatypes/OvulationTestRecord",
	android::health::connect::datatypes::InstantRecord>
{
public:

	using OvulationTestResult = OvulationTestRecord_OvulationTestResult;
	using Builder = OvulationTestRecord_Builder;

	jint getResult() { return call_method<"getResult", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	OvulationTestRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_OVULATIONTESTRECORD
