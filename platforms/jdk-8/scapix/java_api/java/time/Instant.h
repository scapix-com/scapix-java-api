// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/temporal/Temporal.h>
#include <scapix/java_api/java/time/temporal/TemporalAdjuster.h>
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_INSTANT_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_INSTANT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time { class Instant; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::Instant>
{
	static constexpr fixed_string class_name = "java/time/Instant";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::time::temporal::Temporal, scapix::java_api::java::time::temporal::TemporalAdjuster, scapix::java_api::java::lang::Comparable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_INSTANT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_INSTANT)
#define SCAPIX_JAVA_API_JAVA_TIME_INSTANT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Clock.h>
#include <scapix/java_api/java/time/OffsetDateTime.h>
#include <scapix/java_api/java/time/ZoneId.h>
#include <scapix/java_api/java/time/ZoneOffset.h>
#include <scapix/java_api/java/time/ZonedDateTime.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>
#include <scapix/java_api/java/time/temporal/TemporalAmount.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/TemporalQuery.h>
#include <scapix/java_api/java/time/temporal/TemporalUnit.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::Instant : public jni::object_base<"java/time/Instant",
	java::lang::Object,
	java::time::temporal::Temporal,
	java::time::temporal::TemporalAdjuster,
	java::lang::Comparable,
	java::io::Serializable>
{
public:

	static jni::ref<java::time::Instant> EPOCH() { return get_static_field<"EPOCH", jni::ref<java::time::Instant>>(); }
	static jni::ref<java::time::Instant> MIN() { return get_static_field<"MIN", jni::ref<java::time::Instant>>(); }
	static jni::ref<java::time::Instant> MAX() { return get_static_field<"MAX", jni::ref<java::time::Instant>>(); }

	static jni::ref<java::time::Instant> now() { return call_static_method<"now", jni::ref<java::time::Instant>>(); }
	static jni::ref<java::time::Instant> now(jni::ref<java::time::Clock> p1) { return call_static_method<"now", jni::ref<java::time::Instant>>(p1); }
	static jni::ref<java::time::Instant> ofEpochSecond(jlong p1) { return call_static_method<"ofEpochSecond", jni::ref<java::time::Instant>>(p1); }
	static jni::ref<java::time::Instant> ofEpochSecond(jlong p1, jlong p2) { return call_static_method<"ofEpochSecond", jni::ref<java::time::Instant>>(p1, p2); }
	static jni::ref<java::time::Instant> ofEpochMilli(jlong p1) { return call_static_method<"ofEpochMilli", jni::ref<java::time::Instant>>(p1); }
	static jni::ref<java::time::Instant> from(jni::ref<java::time::temporal::TemporalAccessor> p1) { return call_static_method<"from", jni::ref<java::time::Instant>>(p1); }
	static jni::ref<java::time::Instant> parse(jni::ref<java::lang::CharSequence> p1) { return call_static_method<"parse", jni::ref<java::time::Instant>>(p1); }
	jboolean isSupported(jni::ref<java::time::temporal::TemporalField> p1) { return call_method<"isSupported", jboolean>(p1); }
	jboolean isSupported(jni::ref<java::time::temporal::TemporalUnit> p1) { return call_method<"isSupported", jboolean>(p1); }
	jni::ref<java::time::temporal::ValueRange> range(jni::ref<java::time::temporal::TemporalField> p1) { return call_method<"range", jni::ref<java::time::temporal::ValueRange>>(p1); }
	jint get(jni::ref<java::time::temporal::TemporalField> p1) { return call_method<"get", jint>(p1); }
	jlong getLong(jni::ref<java::time::temporal::TemporalField> p1) { return call_method<"getLong", jlong>(p1); }
	jlong getEpochSecond() { return call_method<"getEpochSecond", jlong>(); }
	jint getNano() { return call_method<"getNano", jint>(); }
	jni::ref<java::time::Instant> with(jni::ref<java::time::temporal::TemporalAdjuster> p1) { return call_method<"with", jni::ref<java::time::Instant>>(p1); }
	jni::ref<java::time::Instant> with(jni::ref<java::time::temporal::TemporalField> p1, jlong p2) { return call_method<"with", jni::ref<java::time::Instant>>(p1, p2); }
	jni::ref<java::time::Instant> truncatedTo(jni::ref<java::time::temporal::TemporalUnit> p1) { return call_method<"truncatedTo", jni::ref<java::time::Instant>>(p1); }
	jni::ref<java::time::Instant> plus(jni::ref<java::time::temporal::TemporalAmount> p1) { return call_method<"plus", jni::ref<java::time::Instant>>(p1); }
	jni::ref<java::time::Instant> plus(jlong p1, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"plus", jni::ref<java::time::Instant>>(p1, p2); }
	jni::ref<java::time::Instant> plusSeconds(jlong p1) { return call_method<"plusSeconds", jni::ref<java::time::Instant>>(p1); }
	jni::ref<java::time::Instant> plusMillis(jlong p1) { return call_method<"plusMillis", jni::ref<java::time::Instant>>(p1); }
	jni::ref<java::time::Instant> plusNanos(jlong p1) { return call_method<"plusNanos", jni::ref<java::time::Instant>>(p1); }
	jni::ref<java::time::Instant> minus(jni::ref<java::time::temporal::TemporalAmount> p1) { return call_method<"minus", jni::ref<java::time::Instant>>(p1); }
	jni::ref<java::time::Instant> minus(jlong p1, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"minus", jni::ref<java::time::Instant>>(p1, p2); }
	jni::ref<java::time::Instant> minusSeconds(jlong p1) { return call_method<"minusSeconds", jni::ref<java::time::Instant>>(p1); }
	jni::ref<java::time::Instant> minusMillis(jlong p1) { return call_method<"minusMillis", jni::ref<java::time::Instant>>(p1); }
	jni::ref<java::time::Instant> minusNanos(jlong p1) { return call_method<"minusNanos", jni::ref<java::time::Instant>>(p1); }
	jni::ref<java::lang::Object> query(jni::ref<java::time::temporal::TemporalQuery> p1) { return call_method<"query", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::time::temporal::Temporal> adjustInto(jni::ref<java::time::temporal::Temporal> p1) { return call_method<"adjustInto", jni::ref<java::time::temporal::Temporal>>(p1); }
	jlong until(jni::ref<java::time::temporal::Temporal> p1, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"until", jlong>(p1, p2); }
	jni::ref<java::time::OffsetDateTime> atOffset(jni::ref<java::time::ZoneOffset> p1) { return call_method<"atOffset", jni::ref<java::time::OffsetDateTime>>(p1); }
	jni::ref<java::time::ZonedDateTime> atZone(jni::ref<java::time::ZoneId> p1) { return call_method<"atZone", jni::ref<java::time::ZonedDateTime>>(p1); }
	jlong toEpochMilli() { return call_method<"toEpochMilli", jlong>(); }
	jint compareTo(jni::ref<java::time::Instant> p1) { return call_method<"compareTo", jint>(p1); }
	jboolean isAfter(jni::ref<java::time::Instant> p1) { return call_method<"isAfter", jboolean>(p1); }
	jboolean isBefore(jni::ref<java::time::Instant> p1) { return call_method<"isBefore", jboolean>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Instant(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_INSTANT