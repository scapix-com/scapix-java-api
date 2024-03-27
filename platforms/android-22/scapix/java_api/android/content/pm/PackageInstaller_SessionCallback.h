// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class PackageInstaller_SessionCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::PackageInstaller_SessionCallback>
{
	static constexpr fixed_string class_name = "android/content/pm/PackageInstaller$SessionCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONCALLBACK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::PackageInstaller_SessionCallback : public jni::object_base<"android/content/pm/PackageInstaller$SessionCallback",
	java::lang::Object>
{
public:

	static jni::ref<android::content::pm::PackageInstaller_SessionCallback> new_object() { return base_::new_object(); }
	void onCreated(jint p1) { return call_method<"onCreated", void>(p1); }
	void onBadgingChanged(jint p1) { return call_method<"onBadgingChanged", void>(p1); }
	void onActiveChanged(jint p1, jboolean p2) { return call_method<"onActiveChanged", void>(p1, p2); }
	void onProgressChanged(jint p1, jfloat p2) { return call_method<"onProgressChanged", void>(p1, p2); }
	void onFinished(jint p1, jboolean p2) { return call_method<"onFinished", void>(p1, p2); }

protected:

	PackageInstaller_SessionCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONCALLBACK