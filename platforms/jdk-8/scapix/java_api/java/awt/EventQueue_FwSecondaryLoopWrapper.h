// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/SecondaryLoop.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_EVENTQUEUE_FWSECONDARYLOOPWRAPPER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_EVENTQUEUE_FWSECONDARYLOOPWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class EventQueue_FwSecondaryLoopWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::EventQueue_FwSecondaryLoopWrapper>
{
	static constexpr fixed_string class_name = "java/awt/EventQueue$FwSecondaryLoopWrapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::SecondaryLoop>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENTQUEUE_FWSECONDARYLOOPWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_EVENTQUEUE_FWSECONDARYLOOPWRAPPER)
#define SCAPIX_JAVA_API_JAVA_AWT_EVENTQUEUE_FWSECONDARYLOOPWRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/EventFilter.h>
#include <scapix/java_api/java/awt/EventQueue.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::awt::EventQueue_FwSecondaryLoopWrapper : public jni::object_base<"java/awt/EventQueue$FwSecondaryLoopWrapper",
	java::lang::Object,
	java::awt::SecondaryLoop>
{
public:

	static jni::ref<java::awt::EventQueue_FwSecondaryLoopWrapper> new_object(jni::ref<java::awt::EventQueue> p1, jni::ref<java::awt::SecondaryLoop> p2, jni::ref<java::awt::EventFilter> p3) { return base_::new_object(p1, p2, p3); }
	jboolean enter() { return call_method<"enter", jboolean>(); }
	jboolean exit() { return call_method<"exit", jboolean>(); }

protected:

	EventQueue_FwSecondaryLoopWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENTQUEUE_FWSECONDARYLOOPWRAPPER