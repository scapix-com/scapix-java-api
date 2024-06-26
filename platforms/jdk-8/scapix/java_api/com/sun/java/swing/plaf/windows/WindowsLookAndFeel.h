// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicLookAndFeel.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::windows { class WindowsLookAndFeel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::windows::WindowsLookAndFeel>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/windows/WindowsLookAndFeel";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicLookAndFeel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/Icon.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/LayoutStyle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::swing::plaf::windows::WindowsLookAndFeel : public jni::object_base<"com/sun/java/swing/plaf/windows/WindowsLookAndFeel",
	javax::swing::plaf::basic::BasicLookAndFeel>
{
public:

	static jni::ref<com::sun::java::swing::plaf::windows::WindowsLookAndFeel> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDescription() { return call_method<"getDescription", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getID() { return call_method<"getID", jni::ref<java::lang::String>>(); }
	jboolean isNativeLookAndFeel() { return call_method<"isNativeLookAndFeel", jboolean>(); }
	jboolean isSupportedLookAndFeel() { return call_method<"isSupportedLookAndFeel", jboolean>(); }
	void initialize() { return call_method<"initialize", void>(); }
	void uninitialize() { return call_method<"uninitialize", void>(); }
	static void setMnemonicHidden(jboolean p1) { return call_static_method<"setMnemonicHidden", void>(p1); }
	static jboolean isMnemonicHidden() { return call_static_method<"isMnemonicHidden", jboolean>(); }
	static jboolean isClassicWindows() { return call_static_method<"isClassicWindows", jboolean>(); }
	void provideErrorFeedback(jni::ref<java::awt::Component> p1) { return call_method<"provideErrorFeedback", void>(p1); }
	jni::ref<javax::swing::LayoutStyle> getLayoutStyle() { return call_method<"getLayoutStyle", jni::ref<javax::swing::LayoutStyle>>(); }
	jni::ref<javax::swing::Icon> getDisabledIcon(jni::ref<javax::swing::JComponent> p1, jni::ref<javax::swing::Icon> p2) { return call_method<"getDisabledIcon", jni::ref<javax::swing::Icon>>(p1, p2); }

protected:

	WindowsLookAndFeel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL
