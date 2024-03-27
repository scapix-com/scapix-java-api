// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/EventListener.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_EVENT_INPUTMETHODLISTENER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_INPUTMETHODLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::event { class InputMethodListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::event::InputMethodListener>
{
	static constexpr fixed_string class_name = "java/awt/event/InputMethodListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::EventListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_INPUTMETHODLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_EVENT_INPUTMETHODLISTENER)
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_INPUTMETHODLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/InputMethodEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::event::InputMethodListener : public jni::object_base<"java/awt/event/InputMethodListener",
	java::lang::Object,
	java::util::EventListener>
{
public:

	void inputMethodTextChanged(jni::ref<java::awt::event::InputMethodEvent> p1) { return call_method<"inputMethodTextChanged", void>(p1); }
	void caretPositionChanged(jni::ref<java::awt::event::InputMethodEvent> p1) { return call_method<"caretPositionChanged", void>(p1); }

protected:

	InputMethodListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_INPUTMETHODLISTENER
