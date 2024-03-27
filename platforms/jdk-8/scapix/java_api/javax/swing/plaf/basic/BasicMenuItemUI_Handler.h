// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/event/MenuDragMouseListener.h>
#include <scapix/java_api/javax/swing/event/MouseInputListener.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICMENUITEMUI_HANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICMENUITEMUI_HANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicMenuItemUI_Handler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicMenuItemUI_Handler>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicMenuItemUI$Handler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::event::MenuDragMouseListener, scapix::java_api::javax::swing::event::MouseInputListener, scapix::java_api::java::beans::PropertyChangeListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICMENUITEMUI_HANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICMENUITEMUI_HANDLER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICMENUITEMUI_HANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#include <scapix/java_api/java/beans/PropertyChangeEvent.h>
#include <scapix/java_api/javax/swing/event/MenuDragMouseEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::basic::BasicMenuItemUI_Handler : public jni::object_base<"javax/swing/plaf/basic/BasicMenuItemUI$Handler",
	java::lang::Object,
	javax::swing::event::MenuDragMouseListener,
	javax::swing::event::MouseInputListener,
	java::beans::PropertyChangeListener>
{
public:

	void mouseClicked(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseClicked", void>(p1); }
	void mousePressed(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mousePressed", void>(p1); }
	void mouseReleased(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseReleased", void>(p1); }
	void mouseEntered(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseEntered", void>(p1); }
	void mouseExited(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseExited", void>(p1); }
	void mouseDragged(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseDragged", void>(p1); }
	void mouseMoved(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseMoved", void>(p1); }
	void menuDragMouseEntered(jni::ref<javax::swing::event::MenuDragMouseEvent> p1) { return call_method<"menuDragMouseEntered", void>(p1); }
	void menuDragMouseDragged(jni::ref<javax::swing::event::MenuDragMouseEvent> p1) { return call_method<"menuDragMouseDragged", void>(p1); }
	void menuDragMouseExited(jni::ref<javax::swing::event::MenuDragMouseEvent> p1) { return call_method<"menuDragMouseExited", void>(p1); }
	void menuDragMouseReleased(jni::ref<javax::swing::event::MenuDragMouseEvent> p1) { return call_method<"menuDragMouseReleased", void>(p1); }
	void propertyChange(jni::ref<java::beans::PropertyChangeEvent> p1) { return call_method<"propertyChange", void>(p1); }

protected:

	BasicMenuItemUI_Handler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICMENUITEMUI_HANDLER
