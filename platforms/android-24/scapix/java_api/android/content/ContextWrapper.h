// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/content/Context.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_CONTEXTWRAPPER_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_CONTEXTWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content { class ContextWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::ContextWrapper>
{
	static constexpr fixed_string class_name = "android/content/ContextWrapper";
	using base_classes = std::tuple<scapix::java_api::android::content::Context>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_CONTEXTWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_CONTEXTWRAPPER)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_CONTEXTWRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/BroadcastReceiver.h>
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/ContentResolver.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/content/IntentFilter.h>
#include <scapix/java_api/android/content/IntentSender.h>
#include <scapix/java_api/android/content/ServiceConnection.h>
#include <scapix/java_api/android/content/SharedPreferences.h>
#include <scapix/java_api/android/content/pm/ApplicationInfo.h>
#include <scapix/java_api/android/content/pm/PackageManager.h>
#include <scapix/java_api/android/content/res/AssetManager.h>
#include <scapix/java_api/android/content/res/Configuration.h>
#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/content/res/Resources_Theme.h>
#include <scapix/java_api/android/database/DatabaseErrorHandler.h>
#include <scapix/java_api/android/database/sqlite/SQLiteDatabase.h>
#include <scapix/java_api/android/database/sqlite/SQLiteDatabase_CursorFactory.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/os/Looper.h>
#include <scapix/java_api/android/os/UserHandle.h>
#include <scapix/java_api/android/view/Display.h>
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/FileInputStream.h>
#include <scapix/java_api/java/io/FileOutputStream.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::ContextWrapper : public jni::object_base<"android/content/ContextWrapper",
	android::content::Context>
{
public:

	static jni::ref<android::content::ContextWrapper> new_object(jni::ref<android::content::Context> base) { return base_::new_object(base); }
	jni::ref<android::content::Context> getBaseContext() { return call_method<"getBaseContext", jni::ref<android::content::Context>>(); }
	jni::ref<android::content::res::AssetManager> getAssets() { return call_method<"getAssets", jni::ref<android::content::res::AssetManager>>(); }
	jni::ref<android::content::res::Resources> getResources() { return call_method<"getResources", jni::ref<android::content::res::Resources>>(); }
	jni::ref<android::content::pm::PackageManager> getPackageManager() { return call_method<"getPackageManager", jni::ref<android::content::pm::PackageManager>>(); }
	jni::ref<android::content::ContentResolver> getContentResolver() { return call_method<"getContentResolver", jni::ref<android::content::ContentResolver>>(); }
	jni::ref<android::os::Looper> getMainLooper() { return call_method<"getMainLooper", jni::ref<android::os::Looper>>(); }
	jni::ref<android::content::Context> getApplicationContext() { return call_method<"getApplicationContext", jni::ref<android::content::Context>>(); }
	void setTheme(jint resid) { return call_method<"setTheme", void>(resid); }
	jni::ref<android::content::res::Resources_Theme> getTheme() { return call_method<"getTheme", jni::ref<android::content::res::Resources_Theme>>(); }
	jni::ref<java::lang::ClassLoader> getClassLoader() { return call_method<"getClassLoader", jni::ref<java::lang::ClassLoader>>(); }
	jni::ref<java::lang::String> getPackageName() { return call_method<"getPackageName", jni::ref<java::lang::String>>(); }
	jni::ref<android::content::pm::ApplicationInfo> getApplicationInfo() { return call_method<"getApplicationInfo", jni::ref<android::content::pm::ApplicationInfo>>(); }
	jni::ref<java::lang::String> getPackageResourcePath() { return call_method<"getPackageResourcePath", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getPackageCodePath() { return call_method<"getPackageCodePath", jni::ref<java::lang::String>>(); }
	jni::ref<android::content::SharedPreferences> getSharedPreferences(jni::ref<java::lang::String> name, jint mode) { return call_method<"getSharedPreferences", jni::ref<android::content::SharedPreferences>>(name, mode); }
	jboolean moveSharedPreferencesFrom(jni::ref<android::content::Context> sourceContext, jni::ref<java::lang::String> name) { return call_method<"moveSharedPreferencesFrom", jboolean>(sourceContext, name); }
	jboolean deleteSharedPreferences(jni::ref<java::lang::String> name) { return call_method<"deleteSharedPreferences", jboolean>(name); }
	jni::ref<java::io::FileInputStream> openFileInput(jni::ref<java::lang::String> name) { return call_method<"openFileInput", jni::ref<java::io::FileInputStream>>(name); }
	jni::ref<java::io::FileOutputStream> openFileOutput(jni::ref<java::lang::String> name, jint mode) { return call_method<"openFileOutput", jni::ref<java::io::FileOutputStream>>(name, mode); }
	jboolean deleteFile(jni::ref<java::lang::String> name) { return call_method<"deleteFile", jboolean>(name); }
	jni::ref<java::io::File> getFileStreamPath(jni::ref<java::lang::String> name) { return call_method<"getFileStreamPath", jni::ref<java::io::File>>(name); }
	jni::ref<jni::array<java::lang::String>> fileList() { return call_method<"fileList", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<java::io::File> getDataDir() { return call_method<"getDataDir", jni::ref<java::io::File>>(); }
	jni::ref<java::io::File> getFilesDir() { return call_method<"getFilesDir", jni::ref<java::io::File>>(); }
	jni::ref<java::io::File> getNoBackupFilesDir() { return call_method<"getNoBackupFilesDir", jni::ref<java::io::File>>(); }
	jni::ref<java::io::File> getExternalFilesDir(jni::ref<java::lang::String> type) { return call_method<"getExternalFilesDir", jni::ref<java::io::File>>(type); }
	jni::ref<jni::array<java::io::File>> getExternalFilesDirs(jni::ref<java::lang::String> type) { return call_method<"getExternalFilesDirs", jni::ref<jni::array<java::io::File>>>(type); }
	jni::ref<java::io::File> getObbDir() { return call_method<"getObbDir", jni::ref<java::io::File>>(); }
	jni::ref<jni::array<java::io::File>> getObbDirs() { return call_method<"getObbDirs", jni::ref<jni::array<java::io::File>>>(); }
	jni::ref<java::io::File> getCacheDir() { return call_method<"getCacheDir", jni::ref<java::io::File>>(); }
	jni::ref<java::io::File> getCodeCacheDir() { return call_method<"getCodeCacheDir", jni::ref<java::io::File>>(); }
	jni::ref<java::io::File> getExternalCacheDir() { return call_method<"getExternalCacheDir", jni::ref<java::io::File>>(); }
	jni::ref<jni::array<java::io::File>> getExternalCacheDirs() { return call_method<"getExternalCacheDirs", jni::ref<jni::array<java::io::File>>>(); }
	jni::ref<jni::array<java::io::File>> getExternalMediaDirs() { return call_method<"getExternalMediaDirs", jni::ref<jni::array<java::io::File>>>(); }
	jni::ref<java::io::File> getDir(jni::ref<java::lang::String> name, jint mode) { return call_method<"getDir", jni::ref<java::io::File>>(name, mode); }
	jni::ref<android::database::sqlite::SQLiteDatabase> openOrCreateDatabase(jni::ref<java::lang::String> name, jint mode, jni::ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory) { return call_method<"openOrCreateDatabase", jni::ref<android::database::sqlite::SQLiteDatabase>>(name, mode, factory); }
	jni::ref<android::database::sqlite::SQLiteDatabase> openOrCreateDatabase(jni::ref<java::lang::String> name, jint mode, jni::ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory, jni::ref<android::database::DatabaseErrorHandler> errorHandler) { return call_method<"openOrCreateDatabase", jni::ref<android::database::sqlite::SQLiteDatabase>>(name, mode, factory, errorHandler); }
	jboolean moveDatabaseFrom(jni::ref<android::content::Context> sourceContext, jni::ref<java::lang::String> name) { return call_method<"moveDatabaseFrom", jboolean>(sourceContext, name); }
	jboolean deleteDatabase(jni::ref<java::lang::String> name) { return call_method<"deleteDatabase", jboolean>(name); }
	jni::ref<java::io::File> getDatabasePath(jni::ref<java::lang::String> name) { return call_method<"getDatabasePath", jni::ref<java::io::File>>(name); }
	jni::ref<jni::array<java::lang::String>> databaseList() { return call_method<"databaseList", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<android::graphics::drawable::Drawable> getWallpaper() { return call_method<"getWallpaper", jni::ref<android::graphics::drawable::Drawable>>(); }
	jni::ref<android::graphics::drawable::Drawable> peekWallpaper() { return call_method<"peekWallpaper", jni::ref<android::graphics::drawable::Drawable>>(); }
	jint getWallpaperDesiredMinimumWidth() { return call_method<"getWallpaperDesiredMinimumWidth", jint>(); }
	jint getWallpaperDesiredMinimumHeight() { return call_method<"getWallpaperDesiredMinimumHeight", jint>(); }
	void setWallpaper(jni::ref<android::graphics::Bitmap> bitmap) { return call_method<"setWallpaper", void>(bitmap); }
	void setWallpaper(jni::ref<java::io::InputStream> data) { return call_method<"setWallpaper", void>(data); }
	void clearWallpaper() { return call_method<"clearWallpaper", void>(); }
	void startActivity(jni::ref<android::content::Intent> intent) { return call_method<"startActivity", void>(intent); }
	void startActivity(jni::ref<android::content::Intent> intent, jni::ref<android::os::Bundle> options) { return call_method<"startActivity", void>(intent, options); }
	void startActivities(jni::ref<jni::array<android::content::Intent>> intents) { return call_method<"startActivities", void>(intents); }
	void startActivities(jni::ref<jni::array<android::content::Intent>> intents, jni::ref<android::os::Bundle> options) { return call_method<"startActivities", void>(intents, options); }
	void startIntentSender(jni::ref<android::content::IntentSender> intent, jni::ref<android::content::Intent> fillInIntent, jint flagsMask, jint flagsValues, jint extraFlags) { return call_method<"startIntentSender", void>(intent, fillInIntent, flagsMask, flagsValues, extraFlags); }
	void startIntentSender(jni::ref<android::content::IntentSender> intent, jni::ref<android::content::Intent> fillInIntent, jint flagsMask, jint flagsValues, jint extraFlags, jni::ref<android::os::Bundle> options) { return call_method<"startIntentSender", void>(intent, fillInIntent, flagsMask, flagsValues, extraFlags, options); }
	void sendBroadcast(jni::ref<android::content::Intent> intent) { return call_method<"sendBroadcast", void>(intent); }
	void sendBroadcast(jni::ref<android::content::Intent> intent, jni::ref<java::lang::String> receiverPermission) { return call_method<"sendBroadcast", void>(intent, receiverPermission); }
	void sendOrderedBroadcast(jni::ref<android::content::Intent> intent, jni::ref<java::lang::String> receiverPermission) { return call_method<"sendOrderedBroadcast", void>(intent, receiverPermission); }
	void sendOrderedBroadcast(jni::ref<android::content::Intent> intent, jni::ref<java::lang::String> receiverPermission, jni::ref<android::content::BroadcastReceiver> resultReceiver, jni::ref<android::os::Handler> scheduler, jint initialCode, jni::ref<java::lang::String> initialData, jni::ref<android::os::Bundle> initialExtras) { return call_method<"sendOrderedBroadcast", void>(intent, receiverPermission, resultReceiver, scheduler, initialCode, initialData, initialExtras); }
	void sendBroadcastAsUser(jni::ref<android::content::Intent> intent, jni::ref<android::os::UserHandle> user) { return call_method<"sendBroadcastAsUser", void>(intent, user); }
	void sendBroadcastAsUser(jni::ref<android::content::Intent> intent, jni::ref<android::os::UserHandle> user, jni::ref<java::lang::String> receiverPermission) { return call_method<"sendBroadcastAsUser", void>(intent, user, receiverPermission); }
	void sendOrderedBroadcastAsUser(jni::ref<android::content::Intent> intent, jni::ref<android::os::UserHandle> user, jni::ref<java::lang::String> receiverPermission, jni::ref<android::content::BroadcastReceiver> resultReceiver, jni::ref<android::os::Handler> scheduler, jint initialCode, jni::ref<java::lang::String> initialData, jni::ref<android::os::Bundle> initialExtras) { return call_method<"sendOrderedBroadcastAsUser", void>(intent, user, receiverPermission, resultReceiver, scheduler, initialCode, initialData, initialExtras); }
	void sendStickyBroadcast(jni::ref<android::content::Intent> intent) { return call_method<"sendStickyBroadcast", void>(intent); }
	void sendStickyOrderedBroadcast(jni::ref<android::content::Intent> intent, jni::ref<android::content::BroadcastReceiver> resultReceiver, jni::ref<android::os::Handler> scheduler, jint initialCode, jni::ref<java::lang::String> initialData, jni::ref<android::os::Bundle> initialExtras) { return call_method<"sendStickyOrderedBroadcast", void>(intent, resultReceiver, scheduler, initialCode, initialData, initialExtras); }
	void removeStickyBroadcast(jni::ref<android::content::Intent> intent) { return call_method<"removeStickyBroadcast", void>(intent); }
	void sendStickyBroadcastAsUser(jni::ref<android::content::Intent> intent, jni::ref<android::os::UserHandle> user) { return call_method<"sendStickyBroadcastAsUser", void>(intent, user); }
	void sendStickyOrderedBroadcastAsUser(jni::ref<android::content::Intent> intent, jni::ref<android::os::UserHandle> user, jni::ref<android::content::BroadcastReceiver> resultReceiver, jni::ref<android::os::Handler> scheduler, jint initialCode, jni::ref<java::lang::String> initialData, jni::ref<android::os::Bundle> initialExtras) { return call_method<"sendStickyOrderedBroadcastAsUser", void>(intent, user, resultReceiver, scheduler, initialCode, initialData, initialExtras); }
	void removeStickyBroadcastAsUser(jni::ref<android::content::Intent> intent, jni::ref<android::os::UserHandle> user) { return call_method<"removeStickyBroadcastAsUser", void>(intent, user); }
	jni::ref<android::content::Intent> registerReceiver(jni::ref<android::content::BroadcastReceiver> receiver, jni::ref<android::content::IntentFilter> filter) { return call_method<"registerReceiver", jni::ref<android::content::Intent>>(receiver, filter); }
	jni::ref<android::content::Intent> registerReceiver(jni::ref<android::content::BroadcastReceiver> receiver, jni::ref<android::content::IntentFilter> filter, jni::ref<java::lang::String> broadcastPermission, jni::ref<android::os::Handler> scheduler) { return call_method<"registerReceiver", jni::ref<android::content::Intent>>(receiver, filter, broadcastPermission, scheduler); }
	void unregisterReceiver(jni::ref<android::content::BroadcastReceiver> receiver) { return call_method<"unregisterReceiver", void>(receiver); }
	jni::ref<android::content::ComponentName> startService(jni::ref<android::content::Intent> service) { return call_method<"startService", jni::ref<android::content::ComponentName>>(service); }
	jboolean stopService(jni::ref<android::content::Intent> name) { return call_method<"stopService", jboolean>(name); }
	jboolean bindService(jni::ref<android::content::Intent> service, jni::ref<android::content::ServiceConnection> conn, jint flags) { return call_method<"bindService", jboolean>(service, conn, flags); }
	void unbindService(jni::ref<android::content::ServiceConnection> conn) { return call_method<"unbindService", void>(conn); }
	jboolean startInstrumentation(jni::ref<android::content::ComponentName> className, jni::ref<java::lang::String> profileFile, jni::ref<android::os::Bundle> arguments) { return call_method<"startInstrumentation", jboolean>(className, profileFile, arguments); }
	jni::ref<java::lang::Object> getSystemService(jni::ref<java::lang::String> name) { return call_method<"getSystemService", jni::ref<java::lang::Object>>(name); }
	jni::ref<java::lang::String> getSystemServiceName(jni::ref<java::lang::Class> serviceClass) { return call_method<"getSystemServiceName", jni::ref<java::lang::String>>(serviceClass); }
	jint checkPermission(jni::ref<java::lang::String> permission, jint pid, jint uid) { return call_method<"checkPermission", jint>(permission, pid, uid); }
	jint checkCallingPermission(jni::ref<java::lang::String> permission) { return call_method<"checkCallingPermission", jint>(permission); }
	jint checkCallingOrSelfPermission(jni::ref<java::lang::String> permission) { return call_method<"checkCallingOrSelfPermission", jint>(permission); }
	jint checkSelfPermission(jni::ref<java::lang::String> permission) { return call_method<"checkSelfPermission", jint>(permission); }
	void enforcePermission(jni::ref<java::lang::String> permission, jint pid, jint uid, jni::ref<java::lang::String> message) { return call_method<"enforcePermission", void>(permission, pid, uid, message); }
	void enforceCallingPermission(jni::ref<java::lang::String> permission, jni::ref<java::lang::String> message) { return call_method<"enforceCallingPermission", void>(permission, message); }
	void enforceCallingOrSelfPermission(jni::ref<java::lang::String> permission, jni::ref<java::lang::String> message) { return call_method<"enforceCallingOrSelfPermission", void>(permission, message); }
	void grantUriPermission(jni::ref<java::lang::String> toPackage, jni::ref<android::net::Uri> uri, jint modeFlags) { return call_method<"grantUriPermission", void>(toPackage, uri, modeFlags); }
	void revokeUriPermission(jni::ref<android::net::Uri> uri, jint modeFlags) { return call_method<"revokeUriPermission", void>(uri, modeFlags); }
	jint checkUriPermission(jni::ref<android::net::Uri> uri, jint pid, jint uid, jint modeFlags) { return call_method<"checkUriPermission", jint>(uri, pid, uid, modeFlags); }
	jint checkCallingUriPermission(jni::ref<android::net::Uri> uri, jint modeFlags) { return call_method<"checkCallingUriPermission", jint>(uri, modeFlags); }
	jint checkCallingOrSelfUriPermission(jni::ref<android::net::Uri> uri, jint modeFlags) { return call_method<"checkCallingOrSelfUriPermission", jint>(uri, modeFlags); }
	jint checkUriPermission(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> readPermission, jni::ref<java::lang::String> writePermission, jint pid, jint uid, jint modeFlags) { return call_method<"checkUriPermission", jint>(uri, readPermission, writePermission, pid, uid, modeFlags); }
	void enforceUriPermission(jni::ref<android::net::Uri> uri, jint pid, jint uid, jint modeFlags, jni::ref<java::lang::String> message) { return call_method<"enforceUriPermission", void>(uri, pid, uid, modeFlags, message); }
	void enforceCallingUriPermission(jni::ref<android::net::Uri> uri, jint modeFlags, jni::ref<java::lang::String> message) { return call_method<"enforceCallingUriPermission", void>(uri, modeFlags, message); }
	void enforceCallingOrSelfUriPermission(jni::ref<android::net::Uri> uri, jint modeFlags, jni::ref<java::lang::String> message) { return call_method<"enforceCallingOrSelfUriPermission", void>(uri, modeFlags, message); }
	void enforceUriPermission(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> readPermission, jni::ref<java::lang::String> writePermission, jint pid, jint uid, jint modeFlags, jni::ref<java::lang::String> message) { return call_method<"enforceUriPermission", void>(uri, readPermission, writePermission, pid, uid, modeFlags, message); }
	jni::ref<android::content::Context> createPackageContext(jni::ref<java::lang::String> packageName, jint flags) { return call_method<"createPackageContext", jni::ref<android::content::Context>>(packageName, flags); }
	jni::ref<android::content::Context> createConfigurationContext(jni::ref<android::content::res::Configuration> overrideConfiguration) { return call_method<"createConfigurationContext", jni::ref<android::content::Context>>(overrideConfiguration); }
	jni::ref<android::content::Context> createDisplayContext(jni::ref<android::view::Display> display) { return call_method<"createDisplayContext", jni::ref<android::content::Context>>(display); }
	jboolean isRestricted() { return call_method<"isRestricted", jboolean>(); }
	jni::ref<android::content::Context> createDeviceProtectedStorageContext() { return call_method<"createDeviceProtectedStorageContext", jni::ref<android::content::Context>>(); }
	jboolean isDeviceProtectedStorage() { return call_method<"isDeviceProtectedStorage", jboolean>(); }

protected:

	ContextWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_CONTEXTWRAPPER
