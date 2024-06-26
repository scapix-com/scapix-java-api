// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/database/sqlite/SQLiteException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEACCESSPERMEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEACCESSPERMEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::database::sqlite { class SQLiteAccessPermException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::database::sqlite::SQLiteAccessPermException>
{
	static constexpr fixed_string class_name = "android/database/sqlite/SQLiteAccessPermException";
	using base_classes = std::tuple<scapix::java_api::android::database::sqlite::SQLiteException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEACCESSPERMEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEACCESSPERMEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEACCESSPERMEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::database::sqlite::SQLiteAccessPermException : public jni::object_base<"android/database/sqlite/SQLiteAccessPermException",
	android::database::sqlite::SQLiteException>
{
public:

	static jni::ref<android::database::sqlite::SQLiteAccessPermException> new_object() { return base_::new_object(); }
	static jni::ref<android::database::sqlite::SQLiteAccessPermException> new_object(jni::ref<java::lang::String> error) { return base_::new_object(error); }

protected:

	SQLiteAccessPermException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEACCESSPERMEXCEPTION
