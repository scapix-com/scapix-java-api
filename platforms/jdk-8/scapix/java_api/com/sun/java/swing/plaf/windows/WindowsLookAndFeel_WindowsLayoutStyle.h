// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/swing/DefaultLayoutStyle.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_WINDOWSLAYOUTSTYLE_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_WINDOWSLAYOUTSTYLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::windows { class WindowsLookAndFeel_WindowsLayoutStyle; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::windows::WindowsLookAndFeel_WindowsLayoutStyle>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/windows/WindowsLookAndFeel$WindowsLayoutStyle";
	using base_classes = std::tuple<scapix::java_api::sun::swing::DefaultLayoutStyle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_WINDOWSLAYOUTSTYLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_WINDOWSLAYOUTSTYLE)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_WINDOWSLAYOUTSTYLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Container.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/LayoutStyle_ComponentPlacement.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::swing::plaf::windows::WindowsLookAndFeel_WindowsLayoutStyle : public jni::object_base<"com/sun/java/swing/plaf/windows/WindowsLookAndFeel$WindowsLayoutStyle",
	sun::swing::DefaultLayoutStyle>
{
public:

	jint getPreferredGap(jni::ref<javax::swing::JComponent> p1, jni::ref<javax::swing::JComponent> p2, jni::ref<javax::swing::LayoutStyle_ComponentPlacement> p3, jint p4, jni::ref<java::awt::Container> p5) { return call_method<"getPreferredGap", jint>(p1, p2, p3, p4, p5); }
	jint getContainerGap(jni::ref<javax::swing::JComponent> p1, jint p2, jni::ref<java::awt::Container> p3) { return call_method<"getContainerGap", jint>(p1, p2, p3); }

protected:

	WindowsLookAndFeel_WindowsLayoutStyle(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_WINDOWSLAYOUTSTYLE