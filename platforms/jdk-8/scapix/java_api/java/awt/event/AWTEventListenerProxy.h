// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/EventListenerProxy.h>
#include <scapix/java_api/java/awt/event/AWTEventListener.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_EVENT_AWTEVENTLISTENERPROXY_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_AWTEVENTLISTENERPROXY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::event { class AWTEventListenerProxy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::event::AWTEventListenerProxy>
{
	static constexpr fixed_string class_name = "java/awt/event/AWTEventListenerProxy";
	using base_classes = std::tuple<scapix::java_api::java::util::EventListenerProxy, scapix::java_api::java::awt::event::AWTEventListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_AWTEVENTLISTENERPROXY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_EVENT_AWTEVENTLISTENERPROXY)
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_AWTEVENTLISTENERPROXY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/AWTEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::event::AWTEventListenerProxy : public jni::object_base<"java/awt/event/AWTEventListenerProxy",
	java::util::EventListenerProxy,
	java::awt::event::AWTEventListener>
{
public:

	static jni::ref<java::awt::event::AWTEventListenerProxy> new_object(jlong p1, jni::ref<java::awt::event::AWTEventListener> p2) { return base_::new_object(p1, p2); }
	void eventDispatched(jni::ref<java::awt::AWTEvent> p1) { return call_method<"eventDispatched", void>(p1); }
	jlong getEventMask() { return call_method<"getEventMask", jlong>(); }

protected:

	AWTEventListenerProxy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_AWTEVENTLISTENERPROXY
