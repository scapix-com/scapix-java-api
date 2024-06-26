// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/database/sqlite/SQLiteProgram.h>

#ifndef SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITESTATEMENT_FWD
#define SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITESTATEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::database::sqlite { class SQLiteStatement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::database::sqlite::SQLiteStatement>
{
	static constexpr fixed_string class_name = "android/database/sqlite/SQLiteStatement";
	using base_classes = std::tuple<scapix::java_api::android::database::sqlite::SQLiteProgram>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITESTATEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITESTATEMENT)
#define SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITESTATEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/ParcelFileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::database::sqlite::SQLiteStatement : public jni::object_base<"android/database/sqlite/SQLiteStatement",
	android::database::sqlite::SQLiteProgram>
{
public:

	void execute() { return call_method<"execute", void>(); }
	jint executeUpdateDelete() { return call_method<"executeUpdateDelete", jint>(); }
	jlong executeInsert() { return call_method<"executeInsert", jlong>(); }
	jlong simpleQueryForLong() { return call_method<"simpleQueryForLong", jlong>(); }
	jni::ref<java::lang::String> simpleQueryForString() { return call_method<"simpleQueryForString", jni::ref<java::lang::String>>(); }
	jni::ref<android::os::ParcelFileDescriptor> simpleQueryForBlobFileDescriptor() { return call_method<"simpleQueryForBlobFileDescriptor", jni::ref<android::os::ParcelFileDescriptor>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	SQLiteStatement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITESTATEMENT
