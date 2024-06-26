// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_CHRONOFIELD_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_CHRONOFIELD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::temporal { class ChronoField; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::temporal::ChronoField>
{
	static constexpr fixed_string class_name = "java/time/temporal/ChronoField";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum, scapix::java_api::java::time::temporal::TemporalField>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_CHRONOFIELD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_CHRONOFIELD)
#define SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_CHRONOFIELD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/temporal/Temporal.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>
#include <scapix/java_api/java/time/temporal/TemporalUnit.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::temporal::ChronoField : public jni::object_base<"java/time/temporal/ChronoField",
	java::lang::Enum,
	java::time::temporal::TemporalField>
{
public:

	static jni::ref<java::time::temporal::ChronoField> ALIGNED_DAY_OF_WEEK_IN_MONTH() { return get_static_field<"ALIGNED_DAY_OF_WEEK_IN_MONTH", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> ALIGNED_DAY_OF_WEEK_IN_YEAR() { return get_static_field<"ALIGNED_DAY_OF_WEEK_IN_YEAR", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> ALIGNED_WEEK_OF_MONTH() { return get_static_field<"ALIGNED_WEEK_OF_MONTH", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> ALIGNED_WEEK_OF_YEAR() { return get_static_field<"ALIGNED_WEEK_OF_YEAR", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> AMPM_OF_DAY() { return get_static_field<"AMPM_OF_DAY", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> CLOCK_HOUR_OF_AMPM() { return get_static_field<"CLOCK_HOUR_OF_AMPM", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> CLOCK_HOUR_OF_DAY() { return get_static_field<"CLOCK_HOUR_OF_DAY", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> DAY_OF_MONTH() { return get_static_field<"DAY_OF_MONTH", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> DAY_OF_WEEK() { return get_static_field<"DAY_OF_WEEK", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> DAY_OF_YEAR() { return get_static_field<"DAY_OF_YEAR", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> EPOCH_DAY() { return get_static_field<"EPOCH_DAY", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> ERA() { return get_static_field<"ERA", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> HOUR_OF_AMPM() { return get_static_field<"HOUR_OF_AMPM", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> HOUR_OF_DAY() { return get_static_field<"HOUR_OF_DAY", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> INSTANT_SECONDS() { return get_static_field<"INSTANT_SECONDS", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> MICRO_OF_DAY() { return get_static_field<"MICRO_OF_DAY", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> MICRO_OF_SECOND() { return get_static_field<"MICRO_OF_SECOND", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> MILLI_OF_DAY() { return get_static_field<"MILLI_OF_DAY", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> MILLI_OF_SECOND() { return get_static_field<"MILLI_OF_SECOND", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> MINUTE_OF_DAY() { return get_static_field<"MINUTE_OF_DAY", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> MINUTE_OF_HOUR() { return get_static_field<"MINUTE_OF_HOUR", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> MONTH_OF_YEAR() { return get_static_field<"MONTH_OF_YEAR", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> NANO_OF_DAY() { return get_static_field<"NANO_OF_DAY", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> NANO_OF_SECOND() { return get_static_field<"NANO_OF_SECOND", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> OFFSET_SECONDS() { return get_static_field<"OFFSET_SECONDS", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> PROLEPTIC_MONTH() { return get_static_field<"PROLEPTIC_MONTH", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> SECOND_OF_DAY() { return get_static_field<"SECOND_OF_DAY", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> SECOND_OF_MINUTE() { return get_static_field<"SECOND_OF_MINUTE", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> YEAR() { return get_static_field<"YEAR", jni::ref<java::time::temporal::ChronoField>>(); }
	static jni::ref<java::time::temporal::ChronoField> YEAR_OF_ERA() { return get_static_field<"YEAR_OF_ERA", jni::ref<java::time::temporal::ChronoField>>(); }

	static jni::ref<jni::array<java::time::temporal::ChronoField>> values() { return call_static_method<"values", jni::ref<jni::array<java::time::temporal::ChronoField>>>(); }
	static jni::ref<java::time::temporal::ChronoField> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::time::temporal::ChronoField>>(name); }
	jni::ref<java::lang::String> getDisplayName(jni::ref<java::util::Locale> locale) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(locale); }
	jni::ref<java::time::temporal::TemporalUnit> getBaseUnit() { return call_method<"getBaseUnit", jni::ref<java::time::temporal::TemporalUnit>>(); }
	jni::ref<java::time::temporal::TemporalUnit> getRangeUnit() { return call_method<"getRangeUnit", jni::ref<java::time::temporal::TemporalUnit>>(); }
	jni::ref<java::time::temporal::ValueRange> range() { return call_method<"range", jni::ref<java::time::temporal::ValueRange>>(); }
	jboolean isDateBased() { return call_method<"isDateBased", jboolean>(); }
	jboolean isTimeBased() { return call_method<"isTimeBased", jboolean>(); }
	jlong checkValidValue(jlong value) { return call_method<"checkValidValue", jlong>(value); }
	jint checkValidIntValue(jlong value) { return call_method<"checkValidIntValue", jint>(value); }
	jboolean isSupportedBy(jni::ref<java::time::temporal::TemporalAccessor> temporal) { return call_method<"isSupportedBy", jboolean>(temporal); }
	jni::ref<java::time::temporal::ValueRange> rangeRefinedBy(jni::ref<java::time::temporal::TemporalAccessor> temporal) { return call_method<"rangeRefinedBy", jni::ref<java::time::temporal::ValueRange>>(temporal); }
	jlong getFrom(jni::ref<java::time::temporal::TemporalAccessor> temporal) { return call_method<"getFrom", jlong>(temporal); }
	jni::ref<java::time::temporal::Temporal> adjustInto(jni::ref<java::time::temporal::Temporal> temporal, jlong newValue) { return call_method<"adjustInto", jni::ref<java::time::temporal::Temporal>>(temporal, newValue); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ChronoField(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_TEMPORAL_CHRONOFIELD
