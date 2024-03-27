// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/content/pm/ComponentInfo.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PROVIDERINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PROVIDERINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class ProviderInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::ProviderInfo>
{
	static constexpr fixed_string class_name = "android/content/pm/ProviderInfo";
	using base_classes = std::tuple<scapix::java_api::android::content::pm::ComponentInfo, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PROVIDERINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PROVIDERINFO)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PROVIDERINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/pm/PathPermission.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/os/PatternMatcher.h>
#include <scapix/java_api/android/util/Printer.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::ProviderInfo : public jni::object_base<"android/content/pm/ProviderInfo",
	android::content::pm::ComponentInfo,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint FLAG_SINGLE_USER() { return get_static_field<"FLAG_SINGLE_USER", jint>(); }
	jni::ref<java::lang::String> authority() { return get_field<"authority", jni::ref<java::lang::String>>(); }
	void authority(jni::ref<java::lang::String> v) { set_field<"authority", jni::ref<java::lang::String>>(v); }
	jint flags() { return get_field<"flags", jint>(); }
	void flags(jint v) { set_field<"flags", jint>(v); }
	jboolean grantUriPermissions() { return get_field<"grantUriPermissions", jboolean>(); }
	void grantUriPermissions(jboolean v) { set_field<"grantUriPermissions", jboolean>(v); }
	jint initOrder() { return get_field<"initOrder", jint>(); }
	void initOrder(jint v) { set_field<"initOrder", jint>(v); }
	jboolean isSyncable() { return get_field<"isSyncable", jboolean>(); }
	void isSyncable(jboolean v) { set_field<"isSyncable", jboolean>(v); }
	jboolean multiprocess() { return get_field<"multiprocess", jboolean>(); }
	void multiprocess(jboolean v) { set_field<"multiprocess", jboolean>(v); }
	jni::ref<jni::array<android::content::pm::PathPermission>> pathPermissions() { return get_field<"pathPermissions", jni::ref<jni::array<android::content::pm::PathPermission>>>(); }
	void pathPermissions(jni::ref<jni::array<android::content::pm::PathPermission>> v) { set_field<"pathPermissions", jni::ref<jni::array<android::content::pm::PathPermission>>>(v); }
	jni::ref<java::lang::String> readPermission() { return get_field<"readPermission", jni::ref<java::lang::String>>(); }
	void readPermission(jni::ref<java::lang::String> v) { set_field<"readPermission", jni::ref<java::lang::String>>(v); }
	jni::ref<jni::array<android::os::PatternMatcher>> uriPermissionPatterns() { return get_field<"uriPermissionPatterns", jni::ref<jni::array<android::os::PatternMatcher>>>(); }
	void uriPermissionPatterns(jni::ref<jni::array<android::os::PatternMatcher>> v) { set_field<"uriPermissionPatterns", jni::ref<jni::array<android::os::PatternMatcher>>>(v); }
	jni::ref<java::lang::String> writePermission() { return get_field<"writePermission", jni::ref<java::lang::String>>(); }
	void writePermission(jni::ref<java::lang::String> v) { set_field<"writePermission", jni::ref<java::lang::String>>(v); }

	static jni::ref<android::content::pm::ProviderInfo> new_object() { return base_::new_object(); }
	static jni::ref<android::content::pm::ProviderInfo> new_object(jni::ref<android::content::pm::ProviderInfo> orig) { return base_::new_object(orig); }
	void dump(jni::ref<android::util::Printer> pw, jni::ref<java::lang::String> prefix) { return call_method<"dump", void>(pw, prefix); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint parcelableFlags) { return call_method<"writeToParcel", void>(out, parcelableFlags); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ProviderInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PROVIDERINFO