// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/temporal/Temporal.h>
#include <scapix/java_api/java/time/temporal/TemporalAdjuster.h>
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_LOCALTIME_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_LOCALTIME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time { class LocalTime; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::LocalTime>
{
	static constexpr fixed_string class_name = "java/time/LocalTime";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::time::temporal::Temporal, scapix::java_api::java::time::temporal::TemporalAdjuster, scapix::java_api::java::lang::Comparable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_LOCALTIME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_LOCALTIME)
#define SCAPIX_JAVA_API_JAVA_TIME_LOCALTIME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Clock.h>
#include <scapix/java_api/java/time/LocalDate.h>
#include <scapix/java_api/java/time/LocalDateTime.h>
#include <scapix/java_api/java/time/OffsetTime.h>
#include <scapix/java_api/java/time/ZoneId.h>
#include <scapix/java_api/java/time/ZoneOffset.h>
#include <scapix/java_api/java/time/format/DateTimeFormatter.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>
#include <scapix/java_api/java/time/temporal/TemporalAmount.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/TemporalQuery.h>
#include <scapix/java_api/java/time/temporal/TemporalUnit.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::LocalTime : public jni::object_base<"java/time/LocalTime",
	java::lang::Object,
	java::time::temporal::Temporal,
	java::time::temporal::TemporalAdjuster,
	java::lang::Comparable,
	java::io::Serializable>
{
public:

	static jni::ref<java::time::LocalTime> MAX() { return get_static_field<"MAX", jni::ref<java::time::LocalTime>>(); }
	static jni::ref<java::time::LocalTime> MIDNIGHT() { return get_static_field<"MIDNIGHT", jni::ref<java::time::LocalTime>>(); }
	static jni::ref<java::time::LocalTime> MIN() { return get_static_field<"MIN", jni::ref<java::time::LocalTime>>(); }
	static jni::ref<java::time::LocalTime> NOON() { return get_static_field<"NOON", jni::ref<java::time::LocalTime>>(); }

	static jni::ref<java::time::LocalTime> now() { return call_static_method<"now", jni::ref<java::time::LocalTime>>(); }
	static jni::ref<java::time::LocalTime> now(jni::ref<java::time::ZoneId> zone) { return call_static_method<"now", jni::ref<java::time::LocalTime>>(zone); }
	static jni::ref<java::time::LocalTime> now(jni::ref<java::time::Clock> clock) { return call_static_method<"now", jni::ref<java::time::LocalTime>>(clock); }
	static jni::ref<java::time::LocalTime> of(jint hour, jint minute) { return call_static_method<"of", jni::ref<java::time::LocalTime>>(hour, minute); }
	static jni::ref<java::time::LocalTime> of(jint hour, jint minute, jint second) { return call_static_method<"of", jni::ref<java::time::LocalTime>>(hour, minute, second); }
	static jni::ref<java::time::LocalTime> of(jint hour, jint minute, jint second, jint nanoOfSecond) { return call_static_method<"of", jni::ref<java::time::LocalTime>>(hour, minute, second, nanoOfSecond); }
	static jni::ref<java::time::LocalTime> ofSecondOfDay(jlong secondOfDay) { return call_static_method<"ofSecondOfDay", jni::ref<java::time::LocalTime>>(secondOfDay); }
	static jni::ref<java::time::LocalTime> ofNanoOfDay(jlong nanoOfDay) { return call_static_method<"ofNanoOfDay", jni::ref<java::time::LocalTime>>(nanoOfDay); }
	static jni::ref<java::time::LocalTime> from(jni::ref<java::time::temporal::TemporalAccessor> temporal) { return call_static_method<"from", jni::ref<java::time::LocalTime>>(temporal); }
	static jni::ref<java::time::LocalTime> parse(jni::ref<java::lang::CharSequence> text) { return call_static_method<"parse", jni::ref<java::time::LocalTime>>(text); }
	static jni::ref<java::time::LocalTime> parse(jni::ref<java::lang::CharSequence> text, jni::ref<java::time::format::DateTimeFormatter> formatter) { return call_static_method<"parse", jni::ref<java::time::LocalTime>>(text, formatter); }
	jboolean isSupported(jni::ref<java::time::temporal::TemporalField> field) { return call_method<"isSupported", jboolean>(field); }
	jboolean isSupported(jni::ref<java::time::temporal::TemporalUnit> unit) { return call_method<"isSupported", jboolean>(unit); }
	jni::ref<java::time::temporal::ValueRange> range(jni::ref<java::time::temporal::TemporalField> field) { return call_method<"range", jni::ref<java::time::temporal::ValueRange>>(field); }
	jint get(jni::ref<java::time::temporal::TemporalField> field) { return call_method<"get", jint>(field); }
	jlong getLong(jni::ref<java::time::temporal::TemporalField> field) { return call_method<"getLong", jlong>(field); }
	jint getHour() { return call_method<"getHour", jint>(); }
	jint getMinute() { return call_method<"getMinute", jint>(); }
	jint getSecond() { return call_method<"getSecond", jint>(); }
	jint getNano() { return call_method<"getNano", jint>(); }
	jni::ref<java::time::LocalTime> with(jni::ref<java::time::temporal::TemporalAdjuster> adjuster) { return call_method<"with", jni::ref<java::time::LocalTime>>(adjuster); }
	jni::ref<java::time::LocalTime> with(jni::ref<java::time::temporal::TemporalField> field, jlong newValue) { return call_method<"with", jni::ref<java::time::LocalTime>>(field, newValue); }
	jni::ref<java::time::LocalTime> withHour(jint hour) { return call_method<"withHour", jni::ref<java::time::LocalTime>>(hour); }
	jni::ref<java::time::LocalTime> withMinute(jint minute) { return call_method<"withMinute", jni::ref<java::time::LocalTime>>(minute); }
	jni::ref<java::time::LocalTime> withSecond(jint second) { return call_method<"withSecond", jni::ref<java::time::LocalTime>>(second); }
	jni::ref<java::time::LocalTime> withNano(jint nanoOfSecond) { return call_method<"withNano", jni::ref<java::time::LocalTime>>(nanoOfSecond); }
	jni::ref<java::time::LocalTime> truncatedTo(jni::ref<java::time::temporal::TemporalUnit> unit) { return call_method<"truncatedTo", jni::ref<java::time::LocalTime>>(unit); }
	jni::ref<java::time::LocalTime> plus(jni::ref<java::time::temporal::TemporalAmount> amountToAdd) { return call_method<"plus", jni::ref<java::time::LocalTime>>(amountToAdd); }
	jni::ref<java::time::LocalTime> plus(jlong amountToAdd, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"plus", jni::ref<java::time::LocalTime>>(amountToAdd, p2); }
	jni::ref<java::time::LocalTime> plusHours(jlong hoursToAdd) { return call_method<"plusHours", jni::ref<java::time::LocalTime>>(hoursToAdd); }
	jni::ref<java::time::LocalTime> plusMinutes(jlong minutesToAdd) { return call_method<"plusMinutes", jni::ref<java::time::LocalTime>>(minutesToAdd); }
	jni::ref<java::time::LocalTime> plusSeconds(jlong secondstoAdd) { return call_method<"plusSeconds", jni::ref<java::time::LocalTime>>(secondstoAdd); }
	jni::ref<java::time::LocalTime> plusNanos(jlong nanosToAdd) { return call_method<"plusNanos", jni::ref<java::time::LocalTime>>(nanosToAdd); }
	jni::ref<java::time::LocalTime> minus(jni::ref<java::time::temporal::TemporalAmount> amountToSubtract) { return call_method<"minus", jni::ref<java::time::LocalTime>>(amountToSubtract); }
	jni::ref<java::time::LocalTime> minus(jlong amountToSubtract, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"minus", jni::ref<java::time::LocalTime>>(amountToSubtract, p2); }
	jni::ref<java::time::LocalTime> minusHours(jlong hoursToSubtract) { return call_method<"minusHours", jni::ref<java::time::LocalTime>>(hoursToSubtract); }
	jni::ref<java::time::LocalTime> minusMinutes(jlong minutesToSubtract) { return call_method<"minusMinutes", jni::ref<java::time::LocalTime>>(minutesToSubtract); }
	jni::ref<java::time::LocalTime> minusSeconds(jlong secondsToSubtract) { return call_method<"minusSeconds", jni::ref<java::time::LocalTime>>(secondsToSubtract); }
	jni::ref<java::time::LocalTime> minusNanos(jlong nanosToSubtract) { return call_method<"minusNanos", jni::ref<java::time::LocalTime>>(nanosToSubtract); }
	jni::ref<java::lang::Object> query(jni::ref<java::time::temporal::TemporalQuery> query) { return call_method<"query", jni::ref<java::lang::Object>>(query); }
	jni::ref<java::time::temporal::Temporal> adjustInto(jni::ref<java::time::temporal::Temporal> temporal) { return call_method<"adjustInto", jni::ref<java::time::temporal::Temporal>>(temporal); }
	jlong until(jni::ref<java::time::temporal::Temporal> endExclusive, jni::ref<java::time::temporal::TemporalUnit> unit) { return call_method<"until", jlong>(endExclusive, unit); }
	jni::ref<java::lang::String> format(jni::ref<java::time::format::DateTimeFormatter> formatter) { return call_method<"format", jni::ref<java::lang::String>>(formatter); }
	jni::ref<java::time::LocalDateTime> atDate(jni::ref<java::time::LocalDate> date) { return call_method<"atDate", jni::ref<java::time::LocalDateTime>>(date); }
	jni::ref<java::time::OffsetTime> atOffset(jni::ref<java::time::ZoneOffset> offset) { return call_method<"atOffset", jni::ref<java::time::OffsetTime>>(offset); }
	jint toSecondOfDay() { return call_method<"toSecondOfDay", jint>(); }
	jlong toNanoOfDay() { return call_method<"toNanoOfDay", jlong>(); }
	jint compareTo(jni::ref<java::time::LocalTime> other) { return call_method<"compareTo", jint>(other); }
	jboolean isAfter(jni::ref<java::time::LocalTime> other) { return call_method<"isAfter", jboolean>(other); }
	jboolean isBefore(jni::ref<java::time::LocalTime> other) { return call_method<"isBefore", jboolean>(other); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	LocalTime(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_LOCALTIME
