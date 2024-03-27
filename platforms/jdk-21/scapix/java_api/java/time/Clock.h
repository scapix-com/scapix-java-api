// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/InstantSource.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_CLOCK_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_CLOCK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time { class Clock; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::Clock>
{
	static constexpr fixed_string class_name = "java/time/Clock";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::time::InstantSource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CLOCK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_CLOCK)
#define SCAPIX_JAVA_API_JAVA_TIME_CLOCK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/time/Duration.h>
#include <scapix/java_api/java/time/Instant.h>
#include <scapix/java_api/java/time/ZoneId.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::Clock : public jni::object_base<"java/time/Clock",
	java::lang::Object,
	java::time::InstantSource>
{
public:

	static jni::ref<java::time::Clock> systemUTC() { return call_static_method<"systemUTC", jni::ref<java::time::Clock>>(); }
	static jni::ref<java::time::Clock> systemDefaultZone() { return call_static_method<"systemDefaultZone", jni::ref<java::time::Clock>>(); }
	static jni::ref<java::time::Clock> system(jni::ref<java::time::ZoneId> zone) { return call_static_method<"system", jni::ref<java::time::Clock>>(zone); }
	static jni::ref<java::time::Clock> tickMillis(jni::ref<java::time::ZoneId> zone) { return call_static_method<"tickMillis", jni::ref<java::time::Clock>>(zone); }
	static jni::ref<java::time::Clock> tickSeconds(jni::ref<java::time::ZoneId> zone) { return call_static_method<"tickSeconds", jni::ref<java::time::Clock>>(zone); }
	static jni::ref<java::time::Clock> tickMinutes(jni::ref<java::time::ZoneId> zone) { return call_static_method<"tickMinutes", jni::ref<java::time::Clock>>(zone); }
	static jni::ref<java::time::Clock> tick(jni::ref<java::time::Clock> baseClock, jni::ref<java::time::Duration> tickDuration) { return call_static_method<"tick", jni::ref<java::time::Clock>>(baseClock, tickDuration); }
	static jni::ref<java::time::Clock> fixed(jni::ref<java::time::Instant> fixedInstant, jni::ref<java::time::ZoneId> zone) { return call_static_method<"fixed", jni::ref<java::time::Clock>>(fixedInstant, zone); }
	static jni::ref<java::time::Clock> offset(jni::ref<java::time::Clock> baseClock, jni::ref<java::time::Duration> offsetDuration) { return call_static_method<"offset", jni::ref<java::time::Clock>>(baseClock, offsetDuration); }
	jni::ref<java::time::ZoneId> getZone() { return call_method<"getZone", jni::ref<java::time::ZoneId>>(); }
	jni::ref<java::time::Clock> withZone(jni::ref<java::time::ZoneId> p1) { return call_method<"withZone", jni::ref<java::time::Clock>>(p1); }
	jlong millis() { return call_method<"millis", jlong>(); }
	jni::ref<java::time::Instant> instant() { return call_method<"instant", jni::ref<java::time::Instant>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	Clock(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CLOCK
