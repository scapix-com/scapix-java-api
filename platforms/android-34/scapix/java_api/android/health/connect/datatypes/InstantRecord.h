// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/health/connect/datatypes/Record.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_INSTANTRECORD_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_INSTANTRECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes { class InstantRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::InstantRecord>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/InstantRecord";
	using base_classes = std::tuple<scapix::java_api::android::health::connect::datatypes::Record>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_INSTANTRECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_INSTANTRECORD)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_INSTANTRECORD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/Instant.h>
#include <scapix/java_api/java/time/ZoneOffset.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::InstantRecord : public jni::object_base<"android/health/connect/datatypes/InstantRecord",
	android::health::connect::datatypes::Record>
{
public:

	jni::ref<java::time::Instant> getTime() { return call_method<"getTime", jni::ref<java::time::Instant>>(); }
	jni::ref<java::time::ZoneOffset> getZoneOffset() { return call_method<"getZoneOffset", jni::ref<java::time::ZoneOffset>>(); }
	jboolean equals(jni::ref<java::lang::Object> object) { return call_method<"equals", jboolean>(object); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	InstantRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_INSTANTRECORD
