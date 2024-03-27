// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/content/pm/PackageItemInfo.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_COMPONENTINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_COMPONENTINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class ComponentInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::ComponentInfo>
{
	static constexpr fixed_string class_name = "android/content/pm/ComponentInfo";
	using base_classes = std::tuple<scapix::java_api::android::content::pm::PackageItemInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_COMPONENTINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_COMPONENTINFO)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_COMPONENTINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/pm/ApplicationInfo.h>
#include <scapix/java_api/android/content/pm/PackageManager.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::ComponentInfo : public jni::object_base<"android/content/pm/ComponentInfo",
	android::content::pm::PackageItemInfo>
{
public:

	jni::ref<android::content::pm::ApplicationInfo> applicationInfo() { return get_field<"applicationInfo", jni::ref<android::content::pm::ApplicationInfo>>(); }
	void applicationInfo(jni::ref<android::content::pm::ApplicationInfo> v) { set_field<"applicationInfo", jni::ref<android::content::pm::ApplicationInfo>>(v); }
	jint descriptionRes() { return get_field<"descriptionRes", jint>(); }
	void descriptionRes(jint v) { set_field<"descriptionRes", jint>(v); }
	jboolean enabled() { return get_field<"enabled", jboolean>(); }
	void enabled(jboolean v) { set_field<"enabled", jboolean>(v); }
	jboolean exported() { return get_field<"exported", jboolean>(); }
	void exported(jboolean v) { set_field<"exported", jboolean>(v); }
	jni::ref<java::lang::String> processName() { return get_field<"processName", jni::ref<java::lang::String>>(); }
	void processName(jni::ref<java::lang::String> v) { set_field<"processName", jni::ref<java::lang::String>>(v); }

	static jni::ref<android::content::pm::ComponentInfo> new_object() { return base_::new_object(); }
	static jni::ref<android::content::pm::ComponentInfo> new_object(jni::ref<android::content::pm::ComponentInfo> orig) { return base_::new_object(orig); }
	jni::ref<java::lang::CharSequence> loadLabel(jni::ref<android::content::pm::PackageManager> pm) { return call_method<"loadLabel", jni::ref<java::lang::CharSequence>>(pm); }
	jboolean isEnabled() { return call_method<"isEnabled", jboolean>(); }
	jint getIconResource() { return call_method<"getIconResource", jint>(); }
	jint getLogoResource() { return call_method<"getLogoResource", jint>(); }
	jint getBannerResource() { return call_method<"getBannerResource", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint parcelableFlags) { return call_method<"writeToParcel", void>(dest, parcelableFlags); }

protected:

	ComponentInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_COMPONENTINFO
