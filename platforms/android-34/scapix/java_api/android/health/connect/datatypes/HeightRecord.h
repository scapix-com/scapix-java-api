// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/health/connect/datatypes/InstantRecord.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_HEIGHTRECORD_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_HEIGHTRECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes { class HeightRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::HeightRecord>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/HeightRecord";
	using base_classes = std::tuple<scapix::java_api::android::health::connect::datatypes::InstantRecord>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_HEIGHTRECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_HEIGHTRECORD)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_HEIGHTRECORD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/health/connect/datatypes/AggregationType.h>
#include <scapix/java_api/android/health/connect/datatypes/units/Length.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/health/connect/datatypes/HeightRecord_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::HeightRecord : public jni::object_base<"android/health/connect/datatypes/HeightRecord",
	android::health::connect::datatypes::InstantRecord>
{
public:

	using Builder = HeightRecord_Builder;

	static jni::ref<android::health::connect::datatypes::AggregationType> HEIGHT_AVG() { return get_static_field<"HEIGHT_AVG", jni::ref<android::health::connect::datatypes::AggregationType>>(); }
	static jni::ref<android::health::connect::datatypes::AggregationType> HEIGHT_MAX() { return get_static_field<"HEIGHT_MAX", jni::ref<android::health::connect::datatypes::AggregationType>>(); }
	static jni::ref<android::health::connect::datatypes::AggregationType> HEIGHT_MIN() { return get_static_field<"HEIGHT_MIN", jni::ref<android::health::connect::datatypes::AggregationType>>(); }

	jni::ref<android::health::connect::datatypes::units::Length> getHeight() { return call_method<"getHeight", jni::ref<android::health::connect::datatypes::units::Length>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	HeightRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_HEIGHTRECORD
