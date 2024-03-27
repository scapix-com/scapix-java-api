// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/event/Event.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_PROCESSSTARTEVENT_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_PROCESSSTARTEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::event { class ProcessStartEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::event::ProcessStartEvent>
{
	static constexpr fixed_string class_name = "jdk/internal/event/ProcessStartEvent";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::event::Event>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_PROCESSSTARTEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_PROCESSSTARTEVENT)
#define SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_PROCESSSTARTEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::event::ProcessStartEvent : public jni::object_base<"jdk/internal/event/ProcessStartEvent",
	jdk::internal::event::Event>
{
public:

	jlong pid() { return get_field<"pid", jlong>(); }
	void pid(jlong v) { set_field<"pid", jlong>(v); }
	jni::ref<java::lang::String> directory() { return get_field<"directory", jni::ref<java::lang::String>>(); }
	void directory(jni::ref<java::lang::String> v) { set_field<"directory", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> command() { return get_field<"command", jni::ref<java::lang::String>>(); }
	void command(jni::ref<java::lang::String> v) { set_field<"command", jni::ref<java::lang::String>>(v); }

	static jni::ref<jdk::internal::event::ProcessStartEvent> new_object() { return base_::new_object(); }

protected:

	ProcessStartEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_PROCESSSTARTEVENT