// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicTextAreaUI.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSTEXTAREAUI_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSTEXTAREAUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::windows { class WindowsTextAreaUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::windows::WindowsTextAreaUI>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/windows/WindowsTextAreaUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicTextAreaUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSTEXTAREAUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSTEXTAREAUI)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSTEXTAREAUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::swing::plaf::windows::WindowsTextAreaUI : public jni::object_base<"com/sun/java/swing/plaf/windows/WindowsTextAreaUI",
	javax::swing::plaf::basic::BasicTextAreaUI>
{
public:

	static jni::ref<com::sun::java::swing::plaf::windows::WindowsTextAreaUI> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::plaf::ComponentUI> createUI(jni::ref<javax::swing::JComponent> p1) { return call_static_method<"createUI", jni::ref<javax::swing::plaf::ComponentUI>>(p1); }

protected:

	WindowsTextAreaUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSTEXTAREAUI
