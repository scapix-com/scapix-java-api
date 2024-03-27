// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_TEMPORALFIELD_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_TEMPORALFIELD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::temporal { class TemporalField; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::temporal::TemporalField>
{
	static constexpr fixed_string class_name = "java/time/temporal/TemporalField";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_TEMPORALFIELD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_TEMPORALFIELD)
#define SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_TEMPORALFIELD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/format/ResolverStyle.h>
#include <scapix/java_api/java/time/temporal/Temporal.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>
#include <scapix/java_api/java/time/temporal/TemporalUnit.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::temporal::TemporalField : public jni::object_base<"java/time/temporal/TemporalField",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> getDisplayName(jni::ref<java::util::Locale> p1) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::time::temporal::TemporalUnit> getBaseUnit() { return call_method<"getBaseUnit", jni::ref<java::time::temporal::TemporalUnit>>(); }
	jni::ref<java::time::temporal::TemporalUnit> getRangeUnit() { return call_method<"getRangeUnit", jni::ref<java::time::temporal::TemporalUnit>>(); }
	jni::ref<java::time::temporal::ValueRange> range() { return call_method<"range", jni::ref<java::time::temporal::ValueRange>>(); }
	jboolean isDateBased() { return call_method<"isDateBased", jboolean>(); }
	jboolean isTimeBased() { return call_method<"isTimeBased", jboolean>(); }
	jboolean isSupportedBy(jni::ref<java::time::temporal::TemporalAccessor> p1) { return call_method<"isSupportedBy", jboolean>(p1); }
	jni::ref<java::time::temporal::ValueRange> rangeRefinedBy(jni::ref<java::time::temporal::TemporalAccessor> p1) { return call_method<"rangeRefinedBy", jni::ref<java::time::temporal::ValueRange>>(p1); }
	jlong getFrom(jni::ref<java::time::temporal::TemporalAccessor> p1) { return call_method<"getFrom", jlong>(p1); }
	jni::ref<java::time::temporal::Temporal> adjustInto(jni::ref<java::time::temporal::Temporal> p1, jlong p2) { return call_method<"adjustInto", jni::ref<java::time::temporal::Temporal>>(p1, p2); }
	jni::ref<java::time::temporal::TemporalAccessor> resolve(jni::ref<java::util::Map> p1, jni::ref<java::time::temporal::TemporalAccessor> p2, jni::ref<java::time::format::ResolverStyle> p3) { return call_method<"resolve", jni::ref<java::time::temporal::TemporalAccessor>>(p1, p2, p3); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	TemporalField(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_TEMPORALFIELD
