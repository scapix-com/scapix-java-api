// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/temporal/TemporalAmount.h>
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_DURATION_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_DURATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time { class Duration; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::Duration>
{
	static constexpr fixed_string class_name = "java/time/Duration";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::time::temporal::TemporalAmount, scapix::java_api::java::lang::Comparable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_DURATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_DURATION)
#define SCAPIX_JAVA_API_JAVA_TIME_DURATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/temporal/Temporal.h>
#include <scapix/java_api/java/time/temporal/TemporalUnit.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::Duration : public jni::object_base<"java/time/Duration",
	java::lang::Object,
	java::time::temporal::TemporalAmount,
	java::lang::Comparable,
	java::io::Serializable>
{
public:

	static jni::ref<java::time::Duration> ZERO() { return get_static_field<"ZERO", jni::ref<java::time::Duration>>(); }

	static jni::ref<java::time::Duration> ofDays(jlong days) { return call_static_method<"ofDays", jni::ref<java::time::Duration>>(days); }
	static jni::ref<java::time::Duration> ofHours(jlong hours) { return call_static_method<"ofHours", jni::ref<java::time::Duration>>(hours); }
	static jni::ref<java::time::Duration> ofMinutes(jlong minutes) { return call_static_method<"ofMinutes", jni::ref<java::time::Duration>>(minutes); }
	static jni::ref<java::time::Duration> ofSeconds(jlong seconds) { return call_static_method<"ofSeconds", jni::ref<java::time::Duration>>(seconds); }
	static jni::ref<java::time::Duration> ofSeconds(jlong seconds, jlong p2) { return call_static_method<"ofSeconds", jni::ref<java::time::Duration>>(seconds, p2); }
	static jni::ref<java::time::Duration> ofMillis(jlong millis) { return call_static_method<"ofMillis", jni::ref<java::time::Duration>>(millis); }
	static jni::ref<java::time::Duration> ofNanos(jlong nanos) { return call_static_method<"ofNanos", jni::ref<java::time::Duration>>(nanos); }
	static jni::ref<java::time::Duration> of(jlong amount, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_static_method<"of", jni::ref<java::time::Duration>>(amount, p2); }
	static jni::ref<java::time::Duration> from(jni::ref<java::time::temporal::TemporalAmount> amount) { return call_static_method<"from", jni::ref<java::time::Duration>>(amount); }
	static jni::ref<java::time::Duration> parse(jni::ref<java::lang::CharSequence> text) { return call_static_method<"parse", jni::ref<java::time::Duration>>(text); }
	static jni::ref<java::time::Duration> between(jni::ref<java::time::temporal::Temporal> startInclusive, jni::ref<java::time::temporal::Temporal> endExclusive) { return call_static_method<"between", jni::ref<java::time::Duration>>(startInclusive, endExclusive); }
	jlong get(jni::ref<java::time::temporal::TemporalUnit> unit) { return call_method<"get", jlong>(unit); }
	jni::ref<java::util::List> getUnits() { return call_method<"getUnits", jni::ref<java::util::List>>(); }
	jboolean isZero() { return call_method<"isZero", jboolean>(); }
	jboolean isNegative() { return call_method<"isNegative", jboolean>(); }
	jlong getSeconds() { return call_method<"getSeconds", jlong>(); }
	jint getNano() { return call_method<"getNano", jint>(); }
	jni::ref<java::time::Duration> withSeconds(jlong seconds) { return call_method<"withSeconds", jni::ref<java::time::Duration>>(seconds); }
	jni::ref<java::time::Duration> withNanos(jint nanoOfSecond) { return call_method<"withNanos", jni::ref<java::time::Duration>>(nanoOfSecond); }
	jni::ref<java::time::Duration> plus(jni::ref<java::time::Duration> duration) { return call_method<"plus", jni::ref<java::time::Duration>>(duration); }
	jni::ref<java::time::Duration> plus(jlong amountToAdd, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"plus", jni::ref<java::time::Duration>>(amountToAdd, p2); }
	jni::ref<java::time::Duration> plusDays(jlong daysToAdd) { return call_method<"plusDays", jni::ref<java::time::Duration>>(daysToAdd); }
	jni::ref<java::time::Duration> plusHours(jlong hoursToAdd) { return call_method<"plusHours", jni::ref<java::time::Duration>>(hoursToAdd); }
	jni::ref<java::time::Duration> plusMinutes(jlong minutesToAdd) { return call_method<"plusMinutes", jni::ref<java::time::Duration>>(minutesToAdd); }
	jni::ref<java::time::Duration> plusSeconds(jlong secondsToAdd) { return call_method<"plusSeconds", jni::ref<java::time::Duration>>(secondsToAdd); }
	jni::ref<java::time::Duration> plusMillis(jlong millisToAdd) { return call_method<"plusMillis", jni::ref<java::time::Duration>>(millisToAdd); }
	jni::ref<java::time::Duration> plusNanos(jlong nanosToAdd) { return call_method<"plusNanos", jni::ref<java::time::Duration>>(nanosToAdd); }
	jni::ref<java::time::Duration> minus(jni::ref<java::time::Duration> duration) { return call_method<"minus", jni::ref<java::time::Duration>>(duration); }
	jni::ref<java::time::Duration> minus(jlong amountToSubtract, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"minus", jni::ref<java::time::Duration>>(amountToSubtract, p2); }
	jni::ref<java::time::Duration> minusDays(jlong daysToSubtract) { return call_method<"minusDays", jni::ref<java::time::Duration>>(daysToSubtract); }
	jni::ref<java::time::Duration> minusHours(jlong hoursToSubtract) { return call_method<"minusHours", jni::ref<java::time::Duration>>(hoursToSubtract); }
	jni::ref<java::time::Duration> minusMinutes(jlong minutesToSubtract) { return call_method<"minusMinutes", jni::ref<java::time::Duration>>(minutesToSubtract); }
	jni::ref<java::time::Duration> minusSeconds(jlong secondsToSubtract) { return call_method<"minusSeconds", jni::ref<java::time::Duration>>(secondsToSubtract); }
	jni::ref<java::time::Duration> minusMillis(jlong millisToSubtract) { return call_method<"minusMillis", jni::ref<java::time::Duration>>(millisToSubtract); }
	jni::ref<java::time::Duration> minusNanos(jlong nanosToSubtract) { return call_method<"minusNanos", jni::ref<java::time::Duration>>(nanosToSubtract); }
	jni::ref<java::time::Duration> multipliedBy(jlong multiplicand) { return call_method<"multipliedBy", jni::ref<java::time::Duration>>(multiplicand); }
	jni::ref<java::time::Duration> dividedBy(jlong divisor) { return call_method<"dividedBy", jni::ref<java::time::Duration>>(divisor); }
	jlong dividedBy(jni::ref<java::time::Duration> divisor) { return call_method<"dividedBy", jlong>(divisor); }
	jni::ref<java::time::Duration> negated() { return call_method<"negated", jni::ref<java::time::Duration>>(); }
	jni::ref<java::time::Duration> abs() { return call_method<"abs", jni::ref<java::time::Duration>>(); }
	jni::ref<java::time::temporal::Temporal> addTo(jni::ref<java::time::temporal::Temporal> temporal) { return call_method<"addTo", jni::ref<java::time::temporal::Temporal>>(temporal); }
	jni::ref<java::time::temporal::Temporal> subtractFrom(jni::ref<java::time::temporal::Temporal> temporal) { return call_method<"subtractFrom", jni::ref<java::time::temporal::Temporal>>(temporal); }
	jlong toDays() { return call_method<"toDays", jlong>(); }
	jlong toHours() { return call_method<"toHours", jlong>(); }
	jlong toMinutes() { return call_method<"toMinutes", jlong>(); }
	jlong toSeconds() { return call_method<"toSeconds", jlong>(); }
	jlong toMillis() { return call_method<"toMillis", jlong>(); }
	jlong toNanos() { return call_method<"toNanos", jlong>(); }
	jlong toDaysPart() { return call_method<"toDaysPart", jlong>(); }
	jint toHoursPart() { return call_method<"toHoursPart", jint>(); }
	jint toMinutesPart() { return call_method<"toMinutesPart", jint>(); }
	jint toSecondsPart() { return call_method<"toSecondsPart", jint>(); }
	jint toMillisPart() { return call_method<"toMillisPart", jint>(); }
	jint toNanosPart() { return call_method<"toNanosPart", jint>(); }
	jni::ref<java::time::Duration> truncatedTo(jni::ref<java::time::temporal::TemporalUnit> unit) { return call_method<"truncatedTo", jni::ref<java::time::Duration>>(unit); }
	jint compareTo(jni::ref<java::time::Duration> otherDuration) { return call_method<"compareTo", jint>(otherDuration); }
	jboolean equals(jni::ref<java::lang::Object> otherDuration) { return call_method<"equals", jboolean>(otherDuration); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Duration(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_DURATION
