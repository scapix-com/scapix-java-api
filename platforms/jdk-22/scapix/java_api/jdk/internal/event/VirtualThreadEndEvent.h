// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/event/Event.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_VIRTUALTHREADENDEVENT_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_VIRTUALTHREADENDEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::event { class VirtualThreadEndEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::event::VirtualThreadEndEvent>
{
	static constexpr fixed_string class_name = "jdk/internal/event/VirtualThreadEndEvent";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::event::Event>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_VIRTUALTHREADENDEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_VIRTUALTHREADENDEVENT)
#define SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_VIRTUALTHREADENDEVENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::event::VirtualThreadEndEvent : public jni::object_base<"jdk/internal/event/VirtualThreadEndEvent",
	jdk::internal::event::Event>
{
public:

	jlong javaThreadId() { return get_field<"javaThreadId", jlong>(); }
	void javaThreadId(jlong v) { set_field<"javaThreadId", jlong>(v); }

	static jni::ref<jdk::internal::event::VirtualThreadEndEvent> new_object() { return base_::new_object(); }
	static jboolean isTurnedOn() { return call_static_method<"isTurnedOn", jboolean>(); }

protected:

	VirtualThreadEndEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_VIRTUALTHREADENDEVENT
