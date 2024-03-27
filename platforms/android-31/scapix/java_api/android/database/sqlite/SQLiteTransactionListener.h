// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITETRANSACTIONLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITETRANSACTIONLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::database::sqlite { class SQLiteTransactionListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::database::sqlite::SQLiteTransactionListener>
{
	static constexpr fixed_string class_name = "android/database/sqlite/SQLiteTransactionListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITETRANSACTIONLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITETRANSACTIONLISTENER)
#define SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITETRANSACTIONLISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::database::sqlite::SQLiteTransactionListener : public jni::object_base<"android/database/sqlite/SQLiteTransactionListener",
	java::lang::Object>
{
public:

	void onBegin() { return call_method<"onBegin", void>(); }
	void onCommit() { return call_method<"onCommit", void>(); }
	void onRollback() { return call_method<"onRollback", void>(); }

protected:

	SQLiteTransactionListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_SQLITE_SQLITETRANSACTIONLISTENER
