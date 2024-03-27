// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/content/ContextWrapper.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_BACKUP_BACKUPAGENT_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_BACKUP_BACKUPAGENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::backup { class BackupAgent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::backup::BackupAgent>
{
	static constexpr fixed_string class_name = "android/app/backup/BackupAgent";
	using base_classes = std::tuple<scapix::java_api::android::content::ContextWrapper>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_BACKUP_BACKUPAGENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_BACKUP_BACKUPAGENT)
#define SCAPIX_JAVA_API_ANDROID_APP_BACKUP_BACKUPAGENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/backup/BackupDataInput.h>
#include <scapix/java_api/android/app/backup/BackupDataOutput.h>
#include <scapix/java_api/android/app/backup/FullBackupDataOutput.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor.h>
#include <scapix/java_api/java/io/File.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::backup::BackupAgent : public jni::object_base<"android/app/backup/BackupAgent",
	android::content::ContextWrapper>
{
public:

	static jint FLAG_CLIENT_SIDE_ENCRYPTION_ENABLED() { return get_static_field<"FLAG_CLIENT_SIDE_ENCRYPTION_ENABLED", jint>(); }
	static jint FLAG_DEVICE_TO_DEVICE_TRANSFER() { return get_static_field<"FLAG_DEVICE_TO_DEVICE_TRANSFER", jint>(); }
	static jint TYPE_DIRECTORY() { return get_static_field<"TYPE_DIRECTORY", jint>(); }
	static jint TYPE_FILE() { return get_static_field<"TYPE_FILE", jint>(); }

	static jni::ref<android::app::backup::BackupAgent> new_object() { return base_::new_object(); }
	void onCreate() { return call_method<"onCreate", void>(); }
	void onDestroy() { return call_method<"onDestroy", void>(); }
	void onBackup(jni::ref<android::os::ParcelFileDescriptor> p1, jni::ref<android::app::backup::BackupDataOutput> p2, jni::ref<android::os::ParcelFileDescriptor> p3) { return call_method<"onBackup", void>(p1, p2, p3); }
	void onRestore(jni::ref<android::app::backup::BackupDataInput> p1, jint p2, jni::ref<android::os::ParcelFileDescriptor> p3) { return call_method<"onRestore", void>(p1, p2, p3); }
	void onRestore(jni::ref<android::app::backup::BackupDataInput> data, jlong appVersionCode, jni::ref<android::os::ParcelFileDescriptor> p3) { return call_method<"onRestore", void>(data, appVersionCode, p3); }
	void onFullBackup(jni::ref<android::app::backup::FullBackupDataOutput> data) { return call_method<"onFullBackup", void>(data); }
	void onQuotaExceeded(jlong backupDataBytes, jlong p2) { return call_method<"onQuotaExceeded", void>(backupDataBytes, p2); }
	void fullBackupFile(jni::ref<java::io::File> file, jni::ref<android::app::backup::FullBackupDataOutput> output) { return call_method<"fullBackupFile", void>(file, output); }
	void onRestoreFile(jni::ref<android::os::ParcelFileDescriptor> data, jlong size, jni::ref<java::io::File> p3, jint destination, jlong type, jlong mode) { return call_method<"onRestoreFile", void>(data, size, p3, destination, type, mode); }
	void onRestoreFinished() { return call_method<"onRestoreFinished", void>(); }

protected:

	BackupAgent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_BACKUP_BACKUPAGENT
