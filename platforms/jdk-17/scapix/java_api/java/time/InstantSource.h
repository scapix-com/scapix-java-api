// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_INSTANTSOURCE_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_INSTANTSOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time { class InstantSource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::InstantSource>
{
	static constexpr fixed_string class_name = "java/time/InstantSource";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_INSTANTSOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_INSTANTSOURCE)
#define SCAPIX_JAVA_API_JAVA_TIME_INSTANTSOURCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/time/Clock.h>
#include <scapix/java_api/java/time/Duration.h>
#include <scapix/java_api/java/time/Instant.h>
#include <scapix/java_api/java/time/ZoneId.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::InstantSource : public jni::object_base<"java/time/InstantSource",
	java::lang::Object>
{
public:

	static jni::ref<java::time::InstantSource> system() { return call_static_method<"system", jni::ref<java::time::InstantSource>>(); }
	static jni::ref<java::time::InstantSource> tick(jni::ref<java::time::InstantSource> baseSource, jni::ref<java::time::Duration> tickDuration) { return call_static_method<"tick", jni::ref<java::time::InstantSource>>(baseSource, tickDuration); }
	static jni::ref<java::time::InstantSource> fixed(jni::ref<java::time::Instant> fixedInstant) { return call_static_method<"fixed", jni::ref<java::time::InstantSource>>(fixedInstant); }
	static jni::ref<java::time::InstantSource> offset(jni::ref<java::time::InstantSource> baseSource, jni::ref<java::time::Duration> offsetDuration) { return call_static_method<"offset", jni::ref<java::time::InstantSource>>(baseSource, offsetDuration); }
	jni::ref<java::time::Instant> instant() { return call_method<"instant", jni::ref<java::time::Instant>>(); }
	jlong millis() { return call_method<"millis", jlong>(); }
	jni::ref<java::time::Clock> withZone(jni::ref<java::time::ZoneId> zone) { return call_method<"withZone", jni::ref<java::time::Clock>>(zone); }

protected:

	InstantSource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_INSTANTSOURCE
