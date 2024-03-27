// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/event/Event.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_THREADSLEEPEVENT_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_THREADSLEEPEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::event { class ThreadSleepEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::event::ThreadSleepEvent>
{
	static constexpr fixed_string class_name = "jdk/internal/event/ThreadSleepEvent";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::event::Event>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_THREADSLEEPEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_THREADSLEEPEVENT)
#define SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_THREADSLEEPEVENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::event::ThreadSleepEvent : public jni::object_base<"jdk/internal/event/ThreadSleepEvent",
	jdk::internal::event::Event>
{
public:

	jlong time() { return get_field<"time", jlong>(); }
	void time(jlong v) { set_field<"time", jlong>(v); }

	static jni::ref<jdk::internal::event::ThreadSleepEvent> new_object() { return base_::new_object(); }
	static jboolean isTurnedOn() { return call_static_method<"isTurnedOn", jboolean>(); }

protected:

	ThreadSleepEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_THREADSLEEPEVENT
