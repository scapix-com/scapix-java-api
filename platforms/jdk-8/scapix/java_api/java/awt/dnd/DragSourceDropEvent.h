// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/dnd/DragSourceEvent.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_DND_DRAGSOURCEDROPEVENT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_DND_DRAGSOURCEDROPEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::dnd { class DragSourceDropEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::dnd::DragSourceDropEvent>
{
	static constexpr fixed_string class_name = "java/awt/dnd/DragSourceDropEvent";
	using base_classes = std::tuple<scapix::java_api::java::awt::dnd::DragSourceEvent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_DND_DRAGSOURCEDROPEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_DND_DRAGSOURCEDROPEVENT)
#define SCAPIX_JAVA_API_JAVA_AWT_DND_DRAGSOURCEDROPEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/dnd/DragSourceContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::dnd::DragSourceDropEvent : public jni::object_base<"java/awt/dnd/DragSourceDropEvent",
	java::awt::dnd::DragSourceEvent>
{
public:

	static jni::ref<java::awt::dnd::DragSourceDropEvent> new_object(jni::ref<java::awt::dnd::DragSourceContext> p1, jint p2, jboolean p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<java::awt::dnd::DragSourceDropEvent> new_object(jni::ref<java::awt::dnd::DragSourceContext> p1, jint p2, jboolean p3, jint p4, jint p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<java::awt::dnd::DragSourceDropEvent> new_object(jni::ref<java::awt::dnd::DragSourceContext> p1) { return base_::new_object(p1); }
	jboolean getDropSuccess() { return call_method<"getDropSuccess", jboolean>(); }
	jint getDropAction() { return call_method<"getDropAction", jint>(); }

protected:

	DragSourceDropEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_DND_DRAGSOURCEDROPEVENT
