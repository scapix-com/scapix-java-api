// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_LAUNCHERACTIVITY_LISTITEM_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_LAUNCHERACTIVITY_LISTITEM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class LauncherActivity_ListItem; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::LauncherActivity_ListItem>
{
	static constexpr fixed_string class_name = "android/app/LauncherActivity$ListItem";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_LAUNCHERACTIVITY_LISTITEM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_LAUNCHERACTIVITY_LISTITEM)
#define SCAPIX_JAVA_API_ANDROID_APP_LAUNCHERACTIVITY_LISTITEM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/pm/ResolveInfo.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::LauncherActivity_ListItem : public jni::object_base<"android/app/LauncherActivity$ListItem",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> className() { return get_field<"className", jni::ref<java::lang::String>>(); }
	void className(jni::ref<java::lang::String> v) { set_field<"className", jni::ref<java::lang::String>>(v); }
	jni::ref<android::os::Bundle> extras() { return get_field<"extras", jni::ref<android::os::Bundle>>(); }
	void extras(jni::ref<android::os::Bundle> v) { set_field<"extras", jni::ref<android::os::Bundle>>(v); }
	jni::ref<android::graphics::drawable::Drawable> icon() { return get_field<"icon", jni::ref<android::graphics::drawable::Drawable>>(); }
	void icon(jni::ref<android::graphics::drawable::Drawable> v) { set_field<"icon", jni::ref<android::graphics::drawable::Drawable>>(v); }
	jni::ref<java::lang::CharSequence> label() { return get_field<"label", jni::ref<java::lang::CharSequence>>(); }
	void label(jni::ref<java::lang::CharSequence> v) { set_field<"label", jni::ref<java::lang::CharSequence>>(v); }
	jni::ref<java::lang::String> packageName() { return get_field<"packageName", jni::ref<java::lang::String>>(); }
	void packageName(jni::ref<java::lang::String> v) { set_field<"packageName", jni::ref<java::lang::String>>(v); }
	jni::ref<android::content::pm::ResolveInfo> resolveInfo() { return get_field<"resolveInfo", jni::ref<android::content::pm::ResolveInfo>>(); }
	void resolveInfo(jni::ref<android::content::pm::ResolveInfo> v) { set_field<"resolveInfo", jni::ref<android::content::pm::ResolveInfo>>(v); }

	static jni::ref<android::app::LauncherActivity_ListItem> new_object() { return base_::new_object(); }

protected:

	LauncherActivity_ListItem(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_LAUNCHERACTIVITY_LISTITEM
