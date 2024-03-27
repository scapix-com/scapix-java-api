// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_WALLPAPERINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_WALLPAPERINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class WallpaperInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::WallpaperInfo>
{
	static constexpr fixed_string class_name = "android/app/WallpaperInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_WALLPAPERINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_WALLPAPERINFO)
#define SCAPIX_JAVA_API_ANDROID_APP_WALLPAPERINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/pm/PackageManager.h>
#include <scapix/java_api/android/content/pm/ResolveInfo.h>
#include <scapix/java_api/android/content/pm/ServiceInfo.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/util/Printer.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::WallpaperInfo : public jni::object_base<"android/app/WallpaperInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::app::WallpaperInfo> new_object(jni::ref<android::content::Context> context, jni::ref<android::content::pm::ResolveInfo> service) { return base_::new_object(context, service); }
	jni::ref<java::lang::String> getPackageName() { return call_method<"getPackageName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getServiceName() { return call_method<"getServiceName", jni::ref<java::lang::String>>(); }
	jni::ref<android::content::pm::ServiceInfo> getServiceInfo() { return call_method<"getServiceInfo", jni::ref<android::content::pm::ServiceInfo>>(); }
	jni::ref<android::content::ComponentName> getComponent() { return call_method<"getComponent", jni::ref<android::content::ComponentName>>(); }
	jni::ref<java::lang::CharSequence> loadLabel(jni::ref<android::content::pm::PackageManager> pm) { return call_method<"loadLabel", jni::ref<java::lang::CharSequence>>(pm); }
	jni::ref<android::graphics::drawable::Drawable> loadIcon(jni::ref<android::content::pm::PackageManager> pm) { return call_method<"loadIcon", jni::ref<android::graphics::drawable::Drawable>>(pm); }
	jni::ref<android::graphics::drawable::Drawable> loadThumbnail(jni::ref<android::content::pm::PackageManager> pm) { return call_method<"loadThumbnail", jni::ref<android::graphics::drawable::Drawable>>(pm); }
	jni::ref<java::lang::CharSequence> loadAuthor(jni::ref<android::content::pm::PackageManager> pm) { return call_method<"loadAuthor", jni::ref<java::lang::CharSequence>>(pm); }
	jni::ref<java::lang::CharSequence> loadDescription(jni::ref<android::content::pm::PackageManager> pm) { return call_method<"loadDescription", jni::ref<java::lang::CharSequence>>(pm); }
	jni::ref<android::net::Uri> loadContextUri(jni::ref<android::content::pm::PackageManager> pm) { return call_method<"loadContextUri", jni::ref<android::net::Uri>>(pm); }
	jni::ref<java::lang::CharSequence> loadContextDescription(jni::ref<android::content::pm::PackageManager> pm) { return call_method<"loadContextDescription", jni::ref<java::lang::CharSequence>>(pm); }
	jboolean getShowMetadataInPreview() { return call_method<"getShowMetadataInPreview", jboolean>(); }
	jni::ref<java::lang::String> getSettingsActivity() { return call_method<"getSettingsActivity", jni::ref<java::lang::String>>(); }
	jni::ref<android::net::Uri> getSettingsSliceUri() { return call_method<"getSettingsSliceUri", jni::ref<android::net::Uri>>(); }
	jboolean supportsMultipleDisplays() { return call_method<"supportsMultipleDisplays", jboolean>(); }
	void dump(jni::ref<android::util::Printer> pw, jni::ref<java::lang::String> prefix) { return call_method<"dump", void>(pw, prefix); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	WallpaperInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_WALLPAPERINFO