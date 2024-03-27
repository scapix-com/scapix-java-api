// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/health/connect/datatypes/InstantRecord.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BODYWATERMASSRECORD_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BODYWATERMASSRECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes { class BodyWaterMassRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::BodyWaterMassRecord>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/BodyWaterMassRecord";
	using base_classes = std::tuple<scapix::java_api::android::health::connect::datatypes::InstantRecord>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BODYWATERMASSRECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BODYWATERMASSRECORD)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BODYWATERMASSRECORD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/health/connect/datatypes/units/Mass.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/health/connect/datatypes/BodyWaterMassRecord_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::BodyWaterMassRecord : public jni::object_base<"android/health/connect/datatypes/BodyWaterMassRecord",
	android::health::connect::datatypes::InstantRecord>
{
public:

	using Builder = BodyWaterMassRecord_Builder;

	jni::ref<android::health::connect::datatypes::units::Mass> getBodyWaterMass() { return call_method<"getBodyWaterMass", jni::ref<android::health::connect::datatypes::units::Mass>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	BodyWaterMassRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_BODYWATERMASSRECORD