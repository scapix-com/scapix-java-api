// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicMenuUI_MouseInputHandler.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSMENUUI_WINDOWSMOUSEINPUTHANDLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSMENUUI_WINDOWSMOUSEINPUTHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::windows { class WindowsMenuUI_WindowsMouseInputHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::windows::WindowsMenuUI_WindowsMouseInputHandler>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/windows/WindowsMenuUI$WindowsMouseInputHandler";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicMenuUI_MouseInputHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSMENUUI_WINDOWSMOUSEINPUTHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSMENUUI_WINDOWSMOUSEINPUTHANDLER)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSMENUUI_WINDOWSMOUSEINPUTHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::swing::plaf::windows::WindowsMenuUI_WindowsMouseInputHandler : public jni::object_base<"com/sun/java/swing/plaf/windows/WindowsMenuUI$WindowsMouseInputHandler",
	javax::swing::plaf::basic::BasicMenuUI_MouseInputHandler>
{
public:

	void mouseEntered(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseEntered", void>(p1); }
	void mouseExited(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseExited", void>(p1); }

protected:

	WindowsMenuUI_WindowsMouseInputHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSMENUUI_WINDOWSMOUSEINPUTHANDLER
