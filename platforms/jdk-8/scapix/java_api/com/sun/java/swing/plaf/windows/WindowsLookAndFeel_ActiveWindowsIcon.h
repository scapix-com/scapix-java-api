// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/UIDefaults_ActiveValue.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_ACTIVEWINDOWSICON_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_ACTIVEWINDOWSICON_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::windows { class WindowsLookAndFeel_ActiveWindowsIcon; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::windows::WindowsLookAndFeel_ActiveWindowsIcon>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/windows/WindowsLookAndFeel$ActiveWindowsIcon";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::UIDefaults_ActiveValue>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_ACTIVEWINDOWSICON_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_ACTIVEWINDOWSICON)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_ACTIVEWINDOWSICON

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/UIDefaults.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::swing::plaf::windows::WindowsLookAndFeel_ActiveWindowsIcon : public jni::object_base<"com/sun/java/swing/plaf/windows/WindowsLookAndFeel$ActiveWindowsIcon",
	java::lang::Object,
	javax::swing::UIDefaults_ActiveValue>
{
public:

	jni::ref<java::lang::Object> createValue(jni::ref<javax::swing::UIDefaults> p1) { return call_method<"createValue", jni::ref<java::lang::Object>>(p1); }

protected:

	WindowsLookAndFeel_ActiveWindowsIcon(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_ACTIVEWINDOWSICON