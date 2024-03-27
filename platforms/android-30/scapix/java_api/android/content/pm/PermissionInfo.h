// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/content/pm/PackageItemInfo.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PERMISSIONINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PERMISSIONINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class PermissionInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::PermissionInfo>
{
	static constexpr fixed_string class_name = "android/content/pm/PermissionInfo";
	using base_classes = std::tuple<scapix::java_api::android::content::pm::PackageItemInfo, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PERMISSIONINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PERMISSIONINFO)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PERMISSIONINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/pm/PackageManager.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::PermissionInfo : public jni::object_base<"android/content/pm/PermissionInfo",
	android::content::pm::PackageItemInfo,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint FLAG_COSTS_MONEY() { return get_static_field<"FLAG_COSTS_MONEY", jint>(); }
	static jint FLAG_HARD_RESTRICTED() { return get_static_field<"FLAG_HARD_RESTRICTED", jint>(); }
	static jint FLAG_IMMUTABLY_RESTRICTED() { return get_static_field<"FLAG_IMMUTABLY_RESTRICTED", jint>(); }
	static jint FLAG_INSTALLED() { return get_static_field<"FLAG_INSTALLED", jint>(); }
	static jint FLAG_SOFT_RESTRICTED() { return get_static_field<"FLAG_SOFT_RESTRICTED", jint>(); }
	static jint PROTECTION_DANGEROUS() { return get_static_field<"PROTECTION_DANGEROUS", jint>(); }
	static jint PROTECTION_FLAG_APPOP() { return get_static_field<"PROTECTION_FLAG_APPOP", jint>(); }
	static jint PROTECTION_FLAG_DEVELOPMENT() { return get_static_field<"PROTECTION_FLAG_DEVELOPMENT", jint>(); }
	static jint PROTECTION_FLAG_INSTALLER() { return get_static_field<"PROTECTION_FLAG_INSTALLER", jint>(); }
	static jint PROTECTION_FLAG_INSTANT() { return get_static_field<"PROTECTION_FLAG_INSTANT", jint>(); }
	static jint PROTECTION_FLAG_PRE23() { return get_static_field<"PROTECTION_FLAG_PRE23", jint>(); }
	static jint PROTECTION_FLAG_PREINSTALLED() { return get_static_field<"PROTECTION_FLAG_PREINSTALLED", jint>(); }
	static jint PROTECTION_FLAG_PRIVILEGED() { return get_static_field<"PROTECTION_FLAG_PRIVILEGED", jint>(); }
	static jint PROTECTION_FLAG_RUNTIME_ONLY() { return get_static_field<"PROTECTION_FLAG_RUNTIME_ONLY", jint>(); }
	static jint PROTECTION_FLAG_SETUP() { return get_static_field<"PROTECTION_FLAG_SETUP", jint>(); }
	static jint PROTECTION_FLAG_SYSTEM() { return get_static_field<"PROTECTION_FLAG_SYSTEM", jint>(); }
	static jint PROTECTION_FLAG_VERIFIER() { return get_static_field<"PROTECTION_FLAG_VERIFIER", jint>(); }
	static jint PROTECTION_MASK_BASE() { return get_static_field<"PROTECTION_MASK_BASE", jint>(); }
	static jint PROTECTION_MASK_FLAGS() { return get_static_field<"PROTECTION_MASK_FLAGS", jint>(); }
	static jint PROTECTION_NORMAL() { return get_static_field<"PROTECTION_NORMAL", jint>(); }
	static jint PROTECTION_SIGNATURE() { return get_static_field<"PROTECTION_SIGNATURE", jint>(); }
	static jint PROTECTION_SIGNATURE_OR_SYSTEM() { return get_static_field<"PROTECTION_SIGNATURE_OR_SYSTEM", jint>(); }
	jint descriptionRes() { return get_field<"descriptionRes", jint>(); }
	void descriptionRes(jint v) { set_field<"descriptionRes", jint>(v); }
	jint flags() { return get_field<"flags", jint>(); }
	void flags(jint v) { set_field<"flags", jint>(v); }
	jni::ref<java::lang::String> group() { return get_field<"group", jni::ref<java::lang::String>>(); }
	void group(jni::ref<java::lang::String> v) { set_field<"group", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::CharSequence> nonLocalizedDescription() { return get_field<"nonLocalizedDescription", jni::ref<java::lang::CharSequence>>(); }
	void nonLocalizedDescription(jni::ref<java::lang::CharSequence> v) { set_field<"nonLocalizedDescription", jni::ref<java::lang::CharSequence>>(v); }
	jint protectionLevel() { return get_field<"protectionLevel", jint>(); }
	void protectionLevel(jint v) { set_field<"protectionLevel", jint>(v); }

	static jni::ref<android::content::pm::PermissionInfo> new_object() { return base_::new_object(); }
	static jni::ref<android::content::pm::PermissionInfo> new_object(jni::ref<android::content::pm::PermissionInfo> orig) { return base_::new_object(orig); }
	jni::ref<java::lang::CharSequence> loadDescription(jni::ref<android::content::pm::PackageManager> pm) { return call_method<"loadDescription", jni::ref<java::lang::CharSequence>>(pm); }
	jint getProtection() { return call_method<"getProtection", jint>(); }
	jint getProtectionFlags() { return call_method<"getProtectionFlags", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint parcelableFlags) { return call_method<"writeToParcel", void>(dest, parcelableFlags); }

protected:

	PermissionInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PERMISSIONINFO