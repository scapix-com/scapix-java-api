// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicComboBoxEditor_UIResource.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSCOMBOBOXUI_WINDOWSCOMBOBOXEDITOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSCOMBOBOXUI_WINDOWSCOMBOBOXEDITOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::windows { class WindowsComboBoxUI_WindowsComboBoxEditor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::windows::WindowsComboBoxUI_WindowsComboBoxEditor>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WindowsComboBoxEditor";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicComboBoxEditor_UIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSCOMBOBOXUI_WINDOWSCOMBOBOXEDITOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSCOMBOBOXUI_WINDOWSCOMBOBOXEDITOR)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSCOMBOBOXUI_WINDOWSCOMBOBOXEDITOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::swing::plaf::windows::WindowsComboBoxUI_WindowsComboBoxEditor : public jni::object_base<"com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WindowsComboBoxEditor",
	javax::swing::plaf::basic::BasicComboBoxEditor_UIResource>
{
public:

	static jni::ref<com::sun::java::swing::plaf::windows::WindowsComboBoxUI_WindowsComboBoxEditor> new_object() { return base_::new_object(); }
	void setItem(jni::ref<java::lang::Object> p1) { return call_method<"setItem", void>(p1); }

protected:

	WindowsComboBoxUI_WindowsComboBoxEditor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSCOMBOBOXUI_WINDOWSCOMBOBOXEDITOR
