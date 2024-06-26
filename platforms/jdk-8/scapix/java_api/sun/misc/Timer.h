// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_TIMER_FWD
#define SCAPIX_JAVA_API_SUN_MISC_TIMER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class Timer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::Timer>
{
	static constexpr fixed_string class_name = "sun/misc/Timer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_TIMER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_TIMER)
#define SCAPIX_JAVA_API_SUN_MISC_TIMER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/misc/Timeable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::Timer : public jni::object_base<"sun/misc/Timer",
	java::lang::Object>
{
public:

	jni::ref<sun::misc::Timeable> owner() { return get_field<"owner", jni::ref<sun::misc::Timeable>>(); }
	void owner(jni::ref<sun::misc::Timeable> v) { set_field<"owner", jni::ref<sun::misc::Timeable>>(v); }

	static jni::ref<sun::misc::Timer> new_object(jni::ref<sun::misc::Timeable> p1, jlong p2) { return base_::new_object(p1, p2); }
	jboolean isStopped() { return call_method<"isStopped", jboolean>(); }
	void stop() { return call_method<"stop", void>(); }
	void cont() { return call_method<"cont", void>(); }
	void reset() { return call_method<"reset", void>(); }
	jlong getStopTime() { return call_method<"getStopTime", jlong>(); }
	jlong getInterval() { return call_method<"getInterval", jlong>(); }
	void setInterval(jlong p1) { return call_method<"setInterval", void>(p1); }
	jlong getRemainingTime() { return call_method<"getRemainingTime", jlong>(); }
	void setRemainingTime(jlong p1) { return call_method<"setRemainingTime", void>(p1); }
	void setRegular(jboolean p1) { return call_method<"setRegular", void>(p1); }

protected:

	Timer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_TIMER
