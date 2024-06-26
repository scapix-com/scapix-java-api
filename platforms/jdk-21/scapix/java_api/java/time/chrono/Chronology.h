// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_CHRONO_CHRONOLOGY_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_CHRONOLOGY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::chrono { class Chronology; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::chrono::Chronology>
{
	static constexpr fixed_string class_name = "java/time/chrono/Chronology";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_CHRONOLOGY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_CHRONO_CHRONOLOGY)
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_CHRONOLOGY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Clock.h>
#include <scapix/java_api/java/time/Instant.h>
#include <scapix/java_api/java/time/ZoneId.h>
#include <scapix/java_api/java/time/ZoneOffset.h>
#include <scapix/java_api/java/time/chrono/ChronoLocalDate.h>
#include <scapix/java_api/java/time/chrono/ChronoLocalDateTime.h>
#include <scapix/java_api/java/time/chrono/ChronoPeriod.h>
#include <scapix/java_api/java/time/chrono/ChronoZonedDateTime.h>
#include <scapix/java_api/java/time/chrono/Era.h>
#include <scapix/java_api/java/time/format/ResolverStyle.h>
#include <scapix/java_api/java/time/format/TextStyle.h>
#include <scapix/java_api/java/time/temporal/ChronoField.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::chrono::Chronology : public jni::object_base<"java/time/chrono/Chronology",
	java::lang::Object,
	java::lang::Comparable>
{
public:

	static jni::ref<java::time::chrono::Chronology> from(jni::ref<java::time::temporal::TemporalAccessor> temporal) { return call_static_method<"from", jni::ref<java::time::chrono::Chronology>>(temporal); }
	static jni::ref<java::time::chrono::Chronology> ofLocale(jni::ref<java::util::Locale> locale) { return call_static_method<"ofLocale", jni::ref<java::time::chrono::Chronology>>(locale); }
	static jni::ref<java::time::chrono::Chronology> of(jni::ref<java::lang::String> id) { return call_static_method<"of", jni::ref<java::time::chrono::Chronology>>(id); }
	static jni::ref<java::util::Set> getAvailableChronologies() { return call_static_method<"getAvailableChronologies", jni::ref<java::util::Set>>(); }
	jni::ref<java::lang::String> getId() { return call_method<"getId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getCalendarType() { return call_method<"getCalendarType", jni::ref<java::lang::String>>(); }
	jni::ref<java::time::chrono::ChronoLocalDate> date(jni::ref<java::time::chrono::Era> era, jint yearOfEra, jint month, jint dayOfMonth) { return call_method<"date", jni::ref<java::time::chrono::ChronoLocalDate>>(era, yearOfEra, month, dayOfMonth); }
	jni::ref<java::time::chrono::ChronoLocalDate> date(jint p1, jint p2, jint p3) { return call_method<"date", jni::ref<java::time::chrono::ChronoLocalDate>>(p1, p2, p3); }
	jni::ref<java::time::chrono::ChronoLocalDate> dateYearDay(jni::ref<java::time::chrono::Era> era, jint yearOfEra, jint dayOfYear) { return call_method<"dateYearDay", jni::ref<java::time::chrono::ChronoLocalDate>>(era, yearOfEra, dayOfYear); }
	jni::ref<java::time::chrono::ChronoLocalDate> dateYearDay(jint p1, jint p2) { return call_method<"dateYearDay", jni::ref<java::time::chrono::ChronoLocalDate>>(p1, p2); }
	jni::ref<java::time::chrono::ChronoLocalDate> dateEpochDay(jlong p1) { return call_method<"dateEpochDay", jni::ref<java::time::chrono::ChronoLocalDate>>(p1); }
	jni::ref<java::time::chrono::ChronoLocalDate> dateNow() { return call_method<"dateNow", jni::ref<java::time::chrono::ChronoLocalDate>>(); }
	jni::ref<java::time::chrono::ChronoLocalDate> dateNow(jni::ref<java::time::ZoneId> zone) { return call_method<"dateNow", jni::ref<java::time::chrono::ChronoLocalDate>>(zone); }
	jni::ref<java::time::chrono::ChronoLocalDate> dateNow(jni::ref<java::time::Clock> clock) { return call_method<"dateNow", jni::ref<java::time::chrono::ChronoLocalDate>>(clock); }
	jni::ref<java::time::chrono::ChronoLocalDate> date(jni::ref<java::time::temporal::TemporalAccessor> p1) { return call_method<"date", jni::ref<java::time::chrono::ChronoLocalDate>>(p1); }
	jni::ref<java::time::chrono::ChronoLocalDateTime> localDateTime(jni::ref<java::time::temporal::TemporalAccessor> temporal) { return call_method<"localDateTime", jni::ref<java::time::chrono::ChronoLocalDateTime>>(temporal); }
	jni::ref<java::time::chrono::ChronoZonedDateTime> zonedDateTime(jni::ref<java::time::temporal::TemporalAccessor> temporal) { return call_method<"zonedDateTime", jni::ref<java::time::chrono::ChronoZonedDateTime>>(temporal); }
	jni::ref<java::time::chrono::ChronoZonedDateTime> zonedDateTime(jni::ref<java::time::Instant> instant, jni::ref<java::time::ZoneId> zone) { return call_method<"zonedDateTime", jni::ref<java::time::chrono::ChronoZonedDateTime>>(instant, zone); }
	jboolean isLeapYear(jlong p1) { return call_method<"isLeapYear", jboolean>(p1); }
	jint prolepticYear(jni::ref<java::time::chrono::Era> p1, jint p2) { return call_method<"prolepticYear", jint>(p1, p2); }
	jni::ref<java::time::chrono::Era> eraOf(jint p1) { return call_method<"eraOf", jni::ref<java::time::chrono::Era>>(p1); }
	jni::ref<java::util::List> eras() { return call_method<"eras", jni::ref<java::util::List>>(); }
	jni::ref<java::time::temporal::ValueRange> range(jni::ref<java::time::temporal::ChronoField> p1) { return call_method<"range", jni::ref<java::time::temporal::ValueRange>>(p1); }
	jni::ref<java::lang::String> getDisplayName(jni::ref<java::time::format::TextStyle> style, jni::ref<java::util::Locale> locale) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(style, locale); }
	jni::ref<java::time::chrono::ChronoLocalDate> resolveDate(jni::ref<java::util::Map> p1, jni::ref<java::time::format::ResolverStyle> p2) { return call_method<"resolveDate", jni::ref<java::time::chrono::ChronoLocalDate>>(p1, p2); }
	jni::ref<java::time::chrono::ChronoPeriod> period(jint years, jint months, jint days) { return call_method<"period", jni::ref<java::time::chrono::ChronoPeriod>>(years, months, days); }
	jlong epochSecond(jint prolepticYear, jint month, jint dayOfMonth, jint hour, jint minute, jint second, jni::ref<java::time::ZoneOffset> zoneOffset) { return call_method<"epochSecond", jlong>(prolepticYear, month, dayOfMonth, hour, minute, second, zoneOffset); }
	jlong epochSecond(jni::ref<java::time::chrono::Era> era, jint yearOfEra, jint month, jint dayOfMonth, jint hour, jint minute, jint second, jni::ref<java::time::ZoneOffset> zoneOffset) { return call_method<"epochSecond", jlong>(era, yearOfEra, month, dayOfMonth, hour, minute, second, zoneOffset); }
	jboolean isIsoBased() { return call_method<"isIsoBased", jboolean>(); }
	jint compareTo(jni::ref<java::time::chrono::Chronology> p1) { return call_method<"compareTo", jint>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Chronology(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_CHRONOLOGY
