// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/event/MouseInputListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTOOLBARUI_DOCKINGLISTENER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTOOLBARUI_DOCKINGLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicToolBarUI_DockingListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicToolBarUI_DockingListener>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicToolBarUI$DockingListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::event::MouseInputListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTOOLBARUI_DOCKINGLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTOOLBARUI_DOCKINGLISTENER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTOOLBARUI_DOCKINGLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#include <scapix/java_api/javax/swing/JToolBar.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicToolBarUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicToolBarUI_DockingListener : public jni::object_base<"javax/swing/plaf/basic/BasicToolBarUI$DockingListener",
	java::lang::Object,
	javax::swing::event::MouseInputListener>
{
public:

	static jni::ref<javax::swing::plaf::basic::BasicToolBarUI_DockingListener> new_object(jni::ref<javax::swing::plaf::basic::BasicToolBarUI> p1, jni::ref<javax::swing::JToolBar> p2) { return base_::new_object(p1, p2); }
	void mouseClicked(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseClicked", void>(p1); }
	void mousePressed(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mousePressed", void>(p1); }
	void mouseReleased(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseReleased", void>(p1); }
	void mouseEntered(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseEntered", void>(p1); }
	void mouseExited(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseExited", void>(p1); }
	void mouseDragged(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseDragged", void>(p1); }
	void mouseMoved(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseMoved", void>(p1); }

protected:

	BasicToolBarUI_DockingListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTOOLBARUI_DOCKINGLISTENER
