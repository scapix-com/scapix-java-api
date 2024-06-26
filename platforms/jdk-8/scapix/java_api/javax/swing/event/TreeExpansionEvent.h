// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/EventObject.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TREEEXPANSIONEVENT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TREEEXPANSIONEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::event { class TreeExpansionEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::event::TreeExpansionEvent>
{
	static constexpr fixed_string class_name = "javax/swing/event/TreeExpansionEvent";
	using base_classes = std::tuple<scapix::java_api::java::util::EventObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TREEEXPANSIONEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TREEEXPANSIONEVENT)
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TREEEXPANSIONEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/tree/TreePath.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::event::TreeExpansionEvent : public jni::object_base<"javax/swing/event/TreeExpansionEvent",
	java::util::EventObject>
{
public:

	static jni::ref<javax::swing::event::TreeExpansionEvent> new_object(jni::ref<java::lang::Object> p1, jni::ref<javax::swing::tree::TreePath> p2) { return base_::new_object(p1, p2); }
	jni::ref<javax::swing::tree::TreePath> getPath() { return call_method<"getPath", jni::ref<javax::swing::tree::TreePath>>(); }

protected:

	TreeExpansionEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TREEEXPANSIONEVENT
