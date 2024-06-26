// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSMENUITEMUIACCESSOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSMENUITEMUIACCESSOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::windows { class WindowsMenuItemUIAccessor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::windows::WindowsMenuItemUIAccessor>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSMENUITEMUIACCESSOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSMENUITEMUIACCESSOR)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSMENUITEMUIACCESSOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/java/swing/plaf/windows/TMSchema_Part.h>
#include <scapix/java_api/com/sun/java/swing/plaf/windows/TMSchema_State.h>
#include <scapix/java_api/javax/swing/JMenuItem.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::swing::plaf::windows::WindowsMenuItemUIAccessor : public jni::object_base<"com/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor",
	java::lang::Object>
{
public:

	jni::ref<javax::swing::JMenuItem> getMenuItem() { return call_method<"getMenuItem", jni::ref<javax::swing::JMenuItem>>(); }
	jni::ref<com::sun::java::swing::plaf::windows::TMSchema_State> getState(jni::ref<javax::swing::JMenuItem> p1) { return call_method<"getState", jni::ref<com::sun::java::swing::plaf::windows::TMSchema_State>>(p1); }
	jni::ref<com::sun::java::swing::plaf::windows::TMSchema_Part> getPart(jni::ref<javax::swing::JMenuItem> p1) { return call_method<"getPart", jni::ref<com::sun::java::swing::plaf::windows::TMSchema_Part>>(p1); }

protected:

	WindowsMenuItemUIAccessor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSMENUITEMUIACCESSOR
