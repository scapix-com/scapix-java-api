// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/java/swing/plaf/windows/DesktopProperty.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_FOCUSCOLORPROPERTY_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_FOCUSCOLORPROPERTY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::windows { class WindowsLookAndFeel_FocusColorProperty; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::windows::WindowsLookAndFeel_FocusColorProperty>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/windows/WindowsLookAndFeel$FocusColorProperty";
	using base_classes = std::tuple<scapix::java_api::com::sun::java::swing::plaf::windows::DesktopProperty>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_FOCUSCOLORPROPERTY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_FOCUSCOLORPROPERTY)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_FOCUSCOLORPROPERTY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::swing::plaf::windows::WindowsLookAndFeel_FocusColorProperty : public jni::object_base<"com/sun/java/swing/plaf/windows/WindowsLookAndFeel$FocusColorProperty",
	com::sun::java::swing::plaf::windows::DesktopProperty>
{
public:

	static jni::ref<com::sun::java::swing::plaf::windows::WindowsLookAndFeel_FocusColorProperty> new_object() { return base_::new_object(); }

protected:

	WindowsLookAndFeel_FocusColorProperty(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_FOCUSCOLORPROPERTY
