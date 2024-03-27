// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/database/sqlite/SQLiteClosable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEDATABASE_FWD
#define SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEDATABASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::database::sqlite { class SQLiteDatabase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::database::sqlite::SQLiteDatabase>
{
	static constexpr fixed_string class_name = "android/database/sqlite/SQLiteDatabase";
	using base_classes = std::tuple<scapix::java_api::android::database::sqlite::SQLiteClosable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEDATABASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEDATABASE)
#define SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEDATABASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ContentValues.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/database/DatabaseErrorHandler.h>
#include <scapix/java_api/android/database/sqlite/SQLiteDatabase_CursorFactory.h>
#include <scapix/java_api/android/database/sqlite/SQLiteStatement.h>
#include <scapix/java_api/android/database/sqlite/SQLiteTransactionListener.h>
#include <scapix/java_api/android/os/CancellationSignal.h>
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::database::sqlite::SQLiteDatabase : public jni::object_base<"android/database/sqlite/SQLiteDatabase",
	android::database::sqlite::SQLiteClosable>
{
public:

	using CursorFactory = SQLiteDatabase_CursorFactory;

	static jint CONFLICT_ABORT() { return get_static_field<"CONFLICT_ABORT", jint>(); }
	static jint CONFLICT_FAIL() { return get_static_field<"CONFLICT_FAIL", jint>(); }
	static jint CONFLICT_IGNORE() { return get_static_field<"CONFLICT_IGNORE", jint>(); }
	static jint CONFLICT_NONE() { return get_static_field<"CONFLICT_NONE", jint>(); }
	static jint CONFLICT_REPLACE() { return get_static_field<"CONFLICT_REPLACE", jint>(); }
	static jint CONFLICT_ROLLBACK() { return get_static_field<"CONFLICT_ROLLBACK", jint>(); }
	static jint CREATE_IF_NECESSARY() { return get_static_field<"CREATE_IF_NECESSARY", jint>(); }
	static jint ENABLE_WRITE_AHEAD_LOGGING() { return get_static_field<"ENABLE_WRITE_AHEAD_LOGGING", jint>(); }
	static jint MAX_SQL_CACHE_SIZE() { return get_static_field<"MAX_SQL_CACHE_SIZE", jint>(); }
	static jint NO_LOCALIZED_COLLATORS() { return get_static_field<"NO_LOCALIZED_COLLATORS", jint>(); }
	static jint OPEN_READONLY() { return get_static_field<"OPEN_READONLY", jint>(); }
	static jint OPEN_READWRITE() { return get_static_field<"OPEN_READWRITE", jint>(); }
	static jint SQLITE_MAX_LIKE_PATTERN_LENGTH() { return get_static_field<"SQLITE_MAX_LIKE_PATTERN_LENGTH", jint>(); }

	static jint releaseMemory() { return call_static_method<"releaseMemory", jint>(); }
	void setLockingEnabled(jboolean lockingEnabled) { return call_method<"setLockingEnabled", void>(lockingEnabled); }
	void beginTransaction() { return call_method<"beginTransaction", void>(); }
	void beginTransactionNonExclusive() { return call_method<"beginTransactionNonExclusive", void>(); }
	void beginTransactionWithListener(jni::ref<android::database::sqlite::SQLiteTransactionListener> transactionListener) { return call_method<"beginTransactionWithListener", void>(transactionListener); }
	void beginTransactionWithListenerNonExclusive(jni::ref<android::database::sqlite::SQLiteTransactionListener> transactionListener) { return call_method<"beginTransactionWithListenerNonExclusive", void>(transactionListener); }
	void endTransaction() { return call_method<"endTransaction", void>(); }
	void setTransactionSuccessful() { return call_method<"setTransactionSuccessful", void>(); }
	jboolean inTransaction() { return call_method<"inTransaction", jboolean>(); }
	jboolean isDbLockedByCurrentThread() { return call_method<"isDbLockedByCurrentThread", jboolean>(); }
	jboolean isDbLockedByOtherThreads() { return call_method<"isDbLockedByOtherThreads", jboolean>(); }
	jboolean yieldIfContended() { return call_method<"yieldIfContended", jboolean>(); }
	jboolean yieldIfContendedSafely() { return call_method<"yieldIfContendedSafely", jboolean>(); }
	jboolean yieldIfContendedSafely(jlong sleepAfterYieldDelay) { return call_method<"yieldIfContendedSafely", jboolean>(sleepAfterYieldDelay); }
	jni::ref<java::util::Map> getSyncedTables() { return call_method<"getSyncedTables", jni::ref<java::util::Map>>(); }
	static jni::ref<android::database::sqlite::SQLiteDatabase> openDatabase(jni::ref<java::lang::String> path, jni::ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory, jint flags) { return call_static_method<"openDatabase", jni::ref<android::database::sqlite::SQLiteDatabase>>(path, factory, flags); }
	static jni::ref<android::database::sqlite::SQLiteDatabase> openDatabase(jni::ref<java::lang::String> path, jni::ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory, jint flags, jni::ref<android::database::DatabaseErrorHandler> errorHandler) { return call_static_method<"openDatabase", jni::ref<android::database::sqlite::SQLiteDatabase>>(path, factory, flags, errorHandler); }
	static jni::ref<android::database::sqlite::SQLiteDatabase> openOrCreateDatabase(jni::ref<java::io::File> file, jni::ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory) { return call_static_method<"openOrCreateDatabase", jni::ref<android::database::sqlite::SQLiteDatabase>>(file, factory); }
	static jni::ref<android::database::sqlite::SQLiteDatabase> openOrCreateDatabase(jni::ref<java::lang::String> path, jni::ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory) { return call_static_method<"openOrCreateDatabase", jni::ref<android::database::sqlite::SQLiteDatabase>>(path, factory); }
	static jni::ref<android::database::sqlite::SQLiteDatabase> openOrCreateDatabase(jni::ref<java::lang::String> path, jni::ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory, jni::ref<android::database::DatabaseErrorHandler> errorHandler) { return call_static_method<"openOrCreateDatabase", jni::ref<android::database::sqlite::SQLiteDatabase>>(path, factory, errorHandler); }
	static jboolean deleteDatabase(jni::ref<java::io::File> file) { return call_static_method<"deleteDatabase", jboolean>(file); }
	static jni::ref<android::database::sqlite::SQLiteDatabase> create(jni::ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory) { return call_static_method<"create", jni::ref<android::database::sqlite::SQLiteDatabase>>(factory); }
	jint getVersion() { return call_method<"getVersion", jint>(); }
	void setVersion(jint version) { return call_method<"setVersion", void>(version); }
	jlong getMaximumSize() { return call_method<"getMaximumSize", jlong>(); }
	jlong setMaximumSize(jlong numBytes) { return call_method<"setMaximumSize", jlong>(numBytes); }
	jlong getPageSize() { return call_method<"getPageSize", jlong>(); }
	void setPageSize(jlong numBytes) { return call_method<"setPageSize", void>(numBytes); }
	void markTableSyncable(jni::ref<java::lang::String> table, jni::ref<java::lang::String> deletedTable) { return call_method<"markTableSyncable", void>(table, deletedTable); }
	void markTableSyncable(jni::ref<java::lang::String> table, jni::ref<java::lang::String> foreignKey, jni::ref<java::lang::String> updateTable) { return call_method<"markTableSyncable", void>(table, foreignKey, updateTable); }
	static jni::ref<java::lang::String> findEditTable(jni::ref<java::lang::String> tables) { return call_static_method<"findEditTable", jni::ref<java::lang::String>>(tables); }
	jni::ref<android::database::sqlite::SQLiteStatement> compileStatement(jni::ref<java::lang::String> sql) { return call_method<"compileStatement", jni::ref<android::database::sqlite::SQLiteStatement>>(sql); }
	jni::ref<android::database::Cursor> query(jboolean distinct, jni::ref<java::lang::String> table, jni::ref<jni::array<java::lang::String>> columns, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> groupBy, jni::ref<java::lang::String> having, jni::ref<java::lang::String> orderBy, jni::ref<java::lang::String> limit) { return call_method<"query", jni::ref<android::database::Cursor>>(distinct, table, columns, selection, selectionArgs, groupBy, having, orderBy, limit); }
	jni::ref<android::database::Cursor> query(jboolean distinct, jni::ref<java::lang::String> table, jni::ref<jni::array<java::lang::String>> columns, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> groupBy, jni::ref<java::lang::String> having, jni::ref<java::lang::String> orderBy, jni::ref<java::lang::String> limit, jni::ref<android::os::CancellationSignal> cancellationSignal) { return call_method<"query", jni::ref<android::database::Cursor>>(distinct, table, columns, selection, selectionArgs, groupBy, having, orderBy, limit, cancellationSignal); }
	jni::ref<android::database::Cursor> queryWithFactory(jni::ref<android::database::sqlite::SQLiteDatabase_CursorFactory> cursorFactory, jboolean distinct, jni::ref<java::lang::String> table, jni::ref<jni::array<java::lang::String>> columns, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> groupBy, jni::ref<java::lang::String> having, jni::ref<java::lang::String> orderBy, jni::ref<java::lang::String> limit) { return call_method<"queryWithFactory", jni::ref<android::database::Cursor>>(cursorFactory, distinct, table, columns, selection, selectionArgs, groupBy, having, orderBy, limit); }
	jni::ref<android::database::Cursor> queryWithFactory(jni::ref<android::database::sqlite::SQLiteDatabase_CursorFactory> cursorFactory, jboolean distinct, jni::ref<java::lang::String> table, jni::ref<jni::array<java::lang::String>> columns, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> groupBy, jni::ref<java::lang::String> having, jni::ref<java::lang::String> orderBy, jni::ref<java::lang::String> limit, jni::ref<android::os::CancellationSignal> cancellationSignal) { return call_method<"queryWithFactory", jni::ref<android::database::Cursor>>(cursorFactory, distinct, table, columns, selection, selectionArgs, groupBy, having, orderBy, limit, cancellationSignal); }
	jni::ref<android::database::Cursor> query(jni::ref<java::lang::String> table, jni::ref<jni::array<java::lang::String>> columns, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> groupBy, jni::ref<java::lang::String> having, jni::ref<java::lang::String> orderBy) { return call_method<"query", jni::ref<android::database::Cursor>>(table, columns, selection, selectionArgs, groupBy, having, orderBy); }
	jni::ref<android::database::Cursor> query(jni::ref<java::lang::String> table, jni::ref<jni::array<java::lang::String>> columns, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> groupBy, jni::ref<java::lang::String> having, jni::ref<java::lang::String> orderBy, jni::ref<java::lang::String> limit) { return call_method<"query", jni::ref<android::database::Cursor>>(table, columns, selection, selectionArgs, groupBy, having, orderBy, limit); }
	jni::ref<android::database::Cursor> rawQuery(jni::ref<java::lang::String> sql, jni::ref<jni::array<java::lang::String>> selectionArgs) { return call_method<"rawQuery", jni::ref<android::database::Cursor>>(sql, selectionArgs); }
	jni::ref<android::database::Cursor> rawQuery(jni::ref<java::lang::String> sql, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<android::os::CancellationSignal> cancellationSignal) { return call_method<"rawQuery", jni::ref<android::database::Cursor>>(sql, selectionArgs, cancellationSignal); }
	jni::ref<android::database::Cursor> rawQueryWithFactory(jni::ref<android::database::sqlite::SQLiteDatabase_CursorFactory> cursorFactory, jni::ref<java::lang::String> sql, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> editTable) { return call_method<"rawQueryWithFactory", jni::ref<android::database::Cursor>>(cursorFactory, sql, selectionArgs, editTable); }
	jni::ref<android::database::Cursor> rawQueryWithFactory(jni::ref<android::database::sqlite::SQLiteDatabase_CursorFactory> cursorFactory, jni::ref<java::lang::String> sql, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> editTable, jni::ref<android::os::CancellationSignal> cancellationSignal) { return call_method<"rawQueryWithFactory", jni::ref<android::database::Cursor>>(cursorFactory, sql, selectionArgs, editTable, cancellationSignal); }
	jlong insert(jni::ref<java::lang::String> table, jni::ref<java::lang::String> nullColumnHack, jni::ref<android::content::ContentValues> values) { return call_method<"insert", jlong>(table, nullColumnHack, values); }
	jlong insertOrThrow(jni::ref<java::lang::String> table, jni::ref<java::lang::String> nullColumnHack, jni::ref<android::content::ContentValues> values) { return call_method<"insertOrThrow", jlong>(table, nullColumnHack, values); }
	jlong replace(jni::ref<java::lang::String> table, jni::ref<java::lang::String> nullColumnHack, jni::ref<android::content::ContentValues> initialValues) { return call_method<"replace", jlong>(table, nullColumnHack, initialValues); }
	jlong replaceOrThrow(jni::ref<java::lang::String> table, jni::ref<java::lang::String> nullColumnHack, jni::ref<android::content::ContentValues> initialValues) { return call_method<"replaceOrThrow", jlong>(table, nullColumnHack, initialValues); }
	jlong insertWithOnConflict(jni::ref<java::lang::String> table, jni::ref<java::lang::String> nullColumnHack, jni::ref<android::content::ContentValues> initialValues, jint conflictAlgorithm) { return call_method<"insertWithOnConflict", jlong>(table, nullColumnHack, initialValues, conflictAlgorithm); }
	jint delete_(jni::ref<java::lang::String> table, jni::ref<java::lang::String> whereClause, jni::ref<jni::array<java::lang::String>> whereArgs) { return call_method<"delete", jint>(table, whereClause, whereArgs); }
	jint update(jni::ref<java::lang::String> table, jni::ref<android::content::ContentValues> values, jni::ref<java::lang::String> whereClause, jni::ref<jni::array<java::lang::String>> whereArgs) { return call_method<"update", jint>(table, values, whereClause, whereArgs); }
	jint updateWithOnConflict(jni::ref<java::lang::String> table, jni::ref<android::content::ContentValues> values, jni::ref<java::lang::String> whereClause, jni::ref<jni::array<java::lang::String>> whereArgs, jint conflictAlgorithm) { return call_method<"updateWithOnConflict", jint>(table, values, whereClause, whereArgs, conflictAlgorithm); }
	void execSQL(jni::ref<java::lang::String> sql) { return call_method<"execSQL", void>(sql); }
	void execSQL(jni::ref<java::lang::String> sql, jni::ref<jni::array<java::lang::Object>> bindArgs) { return call_method<"execSQL", void>(sql, bindArgs); }
	void validateSql(jni::ref<java::lang::String> sql, jni::ref<android::os::CancellationSignal> cancellationSignal) { return call_method<"validateSql", void>(sql, cancellationSignal); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jboolean isOpen() { return call_method<"isOpen", jboolean>(); }
	jboolean needUpgrade(jint newVersion) { return call_method<"needUpgrade", jboolean>(newVersion); }
	jni::ref<java::lang::String> getPath() { return call_method<"getPath", jni::ref<java::lang::String>>(); }
	void setLocale(jni::ref<java::util::Locale> locale) { return call_method<"setLocale", void>(locale); }
	void setMaxSqlCacheSize(jint cacheSize) { return call_method<"setMaxSqlCacheSize", void>(cacheSize); }
	void setForeignKeyConstraintsEnabled(jboolean enable) { return call_method<"setForeignKeyConstraintsEnabled", void>(enable); }
	jboolean enableWriteAheadLogging() { return call_method<"enableWriteAheadLogging", jboolean>(); }
	void disableWriteAheadLogging() { return call_method<"disableWriteAheadLogging", void>(); }
	jboolean isWriteAheadLoggingEnabled() { return call_method<"isWriteAheadLoggingEnabled", jboolean>(); }
	jni::ref<java::util::List> getAttachedDbs() { return call_method<"getAttachedDbs", jni::ref<java::util::List>>(); }
	jboolean isDatabaseIntegrityOk() { return call_method<"isDatabaseIntegrityOk", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	SQLiteDatabase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEDATABASE
