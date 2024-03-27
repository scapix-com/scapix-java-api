// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/content/pm/PackageManager.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEST_MOCK_MOCKPACKAGEMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_TEST_MOCK_MOCKPACKAGEMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::test::mock { class MockPackageManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::test::mock::MockPackageManager>
{
	static constexpr fixed_string class_name = "android/test/mock/MockPackageManager";
	using base_classes = std::tuple<scapix::java_api::android::content::pm::PackageManager>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEST_MOCK_MOCKPACKAGEMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEST_MOCK_MOCKPACKAGEMANAGER)
#define SCAPIX_JAVA_API_ANDROID_TEST_MOCK_MOCKPACKAGEMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/content/IntentFilter.h>
#include <scapix/java_api/android/content/pm/ActivityInfo.h>
#include <scapix/java_api/android/content/pm/ApplicationInfo.h>
#include <scapix/java_api/android/content/pm/ChangedPackages.h>
#include <scapix/java_api/android/content/pm/FeatureInfo.h>
#include <scapix/java_api/android/content/pm/InstrumentationInfo.h>
#include <scapix/java_api/android/content/pm/PackageInfo.h>
#include <scapix/java_api/android/content/pm/PackageInstaller.h>
#include <scapix/java_api/android/content/pm/PermissionGroupInfo.h>
#include <scapix/java_api/android/content/pm/PermissionInfo.h>
#include <scapix/java_api/android/content/pm/ProviderInfo.h>
#include <scapix/java_api/android/content/pm/ResolveInfo.h>
#include <scapix/java_api/android/content/pm/ServiceInfo.h>
#include <scapix/java_api/android/content/pm/VersionedPackage.h>
#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/content/res/XmlResourceParser.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/os/UserHandle.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::test::mock::MockPackageManager : public jni::object_base<"android/test/mock/MockPackageManager",
	android::content::pm::PackageManager>
{
public:

	static jni::ref<android::test::mock::MockPackageManager> new_object() { return base_::new_object(); }
	jni::ref<android::content::pm::PackageInfo> getPackageInfo(jni::ref<java::lang::String> packageName, jint flags) { return call_method<"getPackageInfo", jni::ref<android::content::pm::PackageInfo>>(packageName, flags); }
	jni::ref<android::content::pm::PackageInfo> getPackageInfo(jni::ref<android::content::pm::VersionedPackage> versionedPackage, jint flags) { return call_method<"getPackageInfo", jni::ref<android::content::pm::PackageInfo>>(versionedPackage, flags); }
	jni::ref<jni::array<java::lang::String>> currentToCanonicalPackageNames(jni::ref<jni::array<java::lang::String>> names) { return call_method<"currentToCanonicalPackageNames", jni::ref<jni::array<java::lang::String>>>(names); }
	jni::ref<jni::array<java::lang::String>> canonicalToCurrentPackageNames(jni::ref<jni::array<java::lang::String>> names) { return call_method<"canonicalToCurrentPackageNames", jni::ref<jni::array<java::lang::String>>>(names); }
	jni::ref<android::content::Intent> getLaunchIntentForPackage(jni::ref<java::lang::String> packageName) { return call_method<"getLaunchIntentForPackage", jni::ref<android::content::Intent>>(packageName); }
	jni::ref<android::content::Intent> getLeanbackLaunchIntentForPackage(jni::ref<java::lang::String> packageName) { return call_method<"getLeanbackLaunchIntentForPackage", jni::ref<android::content::Intent>>(packageName); }
	jni::ref<jni::array<jint>> getPackageGids(jni::ref<java::lang::String> packageName) { return call_method<"getPackageGids", jni::ref<jni::array<jint>>>(packageName); }
	jni::ref<jni::array<jint>> getPackageGids(jni::ref<java::lang::String> packageName, jint flags) { return call_method<"getPackageGids", jni::ref<jni::array<jint>>>(packageName, flags); }
	jint getPackageUid(jni::ref<java::lang::String> packageName, jint flags) { return call_method<"getPackageUid", jint>(packageName, flags); }
	jni::ref<android::content::pm::PermissionInfo> getPermissionInfo(jni::ref<java::lang::String> name, jint flags) { return call_method<"getPermissionInfo", jni::ref<android::content::pm::PermissionInfo>>(name, flags); }
	jni::ref<java::util::List> queryPermissionsByGroup(jni::ref<java::lang::String> group, jint flags) { return call_method<"queryPermissionsByGroup", jni::ref<java::util::List>>(group, flags); }
	jni::ref<android::content::pm::PermissionGroupInfo> getPermissionGroupInfo(jni::ref<java::lang::String> name, jint flags) { return call_method<"getPermissionGroupInfo", jni::ref<android::content::pm::PermissionGroupInfo>>(name, flags); }
	jni::ref<java::util::List> getAllPermissionGroups(jint flags) { return call_method<"getAllPermissionGroups", jni::ref<java::util::List>>(flags); }
	jni::ref<android::content::pm::ApplicationInfo> getApplicationInfo(jni::ref<java::lang::String> packageName, jint flags) { return call_method<"getApplicationInfo", jni::ref<android::content::pm::ApplicationInfo>>(packageName, flags); }
	jni::ref<android::content::pm::ActivityInfo> getActivityInfo(jni::ref<android::content::ComponentName> className, jint flags) { return call_method<"getActivityInfo", jni::ref<android::content::pm::ActivityInfo>>(className, flags); }
	jni::ref<android::content::pm::ActivityInfo> getReceiverInfo(jni::ref<android::content::ComponentName> className, jint flags) { return call_method<"getReceiverInfo", jni::ref<android::content::pm::ActivityInfo>>(className, flags); }
	jni::ref<android::content::pm::ServiceInfo> getServiceInfo(jni::ref<android::content::ComponentName> className, jint flags) { return call_method<"getServiceInfo", jni::ref<android::content::pm::ServiceInfo>>(className, flags); }
	jni::ref<android::content::pm::ProviderInfo> getProviderInfo(jni::ref<android::content::ComponentName> className, jint flags) { return call_method<"getProviderInfo", jni::ref<android::content::pm::ProviderInfo>>(className, flags); }
	jni::ref<java::util::List> getInstalledPackages(jint flags) { return call_method<"getInstalledPackages", jni::ref<java::util::List>>(flags); }
	jni::ref<java::util::List> getPackagesHoldingPermissions(jni::ref<jni::array<java::lang::String>> permissions, jint flags) { return call_method<"getPackagesHoldingPermissions", jni::ref<java::util::List>>(permissions, flags); }
	jint checkPermission(jni::ref<java::lang::String> permName, jni::ref<java::lang::String> pkgName) { return call_method<"checkPermission", jint>(permName, pkgName); }
	jboolean canRequestPackageInstalls() { return call_method<"canRequestPackageInstalls", jboolean>(); }
	jboolean isPermissionRevokedByPolicy(jni::ref<java::lang::String> permName, jni::ref<java::lang::String> pkgName) { return call_method<"isPermissionRevokedByPolicy", jboolean>(permName, pkgName); }
	jboolean addPermission(jni::ref<android::content::pm::PermissionInfo> info) { return call_method<"addPermission", jboolean>(info); }
	jboolean addPermissionAsync(jni::ref<android::content::pm::PermissionInfo> info) { return call_method<"addPermissionAsync", jboolean>(info); }
	void removePermission(jni::ref<java::lang::String> name) { return call_method<"removePermission", void>(name); }
	jint checkSignatures(jni::ref<java::lang::String> pkg1, jni::ref<java::lang::String> pkg2) { return call_method<"checkSignatures", jint>(pkg1, pkg2); }
	jint checkSignatures(jint uid1, jint uid2) { return call_method<"checkSignatures", jint>(uid1, uid2); }
	jni::ref<jni::array<java::lang::String>> getPackagesForUid(jint uid) { return call_method<"getPackagesForUid", jni::ref<jni::array<java::lang::String>>>(uid); }
	jni::ref<java::lang::String> getNameForUid(jint uid) { return call_method<"getNameForUid", jni::ref<java::lang::String>>(uid); }
	jni::ref<java::util::List> getInstalledApplications(jint flags) { return call_method<"getInstalledApplications", jni::ref<java::util::List>>(flags); }
	jni::ref<android::content::pm::ResolveInfo> resolveActivity(jni::ref<android::content::Intent> intent, jint flags) { return call_method<"resolveActivity", jni::ref<android::content::pm::ResolveInfo>>(intent, flags); }
	jni::ref<java::util::List> queryIntentActivities(jni::ref<android::content::Intent> intent, jint flags) { return call_method<"queryIntentActivities", jni::ref<java::util::List>>(intent, flags); }
	jni::ref<java::util::List> queryIntentActivityOptions(jni::ref<android::content::ComponentName> caller, jni::ref<jni::array<android::content::Intent>> specifics, jni::ref<android::content::Intent> intent, jint flags) { return call_method<"queryIntentActivityOptions", jni::ref<java::util::List>>(caller, specifics, intent, flags); }
	jni::ref<java::util::List> queryBroadcastReceivers(jni::ref<android::content::Intent> intent, jint flags) { return call_method<"queryBroadcastReceivers", jni::ref<java::util::List>>(intent, flags); }
	jni::ref<android::content::pm::ResolveInfo> resolveService(jni::ref<android::content::Intent> intent, jint flags) { return call_method<"resolveService", jni::ref<android::content::pm::ResolveInfo>>(intent, flags); }
	jni::ref<java::util::List> queryIntentServices(jni::ref<android::content::Intent> intent, jint flags) { return call_method<"queryIntentServices", jni::ref<java::util::List>>(intent, flags); }
	jni::ref<java::util::List> queryIntentContentProviders(jni::ref<android::content::Intent> intent, jint flags) { return call_method<"queryIntentContentProviders", jni::ref<java::util::List>>(intent, flags); }
	jni::ref<android::content::pm::ProviderInfo> resolveContentProvider(jni::ref<java::lang::String> name, jint flags) { return call_method<"resolveContentProvider", jni::ref<android::content::pm::ProviderInfo>>(name, flags); }
	jni::ref<java::util::List> queryContentProviders(jni::ref<java::lang::String> processName, jint uid, jint flags) { return call_method<"queryContentProviders", jni::ref<java::util::List>>(processName, uid, flags); }
	jni::ref<android::content::pm::InstrumentationInfo> getInstrumentationInfo(jni::ref<android::content::ComponentName> className, jint flags) { return call_method<"getInstrumentationInfo", jni::ref<android::content::pm::InstrumentationInfo>>(className, flags); }
	jni::ref<java::util::List> queryInstrumentation(jni::ref<java::lang::String> targetPackage, jint flags) { return call_method<"queryInstrumentation", jni::ref<java::util::List>>(targetPackage, flags); }
	jni::ref<android::graphics::drawable::Drawable> getDrawable(jni::ref<java::lang::String> packageName, jint resid, jni::ref<android::content::pm::ApplicationInfo> appInfo) { return call_method<"getDrawable", jni::ref<android::graphics::drawable::Drawable>>(packageName, resid, appInfo); }
	jni::ref<android::graphics::drawable::Drawable> getActivityIcon(jni::ref<android::content::ComponentName> activityName) { return call_method<"getActivityIcon", jni::ref<android::graphics::drawable::Drawable>>(activityName); }
	jni::ref<android::graphics::drawable::Drawable> getActivityIcon(jni::ref<android::content::Intent> intent) { return call_method<"getActivityIcon", jni::ref<android::graphics::drawable::Drawable>>(intent); }
	jni::ref<android::graphics::drawable::Drawable> getDefaultActivityIcon() { return call_method<"getDefaultActivityIcon", jni::ref<android::graphics::drawable::Drawable>>(); }
	jni::ref<android::graphics::drawable::Drawable> getActivityBanner(jni::ref<android::content::ComponentName> activityName) { return call_method<"getActivityBanner", jni::ref<android::graphics::drawable::Drawable>>(activityName); }
	jni::ref<android::graphics::drawable::Drawable> getActivityBanner(jni::ref<android::content::Intent> intent) { return call_method<"getActivityBanner", jni::ref<android::graphics::drawable::Drawable>>(intent); }
	jni::ref<android::graphics::drawable::Drawable> getApplicationBanner(jni::ref<android::content::pm::ApplicationInfo> info) { return call_method<"getApplicationBanner", jni::ref<android::graphics::drawable::Drawable>>(info); }
	jni::ref<android::graphics::drawable::Drawable> getApplicationBanner(jni::ref<java::lang::String> packageName) { return call_method<"getApplicationBanner", jni::ref<android::graphics::drawable::Drawable>>(packageName); }
	jni::ref<android::graphics::drawable::Drawable> getApplicationIcon(jni::ref<android::content::pm::ApplicationInfo> info) { return call_method<"getApplicationIcon", jni::ref<android::graphics::drawable::Drawable>>(info); }
	jni::ref<android::graphics::drawable::Drawable> getApplicationIcon(jni::ref<java::lang::String> packageName) { return call_method<"getApplicationIcon", jni::ref<android::graphics::drawable::Drawable>>(packageName); }
	jni::ref<android::graphics::drawable::Drawable> getActivityLogo(jni::ref<android::content::ComponentName> activityName) { return call_method<"getActivityLogo", jni::ref<android::graphics::drawable::Drawable>>(activityName); }
	jni::ref<android::graphics::drawable::Drawable> getActivityLogo(jni::ref<android::content::Intent> intent) { return call_method<"getActivityLogo", jni::ref<android::graphics::drawable::Drawable>>(intent); }
	jni::ref<android::graphics::drawable::Drawable> getApplicationLogo(jni::ref<android::content::pm::ApplicationInfo> info) { return call_method<"getApplicationLogo", jni::ref<android::graphics::drawable::Drawable>>(info); }
	jni::ref<android::graphics::drawable::Drawable> getApplicationLogo(jni::ref<java::lang::String> packageName) { return call_method<"getApplicationLogo", jni::ref<android::graphics::drawable::Drawable>>(packageName); }
	jni::ref<android::graphics::drawable::Drawable> getUserBadgedIcon(jni::ref<android::graphics::drawable::Drawable> icon, jni::ref<android::os::UserHandle> user) { return call_method<"getUserBadgedIcon", jni::ref<android::graphics::drawable::Drawable>>(icon, user); }
	jni::ref<android::graphics::drawable::Drawable> getUserBadgedDrawableForDensity(jni::ref<android::graphics::drawable::Drawable> drawable, jni::ref<android::os::UserHandle> user, jni::ref<android::graphics::Rect> badgeLocation, jint badgeDensity) { return call_method<"getUserBadgedDrawableForDensity", jni::ref<android::graphics::drawable::Drawable>>(drawable, user, badgeLocation, badgeDensity); }
	jni::ref<java::lang::CharSequence> getUserBadgedLabel(jni::ref<java::lang::CharSequence> label, jni::ref<android::os::UserHandle> user) { return call_method<"getUserBadgedLabel", jni::ref<java::lang::CharSequence>>(label, user); }
	jni::ref<java::lang::CharSequence> getText(jni::ref<java::lang::String> packageName, jint resid, jni::ref<android::content::pm::ApplicationInfo> appInfo) { return call_method<"getText", jni::ref<java::lang::CharSequence>>(packageName, resid, appInfo); }
	jni::ref<android::content::res::XmlResourceParser> getXml(jni::ref<java::lang::String> packageName, jint resid, jni::ref<android::content::pm::ApplicationInfo> appInfo) { return call_method<"getXml", jni::ref<android::content::res::XmlResourceParser>>(packageName, resid, appInfo); }
	jni::ref<java::lang::CharSequence> getApplicationLabel(jni::ref<android::content::pm::ApplicationInfo> info) { return call_method<"getApplicationLabel", jni::ref<java::lang::CharSequence>>(info); }
	jni::ref<android::content::res::Resources> getResourcesForActivity(jni::ref<android::content::ComponentName> activityName) { return call_method<"getResourcesForActivity", jni::ref<android::content::res::Resources>>(activityName); }
	jni::ref<android::content::res::Resources> getResourcesForApplication(jni::ref<android::content::pm::ApplicationInfo> app) { return call_method<"getResourcesForApplication", jni::ref<android::content::res::Resources>>(app); }
	jni::ref<android::content::res::Resources> getResourcesForApplication(jni::ref<java::lang::String> appPackageName) { return call_method<"getResourcesForApplication", jni::ref<android::content::res::Resources>>(appPackageName); }
	jni::ref<android::content::pm::PackageInfo> getPackageArchiveInfo(jni::ref<java::lang::String> archiveFilePath, jint flags) { return call_method<"getPackageArchiveInfo", jni::ref<android::content::pm::PackageInfo>>(archiveFilePath, flags); }
	void setInstallerPackageName(jni::ref<java::lang::String> targetPackage, jni::ref<java::lang::String> installerPackageName) { return call_method<"setInstallerPackageName", void>(targetPackage, installerPackageName); }
	jni::ref<java::lang::String> getInstallerPackageName(jni::ref<java::lang::String> packageName) { return call_method<"getInstallerPackageName", jni::ref<java::lang::String>>(packageName); }
	void addPackageToPreferred(jni::ref<java::lang::String> packageName) { return call_method<"addPackageToPreferred", void>(packageName); }
	void removePackageFromPreferred(jni::ref<java::lang::String> packageName) { return call_method<"removePackageFromPreferred", void>(packageName); }
	jni::ref<java::util::List> getPreferredPackages(jint flags) { return call_method<"getPreferredPackages", jni::ref<java::util::List>>(flags); }
	void setComponentEnabledSetting(jni::ref<android::content::ComponentName> componentName, jint newState, jint flags) { return call_method<"setComponentEnabledSetting", void>(componentName, newState, flags); }
	jint getComponentEnabledSetting(jni::ref<android::content::ComponentName> componentName) { return call_method<"getComponentEnabledSetting", jint>(componentName); }
	void setApplicationEnabledSetting(jni::ref<java::lang::String> packageName, jint newState, jint flags) { return call_method<"setApplicationEnabledSetting", void>(packageName, newState, flags); }
	jint getApplicationEnabledSetting(jni::ref<java::lang::String> packageName) { return call_method<"getApplicationEnabledSetting", jint>(packageName); }
	void addPreferredActivity(jni::ref<android::content::IntentFilter> filter, jint match, jni::ref<jni::array<android::content::ComponentName>> set, jni::ref<android::content::ComponentName> activity) { return call_method<"addPreferredActivity", void>(filter, match, set, activity); }
	void clearPackagePreferredActivities(jni::ref<java::lang::String> packageName) { return call_method<"clearPackagePreferredActivities", void>(packageName); }
	jint getPreferredActivities(jni::ref<java::util::List> outFilters, jni::ref<java::util::List> outActivities, jni::ref<java::lang::String> packageName) { return call_method<"getPreferredActivities", jint>(outFilters, outActivities, packageName); }
	jni::ref<jni::array<java::lang::String>> getSystemSharedLibraryNames() { return call_method<"getSystemSharedLibraryNames", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<java::util::List> getSharedLibraries(jint flags) { return call_method<"getSharedLibraries", jni::ref<java::util::List>>(flags); }
	jni::ref<jni::array<android::content::pm::FeatureInfo>> getSystemAvailableFeatures() { return call_method<"getSystemAvailableFeatures", jni::ref<jni::array<android::content::pm::FeatureInfo>>>(); }
	jboolean hasSystemFeature(jni::ref<java::lang::String> name) { return call_method<"hasSystemFeature", jboolean>(name); }
	jboolean hasSystemFeature(jni::ref<java::lang::String> name, jint version) { return call_method<"hasSystemFeature", jboolean>(name, version); }
	jboolean isSafeMode() { return call_method<"isSafeMode", jboolean>(); }
	void verifyPendingInstall(jint id, jint verificationCode) { return call_method<"verifyPendingInstall", void>(id, verificationCode); }
	void extendVerificationTimeout(jint id, jint verificationCodeAtTimeout, jlong millisecondsToDelay) { return call_method<"extendVerificationTimeout", void>(id, verificationCodeAtTimeout, millisecondsToDelay); }
	jni::ref<java::util::List> getAllIntentFilters(jni::ref<java::lang::String> packageName) { return call_method<"getAllIntentFilters", jni::ref<java::util::List>>(packageName); }
	jni::ref<jni::array<jbyte>> getInstantAppCookie() { return call_method<"getInstantAppCookie", jni::ref<jni::array<jbyte>>>(); }
	jboolean isInstantApp() { return call_method<"isInstantApp", jboolean>(); }
	jboolean isInstantApp(jni::ref<java::lang::String> packageName) { return call_method<"isInstantApp", jboolean>(packageName); }
	jint getInstantAppCookieMaxBytes() { return call_method<"getInstantAppCookieMaxBytes", jint>(); }
	void clearInstantAppCookie() { return call_method<"clearInstantAppCookie", void>(); }
	void updateInstantAppCookie(jni::ref<jni::array<jbyte>> cookie) { return call_method<"updateInstantAppCookie", void>(cookie); }
	jni::ref<android::content::pm::ChangedPackages> getChangedPackages(jint sequenceNumber) { return call_method<"getChangedPackages", jni::ref<android::content::pm::ChangedPackages>>(sequenceNumber); }
	void setApplicationCategoryHint(jni::ref<java::lang::String> packageName, jint categoryHint) { return call_method<"setApplicationCategoryHint", void>(packageName, categoryHint); }
	jni::ref<android::content::pm::PackageInstaller> getPackageInstaller() { return call_method<"getPackageInstaller", jni::ref<android::content::pm::PackageInstaller>>(); }

protected:

	MockPackageManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEST_MOCK_MOCKPACKAGEMANAGER