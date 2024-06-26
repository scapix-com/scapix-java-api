// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_ZONE_ZONEOFFSETTRANSITION_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_ZONE_ZONEOFFSETTRANSITION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::zone { class ZoneOffsetTransition; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::zone::ZoneOffsetTransition>
{
	static constexpr fixed_string class_name = "java/time/zone/ZoneOffsetTransition";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_ZONE_ZONEOFFSETTRANSITION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_ZONE_ZONEOFFSETTRANSITION)
#define SCAPIX_JAVA_API_JAVA_TIME_ZONE_ZONEOFFSETTRANSITION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Duration.h>
#include <scapix/java_api/java/time/Instant.h>
#include <scapix/java_api/java/time/LocalDateTime.h>
#include <scapix/java_api/java/time/ZoneOffset.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::zone::ZoneOffsetTransition : public jni::object_base<"java/time/zone/ZoneOffsetTransition",
	java::lang::Object,
	java::lang::Comparable,
	java::io::Serializable>
{
public:

	static jni::ref<java::time::zone::ZoneOffsetTransition> of(jni::ref<java::time::LocalDateTime> transition, jni::ref<java::time::ZoneOffset> offsetBefore, jni::ref<java::time::ZoneOffset> offsetAfter) { return call_static_method<"of", jni::ref<java::time::zone::ZoneOffsetTransition>>(transition, offsetBefore, offsetAfter); }
	jni::ref<java::time::Instant> getInstant() { return call_method<"getInstant", jni::ref<java::time::Instant>>(); }
	jlong toEpochSecond() { return call_method<"toEpochSecond", jlong>(); }
	jni::ref<java::time::LocalDateTime> getDateTimeBefore() { return call_method<"getDateTimeBefore", jni::ref<java::time::LocalDateTime>>(); }
	jni::ref<java::time::LocalDateTime> getDateTimeAfter() { return call_method<"getDateTimeAfter", jni::ref<java::time::LocalDateTime>>(); }
	jni::ref<java::time::ZoneOffset> getOffsetBefore() { return call_method<"getOffsetBefore", jni::ref<java::time::ZoneOffset>>(); }
	jni::ref<java::time::ZoneOffset> getOffsetAfter() { return call_method<"getOffsetAfter", jni::ref<java::time::ZoneOffset>>(); }
	jni::ref<java::time::Duration> getDuration() { return call_method<"getDuration", jni::ref<java::time::Duration>>(); }
	jboolean isGap() { return call_method<"isGap", jboolean>(); }
	jboolean isOverlap() { return call_method<"isOverlap", jboolean>(); }
	jboolean isValidOffset(jni::ref<java::time::ZoneOffset> offset) { return call_method<"isValidOffset", jboolean>(offset); }
	jint compareTo(jni::ref<java::time::zone::ZoneOffsetTransition> otherTransition) { return call_method<"compareTo", jint>(otherTransition); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ZoneOffsetTransition(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_ZONE_ZONEOFFSETTRANSITION
