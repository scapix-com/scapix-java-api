// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class PackageInstaller_SessionInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::PackageInstaller_SessionInfo>
{
	static constexpr fixed_string class_name = "android/content/pm/PackageInstaller$SessionInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONINFO)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/os/UserHandle.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::PackageInstaller_SessionInfo : public jni::object_base<"android/content/pm/PackageInstaller$SessionInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint INVALID_ID() { return get_static_field<"INVALID_ID", jint>(); }
	static jint SESSION_ACTIVATION_FAILED() { return get_static_field<"SESSION_ACTIVATION_FAILED", jint>(); }
	static jint SESSION_CONFLICT() { return get_static_field<"SESSION_CONFLICT", jint>(); }
	static jint SESSION_NO_ERROR() { return get_static_field<"SESSION_NO_ERROR", jint>(); }
	static jint SESSION_UNKNOWN_ERROR() { return get_static_field<"SESSION_UNKNOWN_ERROR", jint>(); }
	static jint SESSION_VERIFICATION_FAILED() { return get_static_field<"SESSION_VERIFICATION_FAILED", jint>(); }
	static jint STAGED_SESSION_ACTIVATION_FAILED() { return get_static_field<"STAGED_SESSION_ACTIVATION_FAILED", jint>(); }
	static jint STAGED_SESSION_CONFLICT() { return get_static_field<"STAGED_SESSION_CONFLICT", jint>(); }
	static jint STAGED_SESSION_NO_ERROR() { return get_static_field<"STAGED_SESSION_NO_ERROR", jint>(); }
	static jint STAGED_SESSION_UNKNOWN() { return get_static_field<"STAGED_SESSION_UNKNOWN", jint>(); }
	static jint STAGED_SESSION_VERIFICATION_FAILED() { return get_static_field<"STAGED_SESSION_VERIFICATION_FAILED", jint>(); }

	jint getSessionId() { return call_method<"getSessionId", jint>(); }
	jni::ref<android::os::UserHandle> getUser() { return call_method<"getUser", jni::ref<android::os::UserHandle>>(); }
	jni::ref<java::lang::String> getInstallerPackageName() { return call_method<"getInstallerPackageName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getInstallerAttributionTag() { return call_method<"getInstallerAttributionTag", jni::ref<java::lang::String>>(); }
	jfloat getProgress() { return call_method<"getProgress", jfloat>(); }
	jboolean isActive() { return call_method<"isActive", jboolean>(); }
	jboolean isSealed() { return call_method<"isSealed", jboolean>(); }
	jint getInstallReason() { return call_method<"getInstallReason", jint>(); }
	jni::ref<java::lang::String> getAppPackageName() { return call_method<"getAppPackageName", jni::ref<java::lang::String>>(); }
	jni::ref<android::graphics::Bitmap> getAppIcon() { return call_method<"getAppIcon", jni::ref<android::graphics::Bitmap>>(); }
	jni::ref<java::lang::CharSequence> getAppLabel() { return call_method<"getAppLabel", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<android::content::Intent> createDetailsIntent() { return call_method<"createDetailsIntent", jni::ref<android::content::Intent>>(); }
	jint getMode() { return call_method<"getMode", jint>(); }
	jint getInstallLocation() { return call_method<"getInstallLocation", jint>(); }
	jlong getSize() { return call_method<"getSize", jlong>(); }
	jni::ref<android::net::Uri> getOriginatingUri() { return call_method<"getOriginatingUri", jni::ref<android::net::Uri>>(); }
	jint getOriginatingUid() { return call_method<"getOriginatingUid", jint>(); }
	jni::ref<android::net::Uri> getReferrerUri() { return call_method<"getReferrerUri", jni::ref<android::net::Uri>>(); }
	jint getPackageSource() { return call_method<"getPackageSource", jint>(); }
	jboolean isMultiPackage() { return call_method<"isMultiPackage", jboolean>(); }
	jboolean isStaged() { return call_method<"isStaged", jboolean>(); }
	jboolean isStagedSessionActive() { return call_method<"isStagedSessionActive", jboolean>(); }
	jint getParentSessionId() { return call_method<"getParentSessionId", jint>(); }
	jboolean hasParentSessionId() { return call_method<"hasParentSessionId", jboolean>(); }
	jni::ref<jni::array<jint>> getChildSessionIds() { return call_method<"getChildSessionIds", jni::ref<jni::array<jint>>>(); }
	jboolean isStagedSessionApplied() { return call_method<"isStagedSessionApplied", jboolean>(); }
	jboolean isStagedSessionReady() { return call_method<"isStagedSessionReady", jboolean>(); }
	jboolean isStagedSessionFailed() { return call_method<"isStagedSessionFailed", jboolean>(); }
	jint getStagedSessionErrorCode() { return call_method<"getStagedSessionErrorCode", jint>(); }
	jni::ref<java::lang::String> getStagedSessionErrorMessage() { return call_method<"getStagedSessionErrorMessage", jni::ref<java::lang::String>>(); }
	jboolean isCommitted() { return call_method<"isCommitted", jboolean>(); }
	jlong getCreatedMillis() { return call_method<"getCreatedMillis", jlong>(); }
	jlong getUpdatedMillis() { return call_method<"getUpdatedMillis", jlong>(); }
	jint getRequireUserAction() { return call_method<"getRequireUserAction", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	PackageInstaller_SessionInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONINFO
