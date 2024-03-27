// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEOPENHELPER_FWD
#define SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEOPENHELPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::database::sqlite { class SQLiteOpenHelper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::database::sqlite::SQLiteOpenHelper>
{
	static constexpr fixed_string class_name = "android/database/sqlite/SQLiteOpenHelper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEOPENHELPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEOPENHELPER)
#define SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEOPENHELPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/database/DatabaseErrorHandler.h>
#include <scapix/java_api/android/database/sqlite/SQLiteDatabase.h>
#include <scapix/java_api/android/database/sqlite/SQLiteDatabase_CursorFactory.h>
#include <scapix/java_api/android/database/sqlite/SQLiteDatabase_OpenParams.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::database::sqlite::SQLiteOpenHelper : public jni::object_base<"android/database/sqlite/SQLiteOpenHelper",
	java::lang::Object>
{
public:

	static jni::ref<android::database::sqlite::SQLiteOpenHelper> new_object(jni::ref<android::content::Context> context, jni::ref<java::lang::String> name, jni::ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory, jint version) { return base_::new_object(context, name, factory, version); }
	static jni::ref<android::database::sqlite::SQLiteOpenHelper> new_object(jni::ref<android::content::Context> context, jni::ref<java::lang::String> name, jni::ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory, jint version, jni::ref<android::database::DatabaseErrorHandler> errorHandler) { return base_::new_object(context, name, factory, version, errorHandler); }
	static jni::ref<android::database::sqlite::SQLiteOpenHelper> new_object(jni::ref<android::content::Context> context, jni::ref<java::lang::String> name, jint version, jni::ref<android::database::sqlite::SQLiteDatabase_OpenParams> openParams) { return base_::new_object(context, name, version, openParams); }
	jni::ref<java::lang::String> getDatabaseName() { return call_method<"getDatabaseName", jni::ref<java::lang::String>>(); }
	void setWriteAheadLoggingEnabled(jboolean enabled) { return call_method<"setWriteAheadLoggingEnabled", void>(enabled); }
	void setLookasideConfig(jint slotSize, jint slotCount) { return call_method<"setLookasideConfig", void>(slotSize, slotCount); }
	void setOpenParams(jni::ref<android::database::sqlite::SQLiteDatabase_OpenParams> openParams) { return call_method<"setOpenParams", void>(openParams); }
	void setIdleConnectionTimeout(jlong idleConnectionTimeoutMs) { return call_method<"setIdleConnectionTimeout", void>(idleConnectionTimeoutMs); }
	jni::ref<android::database::sqlite::SQLiteDatabase> getWritableDatabase() { return call_method<"getWritableDatabase", jni::ref<android::database::sqlite::SQLiteDatabase>>(); }
	jni::ref<android::database::sqlite::SQLiteDatabase> getReadableDatabase() { return call_method<"getReadableDatabase", jni::ref<android::database::sqlite::SQLiteDatabase>>(); }
	void close() { return call_method<"close", void>(); }
	void onConfigure(jni::ref<android::database::sqlite::SQLiteDatabase> db) { return call_method<"onConfigure", void>(db); }
	void onCreate(jni::ref<android::database::sqlite::SQLiteDatabase> p1) { return call_method<"onCreate", void>(p1); }
	void onUpgrade(jni::ref<android::database::sqlite::SQLiteDatabase> p1, jint p2, jint p3) { return call_method<"onUpgrade", void>(p1, p2, p3); }
	void onDowngrade(jni::ref<android::database::sqlite::SQLiteDatabase> db, jint oldVersion, jint newVersion) { return call_method<"onDowngrade", void>(db, oldVersion, newVersion); }
	void onOpen(jni::ref<android::database::sqlite::SQLiteDatabase> db) { return call_method<"onOpen", void>(db); }

protected:

	SQLiteOpenHelper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEOPENHELPER