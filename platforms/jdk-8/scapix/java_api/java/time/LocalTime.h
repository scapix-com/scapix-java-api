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

	static jni::ref<java::time::LocalTime> MIN() { return get_static_field<"MIN", jni::ref<java::time::LocalTime>>(); }
	static jni::ref<java::time::LocalTime> MAX() { return get_static_field<"MAX", jni::ref<java::time::LocalTime>>(); }
	static jni::ref<java::time::LocalTime> MIDNIGHT() { return get_static_field<"MIDNIGHT", jni::ref<java::time::LocalTime>>(); }
	static jni::ref<java::time::LocalTime> NOON() { return get_static_field<"NOON", jni::ref<java::time::LocalTime>>(); }

	static jni::ref<java::time::LocalTime> now() { return call_static_method<"now", jni::ref<java::time::LocalTime>>(); }
	static jni::ref<java::time::LocalTime> now(jni::ref<java::time::ZoneId> p1) { return call_static_method<"now", jni::ref<java::time::LocalTime>>(p1); }
	static jni::ref<java::time::LocalTime> now(jni::ref<java::time::Clock> p1) { return call_static_method<"now", jni::ref<java::time::LocalTime>>(p1); }
	static jni::ref<java::time::LocalTime> of(jint p1, jint p2) { return call_static_method<"of", jni::ref<java::time::LocalTime>>(p1, p2); }
	static jni::ref<java::time::LocalTime> of(jint p1, jint p2, jint p3) { return call_static_method<"of", jni::ref<java::time::LocalTime>>(p1, p2, p3); }
	static jni::ref<java::time::LocalTime> of(jint p1, jint p2, jint p3, jint p4) { return call_static_method<"of", jni::ref<java::time::LocalTime>>(p1, p2, p3, p4); }
	static jni::ref<java::time::LocalTime> ofSecondOfDay(jlong p1) { return call_static_method<"ofSecondOfDay", jni::ref<java::time::LocalTime>>(p1); }
	static jni::ref<java::time::LocalTime> ofNanoOfDay(jlong p1) { return call_static_method<"ofNanoOfDay", jni::ref<java::time::LocalTime>>(p1); }
	static jni::ref<java::time::LocalTime> from(jni::ref<java::time::temporal::TemporalAccessor> p1) { return call_static_method<"from", jni::ref<java::time::LocalTime>>(p1); }
	static jni::ref<java::time::LocalTime> parse(jni::ref<java::lang::CharSequence> p1) { return call_static_method<"parse", jni::ref<java::time::LocalTime>>(p1); }
	static jni::ref<java::time::LocalTime> parse(jni::ref<java::lang::CharSequence> p1, jni::ref<java::time::format::DateTimeFormatter> p2) { return call_static_method<"parse", jni::ref<java::time::LocalTime>>(p1, p2); }
	jboolean isSupported(jni::ref<java::time::temporal::TemporalField> p1) { return call_method<"isSupported", jboolean>(p1); }
	jboolean isSupported(jni::ref<java::time::temporal::TemporalUnit> p1) { return call_method<"isSupported", jboolean>(p1); }
	jni::ref<java::time::temporal::ValueRange> range(jni::ref<java::time::temporal::TemporalField> p1) { return call_method<"range", jni::ref<java::time::temporal::ValueRange>>(p1); }
	jint get(jni::ref<java::time::temporal::TemporalField> p1) { return call_method<"get", jint>(p1); }
	jlong getLong(jni::ref<java::time::temporal::TemporalField> p1) { return call_method<"getLong", jlong>(p1); }
	jint getHour() { return call_method<"getHour", jint>(); }
	jint getMinute() { return call_method<"getMinute", jint>(); }
	jint getSecond() { return call_method<"getSecond", jint>(); }
	jint getNano() { return call_method<"getNano", jint>(); }
	jni::ref<java::time::LocalTime> with(jni::ref<java::time::temporal::TemporalAdjuster> p1) { return call_method<"with", jni::ref<java::time::LocalTime>>(p1); }
	jni::ref<java::time::LocalTime> with(jni::ref<java::time::temporal::TemporalField> p1, jlong p2) { return call_method<"with", jni::ref<java::time::LocalTime>>(p1, p2); }
	jni::ref<java::time::LocalTime> withHour(jint p1) { return call_method<"withHour", jni::ref<java::time::LocalTime>>(p1); }
	jni::ref<java::time::LocalTime> withMinute(jint p1) { return call_method<"withMinute", jni::ref<java::time::LocalTime>>(p1); }
	jni::ref<java::time::LocalTime> withSecond(jint p1) { return call_method<"withSecond", jni::ref<java::time::LocalTime>>(p1); }
	jni::ref<java::time::LocalTime> withNano(jint p1) { return call_method<"withNano", jni::ref<java::time::LocalTime>>(p1); }
	jni::ref<java::time::LocalTime> truncatedTo(jni::ref<java::time::temporal::TemporalUnit> p1) { return call_method<"truncatedTo", jni::ref<java::time::LocalTime>>(p1); }
	jni::ref<java::time::LocalTime> plus(jni::ref<java::time::temporal::TemporalAmount> p1) { return call_method<"plus", jni::ref<java::time::LocalTime>>(p1); }
	jni::ref<java::time::LocalTime> plus(jlong p1, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"plus", jni::ref<java::time::LocalTime>>(p1, p2); }
	jni::ref<java::time::LocalTime> plusHours(jlong p1) { return call_method<"plusHours", jni::ref<java::time::LocalTime>>(p1); }
	jni::ref<java::time::LocalTime> plusMinutes(jlong p1) { return call_method<"plusMinutes", jni::ref<java::time::LocalTime>>(p1); }
	jni::ref<java::time::LocalTime> plusSeconds(jlong p1) { return call_method<"plusSeconds", jni::ref<java::time::LocalTime>>(p1); }
	jni::ref<java::time::LocalTime> plusNanos(jlong p1) { return call_method<"plusNanos", jni::ref<java::time::LocalTime>>(p1); }
	jni::ref<java::time::LocalTime> minus(jni::ref<java::time::temporal::TemporalAmount> p1) { return call_method<"minus", jni::ref<java::time::LocalTime>>(p1); }
	jni::ref<java::time::LocalTime> minus(jlong p1, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"minus", jni::ref<java::time::LocalTime>>(p1, p2); }
	jni::ref<java::time::LocalTime> minusHours(jlong p1) { return call_method<"minusHours", jni::ref<java::time::LocalTime>>(p1); }
	jni::ref<java::time::LocalTime> minusMinutes(jlong p1) { return call_method<"minusMinutes", jni::ref<java::time::LocalTime>>(p1); }
	jni::ref<java::time::LocalTime> minusSeconds(jlong p1) { return call_method<"minusSeconds", jni::ref<java::time::LocalTime>>(p1); }
	jni::ref<java::time::LocalTime> minusNanos(jlong p1) { return call_method<"minusNanos", jni::ref<java::time::LocalTime>>(p1); }
	jni::ref<java::lang::Object> query(jni::ref<java::time::temporal::TemporalQuery> p1) { return call_method<"query", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::time::temporal::Temporal> adjustInto(jni::ref<java::time::temporal::Temporal> p1) { return call_method<"adjustInto", jni::ref<java::time::temporal::Temporal>>(p1); }
	jlong until(jni::ref<java::time::temporal::Temporal> p1, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"until", jlong>(p1, p2); }
	jni::ref<java::lang::String> format(jni::ref<java::time::format::DateTimeFormatter> p1) { return call_method<"format", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::time::LocalDateTime> atDate(jni::ref<java::time::LocalDate> p1) { return call_method<"atDate", jni::ref<java::time::LocalDateTime>>(p1); }
	jni::ref<java::time::OffsetTime> atOffset(jni::ref<java::time::ZoneOffset> p1) { return call_method<"atOffset", jni::ref<java::time::OffsetTime>>(p1); }
	jint toSecondOfDay() { return call_method<"toSecondOfDay", jint>(); }
	jlong toNanoOfDay() { return call_method<"toNanoOfDay", jlong>(); }
	jint compareTo(jni::ref<java::time::LocalTime> p1) { return call_method<"compareTo", jint>(p1); }
	jboolean isAfter(jni::ref<java::time::LocalTime> p1) { return call_method<"isAfter", jboolean>(p1); }
	jboolean isBefore(jni::ref<java::time::LocalTime> p1) { return call_method<"isBefore", jboolean>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	LocalTime(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_LOCALTIME
