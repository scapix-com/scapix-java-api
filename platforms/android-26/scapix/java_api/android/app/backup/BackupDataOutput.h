// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_BACKUP_BACKUPDATAOUTPUT_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_BACKUP_BACKUPDATAOUTPUT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::backup { class BackupDataOutput; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::backup::BackupDataOutput>
{
	static constexpr fixed_string class_name = "android/app/backup/BackupDataOutput";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_BACKUP_BACKUPDATAOUTPUT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_BACKUP_BACKUPDATAOUTPUT)
#define SCAPIX_JAVA_API_ANDROID_APP_BACKUP_BACKUPDATAOUTPUT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::backup::BackupDataOutput : public jni::object_base<"android/app/backup/BackupDataOutput",
	java::lang::Object>
{
public:

	jlong getQuota() { return call_method<"getQuota", jlong>(); }
	jint writeEntityHeader(jni::ref<java::lang::String> key, jint dataSize) { return call_method<"writeEntityHeader", jint>(key, dataSize); }
	jint writeEntityData(jni::ref<jni::array<jbyte>> data, jint size) { return call_method<"writeEntityData", jint>(data, size); }

protected:

	BackupDataOutput(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_BACKUP_BACKUPDATAOUTPUT
