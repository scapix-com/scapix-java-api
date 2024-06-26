// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/MenuItem_AccessibleAWTMenuItem.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_MENU_ACCESSIBLEAWTMENU_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_MENU_ACCESSIBLEAWTMENU_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class Menu_AccessibleAWTMenu; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::Menu_AccessibleAWTMenu>
{
	static constexpr fixed_string class_name = "java/awt/Menu$AccessibleAWTMenu";
	using base_classes = std::tuple<scapix::java_api::java::awt::MenuItem_AccessibleAWTMenuItem>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_MENU_ACCESSIBLEAWTMENU_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_MENU_ACCESSIBLEAWTMENU)
#define SCAPIX_JAVA_API_JAVA_AWT_MENU_ACCESSIBLEAWTMENU

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/accessibility/AccessibleRole.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::Menu_AccessibleAWTMenu : public jni::object_base<"java/awt/Menu$AccessibleAWTMenu",
	java::awt::MenuItem_AccessibleAWTMenuItem>
{
public:

	jni::ref<javax::accessibility::AccessibleRole> getAccessibleRole() { return call_method<"getAccessibleRole", jni::ref<javax::accessibility::AccessibleRole>>(); }

protected:

	Menu_AccessibleAWTMenu(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_MENU_ACCESSIBLEAWTMENU
