// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/event/ItemListener.h>
#include <scapix/java_api/java/awt/event/MouseListener.h>
#include <scapix/java_api/java/awt/event/MouseMotionListener.h>
#include <scapix/java_api/java/awt/event/MouseWheelListener.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOPOPUP_HANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOPOPUP_HANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicComboPopup_Handler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicComboPopup_Handler>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicComboPopup$Handler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::event::ItemListener, scapix::java_api::java::awt::event::MouseListener, scapix::java_api::java::awt::event::MouseMotionListener, scapix::java_api::java::awt::event::MouseWheelListener, scapix::java_api::java::beans::PropertyChangeListener, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOPOPUP_HANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOPOPUP_HANDLER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOPOPUP_HANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ItemEvent.h>
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#include <scapix/java_api/java/awt/event/MouseWheelEvent.h>
#include <scapix/java_api/java/beans/PropertyChangeEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::basic::BasicComboPopup_Handler : public jni::object_base<"javax/swing/plaf/basic/BasicComboPopup$Handler",
	java::lang::Object,
	java::awt::event::ItemListener,
	java::awt::event::MouseListener,
	java::awt::event::MouseMotionListener,
	java::awt::event::MouseWheelListener,
	java::beans::PropertyChangeListener,
	java::io::Serializable>
{
public:

	void mouseClicked(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseClicked", void>(p1); }
	void mousePressed(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mousePressed", void>(p1); }
	void mouseReleased(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseReleased", void>(p1); }
	void mouseEntered(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseEntered", void>(p1); }
	void mouseExited(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseExited", void>(p1); }
	void mouseMoved(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseMoved", void>(p1); }
	void mouseDragged(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseDragged", void>(p1); }
	void propertyChange(jni::ref<java::beans::PropertyChangeEvent> p1) { return call_method<"propertyChange", void>(p1); }
	void itemStateChanged(jni::ref<java::awt::event::ItemEvent> p1) { return call_method<"itemStateChanged", void>(p1); }
	void mouseWheelMoved(jni::ref<java::awt::event::MouseWheelEvent> p1) { return call_method<"mouseWheelMoved", void>(p1); }

protected:

	BasicComboPopup_Handler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOPOPUP_HANDLER