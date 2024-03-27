// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_RESOLVEINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_RESOLVEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class ResolveInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::ResolveInfo>
{
	static constexpr fixed_string class_name = "android/content/pm/ResolveInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_RESOLVEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_RESOLVEINFO)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_RESOLVEINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/IntentFilter.h>
#include <scapix/java_api/android/content/pm/ActivityInfo.h>
#include <scapix/java_api/android/content/pm/PackageManager.h>
#include <scapix/java_api/android/content/pm/ProviderInfo.h>
#include <scapix/java_api/android/content/pm/ServiceInfo.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/util/Printer.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/content/pm/ResolveInfo_DisplayNameComparator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::ResolveInfo : public jni::object_base<"android/content/pm/ResolveInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using DisplayNameComparator = ResolveInfo_DisplayNameComparator;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	jni::ref<android::content::pm::ActivityInfo> activityInfo() { return get_field<"activityInfo", jni::ref<android::content::pm::ActivityInfo>>(); }
	void activityInfo(jni::ref<android::content::pm::ActivityInfo> v) { set_field<"activityInfo", jni::ref<android::content::pm::ActivityInfo>>(v); }
	jni::ref<android::content::IntentFilter> filter() { return get_field<"filter", jni::ref<android::content::IntentFilter>>(); }
	void filter(jni::ref<android::content::IntentFilter> v) { set_field<"filter", jni::ref<android::content::IntentFilter>>(v); }
	jint icon() { return get_field<"icon", jint>(); }
	void icon(jint v) { set_field<"icon", jint>(v); }
	jboolean isDefault() { return get_field<"isDefault", jboolean>(); }
	void isDefault(jboolean v) { set_field<"isDefault", jboolean>(v); }
	jint labelRes() { return get_field<"labelRes", jint>(); }
	void labelRes(jint v) { set_field<"labelRes", jint>(v); }
	jint match() { return get_field<"match", jint>(); }
	void match(jint v) { set_field<"match", jint>(v); }
	jni::ref<java::lang::CharSequence> nonLocalizedLabel() { return get_field<"nonLocalizedLabel", jni::ref<java::lang::CharSequence>>(); }
	void nonLocalizedLabel(jni::ref<java::lang::CharSequence> v) { set_field<"nonLocalizedLabel", jni::ref<java::lang::CharSequence>>(v); }
	jint preferredOrder() { return get_field<"preferredOrder", jint>(); }
	void preferredOrder(jint v) { set_field<"preferredOrder", jint>(v); }
	jint priority() { return get_field<"priority", jint>(); }
	void priority(jint v) { set_field<"priority", jint>(v); }
	jni::ref<android::content::pm::ProviderInfo> providerInfo() { return get_field<"providerInfo", jni::ref<android::content::pm::ProviderInfo>>(); }
	void providerInfo(jni::ref<android::content::pm::ProviderInfo> v) { set_field<"providerInfo", jni::ref<android::content::pm::ProviderInfo>>(v); }
	jni::ref<java::lang::String> resolvePackageName() { return get_field<"resolvePackageName", jni::ref<java::lang::String>>(); }
	void resolvePackageName(jni::ref<java::lang::String> v) { set_field<"resolvePackageName", jni::ref<java::lang::String>>(v); }
	jni::ref<android::content::pm::ServiceInfo> serviceInfo() { return get_field<"serviceInfo", jni::ref<android::content::pm::ServiceInfo>>(); }
	void serviceInfo(jni::ref<android::content::pm::ServiceInfo> v) { set_field<"serviceInfo", jni::ref<android::content::pm::ServiceInfo>>(v); }
	jint specificIndex() { return get_field<"specificIndex", jint>(); }
	void specificIndex(jint v) { set_field<"specificIndex", jint>(v); }

	static jni::ref<android::content::pm::ResolveInfo> new_object() { return base_::new_object(); }
	static jni::ref<android::content::pm::ResolveInfo> new_object(jni::ref<android::content::pm::ResolveInfo> orig) { return base_::new_object(orig); }
	jni::ref<java::lang::CharSequence> loadLabel(jni::ref<android::content::pm::PackageManager> pm) { return call_method<"loadLabel", jni::ref<java::lang::CharSequence>>(pm); }
	jni::ref<android::graphics::drawable::Drawable> loadIcon(jni::ref<android::content::pm::PackageManager> pm) { return call_method<"loadIcon", jni::ref<android::graphics::drawable::Drawable>>(pm); }
	jint getIconResource() { return call_method<"getIconResource", jint>(); }
	void dump(jni::ref<android::util::Printer> pw, jni::ref<java::lang::String> prefix) { return call_method<"dump", void>(pw, prefix); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint parcelableFlags) { return call_method<"writeToParcel", void>(dest, parcelableFlags); }

protected:

	ResolveInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_RESOLVEINFO
