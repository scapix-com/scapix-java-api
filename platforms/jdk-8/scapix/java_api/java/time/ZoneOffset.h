// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/time/ZoneId.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>
#include <scapix/java_api/java/time/temporal/TemporalAdjuster.h>
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_ZONEOFFSET_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_ZONEOFFSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time { class ZoneOffset; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::ZoneOffset>
{
	static constexpr fixed_string class_name = "java/time/ZoneOffset";
	using base_classes = std::tuple<scapix::java_api::java::time::ZoneId, scapix::java_api::java::time::temporal::TemporalAccessor, scapix::java_api::java::time::temporal::TemporalAdjuster, scapix::java_api::java::lang::Comparable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_ZONEOFFSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_ZONEOFFSET)
#define SCAPIX_JAVA_API_JAVA_TIME_ZONEOFFSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/temporal/Temporal.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/TemporalQuery.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>
#include <scapix/java_api/java/time/zone/ZoneRules.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::ZoneOffset : public jni::object_base<"java/time/ZoneOffset",
	java::time::ZoneId,
	java::time::temporal::TemporalAccessor,
	java::time::temporal::TemporalAdjuster,
	java::lang::Comparable,
	java::io::Serializable>
{
public:

	static jni::ref<java::time::ZoneOffset> UTC() { return get_static_field<"UTC", jni::ref<java::time::ZoneOffset>>(); }
	static jni::ref<java::time::ZoneOffset> MIN() { return get_static_field<"MIN", jni::ref<java::time::ZoneOffset>>(); }
	static jni::ref<java::time::ZoneOffset> MAX() { return get_static_field<"MAX", jni::ref<java::time::ZoneOffset>>(); }

	static jni::ref<java::time::ZoneOffset> of(jni::ref<java::lang::String> p1) { return call_static_method<"of", jni::ref<java::time::ZoneOffset>>(p1); }
	static jni::ref<java::time::ZoneOffset> ofHours(jint p1) { return call_static_method<"ofHours", jni::ref<java::time::ZoneOffset>>(p1); }
	static jni::ref<java::time::ZoneOffset> ofHoursMinutes(jint p1, jint p2) { return call_static_method<"ofHoursMinutes", jni::ref<java::time::ZoneOffset>>(p1, p2); }
	static jni::ref<java::time::ZoneOffset> ofHoursMinutesSeconds(jint p1, jint p2, jint p3) { return call_static_method<"ofHoursMinutesSeconds", jni::ref<java::time::ZoneOffset>>(p1, p2, p3); }
	static jni::ref<java::time::ZoneOffset> from(jni::ref<java::time::temporal::TemporalAccessor> p1) { return call_static_method<"from", jni::ref<java::time::ZoneOffset>>(p1); }
	static jni::ref<java::time::ZoneOffset> ofTotalSeconds(jint p1) { return call_static_method<"ofTotalSeconds", jni::ref<java::time::ZoneOffset>>(p1); }
	jint getTotalSeconds() { return call_method<"getTotalSeconds", jint>(); }
	jni::ref<java::lang::String> getId() { return call_method<"getId", jni::ref<java::lang::String>>(); }
	jni::ref<java::time::zone::ZoneRules> getRules() { return call_method<"getRules", jni::ref<java::time::zone::ZoneRules>>(); }
	jboolean isSupported(jni::ref<java::time::temporal::TemporalField> p1) { return call_method<"isSupported", jboolean>(p1); }
	jni::ref<java::time::temporal::ValueRange> range(jni::ref<java::time::temporal::TemporalField> p1) { return call_method<"range", jni::ref<java::time::temporal::ValueRange>>(p1); }
	jint get(jni::ref<java::time::temporal::TemporalField> p1) { return call_method<"get", jint>(p1); }
	jlong getLong(jni::ref<java::time::temporal::TemporalField> p1) { return call_method<"getLong", jlong>(p1); }
	jni::ref<java::lang::Object> query(jni::ref<java::time::temporal::TemporalQuery> p1) { return call_method<"query", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::time::temporal::Temporal> adjustInto(jni::ref<java::time::temporal::Temporal> p1) { return call_method<"adjustInto", jni::ref<java::time::temporal::Temporal>>(p1); }
	jint compareTo(jni::ref<java::time::ZoneOffset> p1) { return call_method<"compareTo", jint>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ZoneOffset(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_ZONEOFFSET
