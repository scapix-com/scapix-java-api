// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_EXERCISESEGMENT_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_EXERCISESEGMENT_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes { class ExerciseSegment_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::ExerciseSegment_Builder>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/ExerciseSegment$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_EXERCISESEGMENT_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_EXERCISESEGMENT_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_EXERCISESEGMENT_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/health/connect/datatypes/ExerciseSegment.h>
#include <scapix/java_api/java/time/Instant.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::ExerciseSegment_Builder : public jni::object_base<"android/health/connect/datatypes/ExerciseSegment$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::health::connect::datatypes::ExerciseSegment_Builder> new_object(jni::ref<java::time::Instant> startTime, jni::ref<java::time::Instant> endTime, jint segmentType) { return base_::new_object(startTime, endTime, segmentType); }
	jni::ref<android::health::connect::datatypes::ExerciseSegment_Builder> setRepetitionsCount(jint repetitionsCount) { return call_method<"setRepetitionsCount", jni::ref<android::health::connect::datatypes::ExerciseSegment_Builder>>(repetitionsCount); }
	jni::ref<android::health::connect::datatypes::ExerciseSegment> build() { return call_method<"build", jni::ref<android::health::connect::datatypes::ExerciseSegment>>(); }

protected:

	ExerciseSegment_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_EXERCISESEGMENT_BUILDER
