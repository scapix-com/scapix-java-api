// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONPARAMS_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONPARAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class PackageInstaller_SessionParams; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::PackageInstaller_SessionParams>
{
	static constexpr fixed_string class_name = "android/content/pm/PackageInstaller$SessionParams";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONPARAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONPARAMS)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONPARAMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::PackageInstaller_SessionParams : public jni::object_base<"android/content/pm/PackageInstaller$SessionParams",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint MODE_FULL_INSTALL() { return get_static_field<"MODE_FULL_INSTALL", jint>(); }
	static jint MODE_INHERIT_EXISTING() { return get_static_field<"MODE_INHERIT_EXISTING", jint>(); }
	static jni::ref<java::util::Set> RESTRICTED_PERMISSIONS_ALL() { return get_static_field<"RESTRICTED_PERMISSIONS_ALL", jni::ref<java::util::Set>>(); }

	static jni::ref<android::content::pm::PackageInstaller_SessionParams> new_object(jint mode) { return base_::new_object(mode); }
	void setInstallLocation(jint installLocation) { return call_method<"setInstallLocation", void>(installLocation); }
	void setSize(jlong sizeBytes) { return call_method<"setSize", void>(sizeBytes); }
	void setAppPackageName(jni::ref<java::lang::String> appPackageName) { return call_method<"setAppPackageName", void>(appPackageName); }
	void setAppIcon(jni::ref<android::graphics::Bitmap> appIcon) { return call_method<"setAppIcon", void>(appIcon); }
	void setAppLabel(jni::ref<java::lang::CharSequence> appLabel) { return call_method<"setAppLabel", void>(appLabel); }
	void setOriginatingUri(jni::ref<android::net::Uri> originatingUri) { return call_method<"setOriginatingUri", void>(originatingUri); }
	void setOriginatingUid(jint originatingUid) { return call_method<"setOriginatingUid", void>(originatingUid); }
	void setReferrerUri(jni::ref<android::net::Uri> referrerUri) { return call_method<"setReferrerUri", void>(referrerUri); }
	void setWhitelistedRestrictedPermissions(jni::ref<java::util::Set> permissions) { return call_method<"setWhitelistedRestrictedPermissions", void>(permissions); }
	void setAutoRevokePermissionsMode(jboolean shouldAutoRevoke) { return call_method<"setAutoRevokePermissionsMode", void>(shouldAutoRevoke); }
	void setInstallReason(jint installReason) { return call_method<"setInstallReason", void>(installReason); }
	void setMultiPackage() { return call_method<"setMultiPackage", void>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	PackageInstaller_SessionParams(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONPARAMS
