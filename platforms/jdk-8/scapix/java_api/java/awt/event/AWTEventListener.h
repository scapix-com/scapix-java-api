// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/EventListener.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_EVENT_AWTEVENTLISTENER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_AWTEVENTLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::event { class AWTEventListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::event::AWTEventListener>
{
	static constexpr fixed_string class_name = "java/awt/event/AWTEventListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::EventListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_AWTEVENTLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_EVENT_AWTEVENTLISTENER)
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_AWTEVENTLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/AWTEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::event::AWTEventListener : public jni::object_base<"java/awt/event/AWTEventListener",
	java::lang::Object,
	java::util::EventListener>
{
public:

	void eventDispatched(jni::ref<java::awt::AWTEvent> p1) { return call_method<"eventDispatched", void>(p1); }

protected:

	AWTEventListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_AWTEVENTLISTENER