// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/time/chrono/ChronoLocalDateImpl.h>
#include <scapix/java_api/java/time/chrono/ChronoLocalDate.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_CHRONO_MINGUODATE_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_MINGUODATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::chrono { class MinguoDate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::chrono::MinguoDate>
{
	static constexpr fixed_string class_name = "java/time/chrono/MinguoDate";
	using base_classes = std::tuple<scapix::java_api::java::time::chrono::ChronoLocalDateImpl, scapix::java_api::java::time::chrono::ChronoLocalDate, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_MINGUODATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_CHRONO_MINGUODATE)
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_MINGUODATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/Clock.h>
#include <scapix/java_api/java/time/LocalTime.h>
#include <scapix/java_api/java/time/ZoneId.h>
#include <scapix/java_api/java/time/chrono/ChronoLocalDateTime.h>
#include <scapix/java_api/java/time/chrono/ChronoPeriod.h>
#include <scapix/java_api/java/time/chrono/MinguoChronology.h>
#include <scapix/java_api/java/time/chrono/MinguoEra.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>
#include <scapix/java_api/java/time/temporal/TemporalAdjuster.h>
#include <scapix/java_api/java/time/temporal/TemporalAmount.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/TemporalUnit.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::chrono::MinguoDate : public jni::object_base<"java/time/chrono/MinguoDate",
	java::time::chrono::ChronoLocalDateImpl,
	java::time::chrono::ChronoLocalDate,
	java::io::Serializable>
{
public:

	static jni::ref<java::time::chrono::MinguoDate> now() { return call_static_method<"now", jni::ref<java::time::chrono::MinguoDate>>(); }
	static jni::ref<java::time::chrono::MinguoDate> now(jni::ref<java::time::ZoneId> p1) { return call_static_method<"now", jni::ref<java::time::chrono::MinguoDate>>(p1); }
	static jni::ref<java::time::chrono::MinguoDate> now(jni::ref<java::time::Clock> p1) { return call_static_method<"now", jni::ref<java::time::chrono::MinguoDate>>(p1); }
	static jni::ref<java::time::chrono::MinguoDate> of(jint p1, jint p2, jint p3) { return call_static_method<"of", jni::ref<java::time::chrono::MinguoDate>>(p1, p2, p3); }
	static jni::ref<java::time::chrono::MinguoDate> from(jni::ref<java::time::temporal::TemporalAccessor> p1) { return call_static_method<"from", jni::ref<java::time::chrono::MinguoDate>>(p1); }
	jni::ref<java::time::chrono::MinguoChronology> getChronology() { return call_method<"getChronology", jni::ref<java::time::chrono::MinguoChronology>>(); }
	jni::ref<java::time::chrono::MinguoEra> getEra() { return call_method<"getEra", jni::ref<java::time::chrono::MinguoEra>>(); }
	jint lengthOfMonth() { return call_method<"lengthOfMonth", jint>(); }
	jni::ref<java::time::temporal::ValueRange> range(jni::ref<java::time::temporal::TemporalField> p1) { return call_method<"range", jni::ref<java::time::temporal::ValueRange>>(p1); }
	jlong getLong(jni::ref<java::time::temporal::TemporalField> p1) { return call_method<"getLong", jlong>(p1); }
	jni::ref<java::time::chrono::MinguoDate> with(jni::ref<java::time::temporal::TemporalField> p1, jlong p2) { return call_method<"with", jni::ref<java::time::chrono::MinguoDate>>(p1, p2); }
	jni::ref<java::time::chrono::MinguoDate> with(jni::ref<java::time::temporal::TemporalAdjuster> p1) { return call_method<"with", jni::ref<java::time::chrono::MinguoDate>>(p1); }
	jni::ref<java::time::chrono::MinguoDate> plus(jni::ref<java::time::temporal::TemporalAmount> p1) { return call_method<"plus", jni::ref<java::time::chrono::MinguoDate>>(p1); }
	jni::ref<java::time::chrono::MinguoDate> minus(jni::ref<java::time::temporal::TemporalAmount> p1) { return call_method<"minus", jni::ref<java::time::chrono::MinguoDate>>(p1); }
	jni::ref<java::time::chrono::MinguoDate> plus(jlong p1, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"plus", jni::ref<java::time::chrono::MinguoDate>>(p1, p2); }
	jni::ref<java::time::chrono::MinguoDate> minus(jlong p1, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"minus", jni::ref<java::time::chrono::MinguoDate>>(p1, p2); }
	jni::ref<java::time::chrono::ChronoLocalDateTime> atTime(jni::ref<java::time::LocalTime> p1) { return call_method<"atTime", jni::ref<java::time::chrono::ChronoLocalDateTime>>(p1); }
	jni::ref<java::time::chrono::ChronoPeriod> until(jni::ref<java::time::chrono::ChronoLocalDate> p1) { return call_method<"until", jni::ref<java::time::chrono::ChronoPeriod>>(p1); }
	jlong toEpochDay() { return call_method<"toEpochDay", jlong>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	MinguoDate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_MINGUODATE
