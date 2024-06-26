// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/temporal/Temporal.h>
#include <scapix/java_api/java/time/temporal/TemporalAdjuster.h>
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_OFFSETTIME_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_OFFSETTIME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time { class OffsetTime; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::OffsetTime>
{
	static constexpr fixed_string class_name = "java/time/OffsetTime";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::time::temporal::Temporal, scapix::java_api::java::time::temporal::TemporalAdjuster, scapix::java_api::java::lang::Comparable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_OFFSETTIME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_OFFSETTIME)
#define SCAPIX_JAVA_API_JAVA_TIME_OFFSETTIME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Clock.h>
#include <scapix/java_api/java/time/Instant.h>
#include <scapix/java_api/java/time/LocalDate.h>
#include <scapix/java_api/java/time/LocalTime.h>
#include <scapix/java_api/java/time/OffsetDateTime.h>
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

class java::time::OffsetTime : public jni::object_base<"java/time/OffsetTime",
	java::lang::Object,
	java::time::temporal::Temporal,
	java::time::temporal::TemporalAdjuster,
	java::lang::Comparable,
	java::io::Serializable>
{
public:

	static jni::ref<java::time::OffsetTime> MAX() { return get_static_field<"MAX", jni::ref<java::time::OffsetTime>>(); }
	static jni::ref<java::time::OffsetTime> MIN() { return get_static_field<"MIN", jni::ref<java::time::OffsetTime>>(); }

	static jni::ref<java::time::OffsetTime> now() { return call_static_method<"now", jni::ref<java::time::OffsetTime>>(); }
	static jni::ref<java::time::OffsetTime> now(jni::ref<java::time::ZoneId> zone) { return call_static_method<"now", jni::ref<java::time::OffsetTime>>(zone); }
	static jni::ref<java::time::OffsetTime> now(jni::ref<java::time::Clock> clock) { return call_static_method<"now", jni::ref<java::time::OffsetTime>>(clock); }
	static jni::ref<java::time::OffsetTime> of(jni::ref<java::time::LocalTime> time, jni::ref<java::time::ZoneOffset> offset) { return call_static_method<"of", jni::ref<java::time::OffsetTime>>(time, offset); }
	static jni::ref<java::time::OffsetTime> of(jint hour, jint minute, jint second, jint nanoOfSecond, jni::ref<java::time::ZoneOffset> offset) { return call_static_method<"of", jni::ref<java::time::OffsetTime>>(hour, minute, second, nanoOfSecond, offset); }
	static jni::ref<java::time::OffsetTime> ofInstant(jni::ref<java::time::Instant> instant, jni::ref<java::time::ZoneId> zone) { return call_static_method<"ofInstant", jni::ref<java::time::OffsetTime>>(instant, zone); }
	static jni::ref<java::time::OffsetTime> from(jni::ref<java::time::temporal::TemporalAccessor> temporal) { return call_static_method<"from", jni::ref<java::time::OffsetTime>>(temporal); }
	static jni::ref<java::time::OffsetTime> parse(jni::ref<java::lang::CharSequence> text) { return call_static_method<"parse", jni::ref<java::time::OffsetTime>>(text); }
	static jni::ref<java::time::OffsetTime> parse(jni::ref<java::lang::CharSequence> text, jni::ref<java::time::format::DateTimeFormatter> formatter) { return call_static_method<"parse", jni::ref<java::time::OffsetTime>>(text, formatter); }
	jboolean isSupported(jni::ref<java::time::temporal::TemporalField> field) { return call_method<"isSupported", jboolean>(field); }
	jboolean isSupported(jni::ref<java::time::temporal::TemporalUnit> unit) { return call_method<"isSupported", jboolean>(unit); }
	jni::ref<java::time::temporal::ValueRange> range(jni::ref<java::time::temporal::TemporalField> field) { return call_method<"range", jni::ref<java::time::temporal::ValueRange>>(field); }
	jint get(jni::ref<java::time::temporal::TemporalField> field) { return call_method<"get", jint>(field); }
	jlong getLong(jni::ref<java::time::temporal::TemporalField> field) { return call_method<"getLong", jlong>(field); }
	jni::ref<java::time::ZoneOffset> getOffset() { return call_method<"getOffset", jni::ref<java::time::ZoneOffset>>(); }
	jni::ref<java::time::OffsetTime> withOffsetSameLocal(jni::ref<java::time::ZoneOffset> offset) { return call_method<"withOffsetSameLocal", jni::ref<java::time::OffsetTime>>(offset); }
	jni::ref<java::time::OffsetTime> withOffsetSameInstant(jni::ref<java::time::ZoneOffset> offset) { return call_method<"withOffsetSameInstant", jni::ref<java::time::OffsetTime>>(offset); }
	jni::ref<java::time::LocalTime> toLocalTime() { return call_method<"toLocalTime", jni::ref<java::time::LocalTime>>(); }
	jint getHour() { return call_method<"getHour", jint>(); }
	jint getMinute() { return call_method<"getMinute", jint>(); }
	jint getSecond() { return call_method<"getSecond", jint>(); }
	jint getNano() { return call_method<"getNano", jint>(); }
	jni::ref<java::time::OffsetTime> with(jni::ref<java::time::temporal::TemporalAdjuster> adjuster) { return call_method<"with", jni::ref<java::time::OffsetTime>>(adjuster); }
	jni::ref<java::time::OffsetTime> with(jni::ref<java::time::temporal::TemporalField> field, jlong newValue) { return call_method<"with", jni::ref<java::time::OffsetTime>>(field, newValue); }
	jni::ref<java::time::OffsetTime> withHour(jint hour) { return call_method<"withHour", jni::ref<java::time::OffsetTime>>(hour); }
	jni::ref<java::time::OffsetTime> withMinute(jint minute) { return call_method<"withMinute", jni::ref<java::time::OffsetTime>>(minute); }
	jni::ref<java::time::OffsetTime> withSecond(jint second) { return call_method<"withSecond", jni::ref<java::time::OffsetTime>>(second); }
	jni::ref<java::time::OffsetTime> withNano(jint nanoOfSecond) { return call_method<"withNano", jni::ref<java::time::OffsetTime>>(nanoOfSecond); }
	jni::ref<java::time::OffsetTime> truncatedTo(jni::ref<java::time::temporal::TemporalUnit> unit) { return call_method<"truncatedTo", jni::ref<java::time::OffsetTime>>(unit); }
	jni::ref<java::time::OffsetTime> plus(jni::ref<java::time::temporal::TemporalAmount> amountToAdd) { return call_method<"plus", jni::ref<java::time::OffsetTime>>(amountToAdd); }
	jni::ref<java::time::OffsetTime> plus(jlong amountToAdd, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"plus", jni::ref<java::time::OffsetTime>>(amountToAdd, p2); }
	jni::ref<java::time::OffsetTime> plusHours(jlong hours) { return call_method<"plusHours", jni::ref<java::time::OffsetTime>>(hours); }
	jni::ref<java::time::OffsetTime> plusMinutes(jlong minutes) { return call_method<"plusMinutes", jni::ref<java::time::OffsetTime>>(minutes); }
	jni::ref<java::time::OffsetTime> plusSeconds(jlong seconds) { return call_method<"plusSeconds", jni::ref<java::time::OffsetTime>>(seconds); }
	jni::ref<java::time::OffsetTime> plusNanos(jlong nanos) { return call_method<"plusNanos", jni::ref<java::time::OffsetTime>>(nanos); }
	jni::ref<java::time::OffsetTime> minus(jni::ref<java::time::temporal::TemporalAmount> amountToSubtract) { return call_method<"minus", jni::ref<java::time::OffsetTime>>(amountToSubtract); }
	jni::ref<java::time::OffsetTime> minus(jlong amountToSubtract, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"minus", jni::ref<java::time::OffsetTime>>(amountToSubtract, p2); }
	jni::ref<java::time::OffsetTime> minusHours(jlong hours) { return call_method<"minusHours", jni::ref<java::time::OffsetTime>>(hours); }
	jni::ref<java::time::OffsetTime> minusMinutes(jlong minutes) { return call_method<"minusMinutes", jni::ref<java::time::OffsetTime>>(minutes); }
	jni::ref<java::time::OffsetTime> minusSeconds(jlong seconds) { return call_method<"minusSeconds", jni::ref<java::time::OffsetTime>>(seconds); }
	jni::ref<java::time::OffsetTime> minusNanos(jlong nanos) { return call_method<"minusNanos", jni::ref<java::time::OffsetTime>>(nanos); }
	jni::ref<java::lang::Object> query(jni::ref<java::time::temporal::TemporalQuery> query) { return call_method<"query", jni::ref<java::lang::Object>>(query); }
	jni::ref<java::time::temporal::Temporal> adjustInto(jni::ref<java::time::temporal::Temporal> temporal) { return call_method<"adjustInto", jni::ref<java::time::temporal::Temporal>>(temporal); }
	jlong until(jni::ref<java::time::temporal::Temporal> endExclusive, jni::ref<java::time::temporal::TemporalUnit> unit) { return call_method<"until", jlong>(endExclusive, unit); }
	jni::ref<java::lang::String> format(jni::ref<java::time::format::DateTimeFormatter> formatter) { return call_method<"format", jni::ref<java::lang::String>>(formatter); }
	jni::ref<java::time::OffsetDateTime> atDate(jni::ref<java::time::LocalDate> date) { return call_method<"atDate", jni::ref<java::time::OffsetDateTime>>(date); }
	jint compareTo(jni::ref<java::time::OffsetTime> other) { return call_method<"compareTo", jint>(other); }
	jboolean isAfter(jni::ref<java::time::OffsetTime> other) { return call_method<"isAfter", jboolean>(other); }
	jboolean isBefore(jni::ref<java::time::OffsetTime> other) { return call_method<"isBefore", jboolean>(other); }
	jboolean isEqual(jni::ref<java::time::OffsetTime> other) { return call_method<"isEqual", jboolean>(other); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	OffsetTime(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_OFFSETTIME
