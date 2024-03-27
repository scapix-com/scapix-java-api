// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/swing/MenuItemCheckIconFactory.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSICONFACTORY_VISTAMENUITEMCHECKICONFACTORY_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSICONFACTORY_VISTAMENUITEMCHECKICONFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::windows { class WindowsIconFactory_VistaMenuItemCheckIconFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::windows::WindowsIconFactory_VistaMenuItemCheckIconFactory>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/windows/WindowsIconFactory$VistaMenuItemCheckIconFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::swing::MenuItemCheckIconFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSICONFACTORY_VISTAMENUITEMCHECKICONFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSICONFACTORY_VISTAMENUITEMCHECKICONFACTORY)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSICONFACTORY_VISTAMENUITEMCHECKICONFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/Icon.h>
#include <scapix/java_api/javax/swing/JMenuItem.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::swing::plaf::windows::WindowsIconFactory_VistaMenuItemCheckIconFactory : public jni::object_base<"com/sun/java/swing/plaf/windows/WindowsIconFactory$VistaMenuItemCheckIconFactory",
	java::lang::Object,
	sun::swing::MenuItemCheckIconFactory>
{
public:

	jni::ref<javax::swing::Icon> getIcon(jni::ref<javax::swing::JMenuItem> p1) { return call_method<"getIcon", jni::ref<javax::swing::Icon>>(p1); }
	jboolean isCompatible(jni::ref<java::lang::Object> p1, jni::ref<java::lang::String> p2) { return call_method<"isCompatible", jboolean>(p1, p2); }
	jni::ref<javax::swing::Icon> getIcon(jni::ref<java::lang::String> p1) { return call_method<"getIcon", jni::ref<javax::swing::Icon>>(p1); }

protected:

	WindowsIconFactory_VistaMenuItemCheckIconFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSICONFACTORY_VISTAMENUITEMCHECKICONFACTORY
