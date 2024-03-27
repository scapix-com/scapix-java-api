// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class PackageInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::PackageInfo>
{
	static constexpr fixed_string class_name = "android/content/pm/PackageInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINFO)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/pm/ActivityInfo.h>
#include <scapix/java_api/android/content/pm/ApplicationInfo.h>
#include <scapix/java_api/android/content/pm/ConfigurationInfo.h>
#include <scapix/java_api/android/content/pm/FeatureGroupInfo.h>
#include <scapix/java_api/android/content/pm/FeatureInfo.h>
#include <scapix/java_api/android/content/pm/InstrumentationInfo.h>
#include <scapix/java_api/android/content/pm/PermissionInfo.h>
#include <scapix/java_api/android/content/pm/ProviderInfo.h>
#include <scapix/java_api/android/content/pm/ServiceInfo.h>
#include <scapix/java_api/android/content/pm/Signature.h>
#include <scapix/java_api/android/content/pm/SigningInfo.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::PackageInfo : public jni::object_base<"android/content/pm/PackageInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint INSTALL_LOCATION_AUTO() { return get_static_field<"INSTALL_LOCATION_AUTO", jint>(); }
	static jint INSTALL_LOCATION_INTERNAL_ONLY() { return get_static_field<"INSTALL_LOCATION_INTERNAL_ONLY", jint>(); }
	static jint INSTALL_LOCATION_PREFER_EXTERNAL() { return get_static_field<"INSTALL_LOCATION_PREFER_EXTERNAL", jint>(); }
	static jint REQUESTED_PERMISSION_GRANTED() { return get_static_field<"REQUESTED_PERMISSION_GRANTED", jint>(); }
	jni::ref<jni::array<android::content::pm::ActivityInfo>> activities() { return get_field<"activities", jni::ref<jni::array<android::content::pm::ActivityInfo>>>(); }
	void activities(jni::ref<jni::array<android::content::pm::ActivityInfo>> v) { set_field<"activities", jni::ref<jni::array<android::content::pm::ActivityInfo>>>(v); }
	jni::ref<android::content::pm::ApplicationInfo> applicationInfo() { return get_field<"applicationInfo", jni::ref<android::content::pm::ApplicationInfo>>(); }
	void applicationInfo(jni::ref<android::content::pm::ApplicationInfo> v) { set_field<"applicationInfo", jni::ref<android::content::pm::ApplicationInfo>>(v); }
	jint baseRevisionCode() { return get_field<"baseRevisionCode", jint>(); }
	void baseRevisionCode(jint v) { set_field<"baseRevisionCode", jint>(v); }
	jni::ref<jni::array<android::content::pm::ConfigurationInfo>> configPreferences() { return get_field<"configPreferences", jni::ref<jni::array<android::content::pm::ConfigurationInfo>>>(); }
	void configPreferences(jni::ref<jni::array<android::content::pm::ConfigurationInfo>> v) { set_field<"configPreferences", jni::ref<jni::array<android::content::pm::ConfigurationInfo>>>(v); }
	jni::ref<jni::array<android::content::pm::FeatureGroupInfo>> featureGroups() { return get_field<"featureGroups", jni::ref<jni::array<android::content::pm::FeatureGroupInfo>>>(); }
	void featureGroups(jni::ref<jni::array<android::content::pm::FeatureGroupInfo>> v) { set_field<"featureGroups", jni::ref<jni::array<android::content::pm::FeatureGroupInfo>>>(v); }
	jlong firstInstallTime() { return get_field<"firstInstallTime", jlong>(); }
	void firstInstallTime(jlong v) { set_field<"firstInstallTime", jlong>(v); }
	jni::ref<jni::array<jint>> gids() { return get_field<"gids", jni::ref<jni::array<jint>>>(); }
	void gids(jni::ref<jni::array<jint>> v) { set_field<"gids", jni::ref<jni::array<jint>>>(v); }
	jint installLocation() { return get_field<"installLocation", jint>(); }
	void installLocation(jint v) { set_field<"installLocation", jint>(v); }
	jni::ref<jni::array<android::content::pm::InstrumentationInfo>> instrumentation() { return get_field<"instrumentation", jni::ref<jni::array<android::content::pm::InstrumentationInfo>>>(); }
	void instrumentation(jni::ref<jni::array<android::content::pm::InstrumentationInfo>> v) { set_field<"instrumentation", jni::ref<jni::array<android::content::pm::InstrumentationInfo>>>(v); }
	jlong lastUpdateTime() { return get_field<"lastUpdateTime", jlong>(); }
	void lastUpdateTime(jlong v) { set_field<"lastUpdateTime", jlong>(v); }
	jni::ref<java::lang::String> packageName() { return get_field<"packageName", jni::ref<java::lang::String>>(); }
	void packageName(jni::ref<java::lang::String> v) { set_field<"packageName", jni::ref<java::lang::String>>(v); }
	jni::ref<jni::array<android::content::pm::PermissionInfo>> permissions() { return get_field<"permissions", jni::ref<jni::array<android::content::pm::PermissionInfo>>>(); }
	void permissions(jni::ref<jni::array<android::content::pm::PermissionInfo>> v) { set_field<"permissions", jni::ref<jni::array<android::content::pm::PermissionInfo>>>(v); }
	jni::ref<jni::array<android::content::pm::ProviderInfo>> providers() { return get_field<"providers", jni::ref<jni::array<android::content::pm::ProviderInfo>>>(); }
	void providers(jni::ref<jni::array<android::content::pm::ProviderInfo>> v) { set_field<"providers", jni::ref<jni::array<android::content::pm::ProviderInfo>>>(v); }
	jni::ref<jni::array<android::content::pm::ActivityInfo>> receivers() { return get_field<"receivers", jni::ref<jni::array<android::content::pm::ActivityInfo>>>(); }
	void receivers(jni::ref<jni::array<android::content::pm::ActivityInfo>> v) { set_field<"receivers", jni::ref<jni::array<android::content::pm::ActivityInfo>>>(v); }
	jni::ref<jni::array<android::content::pm::FeatureInfo>> reqFeatures() { return get_field<"reqFeatures", jni::ref<jni::array<android::content::pm::FeatureInfo>>>(); }
	void reqFeatures(jni::ref<jni::array<android::content::pm::FeatureInfo>> v) { set_field<"reqFeatures", jni::ref<jni::array<android::content::pm::FeatureInfo>>>(v); }
	jni::ref<jni::array<java::lang::String>> requestedPermissions() { return get_field<"requestedPermissions", jni::ref<jni::array<java::lang::String>>>(); }
	void requestedPermissions(jni::ref<jni::array<java::lang::String>> v) { set_field<"requestedPermissions", jni::ref<jni::array<java::lang::String>>>(v); }
	jni::ref<jni::array<jint>> requestedPermissionsFlags() { return get_field<"requestedPermissionsFlags", jni::ref<jni::array<jint>>>(); }
	void requestedPermissionsFlags(jni::ref<jni::array<jint>> v) { set_field<"requestedPermissionsFlags", jni::ref<jni::array<jint>>>(v); }
	jni::ref<jni::array<android::content::pm::ServiceInfo>> services() { return get_field<"services", jni::ref<jni::array<android::content::pm::ServiceInfo>>>(); }
	void services(jni::ref<jni::array<android::content::pm::ServiceInfo>> v) { set_field<"services", jni::ref<jni::array<android::content::pm::ServiceInfo>>>(v); }
	jni::ref<java::lang::String> sharedUserId() { return get_field<"sharedUserId", jni::ref<java::lang::String>>(); }
	void sharedUserId(jni::ref<java::lang::String> v) { set_field<"sharedUserId", jni::ref<java::lang::String>>(v); }
	jint sharedUserLabel() { return get_field<"sharedUserLabel", jint>(); }
	void sharedUserLabel(jint v) { set_field<"sharedUserLabel", jint>(v); }
	jni::ref<jni::array<android::content::pm::Signature>> signatures() { return get_field<"signatures", jni::ref<jni::array<android::content::pm::Signature>>>(); }
	void signatures(jni::ref<jni::array<android::content::pm::Signature>> v) { set_field<"signatures", jni::ref<jni::array<android::content::pm::Signature>>>(v); }
	jni::ref<android::content::pm::SigningInfo> signingInfo() { return get_field<"signingInfo", jni::ref<android::content::pm::SigningInfo>>(); }
	void signingInfo(jni::ref<android::content::pm::SigningInfo> v) { set_field<"signingInfo", jni::ref<android::content::pm::SigningInfo>>(v); }
	jni::ref<jni::array<java::lang::String>> splitNames() { return get_field<"splitNames", jni::ref<jni::array<java::lang::String>>>(); }
	void splitNames(jni::ref<jni::array<java::lang::String>> v) { set_field<"splitNames", jni::ref<jni::array<java::lang::String>>>(v); }
	jni::ref<jni::array<jint>> splitRevisionCodes() { return get_field<"splitRevisionCodes", jni::ref<jni::array<jint>>>(); }
	void splitRevisionCodes(jni::ref<jni::array<jint>> v) { set_field<"splitRevisionCodes", jni::ref<jni::array<jint>>>(v); }
	jint versionCode() { return get_field<"versionCode", jint>(); }
	void versionCode(jint v) { set_field<"versionCode", jint>(v); }
	jni::ref<java::lang::String> versionName() { return get_field<"versionName", jni::ref<java::lang::String>>(); }
	void versionName(jni::ref<java::lang::String> v) { set_field<"versionName", jni::ref<java::lang::String>>(v); }

	static jni::ref<android::content::pm::PackageInfo> new_object() { return base_::new_object(); }
	jlong getLongVersionCode() { return call_method<"getLongVersionCode", jlong>(); }
	void setLongVersionCode(jlong longVersionCode) { return call_method<"setLongVersionCode", void>(longVersionCode); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint parcelableFlags) { return call_method<"writeToParcel", void>(dest, parcelableFlags); }

protected:

	PackageInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINFO
