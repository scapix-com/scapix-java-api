// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_DISTANCERECORD_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_DISTANCERECORD_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes { class DistanceRecord_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::DistanceRecord_Builder>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/DistanceRecord$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_DISTANCERECORD_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_DISTANCERECORD_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_DISTANCERECORD_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/health/connect/datatypes/DistanceRecord.h>
#include <scapix/java_api/android/health/connect/datatypes/Metadata.h>
#include <scapix/java_api/android/health/connect/datatypes/units/Length.h>
#include <scapix/java_api/java/time/Instant.h>
#include <scapix/java_api/java/time/ZoneOffset.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::DistanceRecord_Builder : public jni::object_base<"android/health/connect/datatypes/DistanceRecord$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::health::connect::datatypes::DistanceRecord_Builder> new_object(jni::ref<android::health::connect::datatypes::Metadata> metadata, jni::ref<java::time::Instant> startTime, jni::ref<java::time::Instant> endTime, jni::ref<android::health::connect::datatypes::units::Length> distance) { return base_::new_object(metadata, startTime, endTime, distance); }
	jni::ref<android::health::connect::datatypes::DistanceRecord_Builder> setStartZoneOffset(jni::ref<java::time::ZoneOffset> startZoneOffset) { return call_method<"setStartZoneOffset", jni::ref<android::health::connect::datatypes::DistanceRecord_Builder>>(startZoneOffset); }
	jni::ref<android::health::connect::datatypes::DistanceRecord_Builder> setEndZoneOffset(jni::ref<java::time::ZoneOffset> endZoneOffset) { return call_method<"setEndZoneOffset", jni::ref<android::health::connect::datatypes::DistanceRecord_Builder>>(endZoneOffset); }
	jni::ref<android::health::connect::datatypes::DistanceRecord_Builder> clearStartZoneOffset() { return call_method<"clearStartZoneOffset", jni::ref<android::health::connect::datatypes::DistanceRecord_Builder>>(); }
	jni::ref<android::health::connect::datatypes::DistanceRecord_Builder> clearEndZoneOffset() { return call_method<"clearEndZoneOffset", jni::ref<android::health::connect::datatypes::DistanceRecord_Builder>>(); }
	jni::ref<android::health::connect::datatypes::DistanceRecord> build() { return call_method<"build", jni::ref<android::health::connect::datatypes::DistanceRecord>>(); }

protected:

	DistanceRecord_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_DISTANCERECORD_BUILDER