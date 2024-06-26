// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JPopupMenu.h>
#include <scapix/java_api/javax/swing/plaf/basic/ComboPopup.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOPOPUP_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOPOPUP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicComboPopup; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicComboPopup>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicComboPopup";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JPopupMenu, scapix::java_api::javax::swing::plaf::basic::ComboPopup>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOPOPUP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOPOPUP)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOPOPUP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/KeyListener.h>
#include <scapix/java_api/java/awt/event/MouseListener.h>
#include <scapix/java_api/java/awt/event/MouseMotionListener.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#include <scapix/java_api/javax/swing/JComboBox.h>
#include <scapix/java_api/javax/swing/JList.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicComboPopup_InvocationKeyHandler.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicComboPopup_ListDataHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicComboPopup : public jni::object_base<"javax/swing/plaf/basic/BasicComboPopup",
	javax::swing::JPopupMenu,
	javax::swing::plaf::basic::ComboPopup>
{
public:

	using InvocationKeyHandler = BasicComboPopup_InvocationKeyHandler;
	using ListDataHandler = BasicComboPopup_ListDataHandler;

	void show() { return call_method<"show", void>(); }
	void hide() { return call_method<"hide", void>(); }
	jni::ref<javax::swing::JList> getList() { return call_method<"getList", jni::ref<javax::swing::JList>>(); }
	jni::ref<java::awt::event::MouseListener> getMouseListener() { return call_method<"getMouseListener", jni::ref<java::awt::event::MouseListener>>(); }
	jni::ref<java::awt::event::MouseMotionListener> getMouseMotionListener() { return call_method<"getMouseMotionListener", jni::ref<java::awt::event::MouseMotionListener>>(); }
	jni::ref<java::awt::event::KeyListener> getKeyListener() { return call_method<"getKeyListener", jni::ref<java::awt::event::KeyListener>>(); }
	void uninstallingUI() { return call_method<"uninstallingUI", void>(); }
	static jni::ref<javax::swing::plaf::basic::BasicComboPopup> new_object(jni::ref<javax::swing::JComboBox> p1) { return base_::new_object(p1); }
	jboolean isFocusTraversable() { return call_method<"isFocusTraversable", jboolean>(); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	BasicComboPopup(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOPOPUP
