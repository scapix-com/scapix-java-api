// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/chrono/ChronoLocalDateTime.h>
#include <scapix/java_api/java/time/temporal/Temporal.h>
#include <scapix/java_api/java/time/temporal/TemporalAdjuster.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_CHRONO_CHRONOLOCALDATETIMEIMPL_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_CHRONOLOCALDATETIMEIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::chrono { class ChronoLocalDateTimeImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::chrono::ChronoLocalDateTimeImpl>
{
	static constexpr fixed_string class_name = "java/time/chrono/ChronoLocalDateTimeImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::time::chrono::ChronoLocalDateTime, scapix::java_api::java::time::temporal::Temporal, scapix::java_api::java::time::temporal::TemporalAdjuster, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_CHRONOLOCALDATETIMEIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_CHRONO_CHRONOLOCALDATETIMEIMPL)
#define SCAPIX_JAVA_API_JAVA_TIME_CHRONO_CHRONOLOCALDATETIMEIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/LocalTime.h>
#include <scapix/java_api/java/time/ZoneId.h>
#include <scapix/java_api/java/time/chrono/ChronoLocalDate.h>
#include <scapix/java_api/java/time/chrono/ChronoZonedDateTime.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/TemporalUnit.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::time::chrono::ChronoLocalDateTimeImpl : public jni::object_base<"java/time/chrono/ChronoLocalDateTimeImpl",
	java::lang::Object,
	java::time::chrono::ChronoLocalDateTime,
	java::time::temporal::Temporal,
	java::time::temporal::TemporalAdjuster,
	java::io::Serializable>
{
public:

	jni::ref<java::time::chrono::ChronoLocalDate> toLocalDate() { return call_method<"toLocalDate", jni::ref<java::time::chrono::ChronoLocalDate>>(); }
	jni::ref<java::time::LocalTime> toLocalTime() { return call_method<"toLocalTime", jni::ref<java::time::LocalTime>>(); }
	jboolean isSupported(jni::ref<java::time::temporal::TemporalField> p1) { return call_method<"isSupported", jboolean>(p1); }
	jni::ref<java::time::temporal::ValueRange> range(jni::ref<java::time::temporal::TemporalField> p1) { return call_method<"range", jni::ref<java::time::temporal::ValueRange>>(p1); }
	jint get(jni::ref<java::time::temporal::TemporalField> p1) { return call_method<"get", jint>(p1); }
	jlong getLong(jni::ref<java::time::temporal::TemporalField> p1) { return call_method<"getLong", jlong>(p1); }
	jni::ref<java::time::chrono::ChronoLocalDateTimeImpl> with(jni::ref<java::time::temporal::TemporalAdjuster> p1) { return call_method<"with", jni::ref<java::time::chrono::ChronoLocalDateTimeImpl>>(p1); }
	jni::ref<java::time::chrono::ChronoLocalDateTimeImpl> with(jni::ref<java::time::temporal::TemporalField> p1, jlong p2) { return call_method<"with", jni::ref<java::time::chrono::ChronoLocalDateTimeImpl>>(p1, p2); }
	jni::ref<java::time::chrono::ChronoLocalDateTimeImpl> plus(jlong p1, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"plus", jni::ref<java::time::chrono::ChronoLocalDateTimeImpl>>(p1, p2); }
	jni::ref<java::time::chrono::ChronoZonedDateTime> atZone(jni::ref<java::time::ZoneId> p1) { return call_method<"atZone", jni::ref<java::time::chrono::ChronoZonedDateTime>>(p1); }
	jlong until(jni::ref<java::time::temporal::Temporal> p1, jni::ref<java::time::temporal::TemporalUnit> p2) { return call_method<"until", jlong>(p1, p2); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ChronoLocalDateTimeImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CHRONO_CHRONOLOCALDATETIMEIMPL
