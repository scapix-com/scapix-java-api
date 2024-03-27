// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/time/Clock.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_CLOCK_TICKCLOCK_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_CLOCK_TICKCLOCK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time { class Clock_TickClock; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::Clock_TickClock>
{
	static constexpr fixed_string class_name = "java/time/Clock$TickClock";
	using base_classes = std::tuple<scapix::java_api::java::time::Clock, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CLOCK_TICKCLOCK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_CLOCK_TICKCLOCK)
#define SCAPIX_JAVA_API_JAVA_TIME_CLOCK_TICKCLOCK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Instant.h>
#include <scapix/java_api/java/time/ZoneId.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::time::Clock_TickClock : public jni::object_base<"java/time/Clock$TickClock",
	java::time::Clock,
	java::io::Serializable>
{
public:

	jni::ref<java::time::ZoneId> getZone() { return call_method<"getZone", jni::ref<java::time::ZoneId>>(); }
	jni::ref<java::time::Clock> withZone(jni::ref<java::time::ZoneId> zone) { return call_method<"withZone", jni::ref<java::time::Clock>>(zone); }
	jlong millis() { return call_method<"millis", jlong>(); }
	jni::ref<java::time::Instant> instant() { return call_method<"instant", jni::ref<java::time::Instant>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Clock_TickClock(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_CLOCK_TICKCLOCK
