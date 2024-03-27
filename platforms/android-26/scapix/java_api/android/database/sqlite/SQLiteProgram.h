// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/database/sqlite/SQLiteClosable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEPROGRAM_FWD
#define SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEPROGRAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::database::sqlite { class SQLiteProgram; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::database::sqlite::SQLiteProgram>
{
	static constexpr fixed_string class_name = "android/database/sqlite/SQLiteProgram";
	using base_classes = std::tuple<scapix::java_api::android::database::sqlite::SQLiteClosable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEPROGRAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEPROGRAM)
#define SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEPROGRAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::database::sqlite::SQLiteProgram : public jni::object_base<"android/database/sqlite/SQLiteProgram",
	android::database::sqlite::SQLiteClosable>
{
public:

	jint getUniqueId() { return call_method<"getUniqueId", jint>(); }
	void bindNull(jint index) { return call_method<"bindNull", void>(index); }
	void bindLong(jint index, jlong value) { return call_method<"bindLong", void>(index, value); }
	void bindDouble(jint index, jdouble value) { return call_method<"bindDouble", void>(index, value); }
	void bindString(jint index, jni::ref<java::lang::String> value) { return call_method<"bindString", void>(index, value); }
	void bindBlob(jint index, jni::ref<jni::array<jbyte>> value) { return call_method<"bindBlob", void>(index, value); }
	void clearBindings() { return call_method<"clearBindings", void>(); }
	void bindAllArgsAsStrings(jni::ref<jni::array<java::lang::String>> bindArgs) { return call_method<"bindAllArgsAsStrings", void>(bindArgs); }

protected:

	SQLiteProgram(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEPROGRAM