// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/EventObject.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_DND_DROPTARGETEVENT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_DND_DROPTARGETEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::dnd { class DropTargetEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::dnd::DropTargetEvent>
{
	static constexpr fixed_string class_name = "java/awt/dnd/DropTargetEvent";
	using base_classes = std::tuple<scapix::java_api::java::util::EventObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_DND_DROPTARGETEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_DND_DROPTARGETEVENT)
#define SCAPIX_JAVA_API_JAVA_AWT_DND_DROPTARGETEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/dnd/DropTargetContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::dnd::DropTargetEvent : public jni::object_base<"java/awt/dnd/DropTargetEvent",
	java::util::EventObject>
{
public:

	static jni::ref<java::awt::dnd::DropTargetEvent> new_object(jni::ref<java::awt::dnd::DropTargetContext> p1) { return base_::new_object(p1); }
	jni::ref<java::awt::dnd::DropTargetContext> getDropTargetContext() { return call_method<"getDropTargetContext", jni::ref<java::awt::dnd::DropTargetContext>>(); }

protected:

	DropTargetEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_DND_DROPTARGETEVENT
