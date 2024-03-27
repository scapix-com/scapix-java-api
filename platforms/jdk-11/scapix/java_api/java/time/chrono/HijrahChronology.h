// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/time/chrono/AbstractChronology.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_CHRONO_HIJRAHCHRONOLOGY_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_HIJRAHCHRONOLOGY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::chrono { class HijrahChronology; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::chrono::HijrahChronology>
{
	static constexpr fixed_string class_name = "java/time/chrono/HijrahChronology";
	using base_classes = std::tuple<scapix::java_api::java::time::chrono::AbstractChronology, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_HIJRAHCHRONOLOGY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_CHRONO_HIJRAHCHRONOLOGY)
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_HIJRAHCHRONOLOGY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Clock.h>
#include <scapix/java_api/java/time/Instant.h>
#include <scapix/java_api/java/time/ZoneId.h>
#include <scapix/java_api/java/time/chrono/ChronoLocalDateTime.h>
#include <scapix/java_api/java/time/chrono/ChronoZonedDateTime.h>
#include <scapix/java_api/java/time/chrono/Era.h>
#include <scapix/java_api/java/time/chrono/HijrahDate.h>
#include <scapix/java_api/java/time/chrono/HijrahEra.h>
#include <scapix/java_api/java/time/format/ResolverStyle.h>
#include <scapix/java_api/java/time/temporal/ChronoField.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::chrono::HijrahChronology : public jni::object_base<"java/time/chrono/HijrahChronology",
	java::time::chrono::AbstractChronology,
	java::io::Serializable>
{
public:

	static jni::ref<java::time::chrono::HijrahChronology> INSTANCE() { return get_static_field<"INSTANCE", jni::ref<java::time::chrono::HijrahChronology>>(); }

	jni::ref<java::lang::String> getId() { return call_method<"getId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getCalendarType() { return call_method<"getCalendarType", jni::ref<java::lang::String>>(); }
	jni::ref<java::time::chrono::HijrahDate> date(jni::ref<java::time::chrono::Era> era, jint yearOfEra, jint month, jint dayOfMonth) { return call_method<"date", jni::ref<java::time::chrono::HijrahDate>>(era, yearOfEra, month, dayOfMonth); }
	jni::ref<java::time::chrono::HijrahDate> date(jint prolepticYear, jint month, jint dayOfMonth) { return call_method<"date", jni::ref<java::time::chrono::HijrahDate>>(prolepticYear, month, dayOfMonth); }
	jni::ref<java::time::chrono::HijrahDate> dateYearDay(jni::ref<java::time::chrono::Era> era, jint yearOfEra, jint dayOfYear) { return call_method<"dateYearDay", jni::ref<java::time::chrono::HijrahDate>>(era, yearOfEra, dayOfYear); }
	jni::ref<java::time::chrono::HijrahDate> dateYearDay(jint prolepticYear, jint dayOfYear) { return call_method<"dateYearDay", jni::ref<java::time::chrono::HijrahDate>>(prolepticYear, dayOfYear); }
	jni::ref<java::time::chrono::HijrahDate> dateEpochDay(jlong epochDay) { return call_method<"dateEpochDay", jni::ref<java::time::chrono::HijrahDate>>(epochDay); }
	jni::ref<java::time::chrono::HijrahDate> dateNow() { return call_method<"dateNow", jni::ref<java::time::chrono::HijrahDate>>(); }
	jni::ref<java::time::chrono::HijrahDate> dateNow(jni::ref<java::time::ZoneId> zone) { return call_method<"dateNow", jni::ref<java::time::chrono::HijrahDate>>(zone); }
	jni::ref<java::time::chrono::HijrahDate> dateNow(jni::ref<java::time::Clock> clock) { return call_method<"dateNow", jni::ref<java::time::chrono::HijrahDate>>(clock); }
	jni::ref<java::time::chrono::HijrahDate> date(jni::ref<java::time::temporal::TemporalAccessor> temporal) { return call_method<"date", jni::ref<java::time::chrono::HijrahDate>>(temporal); }
	jni::ref<java::time::chrono::ChronoLocalDateTime> localDateTime(jni::ref<java::time::temporal::TemporalAccessor> temporal) { return call_method<"localDateTime", jni::ref<java::time::chrono::ChronoLocalDateTime>>(temporal); }
	jni::ref<java::time::chrono::ChronoZonedDateTime> zonedDateTime(jni::ref<java::time::temporal::TemporalAccessor> temporal) { return call_method<"zonedDateTime", jni::ref<java::time::chrono::ChronoZonedDateTime>>(temporal); }
	jni::ref<java::time::chrono::ChronoZonedDateTime> zonedDateTime(jni::ref<java::time::Instant> instant, jni::ref<java::time::ZoneId> zone) { return call_method<"zonedDateTime", jni::ref<java::time::chrono::ChronoZonedDateTime>>(instant, zone); }
	jboolean isLeapYear(jlong prolepticYear) { return call_method<"isLeapYear", jboolean>(prolepticYear); }
	jint prolepticYear(jni::ref<java::time::chrono::Era> era, jint yearOfEra) { return call_method<"prolepticYear", jint>(era, yearOfEra); }
	jni::ref<java::time::chrono::HijrahEra> eraOf(jint eraValue) { return call_method<"eraOf", jni::ref<java::time::chrono::HijrahEra>>(eraValue); }
	jni::ref<java::util::List> eras() { return call_method<"eras", jni::ref<java::util::List>>(); }
	jni::ref<java::time::temporal::ValueRange> range(jni::ref<java::time::temporal::ChronoField> field) { return call_method<"range", jni::ref<java::time::temporal::ValueRange>>(field); }
	jni::ref<java::time::chrono::HijrahDate> resolveDate(jni::ref<java::util::Map> fieldValues, jni::ref<java::time::format::ResolverStyle> resolverStyle) { return call_method<"resolveDate", jni::ref<java::time::chrono::HijrahDate>>(fieldValues, resolverStyle); }

protected:

	HijrahChronology(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_HIJRAHCHRONOLOGY
