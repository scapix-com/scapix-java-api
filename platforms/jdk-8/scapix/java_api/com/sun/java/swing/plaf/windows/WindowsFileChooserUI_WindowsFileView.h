// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicFileChooserUI_BasicFileView.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSFILECHOOSERUI_WINDOWSFILEVIEW_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSFILECHOOSERUI_WINDOWSFILEVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::windows { class WindowsFileChooserUI_WindowsFileView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::windows::WindowsFileChooserUI_WindowsFileView>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/windows/WindowsFileChooserUI$WindowsFileView";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicFileChooserUI_BasicFileView>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSFILECHOOSERUI_WINDOWSFILEVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSFILECHOOSERUI_WINDOWSFILEVIEW)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSFILECHOOSERUI_WINDOWSFILEVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/javax/swing/Icon.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::swing::plaf::windows::WindowsFileChooserUI_WindowsFileView : public jni::object_base<"com/sun/java/swing/plaf/windows/WindowsFileChooserUI$WindowsFileView",
	javax::swing::plaf::basic::BasicFileChooserUI_BasicFileView>
{
public:

	jni::ref<javax::swing::Icon> getIcon(jni::ref<java::io::File> p1) { return call_method<"getIcon", jni::ref<javax::swing::Icon>>(p1); }

protected:

	WindowsFileChooserUI_WindowsFileView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSFILECHOOSERUI_WINDOWSFILEVIEW