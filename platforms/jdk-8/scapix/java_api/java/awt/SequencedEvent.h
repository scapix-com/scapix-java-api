// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/AWTEvent.h>
#include <scapix/java_api/java/awt/ActiveEvent.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_SEQUENCEDEVENT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_SEQUENCEDEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class SequencedEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::SequencedEvent>
{
	static constexpr fixed_string class_name = "java/awt/SequencedEvent";
	using base_classes = std::tuple<scapix::java_api::java::awt::AWTEvent, scapix::java_api::java::awt::ActiveEvent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_SEQUENCEDEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_SEQUENCEDEVENT)
#define SCAPIX_JAVA_API_JAVA_AWT_SEQUENCEDEVENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::awt::SequencedEvent : public jni::object_base<"java/awt/SequencedEvent",
	java::awt::AWTEvent,
	java::awt::ActiveEvent>
{
public:

	static jni::ref<java::awt::SequencedEvent> new_object(jni::ref<java::awt::AWTEvent> p1) { return base_::new_object(p1); }
	void dispatch() { return call_method<"dispatch", void>(); }
	jboolean isFirstOrDisposed() { return call_method<"isFirstOrDisposed", jboolean>(); }

protected:

	SequencedEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_SEQUENCEDEVENT
