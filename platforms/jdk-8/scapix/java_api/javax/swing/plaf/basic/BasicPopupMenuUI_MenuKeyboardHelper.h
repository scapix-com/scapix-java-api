// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/event/ChangeListener.h>
#include <scapix/java_api/java/awt/event/KeyListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICPOPUPMENUUI_MENUKEYBOARDHELPER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICPOPUPMENUUI_MENUKEYBOARDHELPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicPopupMenuUI_MenuKeyboardHelper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicPopupMenuUI_MenuKeyboardHelper>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicPopupMenuUI$MenuKeyboardHelper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::event::ChangeListener, scapix::java_api::java::awt::event::KeyListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICPOPUPMENUUI_MENUKEYBOARDHELPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICPOPUPMENUUI_MENUKEYBOARDHELPER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICPOPUPMENUUI_MENUKEYBOARDHELPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/KeyEvent.h>
#include <scapix/java_api/javax/swing/event/ChangeEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::basic::BasicPopupMenuUI_MenuKeyboardHelper : public jni::object_base<"javax/swing/plaf/basic/BasicPopupMenuUI$MenuKeyboardHelper",
	java::lang::Object,
	javax::swing::event::ChangeListener,
	java::awt::event::KeyListener>
{
public:

	void stateChanged(jni::ref<javax::swing::event::ChangeEvent> p1) { return call_method<"stateChanged", void>(p1); }
	void keyPressed(jni::ref<java::awt::event::KeyEvent> p1) { return call_method<"keyPressed", void>(p1); }
	void keyReleased(jni::ref<java::awt::event::KeyEvent> p1) { return call_method<"keyReleased", void>(p1); }
	void keyTyped(jni::ref<java::awt::event::KeyEvent> p1) { return call_method<"keyTyped", void>(p1); }

protected:

	BasicPopupMenuUI_MenuKeyboardHelper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICPOPUPMENUUI_MENUKEYBOARDHELPER