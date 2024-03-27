// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/event/Event.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_X509VALIDATIONEVENT_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_X509VALIDATIONEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::event { class X509ValidationEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::event::X509ValidationEvent>
{
	static constexpr fixed_string class_name = "jdk/internal/event/X509ValidationEvent";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::event::Event>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_X509VALIDATIONEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_X509VALIDATIONEVENT)
#define SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_X509VALIDATIONEVENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::event::X509ValidationEvent : public jni::object_base<"jdk/internal/event/X509ValidationEvent",
	jdk::internal::event::Event>
{
public:

	jlong certificateId() { return get_field<"certificateId", jlong>(); }
	void certificateId(jlong v) { set_field<"certificateId", jlong>(v); }
	jint certificatePosition() { return get_field<"certificatePosition", jint>(); }
	void certificatePosition(jint v) { set_field<"certificatePosition", jint>(v); }
	jlong validationCounter() { return get_field<"validationCounter", jlong>(); }
	void validationCounter(jlong v) { set_field<"validationCounter", jlong>(v); }

	static jni::ref<jdk::internal::event::X509ValidationEvent> new_object() { return base_::new_object(); }

protected:

	X509ValidationEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_X509VALIDATIONEVENT
