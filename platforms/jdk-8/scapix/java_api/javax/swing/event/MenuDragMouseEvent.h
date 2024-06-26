// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/event/MouseEvent.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MENUDRAGMOUSEEVENT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MENUDRAGMOUSEEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::event { class MenuDragMouseEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::event::MenuDragMouseEvent>
{
	static constexpr fixed_string class_name = "javax/swing/event/MenuDragMouseEvent";
	using base_classes = std::tuple<scapix::java_api::java::awt::event::MouseEvent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MENUDRAGMOUSEEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MENUDRAGMOUSEEVENT)
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MENUDRAGMOUSEEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/javax/swing/MenuElement.h>
#include <scapix/java_api/javax/swing/MenuSelectionManager.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::event::MenuDragMouseEvent : public jni::object_base<"javax/swing/event/MenuDragMouseEvent",
	java::awt::event::MouseEvent>
{
public:

	static jni::ref<javax::swing::event::MenuDragMouseEvent> new_object(jni::ref<java::awt::Component> p1, jint p2, jlong p3, jint p4, jint p5, jint p6, jint p7, jboolean p8, jni::ref<jni::array<javax::swing::MenuElement>> p9, jni::ref<javax::swing::MenuSelectionManager> p10) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static jni::ref<javax::swing::event::MenuDragMouseEvent> new_object(jni::ref<java::awt::Component> p1, jint p2, jlong p3, jint p4, jint p5, jint p6, jint p7, jint p8, jint p9, jboolean p10, jni::ref<jni::array<javax::swing::MenuElement>> p11, jni::ref<javax::swing::MenuSelectionManager> p12) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
	jni::ref<jni::array<javax::swing::MenuElement>> getPath() { return call_method<"getPath", jni::ref<jni::array<javax::swing::MenuElement>>>(); }
	jni::ref<javax::swing::MenuSelectionManager> getMenuSelectionManager() { return call_method<"getMenuSelectionManager", jni::ref<javax::swing::MenuSelectionManager>>(); }

protected:

	MenuDragMouseEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MENUDRAGMOUSEEVENT
