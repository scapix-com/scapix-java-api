// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERACTIVITYINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERACTIVITYINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class LauncherActivityInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::LauncherActivityInfo>
{
	static constexpr fixed_string class_name = "android/content/pm/LauncherActivityInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERACTIVITYINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERACTIVITYINFO)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERACTIVITYINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/pm/ApplicationInfo.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/os/UserHandle.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::LauncherActivityInfo : public jni::object_base<"android/content/pm/LauncherActivityInfo",
	java::lang::Object>
{
public:

	jni::ref<android::content::ComponentName> getComponentName() { return call_method<"getComponentName", jni::ref<android::content::ComponentName>>(); }
	jni::ref<android::os::UserHandle> getUser() { return call_method<"getUser", jni::ref<android::os::UserHandle>>(); }
	jni::ref<java::lang::CharSequence> getLabel() { return call_method<"getLabel", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<android::graphics::drawable::Drawable> getIcon(jint density) { return call_method<"getIcon", jni::ref<android::graphics::drawable::Drawable>>(density); }
	jni::ref<android::content::pm::ApplicationInfo> getApplicationInfo() { return call_method<"getApplicationInfo", jni::ref<android::content::pm::ApplicationInfo>>(); }
	jlong getFirstInstallTime() { return call_method<"getFirstInstallTime", jlong>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<android::graphics::drawable::Drawable> getBadgedIcon(jint density) { return call_method<"getBadgedIcon", jni::ref<android::graphics::drawable::Drawable>>(density); }

protected:

	LauncherActivityInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERACTIVITYINFO
