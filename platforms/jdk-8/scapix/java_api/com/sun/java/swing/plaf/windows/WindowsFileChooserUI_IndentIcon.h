// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/Icon.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSFILECHOOSERUI_INDENTICON_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSFILECHOOSERUI_INDENTICON_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::windows { class WindowsFileChooserUI_IndentIcon; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::windows::WindowsFileChooserUI_IndentIcon>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/windows/WindowsFileChooserUI$IndentIcon";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::Icon>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSFILECHOOSERUI_INDENTICON_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSFILECHOOSERUI_INDENTICON)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSFILECHOOSERUI_INDENTICON

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Graphics.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::swing::plaf::windows::WindowsFileChooserUI_IndentIcon : public jni::object_base<"com/sun/java/swing/plaf/windows/WindowsFileChooserUI$IndentIcon",
	java::lang::Object,
	javax::swing::Icon>
{
public:

	void paintIcon(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Graphics> p2, jint p3, jint p4) { return call_method<"paintIcon", void>(p1, p2, p3, p4); }
	jint getIconWidth() { return call_method<"getIconWidth", jint>(); }
	jint getIconHeight() { return call_method<"getIconHeight", jint>(); }

protected:

	WindowsFileChooserUI_IndentIcon(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSFILECHOOSERUI_INDENTICON
