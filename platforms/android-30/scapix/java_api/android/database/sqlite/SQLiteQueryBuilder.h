// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEQUERYBUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEQUERYBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::database::sqlite { class SQLiteQueryBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::database::sqlite::SQLiteQueryBuilder>
{
	static constexpr fixed_string class_name = "android/database/sqlite/SQLiteQueryBuilder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEQUERYBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEQUERYBUILDER)
#define SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEQUERYBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ContentValues.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/database/sqlite/SQLiteDatabase.h>
#include <scapix/java_api/android/database/sqlite/SQLiteDatabase_CursorFactory.h>
#include <scapix/java_api/android/os/CancellationSignal.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuilder.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::database::sqlite::SQLiteQueryBuilder : public jni::object_base<"android/database/sqlite/SQLiteQueryBuilder",
	java::lang::Object>
{
public:

	static jni::ref<android::database::sqlite::SQLiteQueryBuilder> new_object() { return base_::new_object(); }
	void setDistinct(jboolean distinct) { return call_method<"setDistinct", void>(distinct); }
	jboolean isDistinct() { return call_method<"isDistinct", jboolean>(); }
	jni::ref<java::lang::String> getTables() { return call_method<"getTables", jni::ref<java::lang::String>>(); }
	void setTables(jni::ref<java::lang::String> inTables) { return call_method<"setTables", void>(inTables); }
	void appendWhere(jni::ref<java::lang::CharSequence> inWhere) { return call_method<"appendWhere", void>(inWhere); }
	void appendWhereEscapeString(jni::ref<java::lang::String> inWhere) { return call_method<"appendWhereEscapeString", void>(inWhere); }
	void appendWhereStandalone(jni::ref<java::lang::CharSequence> inWhere) { return call_method<"appendWhereStandalone", void>(inWhere); }
	void setProjectionMap(jni::ref<java::util::Map> columnMap) { return call_method<"setProjectionMap", void>(columnMap); }
	jni::ref<java::util::Map> getProjectionMap() { return call_method<"getProjectionMap", jni::ref<java::util::Map>>(); }
	void setProjectionGreylist(jni::ref<java::util::Collection> projectionGreylist) { return call_method<"setProjectionGreylist", void>(projectionGreylist); }
	jni::ref<java::util::Collection> getProjectionGreylist() { return call_method<"getProjectionGreylist", jni::ref<java::util::Collection>>(); }
	void setCursorFactory(jni::ref<android::database::sqlite::SQLiteDatabase_CursorFactory> factory) { return call_method<"setCursorFactory", void>(factory); }
	jni::ref<android::database::sqlite::SQLiteDatabase_CursorFactory> getCursorFactory() { return call_method<"getCursorFactory", jni::ref<android::database::sqlite::SQLiteDatabase_CursorFactory>>(); }
	void setStrict(jboolean strict) { return call_method<"setStrict", void>(strict); }
	jboolean isStrict() { return call_method<"isStrict", jboolean>(); }
	void setStrictColumns(jboolean strictColumns) { return call_method<"setStrictColumns", void>(strictColumns); }
	jboolean isStrictColumns() { return call_method<"isStrictColumns", jboolean>(); }
	void setStrictGrammar(jboolean strictGrammar) { return call_method<"setStrictGrammar", void>(strictGrammar); }
	jboolean isStrictGrammar() { return call_method<"isStrictGrammar", jboolean>(); }
	static jni::ref<java::lang::String> buildQueryString(jboolean distinct, jni::ref<java::lang::String> tables, jni::ref<jni::array<java::lang::String>> columns, jni::ref<java::lang::String> where, jni::ref<java::lang::String> groupBy, jni::ref<java::lang::String> having, jni::ref<java::lang::String> orderBy, jni::ref<java::lang::String> limit) { return call_static_method<"buildQueryString", jni::ref<java::lang::String>>(distinct, tables, columns, where, groupBy, having, orderBy, limit); }
	static void appendColumns(jni::ref<java::lang::StringBuilder> s, jni::ref<jni::array<java::lang::String>> columns) { return call_static_method<"appendColumns", void>(s, columns); }
	jni::ref<android::database::Cursor> query(jni::ref<android::database::sqlite::SQLiteDatabase> db, jni::ref<jni::array<java::lang::String>> projectionIn, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> groupBy, jni::ref<java::lang::String> having, jni::ref<java::lang::String> sortOrder) { return call_method<"query", jni::ref<android::database::Cursor>>(db, projectionIn, selection, selectionArgs, groupBy, having, sortOrder); }
	jni::ref<android::database::Cursor> query(jni::ref<android::database::sqlite::SQLiteDatabase> db, jni::ref<jni::array<java::lang::String>> projectionIn, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> groupBy, jni::ref<java::lang::String> having, jni::ref<java::lang::String> sortOrder, jni::ref<java::lang::String> limit) { return call_method<"query", jni::ref<android::database::Cursor>>(db, projectionIn, selection, selectionArgs, groupBy, having, sortOrder, limit); }
	jni::ref<android::database::Cursor> query(jni::ref<android::database::sqlite::SQLiteDatabase> db, jni::ref<jni::array<java::lang::String>> projectionIn, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> groupBy, jni::ref<java::lang::String> having, jni::ref<java::lang::String> sortOrder, jni::ref<java::lang::String> limit, jni::ref<android::os::CancellationSignal> cancellationSignal) { return call_method<"query", jni::ref<android::database::Cursor>>(db, projectionIn, selection, selectionArgs, groupBy, having, sortOrder, limit, cancellationSignal); }
	jlong insert(jni::ref<android::database::sqlite::SQLiteDatabase> db, jni::ref<android::content::ContentValues> values) { return call_method<"insert", jlong>(db, values); }
	jint update(jni::ref<android::database::sqlite::SQLiteDatabase> db, jni::ref<android::content::ContentValues> values, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs) { return call_method<"update", jint>(db, values, selection, selectionArgs); }
	jint delete_(jni::ref<android::database::sqlite::SQLiteDatabase> db, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs) { return call_method<"delete", jint>(db, selection, selectionArgs); }
	jni::ref<java::lang::String> buildQuery(jni::ref<jni::array<java::lang::String>> projectionIn, jni::ref<java::lang::String> selection, jni::ref<java::lang::String> groupBy, jni::ref<java::lang::String> having, jni::ref<java::lang::String> sortOrder, jni::ref<java::lang::String> limit) { return call_method<"buildQuery", jni::ref<java::lang::String>>(projectionIn, selection, groupBy, having, sortOrder, limit); }
	jni::ref<java::lang::String> buildQuery(jni::ref<jni::array<java::lang::String>> projectionIn, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> groupBy, jni::ref<java::lang::String> having, jni::ref<java::lang::String> sortOrder, jni::ref<java::lang::String> limit) { return call_method<"buildQuery", jni::ref<java::lang::String>>(projectionIn, selection, selectionArgs, groupBy, having, sortOrder, limit); }
	jni::ref<java::lang::String> buildUnionSubQuery(jni::ref<java::lang::String> typeDiscriminatorColumn, jni::ref<jni::array<java::lang::String>> unionColumns, jni::ref<java::util::Set> columnsPresentInTable, jint computedColumnsOffset, jni::ref<java::lang::String> typeDiscriminatorValue, jni::ref<java::lang::String> selection, jni::ref<java::lang::String> groupBy, jni::ref<java::lang::String> having) { return call_method<"buildUnionSubQuery", jni::ref<java::lang::String>>(typeDiscriminatorColumn, unionColumns, columnsPresentInTable, computedColumnsOffset, typeDiscriminatorValue, selection, groupBy, having); }
	jni::ref<java::lang::String> buildUnionSubQuery(jni::ref<java::lang::String> typeDiscriminatorColumn, jni::ref<jni::array<java::lang::String>> unionColumns, jni::ref<java::util::Set> columnsPresentInTable, jint computedColumnsOffset, jni::ref<java::lang::String> typeDiscriminatorValue, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> groupBy, jni::ref<java::lang::String> having) { return call_method<"buildUnionSubQuery", jni::ref<java::lang::String>>(typeDiscriminatorColumn, unionColumns, columnsPresentInTable, computedColumnsOffset, typeDiscriminatorValue, selection, selectionArgs, groupBy, having); }
	jni::ref<java::lang::String> buildUnionQuery(jni::ref<jni::array<java::lang::String>> subQueries, jni::ref<java::lang::String> sortOrder, jni::ref<java::lang::String> limit) { return call_method<"buildUnionQuery", jni::ref<java::lang::String>>(subQueries, sortOrder, limit); }

protected:

	SQLiteQueryBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEQUERYBUILDER
