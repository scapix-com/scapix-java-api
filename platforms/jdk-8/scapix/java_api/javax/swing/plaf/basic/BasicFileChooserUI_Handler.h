// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/event/MouseListener.h>
#include <scapix/java_api/javax/swing/event/ListSelectionListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICFILECHOOSERUI_HANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICFILECHOOSERUI_HANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicFileChooserUI_Handler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicFileChooserUI_Handler>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicFileChooserUI$Handler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::event::MouseListener, scapix::java_api::javax::swing::event::ListSelectionListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICFILECHOOSERUI_HANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICFILECHOOSERUI_HANDLER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICFILECHOOSERUI_HANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#include <scapix/java_api/javax/swing/event/ListSelectionEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::basic::BasicFileChooserUI_Handler : public jni::object_base<"javax/swing/plaf/basic/BasicFileChooserUI$Handler",
	java::lang::Object,
	java::awt::event::MouseListener,
	javax::swing::event::ListSelectionListener>
{
public:

	void mouseClicked(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseClicked", void>(p1); }
	void mouseEntered(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseEntered", void>(p1); }
	void mouseExited(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseExited", void>(p1); }
	void mousePressed(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mousePressed", void>(p1); }
	void mouseReleased(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseReleased", void>(p1); }
	void valueChanged(jni::ref<javax::swing::event::ListSelectionEvent> p1) { return call_method<"valueChanged", void>(p1); }

protected:

	BasicFileChooserUI_Handler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICFILECHOOSERUI_HANDLER
