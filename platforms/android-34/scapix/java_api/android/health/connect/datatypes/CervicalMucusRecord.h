// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/health/connect/datatypes/InstantRecord.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_CERVICALMUCUSRECORD_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_CERVICALMUCUSRECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes { class CervicalMucusRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::CervicalMucusRecord>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/CervicalMucusRecord";
	using base_classes = std::tuple<scapix::java_api::android::health::connect::datatypes::InstantRecord>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_CERVICALMUCUSRECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_CERVICALMUCUSRECORD)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_CERVICALMUCUSRECORD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/health/connect/datatypes/CervicalMucusRecord_CervicalMucusSensation.h>
#include <scapix/java_api/android/health/connect/datatypes/CervicalMucusRecord_CervicalMucusAppearance.h>
#include <scapix/java_api/android/health/connect/datatypes/CervicalMucusRecord_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::CervicalMucusRecord : public jni::object_base<"android/health/connect/datatypes/CervicalMucusRecord",
	android::health::connect::datatypes::InstantRecord>
{
public:

	using CervicalMucusSensation = CervicalMucusRecord_CervicalMucusSensation;
	using CervicalMucusAppearance = CervicalMucusRecord_CervicalMucusAppearance;
	using Builder = CervicalMucusRecord_Builder;

	jint getSensation() { return call_method<"getSensation", jint>(); }
	jint getAppearance() { return call_method<"getAppearance", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	CervicalMucusRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_CERVICALMUCUSRECORD
