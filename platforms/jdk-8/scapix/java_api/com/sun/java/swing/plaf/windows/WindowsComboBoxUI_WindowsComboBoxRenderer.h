// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicComboBoxRenderer_UIResource.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSCOMBOBOXUI_WINDOWSCOMBOBOXRENDERER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSCOMBOBOXUI_WINDOWSCOMBOBOXRENDERER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::windows { class WindowsComboBoxUI_WindowsComboBoxRenderer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::windows::WindowsComboBoxUI_WindowsComboBoxRenderer>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WindowsComboBoxRenderer";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicComboBoxRenderer_UIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSCOMBOBOXUI_WINDOWSCOMBOBOXRENDERER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSCOMBOBOXUI_WINDOWSCOMBOBOXRENDERER)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSCOMBOBOXUI_WINDOWSCOMBOBOXRENDERER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/JList.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::swing::plaf::windows::WindowsComboBoxUI_WindowsComboBoxRenderer : public jni::object_base<"com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WindowsComboBoxRenderer",
	javax::swing::plaf::basic::BasicComboBoxRenderer_UIResource>
{
public:

	jni::ref<java::awt::Component> getListCellRendererComponent(jni::ref<javax::swing::JList> p1, jni::ref<java::lang::Object> p2, jint p3, jboolean p4, jboolean p5) { return call_method<"getListCellRendererComponent", jni::ref<java::awt::Component>>(p1, p2, p3, p4, p5); }

protected:

	WindowsComboBoxUI_WindowsComboBoxRenderer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSCOMBOBOXUI_WINDOWSCOMBOBOXRENDERER
