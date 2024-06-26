// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/EventObject.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TREESELECTIONEVENT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TREESELECTIONEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::event { class TreeSelectionEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::event::TreeSelectionEvent>
{
	static constexpr fixed_string class_name = "javax/swing/event/TreeSelectionEvent";
	using base_classes = std::tuple<scapix::java_api::java::util::EventObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TREESELECTIONEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TREESELECTIONEVENT)
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TREESELECTIONEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/tree/TreePath.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::event::TreeSelectionEvent : public jni::object_base<"javax/swing/event/TreeSelectionEvent",
	java::util::EventObject>
{
public:

	static jni::ref<javax::swing::event::TreeSelectionEvent> new_object(jni::ref<java::lang::Object> p1, jni::ref<jni::array<javax::swing::tree::TreePath>> p2, jni::ref<jni::array<jboolean>> p3, jni::ref<javax::swing::tree::TreePath> p4, jni::ref<javax::swing::tree::TreePath> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<javax::swing::event::TreeSelectionEvent> new_object(jni::ref<java::lang::Object> p1, jni::ref<javax::swing::tree::TreePath> p2, jboolean p3, jni::ref<javax::swing::tree::TreePath> p4, jni::ref<javax::swing::tree::TreePath> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	jni::ref<jni::array<javax::swing::tree::TreePath>> getPaths() { return call_method<"getPaths", jni::ref<jni::array<javax::swing::tree::TreePath>>>(); }
	jni::ref<javax::swing::tree::TreePath> getPath() { return call_method<"getPath", jni::ref<javax::swing::tree::TreePath>>(); }
	jboolean isAddedPath() { return call_method<"isAddedPath", jboolean>(); }
	jboolean isAddedPath(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"isAddedPath", jboolean>(p1); }
	jboolean isAddedPath(jint p1) { return call_method<"isAddedPath", jboolean>(p1); }
	jni::ref<javax::swing::tree::TreePath> getOldLeadSelectionPath() { return call_method<"getOldLeadSelectionPath", jni::ref<javax::swing::tree::TreePath>>(); }
	jni::ref<javax::swing::tree::TreePath> getNewLeadSelectionPath() { return call_method<"getNewLeadSelectionPath", jni::ref<javax::swing::tree::TreePath>>(); }
	jni::ref<java::lang::Object> cloneWithSource(jni::ref<java::lang::Object> p1) { return call_method<"cloneWithSource", jni::ref<java::lang::Object>>(p1); }

protected:

	TreeSelectionEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TREESELECTIONEVENT
