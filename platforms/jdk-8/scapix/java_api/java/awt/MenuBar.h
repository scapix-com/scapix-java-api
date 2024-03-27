// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/MenuComponent.h>
#include <scapix/java_api/java/awt/MenuContainer.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_MENUBAR_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_MENUBAR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class MenuBar; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::MenuBar>
{
	static constexpr fixed_string class_name = "java/awt/MenuBar";
	using base_classes = std::tuple<scapix::java_api::java::awt::MenuComponent, scapix::java_api::java::awt::MenuContainer, scapix::java_api::javax::accessibility::Accessible>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_MENUBAR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_MENUBAR)
#define SCAPIX_JAVA_API_JAVA_AWT_MENUBAR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Menu.h>
#include <scapix/java_api/java/awt/MenuItem.h>
#include <scapix/java_api/java/awt/MenuShortcut.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::MenuBar : public jni::object_base<"java/awt/MenuBar",
	java::awt::MenuComponent,
	java::awt::MenuContainer,
	javax::accessibility::Accessible>
{
public:

	static jni::ref<java::awt::MenuBar> new_object() { return base_::new_object(); }
	void addNotify() { return call_method<"addNotify", void>(); }
	void removeNotify() { return call_method<"removeNotify", void>(); }
	jni::ref<java::awt::Menu> getHelpMenu() { return call_method<"getHelpMenu", jni::ref<java::awt::Menu>>(); }
	void setHelpMenu(jni::ref<java::awt::Menu> p1) { return call_method<"setHelpMenu", void>(p1); }
	jni::ref<java::awt::Menu> add(jni::ref<java::awt::Menu> p1) { return call_method<"add", jni::ref<java::awt::Menu>>(p1); }
	void remove(jint p1) { return call_method<"remove", void>(p1); }
	void remove(jni::ref<java::awt::MenuComponent> p1) { return call_method<"remove", void>(p1); }
	jint getMenuCount() { return call_method<"getMenuCount", jint>(); }
	jint countMenus() { return call_method<"countMenus", jint>(); }
	jni::ref<java::awt::Menu> getMenu(jint p1) { return call_method<"getMenu", jni::ref<java::awt::Menu>>(p1); }
	jni::ref<java::util::Enumeration> shortcuts() { return call_method<"shortcuts", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::awt::MenuItem> getShortcutMenuItem(jni::ref<java::awt::MenuShortcut> p1) { return call_method<"getShortcutMenuItem", jni::ref<java::awt::MenuItem>>(p1); }
	void deleteShortcut(jni::ref<java::awt::MenuShortcut> p1) { return call_method<"deleteShortcut", void>(p1); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	MenuBar(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_MENUBAR