// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/time/chrono/AbstractChronology.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_CHRONO_MINGUOCHRONOLOGY_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_MINGUOCHRONOLOGY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::chrono { class MinguoChronology; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::chrono::MinguoChronology>
{
	static constexpr fixed_string class_name = "java/time/chrono/MinguoChronology";
	using base_classes = std::tuple<scapix::java_api::java::time::chrono::AbstractChronology, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_MINGUOCHRONOLOGY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_CHRONO_MINGUOCHRONOLOGY)
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_MINGUOCHRONOLOGY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Clock.h>
#include <scapix/java_api/java/time/Instant.h>
#include <scapix/java_api/java/time/ZoneId.h>
#include <scapix/java_api/java/time/chrono/ChronoLocalDateTime.h>
#include <scapix/java_api/java/time/chrono/ChronoZonedDateTime.h>
#include <scapix/java_api/java/time/chrono/Era.h>
#include <scapix/java_api/java/time/chrono/MinguoDate.h>
#include <scapix/java_api/java/time/chrono/MinguoEra.h>
#include <scapix/java_api/java/time/format/ResolverStyle.h>
#include <scapix/java_api/java/time/temporal/ChronoField.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::chrono::MinguoChronology : public jni::object_base<"java/time/chrono/MinguoChronology",
	java::time::chrono::AbstractChronology,
	java::io::Serializable>
{
public:

	static jni::ref<java::time::chrono::MinguoChronology> INSTANCE() { return get_static_field<"INSTANCE", jni::ref<java::time::chrono::MinguoChronology>>(); }

	jni::ref<java::lang::String> getId() { return call_method<"getId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getCalendarType() { return call_method<"getCalendarType", jni::ref<java::lang::String>>(); }
	jni::ref<java::time::chrono::MinguoDate> date(jni::ref<java::time::chrono::Era> p1, jint p2, jint p3, jint p4) { return call_method<"date", jni::ref<java::time::chrono::MinguoDate>>(p1, p2, p3, p4); }
	jni::ref<java::time::chrono::MinguoDate> date(jint p1, jint p2, jint p3) { return call_method<"date", jni::ref<java::time::chrono::MinguoDate>>(p1, p2, p3); }
	jni::ref<java::time::chrono::MinguoDate> dateYearDay(jni::ref<java::time::chrono::Era> p1, jint p2, jint p3) { return call_method<"dateYearDay", jni::ref<java::time::chrono::MinguoDate>>(p1, p2, p3); }
	jni::ref<java::time::chrono::MinguoDate> dateYearDay(jint p1, jint p2) { return call_method<"dateYearDay", jni::ref<java::time::chrono::MinguoDate>>(p1, p2); }
	jni::ref<java::time::chrono::MinguoDate> dateEpochDay(jlong p1) { return call_method<"dateEpochDay", jni::ref<java::time::chrono::MinguoDate>>(p1); }
	jni::ref<java::time::chrono::MinguoDate> dateNow() { return call_method<"dateNow", jni::ref<java::time::chrono::MinguoDate>>(); }
	jni::ref<java::time::chrono::MinguoDate> dateNow(jni::ref<java::time::ZoneId> p1) { return call_method<"dateNow", jni::ref<java::time::chrono::MinguoDate>>(p1); }
	jni::ref<java::time::chrono::MinguoDate> dateNow(jni::ref<java::time::Clock> p1) { return call_method<"dateNow", jni::ref<java::time::chrono::MinguoDate>>(p1); }
	jni::ref<java::time::chrono::MinguoDate> date(jni::ref<java::time::temporal::TemporalAccessor> p1) { return call_method<"date", jni::ref<java::time::chrono::MinguoDate>>(p1); }
	jni::ref<java::time::chrono::ChronoLocalDateTime> localDateTime(jni::ref<java::time::temporal::TemporalAccessor> p1) { return call_method<"localDateTime", jni::ref<java::time::chrono::ChronoLocalDateTime>>(p1); }
	jni::ref<java::time::chrono::ChronoZonedDateTime> zonedDateTime(jni::ref<java::time::temporal::TemporalAccessor> p1) { return call_method<"zonedDateTime", jni::ref<java::time::chrono::ChronoZonedDateTime>>(p1); }
	jni::ref<java::time::chrono::ChronoZonedDateTime> zonedDateTime(jni::ref<java::time::Instant> p1, jni::ref<java::time::ZoneId> p2) { return call_method<"zonedDateTime", jni::ref<java::time::chrono::ChronoZonedDateTime>>(p1, p2); }
	jboolean isLeapYear(jlong p1) { return call_method<"isLeapYear", jboolean>(p1); }
	jint prolepticYear(jni::ref<java::time::chrono::Era> p1, jint p2) { return call_method<"prolepticYear", jint>(p1, p2); }
	jni::ref<java::time::chrono::MinguoEra> eraOf(jint p1) { return call_method<"eraOf", jni::ref<java::time::chrono::MinguoEra>>(p1); }
	jni::ref<java::util::List> eras() { return call_method<"eras", jni::ref<java::util::List>>(); }
	jni::ref<java::time::temporal::ValueRange> range(jni::ref<java::time::temporal::ChronoField> p1) { return call_method<"range", jni::ref<java::time::temporal::ValueRange>>(p1); }
	jni::ref<java::time::chrono::MinguoDate> resolveDate(jni::ref<java::util::Map> p1, jni::ref<java::time::format::ResolverStyle> p2) { return call_method<"resolveDate", jni::ref<java::time::chrono::MinguoDate>>(p1, p2); }

protected:

	MinguoChronology(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_MINGUOCHRONOLOGY
