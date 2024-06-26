// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/database/sqlite/SQLiteException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEABORTEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEABORTEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::database::sqlite { class SQLiteAbortException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::database::sqlite::SQLiteAbortException>
{
	static constexpr fixed_string class_name = "android/database/sqlite/SQLiteAbortException";
	using base_classes = std::tuple<scapix::java_api::android::database::sqlite::SQLiteException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEABORTEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEABORTEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEABORTEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::database::sqlite::SQLiteAbortException : public jni::object_base<"android/database/sqlite/SQLiteAbortException",
	android::database::sqlite::SQLiteException>
{
public:

	static jni::ref<android::database::sqlite::SQLiteAbortException> new_object() { return base_::new_object(); }
	static jni::ref<android::database::sqlite::SQLiteAbortException> new_object(jni::ref<java::lang::String> error) { return base_::new_object(error); }

protected:

	SQLiteAbortException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITEABORTEXCEPTION
