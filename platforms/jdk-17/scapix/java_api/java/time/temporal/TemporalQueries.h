// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_TEMPORALQUERIES_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_TEMPORALQUERIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::temporal { class TemporalQueries; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::temporal::TemporalQueries>
{
	static constexpr fixed_string class_name = "java/time/temporal/TemporalQueries";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_TEMPORALQUERIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_TEMPORALQUERIES)
#define SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_TEMPORALQUERIES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/time/temporal/TemporalQuery.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::temporal::TemporalQueries : public jni::object_base<"java/time/temporal/TemporalQueries",
	java::lang::Object>
{
public:

	static jni::ref<java::time::temporal::TemporalQuery> zoneId() { return call_static_method<"zoneId", jni::ref<java::time::temporal::TemporalQuery>>(); }
	static jni::ref<java::time::temporal::TemporalQuery> chronology() { return call_static_method<"chronology", jni::ref<java::time::temporal::TemporalQuery>>(); }
	static jni::ref<java::time::temporal::TemporalQuery> precision() { return call_static_method<"precision", jni::ref<java::time::temporal::TemporalQuery>>(); }
	static jni::ref<java::time::temporal::TemporalQuery> zone() { return call_static_method<"zone", jni::ref<java::time::temporal::TemporalQuery>>(); }
	static jni::ref<java::time::temporal::TemporalQuery> offset() { return call_static_method<"offset", jni::ref<java::time::temporal::TemporalQuery>>(); }
	static jni::ref<java::time::temporal::TemporalQuery> localDate() { return call_static_method<"localDate", jni::ref<java::time::temporal::TemporalQuery>>(); }
	static jni::ref<java::time::temporal::TemporalQuery> localTime() { return call_static_method<"localTime", jni::ref<java::time::temporal::TemporalQuery>>(); }

protected:

	TemporalQueries(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_TEMPORALQUERIES
