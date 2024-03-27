// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/app/backup/BackupHelper.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_BACKUP_FILEBACKUPHELPER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_BACKUP_FILEBACKUPHELPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::backup { class FileBackupHelper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::backup::FileBackupHelper>
{
	static constexpr fixed_string class_name = "android/app/backup/FileBackupHelper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::app::backup::BackupHelper>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_BACKUP_FILEBACKUPHELPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_BACKUP_FILEBACKUPHELPER)
#define SCAPIX_JAVA_API_ANDROID_APP_BACKUP_FILEBACKUPHELPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/backup/BackupDataInputStream.h>
#include <scapix/java_api/android/app/backup/BackupDataOutput.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::backup::FileBackupHelper : public jni::object_base<"android/app/backup/FileBackupHelper",
	java::lang::Object,
	android::app::backup::BackupHelper>
{
public:

	static jni::ref<android::app::backup::FileBackupHelper> new_object(jni::ref<android::content::Context> context, jni::ref<jni::array<java::lang::String>> files) { return base_::new_object(context, files); }
	void performBackup(jni::ref<android::os::ParcelFileDescriptor> oldState, jni::ref<android::app::backup::BackupDataOutput> data, jni::ref<android::os::ParcelFileDescriptor> newState) { return call_method<"performBackup", void>(oldState, data, newState); }
	void restoreEntity(jni::ref<android::app::backup::BackupDataInputStream> data) { return call_method<"restoreEntity", void>(data); }
	void writeNewStateDescription(jni::ref<android::os::ParcelFileDescriptor> fd) { return call_method<"writeNewStateDescription", void>(fd); }

protected:

	FileBackupHelper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_BACKUP_FILEBACKUPHELPER
