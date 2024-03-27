// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/chrono/ChronoLocalDate.h>
#include <scapix/java_api/java/time/temporal/Temporal.h>
#include <scapix/java_api/java/time/temporal/TemporalAdjuster.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_CHRONO_MINGUODATE_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_MINGUODATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::chrono { class MinguoDate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::chrono::MinguoDate>
{
	static constexpr fixed_string class_name = "java/time/chrono/MinguoDate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::time::chrono::ChronoLocalDate, scapix::java_api::java::time::temporal::Temporal, scapix::java_api::java::time::temporal::TemporalAdjuster, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_MINGUODATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_CHRONO_MINGUODATE)
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_MINGUODATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Clock.h>
#include <scapix/java_api/java/time/LocalTime.h>
#include <scapix/java_api/java/time/ZoneId.h>
#include <scapix/java_api/java/time/chrono/ChronoLocalDateTime.h>
#include <scapix/java_api/java/time/chrono/ChronoPeriod.h>
#include <scapix/java_api/java/time/chrono/MinguoChronology.h>
#include <scapix/java_api/java/time/chrono/MinguoEra.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>
#include <scapix/java_api/java/time/temporal/TemporalAmount.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/TemporalUnit.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::chrono::MinguoDate : public jni::object_base<"java/time/chrono/MinguoDate",
	java::lang::Object,
	java::time::chrono::ChronoLocalDate,
	java::time::temporal::Temporal,
	java::time::temporal::TemporalAdjuster,
	java::io::Serializable>
{
public:

	static jni::ref<java::time::chrono::MinguoDate> now() { return call_static_method<"now", jni::ref<java::time::chrono::MinguoDate>>(); }
	static jni::ref<java::time::chrono::MinguoDate> now(jni::ref<java::time::ZoneId> zone) { return call_static_method<"now", jni::ref<java::time::chrono::MinguoDate>>(zone); }
	static jni::ref<java::time::chrono::MinguoDate> now(jni::ref<java::time::Clock> clock) { return call_static_method<"now", jni::ref<java::time::chrono::MinguoDate>>(clock); }
	static jni::ref<java::time::chrono::MinguoDate> of(jint prolepticYear, jint month, jint dayOfMonth) { return call_static_method<"of", jni::ref<java::time::chrono::MinguoDate>>(prolepticYear, month, dayOfMonth); }
	static jni::ref<java::time::chrono::MinguoDate> from(jni::ref<java::time::temporal::TemporalAccessor> temporal) { return call_static_method<"from", jni::ref<java::time::chrono::MinguoDate>>(temporal); }
	jni::ref<java::time::chrono::MinguoChronology> getChronology() { return call_method<"getChronology", jni::ref<java::time::chrono::MinguoChronology>>(); }
	jni::ref<java::time::chrono::MinguoEra> getEra() { return call_method<"getEra", jni::ref<java::time::chrono::MinguoEra>>(); }
	jint lengthOfMonth() { return call_method<"lengthOfMonth", jint>(); }
	jni::ref<java::time::temporal::ValueRange> range(jni::ref<java::time::temporal::TemporalField> field) { return call_method<"range", jni::ref<java::time::temporal::ValueRange>>(field); }
	jlong getLong(jni::ref<java::time::temporal::TemporalField> field) { return call_method<"getLong", jlong>(field); }
	jni::ref<java::time::chrono::MinguoDate> with(jni::ref<java::time::temporal::TemporalField> field, jlong newValue) { return call_method<"with", jni::ref<java::time::chrono::MinguoDate>>(field, newValue); }
	jni::ref<java::time::chrono::MinguoDate> with(jni::ref<java::time::temporal::TemporalAdjuster> adjuster) { return call_method<"with", jni::ref<java::time::chrono::MinguoDate>>(adjuster); }
	jni::ref<java::time::chrono::MinguoDate> plus(jni::ref<java::time::temporal::TemporalAmount> amount) { return call_method<"plus", jni::ref<java::time::chrono::MinguoDate>>(amount); }
	jni::ref<java::time::chrono::MinguoDate> minus(jni::ref<java::time::temporal::TemporalAmount> amount) { return call_method<"minus", jni::ref<java::time::chrono::MinguoDate>>(amount); }
	jni::ref<java::time::chrono::MinguoDate> plus(jlong amountToAdd, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"plus", jni::ref<java::time::chrono::MinguoDate>>(amountToAdd, p2); }
	jni::ref<java::time::chrono::MinguoDate> minus(jlong amountToAdd, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"minus", jni::ref<java::time::chrono::MinguoDate>>(amountToAdd, p2); }
	jni::ref<java::time::chrono::ChronoLocalDateTime> atTime(jni::ref<java::time::LocalTime> localTime) { return call_method<"atTime", jni::ref<java::time::chrono::ChronoLocalDateTime>>(localTime); }
	jni::ref<java::time::chrono::ChronoPeriod> until(jni::ref<java::time::chrono::ChronoLocalDate> endDate) { return call_method<"until", jni::ref<java::time::chrono::ChronoPeriod>>(endDate); }
	jlong toEpochDay() { return call_method<"toEpochDay", jlong>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jlong until(jni::ref<java::time::temporal::Temporal> endExclusive, jni::ref<java::time::temporal::TemporalUnit> unit) { return call_method<"until", jlong>(endExclusive, unit); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	MinguoDate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_MINGUODATE