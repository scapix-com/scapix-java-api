// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/event/FocusListener.h>
#include <scapix/java_api/javax/swing/event/MouseInputListener.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#include <scapix/java_api/javax/swing/event/ListSelectionListener.h>
#include <scapix/java_api/java/awt/event/ActionListener.h>
#include <scapix/java_api/javax/swing/plaf/basic/DragRecognitionSupport_BeforeDrag.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEUI_HANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEUI_HANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicTableUI_Handler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicTableUI_Handler>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicTableUI$Handler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::event::FocusListener, scapix::java_api::javax::swing::event::MouseInputListener, scapix::java_api::java::beans::PropertyChangeListener, scapix::java_api::javax::swing::event::ListSelectionListener, scapix::java_api::java::awt::event::ActionListener, scapix::java_api::javax::swing::plaf::basic::DragRecognitionSupport_BeforeDrag>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEUI_HANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEUI_HANDLER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEUI_HANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#include <scapix/java_api/java/awt/event/FocusEvent.h>
#include <scapix/java_api/java/awt/event/KeyEvent.h>
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#include <scapix/java_api/java/beans/PropertyChangeEvent.h>
#include <scapix/java_api/javax/swing/event/ListSelectionEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::basic::BasicTableUI_Handler : public jni::object_base<"javax/swing/plaf/basic/BasicTableUI$Handler",
	java::lang::Object,
	java::awt::event::FocusListener,
	javax::swing::event::MouseInputListener,
	java::beans::PropertyChangeListener,
	javax::swing::event::ListSelectionListener,
	java::awt::event::ActionListener,
	javax::swing::plaf::basic::DragRecognitionSupport_BeforeDrag>
{
public:

	void focusGained(jni::ref<java::awt::event::FocusEvent> p1) { return call_method<"focusGained", void>(p1); }
	void focusLost(jni::ref<java::awt::event::FocusEvent> p1) { return call_method<"focusLost", void>(p1); }
	void keyPressed(jni::ref<java::awt::event::KeyEvent> p1) { return call_method<"keyPressed", void>(p1); }
	void keyReleased(jni::ref<java::awt::event::KeyEvent> p1) { return call_method<"keyReleased", void>(p1); }
	void keyTyped(jni::ref<java::awt::event::KeyEvent> p1) { return call_method<"keyTyped", void>(p1); }
	void mouseClicked(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseClicked", void>(p1); }
	void mousePressed(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mousePressed", void>(p1); }
	void valueChanged(jni::ref<javax::swing::event::ListSelectionEvent> p1) { return call_method<"valueChanged", void>(p1); }
	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }
	void mouseReleased(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseReleased", void>(p1); }
	void mouseEntered(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseEntered", void>(p1); }
	void mouseExited(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseExited", void>(p1); }
	void mouseMoved(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseMoved", void>(p1); }
	void dragStarting(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"dragStarting", void>(p1); }
	void mouseDragged(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseDragged", void>(p1); }
	void propertyChange(jni::ref<java::beans::PropertyChangeEvent> p1) { return call_method<"propertyChange", void>(p1); }

protected:

	BasicTableUI_Handler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEUI_HANDLER
