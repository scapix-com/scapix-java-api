// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_MENUITEM_ONMENUITEMCLICKLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_MENUITEM_ONMENUITEMCLICKLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class MenuItem_OnMenuItemClickListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::MenuItem_OnMenuItemClickListener>
{
	static constexpr fixed_string class_name = "android/view/MenuItem$OnMenuItemClickListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_MENUITEM_ONMENUITEMCLICKLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_MENUITEM_ONMENUITEMCLICKLISTENER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_MENUITEM_ONMENUITEMCLICKLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/MenuItem.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::MenuItem_OnMenuItemClickListener : public jni::object_base<"android/view/MenuItem$OnMenuItemClickListener",
	java::lang::Object>
{
public:

	jboolean onMenuItemClick(jni::ref<android::view::MenuItem> p1) { return call_method<"onMenuItemClick", jboolean>(p1); }

protected:

	MenuItem_OnMenuItemClickListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_MENUITEM_ONMENUITEMCLICKLISTENER