// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_MENUITEM_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_MENUITEM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class MenuItem; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::MenuItem>
{
	static constexpr fixed_string class_name = "android/view/MenuItem";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_MENUITEM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_MENUITEM)
#define SCAPIX_JAVA_API_ANDROID_VIEW_MENUITEM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/view/ActionProvider.h>
#include <scapix/java_api/android/view/ContextMenu_ContextMenuInfo.h>
#include <scapix/java_api/android/view/MenuItem_OnActionExpandListener.h>
#include <scapix/java_api/android/view/MenuItem_OnMenuItemClickListener.h>
#include <scapix/java_api/android/view/SubMenu.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::MenuItem : public jni::object_base<"android/view/MenuItem",
	java::lang::Object>
{
public:

	using OnActionExpandListener = MenuItem_OnActionExpandListener;
	using OnMenuItemClickListener = MenuItem_OnMenuItemClickListener;

	static jint SHOW_AS_ACTION_ALWAYS() { return get_static_field<"SHOW_AS_ACTION_ALWAYS", jint>(); }
	static jint SHOW_AS_ACTION_COLLAPSE_ACTION_VIEW() { return get_static_field<"SHOW_AS_ACTION_COLLAPSE_ACTION_VIEW", jint>(); }
	static jint SHOW_AS_ACTION_IF_ROOM() { return get_static_field<"SHOW_AS_ACTION_IF_ROOM", jint>(); }
	static jint SHOW_AS_ACTION_NEVER() { return get_static_field<"SHOW_AS_ACTION_NEVER", jint>(); }
	static jint SHOW_AS_ACTION_WITH_TEXT() { return get_static_field<"SHOW_AS_ACTION_WITH_TEXT", jint>(); }

	jint getItemId() { return call_method<"getItemId", jint>(); }
	jint getGroupId() { return call_method<"getGroupId", jint>(); }
	jint getOrder() { return call_method<"getOrder", jint>(); }
	jni::ref<android::view::MenuItem> setTitle(jni::ref<java::lang::CharSequence> p1) { return call_method<"setTitle", jni::ref<android::view::MenuItem>>(p1); }
	jni::ref<android::view::MenuItem> setTitle(jint p1) { return call_method<"setTitle", jni::ref<android::view::MenuItem>>(p1); }
	jni::ref<java::lang::CharSequence> getTitle() { return call_method<"getTitle", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<android::view::MenuItem> setTitleCondensed(jni::ref<java::lang::CharSequence> p1) { return call_method<"setTitleCondensed", jni::ref<android::view::MenuItem>>(p1); }
	jni::ref<java::lang::CharSequence> getTitleCondensed() { return call_method<"getTitleCondensed", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<android::view::MenuItem> setIcon(jni::ref<android::graphics::drawable::Drawable> p1) { return call_method<"setIcon", jni::ref<android::view::MenuItem>>(p1); }
	jni::ref<android::view::MenuItem> setIcon(jint p1) { return call_method<"setIcon", jni::ref<android::view::MenuItem>>(p1); }
	jni::ref<android::graphics::drawable::Drawable> getIcon() { return call_method<"getIcon", jni::ref<android::graphics::drawable::Drawable>>(); }
	jni::ref<android::view::MenuItem> setIntent(jni::ref<android::content::Intent> p1) { return call_method<"setIntent", jni::ref<android::view::MenuItem>>(p1); }
	jni::ref<android::content::Intent> getIntent() { return call_method<"getIntent", jni::ref<android::content::Intent>>(); }
	jni::ref<android::view::MenuItem> setShortcut(jchar p1, jchar p2) { return call_method<"setShortcut", jni::ref<android::view::MenuItem>>(p1, p2); }
	jni::ref<android::view::MenuItem> setNumericShortcut(jchar p1) { return call_method<"setNumericShortcut", jni::ref<android::view::MenuItem>>(p1); }
	jchar getNumericShortcut() { return call_method<"getNumericShortcut", jchar>(); }
	jni::ref<android::view::MenuItem> setAlphabeticShortcut(jchar p1) { return call_method<"setAlphabeticShortcut", jni::ref<android::view::MenuItem>>(p1); }
	jchar getAlphabeticShortcut() { return call_method<"getAlphabeticShortcut", jchar>(); }
	jni::ref<android::view::MenuItem> setCheckable(jboolean p1) { return call_method<"setCheckable", jni::ref<android::view::MenuItem>>(p1); }
	jboolean isCheckable() { return call_method<"isCheckable", jboolean>(); }
	jni::ref<android::view::MenuItem> setChecked(jboolean p1) { return call_method<"setChecked", jni::ref<android::view::MenuItem>>(p1); }
	jboolean isChecked() { return call_method<"isChecked", jboolean>(); }
	jni::ref<android::view::MenuItem> setVisible(jboolean p1) { return call_method<"setVisible", jni::ref<android::view::MenuItem>>(p1); }
	jboolean isVisible() { return call_method<"isVisible", jboolean>(); }
	jni::ref<android::view::MenuItem> setEnabled(jboolean p1) { return call_method<"setEnabled", jni::ref<android::view::MenuItem>>(p1); }
	jboolean isEnabled() { return call_method<"isEnabled", jboolean>(); }
	jboolean hasSubMenu() { return call_method<"hasSubMenu", jboolean>(); }
	jni::ref<android::view::SubMenu> getSubMenu() { return call_method<"getSubMenu", jni::ref<android::view::SubMenu>>(); }
	jni::ref<android::view::MenuItem> setOnMenuItemClickListener(jni::ref<android::view::MenuItem_OnMenuItemClickListener> p1) { return call_method<"setOnMenuItemClickListener", jni::ref<android::view::MenuItem>>(p1); }
	jni::ref<android::view::ContextMenu_ContextMenuInfo> getMenuInfo() { return call_method<"getMenuInfo", jni::ref<android::view::ContextMenu_ContextMenuInfo>>(); }
	void setShowAsAction(jint p1) { return call_method<"setShowAsAction", void>(p1); }
	jni::ref<android::view::MenuItem> setShowAsActionFlags(jint p1) { return call_method<"setShowAsActionFlags", jni::ref<android::view::MenuItem>>(p1); }
	jni::ref<android::view::MenuItem> setActionView(jni::ref<android::view::View> p1) { return call_method<"setActionView", jni::ref<android::view::MenuItem>>(p1); }
	jni::ref<android::view::MenuItem> setActionView(jint p1) { return call_method<"setActionView", jni::ref<android::view::MenuItem>>(p1); }
	jni::ref<android::view::View> getActionView() { return call_method<"getActionView", jni::ref<android::view::View>>(); }
	jni::ref<android::view::MenuItem> setActionProvider(jni::ref<android::view::ActionProvider> p1) { return call_method<"setActionProvider", jni::ref<android::view::MenuItem>>(p1); }
	jni::ref<android::view::ActionProvider> getActionProvider() { return call_method<"getActionProvider", jni::ref<android::view::ActionProvider>>(); }
	jboolean expandActionView() { return call_method<"expandActionView", jboolean>(); }
	jboolean collapseActionView() { return call_method<"collapseActionView", jboolean>(); }
	jboolean isActionViewExpanded() { return call_method<"isActionViewExpanded", jboolean>(); }
	jni::ref<android::view::MenuItem> setOnActionExpandListener(jni::ref<android::view::MenuItem_OnActionExpandListener> p1) { return call_method<"setOnActionExpandListener", jni::ref<android::view::MenuItem>>(p1); }

protected:

	MenuItem(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_MENUITEM
