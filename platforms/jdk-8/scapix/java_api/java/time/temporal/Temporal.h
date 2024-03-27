// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_TEMPORAL_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_TEMPORAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::temporal { class Temporal; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::temporal::Temporal>
{
	static constexpr fixed_string class_name = "java/time/temporal/Temporal";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::time::temporal::TemporalAccessor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_TEMPORAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_TEMPORAL)
#define SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_TEMPORAL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/time/temporal/TemporalAdjuster.h>
#include <scapix/java_api/java/time/temporal/TemporalAmount.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/TemporalUnit.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::temporal::Temporal : public jni::object_base<"java/time/temporal/Temporal",
	java::lang::Object,
	java::time::temporal::TemporalAccessor>
{
public:

	jboolean isSupported(jni::ref<java::time::temporal::TemporalUnit> p1) { return call_method<"isSupported", jboolean>(p1); }
	jni::ref<java::time::temporal::Temporal> with(jni::ref<java::time::temporal::TemporalAdjuster> p1) { return call_method<"with", jni::ref<java::time::temporal::Temporal>>(p1); }
	jni::ref<java::time::temporal::Temporal> with(jni::ref<java::time::temporal::TemporalField> p1, jlong p2) { return call_method<"with", jni::ref<java::time::temporal::Temporal>>(p1, p2); }
	jni::ref<java::time::temporal::Temporal> plus(jni::ref<java::time::temporal::TemporalAmount> p1) { return call_method<"plus", jni::ref<java::time::temporal::Temporal>>(p1); }
	jni::ref<java::time::temporal::Temporal> plus(jlong p1, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"plus", jni::ref<java::time::temporal::Temporal>>(p1, p2); }
	jni::ref<java::time::temporal::Temporal> minus(jni::ref<java::time::temporal::TemporalAmount> p1) { return call_method<"minus", jni::ref<java::time::temporal::Temporal>>(p1); }
	jni::ref<java::time::temporal::Temporal> minus(jlong p1, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"minus", jni::ref<java::time::temporal::Temporal>>(p1, p2); }
	jlong until(jni::ref<java::time::temporal::Temporal> p1, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"until", jlong>(p1, p2); }

protected:

	Temporal(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_TEMPORAL
