// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERAPPS_CALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERAPPS_CALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class LauncherApps_Callback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::LauncherApps_Callback>
{
	static constexpr fixed_string class_name = "android/content/pm/LauncherApps$Callback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERAPPS_CALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERAPPS_CALLBACK)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERAPPS_CALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/UserHandle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::LauncherApps_Callback : public jni::object_base<"android/content/pm/LauncherApps$Callback",
	java::lang::Object>
{
public:

	static jni::ref<android::content::pm::LauncherApps_Callback> new_object() { return base_::new_object(); }
	void onPackageRemoved(jni::ref<java::lang::String> p1, jni::ref<android::os::UserHandle> p2) { return call_method<"onPackageRemoved", void>(p1, p2); }
	void onPackageAdded(jni::ref<java::lang::String> p1, jni::ref<android::os::UserHandle> p2) { return call_method<"onPackageAdded", void>(p1, p2); }
	void onPackageChanged(jni::ref<java::lang::String> p1, jni::ref<android::os::UserHandle> p2) { return call_method<"onPackageChanged", void>(p1, p2); }
	void onPackagesAvailable(jni::ref<jni::array<java::lang::String>> p1, jni::ref<android::os::UserHandle> p2, jboolean p3) { return call_method<"onPackagesAvailable", void>(p1, p2, p3); }
	void onPackagesUnavailable(jni::ref<jni::array<java::lang::String>> p1, jni::ref<android::os::UserHandle> p2, jboolean p3) { return call_method<"onPackagesUnavailable", void>(p1, p2, p3); }
	void onPackagesSuspended(jni::ref<jni::array<java::lang::String>> packageNames, jni::ref<android::os::UserHandle> user) { return call_method<"onPackagesSuspended", void>(packageNames, user); }
	void onPackagesSuspended(jni::ref<jni::array<java::lang::String>> packageNames, jni::ref<android::os::UserHandle> user, jni::ref<android::os::Bundle> launcherExtras) { return call_method<"onPackagesSuspended", void>(packageNames, user, launcherExtras); }
	void onPackagesUnsuspended(jni::ref<jni::array<java::lang::String>> packageNames, jni::ref<android::os::UserHandle> user) { return call_method<"onPackagesUnsuspended", void>(packageNames, user); }
	void onShortcutsChanged(jni::ref<java::lang::String> packageName, jni::ref<java::util::List> shortcuts, jni::ref<android::os::UserHandle> user) { return call_method<"onShortcutsChanged", void>(packageName, shortcuts, user); }

protected:

	LauncherApps_Callback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERAPPS_CALLBACK
