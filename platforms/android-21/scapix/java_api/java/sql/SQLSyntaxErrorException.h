// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/sql/SQLNonTransientException.h>

#ifndef SCAPIX_JAVA_API_JAVA_SQL_SQLSYNTAXERROREXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_SQL_SQLSYNTAXERROREXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::sql { class SQLSyntaxErrorException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::sql::SQLSyntaxErrorException>
{
	static constexpr fixed_string class_name = "java/sql/SQLSyntaxErrorException";
	using base_classes = std::tuple<scapix::java_api::java::sql::SQLNonTransientException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_SQLSYNTAXERROREXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SQL_SQLSYNTAXERROREXCEPTION)
#define SCAPIX_JAVA_API_JAVA_SQL_SQLSYNTAXERROREXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::sql::SQLSyntaxErrorException : public jni::object_base<"java/sql/SQLSyntaxErrorException",
	java::sql::SQLNonTransientException>
{
public:

	static jni::ref<java::sql::SQLSyntaxErrorException> new_object() { return base_::new_object(); }
	static jni::ref<java::sql::SQLSyntaxErrorException> new_object(jni::ref<java::lang::String> reason) { return base_::new_object(reason); }
	static jni::ref<java::sql::SQLSyntaxErrorException> new_object(jni::ref<java::lang::String> reason, jni::ref<java::lang::String> sqlState) { return base_::new_object(reason, sqlState); }
	static jni::ref<java::sql::SQLSyntaxErrorException> new_object(jni::ref<java::lang::String> reason, jni::ref<java::lang::String> sqlState, jint vendorCode) { return base_::new_object(reason, sqlState, vendorCode); }
	static jni::ref<java::sql::SQLSyntaxErrorException> new_object(jni::ref<java::lang::Throwable> cause) { return base_::new_object(cause); }
	static jni::ref<java::sql::SQLSyntaxErrorException> new_object(jni::ref<java::lang::String> reason, jni::ref<java::lang::Throwable> cause) { return base_::new_object(reason, cause); }
	static jni::ref<java::sql::SQLSyntaxErrorException> new_object(jni::ref<java::lang::String> reason, jni::ref<java::lang::String> sqlState, jni::ref<java::lang::Throwable> cause) { return base_::new_object(reason, sqlState, cause); }
	static jni::ref<java::sql::SQLSyntaxErrorException> new_object(jni::ref<java::lang::String> reason, jni::ref<java::lang::String> sqlState, jint vendorCode, jni::ref<java::lang::Throwable> cause) { return base_::new_object(reason, sqlState, vendorCode, cause); }

protected:

	SQLSyntaxErrorException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_SQLSYNTAXERROREXCEPTION
