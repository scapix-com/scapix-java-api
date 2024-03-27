// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_EVENTQUEUE_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_EVENTQUEUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class EventQueue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::EventQueue>
{
	static constexpr fixed_string class_name = "java/awt/EventQueue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENTQUEUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_EVENTQUEUE)
#define SCAPIX_JAVA_API_JAVA_AWT_EVENTQUEUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/AWTEvent.h>
#include <scapix/java_api/java/awt/SecondaryLoop.h>
#include <scapix/java_api/java/lang/Runnable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::EventQueue : public jni::object_base<"java/awt/EventQueue",
	java::lang::Object>
{
public:

	static jni::ref<java::awt::EventQueue> new_object() { return base_::new_object(); }
	void postEvent(jni::ref<java::awt::AWTEvent> p1) { return call_method<"postEvent", void>(p1); }
	jni::ref<java::awt::AWTEvent> getNextEvent() { return call_method<"getNextEvent", jni::ref<java::awt::AWTEvent>>(); }
	jni::ref<java::awt::AWTEvent> peekEvent() { return call_method<"peekEvent", jni::ref<java::awt::AWTEvent>>(); }
	jni::ref<java::awt::AWTEvent> peekEvent(jint p1) { return call_method<"peekEvent", jni::ref<java::awt::AWTEvent>>(p1); }
	static jlong getMostRecentEventTime() { return call_static_method<"getMostRecentEventTime", jlong>(); }
	static jni::ref<java::awt::AWTEvent> getCurrentEvent() { return call_static_method<"getCurrentEvent", jni::ref<java::awt::AWTEvent>>(); }
	void push(jni::ref<java::awt::EventQueue> p1) { return call_method<"push", void>(p1); }
	jni::ref<java::awt::SecondaryLoop> createSecondaryLoop() { return call_method<"createSecondaryLoop", jni::ref<java::awt::SecondaryLoop>>(); }
	static jboolean isDispatchThread() { return call_static_method<"isDispatchThread", jboolean>(); }
	static void invokeLater(jni::ref<java::lang::Runnable> p1) { return call_static_method<"invokeLater", void>(p1); }
	static void invokeAndWait(jni::ref<java::lang::Runnable> p1) { return call_static_method<"invokeAndWait", void>(p1); }

protected:

	EventQueue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENTQUEUE
