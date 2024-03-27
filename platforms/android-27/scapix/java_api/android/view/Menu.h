// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_MENU_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_MENU_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class Menu; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::Menu>
{
	static constexpr fixed_string class_name = "android/view/Menu";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_MENU_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_MENU)
#define SCAPIX_JAVA_API_ANDROID_VIEW_MENU

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/MenuItem.h>
#include <scapix/java_api/android/view/SubMenu.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::Menu : public jni::object_base<"android/view/Menu",
	java::lang::Object>
{
public:

	static jint CATEGORY_ALTERNATIVE() { return get_static_field<"CATEGORY_ALTERNATIVE", jint>(); }
	static jint CATEGORY_CONTAINER() { return get_static_field<"CATEGORY_CONTAINER", jint>(); }
	static jint CATEGORY_SECONDARY() { return get_static_field<"CATEGORY_SECONDARY", jint>(); }
	static jint CATEGORY_SYSTEM() { return get_static_field<"CATEGORY_SYSTEM", jint>(); }
	static jint FIRST() { return get_static_field<"FIRST", jint>(); }
	static jint FLAG_ALWAYS_PERFORM_CLOSE() { return get_static_field<"FLAG_ALWAYS_PERFORM_CLOSE", jint>(); }
	static jint FLAG_APPEND_TO_GROUP() { return get_static_field<"FLAG_APPEND_TO_GROUP", jint>(); }
	static jint FLAG_PERFORM_NO_CLOSE() { return get_static_field<"FLAG_PERFORM_NO_CLOSE", jint>(); }
	static jint NONE() { return get_static_field<"NONE", jint>(); }
	static jint SUPPORTED_MODIFIERS_MASK() { return get_static_field<"SUPPORTED_MODIFIERS_MASK", jint>(); }

	jni::ref<android::view::MenuItem> add(jni::ref<java::lang::CharSequence> p1) { return call_method<"add", jni::ref<android::view::MenuItem>>(p1); }
	jni::ref<android::view::MenuItem> add(jint p1) { return call_method<"add", jni::ref<android::view::MenuItem>>(p1); }
	jni::ref<android::view::MenuItem> add(jint p1, jint p2, jint p3, jni::ref<java::lang::CharSequence> p4) { return call_method<"add", jni::ref<android::view::MenuItem>>(p1, p2, p3, p4); }
	jni::ref<android::view::MenuItem> add(jint p1, jint p2, jint p3, jint p4) { return call_method<"add", jni::ref<android::view::MenuItem>>(p1, p2, p3, p4); }
	jni::ref<android::view::SubMenu> addSubMenu(jni::ref<java::lang::CharSequence> p1) { return call_method<"addSubMenu", jni::ref<android::view::SubMenu>>(p1); }
	jni::ref<android::view::SubMenu> addSubMenu(jint p1) { return call_method<"addSubMenu", jni::ref<android::view::SubMenu>>(p1); }
	jni::ref<android::view::SubMenu> addSubMenu(jint p1, jint p2, jint p3, jni::ref<java::lang::CharSequence> p4) { return call_method<"addSubMenu", jni::ref<android::view::SubMenu>>(p1, p2, p3, p4); }
	jni::ref<android::view::SubMenu> addSubMenu(jint p1, jint p2, jint p3, jint p4) { return call_method<"addSubMenu", jni::ref<android::view::SubMenu>>(p1, p2, p3, p4); }
	jint addIntentOptions(jint p1, jint p2, jint p3, jni::ref<android::content::ComponentName> p4, jni::ref<jni::array<android::content::Intent>> p5, jni::ref<android::content::Intent> p6, jint p7, jni::ref<jni::array<android::view::MenuItem>> p8) { return call_method<"addIntentOptions", jint>(p1, p2, p3, p4, p5, p6, p7, p8); }
	void removeItem(jint p1) { return call_method<"removeItem", void>(p1); }
	void removeGroup(jint p1) { return call_method<"removeGroup", void>(p1); }
	void clear() { return call_method<"clear", void>(); }
	void setGroupCheckable(jint p1, jboolean p2, jboolean p3) { return call_method<"setGroupCheckable", void>(p1, p2, p3); }
	void setGroupVisible(jint p1, jboolean p2) { return call_method<"setGroupVisible", void>(p1, p2); }
	void setGroupEnabled(jint p1, jboolean p2) { return call_method<"setGroupEnabled", void>(p1, p2); }
	jboolean hasVisibleItems() { return call_method<"hasVisibleItems", jboolean>(); }
	jni::ref<android::view::MenuItem> findItem(jint p1) { return call_method<"findItem", jni::ref<android::view::MenuItem>>(p1); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<android::view::MenuItem> getItem(jint p1) { return call_method<"getItem", jni::ref<android::view::MenuItem>>(p1); }
	void close() { return call_method<"close", void>(); }
	jboolean performShortcut(jint p1, jni::ref<android::view::KeyEvent> p2, jint p3) { return call_method<"performShortcut", jboolean>(p1, p2, p3); }
	jboolean isShortcutKey(jint p1, jni::ref<android::view::KeyEvent> p2) { return call_method<"isShortcutKey", jboolean>(p1, p2); }
	jboolean performIdentifierAction(jint p1, jint p2) { return call_method<"performIdentifierAction", jboolean>(p1, p2); }
	void setQwertyMode(jboolean p1) { return call_method<"setQwertyMode", void>(p1); }

protected:

	Menu(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_MENU
