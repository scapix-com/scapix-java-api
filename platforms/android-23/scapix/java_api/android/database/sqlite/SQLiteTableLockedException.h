// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/database/sqlite/SQLiteException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITETABLELOCKEDEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITETABLELOCKEDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::database::sqlite { class SQLiteTableLockedException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::database::sqlite::SQLiteTableLockedException>
{
	static constexpr fixed_string class_name = "android/database/sqlite/SQLiteTableLockedException";
	using base_classes = std::tuple<scapix::java_api::android::database::sqlite::SQLiteException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITETABLELOCKEDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITETABLELOCKEDEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITETABLELOCKEDEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::database::sqlite::SQLiteTableLockedException : public jni::object_base<"android/database/sqlite/SQLiteTableLockedException",
	android::database::sqlite::SQLiteException>
{
public:

	static jni::ref<android::database::sqlite::SQLiteTableLockedException> new_object() { return base_::new_object(); }
	static jni::ref<android::database::sqlite::SQLiteTableLockedException> new_object(jni::ref<java::lang::String> error) { return base_::new_object(error); }

protected:

	SQLiteTableLockedException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITETABLELOCKEDEXCEPTION
