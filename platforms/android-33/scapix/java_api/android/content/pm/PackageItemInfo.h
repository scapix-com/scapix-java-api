// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEITEMINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEITEMINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class PackageItemInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::PackageItemInfo>
{
	static constexpr fixed_string class_name = "android/content/pm/PackageItemInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEITEMINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEITEMINFO)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEITEMINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/pm/PackageManager.h>
#include <scapix/java_api/android/content/res/XmlResourceParser.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/content/pm/PackageItemInfo_DisplayNameComparator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::PackageItemInfo : public jni::object_base<"android/content/pm/PackageItemInfo",
	java::lang::Object>
{
public:

	using DisplayNameComparator = PackageItemInfo_DisplayNameComparator;

	jint banner() { return get_field<"banner", jint>(); }
	void banner(jint v) { set_field<"banner", jint>(v); }
	jint icon() { return get_field<"icon", jint>(); }
	void icon(jint v) { set_field<"icon", jint>(v); }
	jint labelRes() { return get_field<"labelRes", jint>(); }
	void labelRes(jint v) { set_field<"labelRes", jint>(v); }
	jint logo() { return get_field<"logo", jint>(); }
	void logo(jint v) { set_field<"logo", jint>(v); }
	jni::ref<android::os::Bundle> metaData() { return get_field<"metaData", jni::ref<android::os::Bundle>>(); }
	void metaData(jni::ref<android::os::Bundle> v) { set_field<"metaData", jni::ref<android::os::Bundle>>(v); }
	jni::ref<java::lang::String> name() { return get_field<"name", jni::ref<java::lang::String>>(); }
	void name(jni::ref<java::lang::String> v) { set_field<"name", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::CharSequence> nonLocalizedLabel() { return get_field<"nonLocalizedLabel", jni::ref<java::lang::CharSequence>>(); }
	void nonLocalizedLabel(jni::ref<java::lang::CharSequence> v) { set_field<"nonLocalizedLabel", jni::ref<java::lang::CharSequence>>(v); }
	jni::ref<java::lang::String> packageName() { return get_field<"packageName", jni::ref<java::lang::String>>(); }
	void packageName(jni::ref<java::lang::String> v) { set_field<"packageName", jni::ref<java::lang::String>>(v); }

	static jni::ref<android::content::pm::PackageItemInfo> new_object() { return base_::new_object(); }
	static jni::ref<android::content::pm::PackageItemInfo> new_object(jni::ref<android::content::pm::PackageItemInfo> orig) { return base_::new_object(orig); }
	jni::ref<java::lang::CharSequence> loadLabel(jni::ref<android::content::pm::PackageManager> pm) { return call_method<"loadLabel", jni::ref<java::lang::CharSequence>>(pm); }
	jni::ref<android::graphics::drawable::Drawable> loadIcon(jni::ref<android::content::pm::PackageManager> pm) { return call_method<"loadIcon", jni::ref<android::graphics::drawable::Drawable>>(pm); }
	jni::ref<android::graphics::drawable::Drawable> loadUnbadgedIcon(jni::ref<android::content::pm::PackageManager> pm) { return call_method<"loadUnbadgedIcon", jni::ref<android::graphics::drawable::Drawable>>(pm); }
	jni::ref<android::graphics::drawable::Drawable> loadBanner(jni::ref<android::content::pm::PackageManager> pm) { return call_method<"loadBanner", jni::ref<android::graphics::drawable::Drawable>>(pm); }
	jni::ref<android::graphics::drawable::Drawable> loadLogo(jni::ref<android::content::pm::PackageManager> pm) { return call_method<"loadLogo", jni::ref<android::graphics::drawable::Drawable>>(pm); }
	jni::ref<android::content::res::XmlResourceParser> loadXmlMetaData(jni::ref<android::content::pm::PackageManager> pm, jni::ref<java::lang::String> name) { return call_method<"loadXmlMetaData", jni::ref<android::content::res::XmlResourceParser>>(pm, name); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint parcelableFlags) { return call_method<"writeToParcel", void>(dest, parcelableFlags); }

protected:

	PackageItemInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEITEMINFO
