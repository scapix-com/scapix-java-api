// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEMANAGER_APPLICATIONINFOFLAGS_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEMANAGER_APPLICATIONINFOFLAGS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class PackageManager_ApplicationInfoFlags; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::PackageManager_ApplicationInfoFlags>
{
	static constexpr fixed_string class_name = "android/content/pm/PackageManager$ApplicationInfoFlags";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEMANAGER_APPLICATIONINFOFLAGS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEMANAGER_APPLICATIONINFOFLAGS)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEMANAGER_APPLICATIONINFOFLAGS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::PackageManager_ApplicationInfoFlags : public jni::object_base<"android/content/pm/PackageManager$ApplicationInfoFlags",
	java::lang::Object>
{
public:

	static jni::ref<android::content::pm::PackageManager_ApplicationInfoFlags> of(jlong value) { return call_static_method<"of", jni::ref<android::content::pm::PackageManager_ApplicationInfoFlags>>(value); }
	jlong getValue() { return call_method<"getValue", jlong>(); }

protected:

	PackageManager_ApplicationInfoFlags(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEMANAGER_APPLICATIONINFOFLAGS
