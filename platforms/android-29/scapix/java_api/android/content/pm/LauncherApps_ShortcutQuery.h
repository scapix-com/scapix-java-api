// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERAPPS_SHORTCUTQUERY_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERAPPS_SHORTCUTQUERY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class LauncherApps_ShortcutQuery; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::LauncherApps_ShortcutQuery>
{
	static constexpr fixed_string class_name = "android/content/pm/LauncherApps$ShortcutQuery";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERAPPS_SHORTCUTQUERY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERAPPS_SHORTCUTQUERY)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERAPPS_SHORTCUTQUERY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::LauncherApps_ShortcutQuery : public jni::object_base<"android/content/pm/LauncherApps$ShortcutQuery",
	java::lang::Object>
{
public:

	static jint FLAG_GET_KEY_FIELDS_ONLY() { return get_static_field<"FLAG_GET_KEY_FIELDS_ONLY", jint>(); }
	static jint FLAG_MATCH_DYNAMIC() { return get_static_field<"FLAG_MATCH_DYNAMIC", jint>(); }
	static jint FLAG_MATCH_MANIFEST() { return get_static_field<"FLAG_MATCH_MANIFEST", jint>(); }
	static jint FLAG_MATCH_PINNED() { return get_static_field<"FLAG_MATCH_PINNED", jint>(); }
	static jint FLAG_MATCH_PINNED_BY_ANY_LAUNCHER() { return get_static_field<"FLAG_MATCH_PINNED_BY_ANY_LAUNCHER", jint>(); }

	static jni::ref<android::content::pm::LauncherApps_ShortcutQuery> new_object() { return base_::new_object(); }
	jni::ref<android::content::pm::LauncherApps_ShortcutQuery> setChangedSince(jlong changedSince) { return call_method<"setChangedSince", jni::ref<android::content::pm::LauncherApps_ShortcutQuery>>(changedSince); }
	jni::ref<android::content::pm::LauncherApps_ShortcutQuery> setPackage(jni::ref<java::lang::String> packageName) { return call_method<"setPackage", jni::ref<android::content::pm::LauncherApps_ShortcutQuery>>(packageName); }
	jni::ref<android::content::pm::LauncherApps_ShortcutQuery> setShortcutIds(jni::ref<java::util::List> shortcutIds) { return call_method<"setShortcutIds", jni::ref<android::content::pm::LauncherApps_ShortcutQuery>>(shortcutIds); }
	jni::ref<android::content::pm::LauncherApps_ShortcutQuery> setActivity(jni::ref<android::content::ComponentName> activity) { return call_method<"setActivity", jni::ref<android::content::pm::LauncherApps_ShortcutQuery>>(activity); }
	jni::ref<android::content::pm::LauncherApps_ShortcutQuery> setQueryFlags(jint queryFlags) { return call_method<"setQueryFlags", jni::ref<android::content::pm::LauncherApps_ShortcutQuery>>(queryFlags); }

protected:

	LauncherApps_ShortcutQuery(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERAPPS_SHORTCUTQUERY
