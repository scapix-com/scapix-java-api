// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/event/MouseAdapter.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSFILECHOOSERUI_SINGLECLICKLISTENER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSFILECHOOSERUI_SINGLECLICKLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::windows { class WindowsFileChooserUI_SingleClickListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::windows::WindowsFileChooserUI_SingleClickListener>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/windows/WindowsFileChooserUI$SingleClickListener";
	using base_classes = std::tuple<scapix::java_api::java::awt::event::MouseAdapter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSFILECHOOSERUI_SINGLECLICKLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSFILECHOOSERUI_SINGLECLICKLISTENER)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSFILECHOOSERUI_SINGLECLICKLISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::swing::plaf::windows::WindowsFileChooserUI_SingleClickListener : public jni::object_base<"com/sun/java/swing/plaf/windows/WindowsFileChooserUI$SingleClickListener",
	java::awt::event::MouseAdapter>
{
public:


protected:

	WindowsFileChooserUI_SingleClickListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSFILECHOOSERUI_SINGLECLICKLISTENER
