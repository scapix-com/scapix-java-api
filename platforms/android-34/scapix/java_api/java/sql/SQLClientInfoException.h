// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/sql/SQLException.h>

#ifndef SCAPIX_JAVA_API_JAVA_SQL_SQLCLIENTINFOEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_SQL_SQLCLIENTINFOEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::sql { class SQLClientInfoException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::sql::SQLClientInfoException>
{
	static constexpr fixed_string class_name = "java/sql/SQLClientInfoException";
	using base_classes = std::tuple<scapix::java_api::java::sql::SQLException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_SQLCLIENTINFOEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SQL_SQLCLIENTINFOEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_SQL_SQLCLIENTINFOEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::sql::SQLClientInfoException : public jni::object_base<"java/sql/SQLClientInfoException",
	java::sql::SQLException>
{
public:

	static jni::ref<java::sql::SQLClientInfoException> new_object() { return base_::new_object(); }
	static jni::ref<java::sql::SQLClientInfoException> new_object(jni::ref<java::util::Map> failedProperties) { return base_::new_object(failedProperties); }
	static jni::ref<java::sql::SQLClientInfoException> new_object(jni::ref<java::util::Map> failedProperties, jni::ref<java::lang::Throwable> cause) { return base_::new_object(failedProperties, cause); }
	static jni::ref<java::sql::SQLClientInfoException> new_object(jni::ref<java::lang::String> reason, jni::ref<java::util::Map> failedProperties) { return base_::new_object(reason, failedProperties); }
	static jni::ref<java::sql::SQLClientInfoException> new_object(jni::ref<java::lang::String> reason, jni::ref<java::util::Map> failedProperties, jni::ref<java::lang::Throwable> cause) { return base_::new_object(reason, failedProperties, cause); }
	static jni::ref<java::sql::SQLClientInfoException> new_object(jni::ref<java::lang::String> reason, jni::ref<java::lang::String> SQLState, jni::ref<java::util::Map> failedProperties) { return base_::new_object(reason, SQLState, failedProperties); }
	static jni::ref<java::sql::SQLClientInfoException> new_object(jni::ref<java::lang::String> reason, jni::ref<java::lang::String> SQLState, jni::ref<java::util::Map> failedProperties, jni::ref<java::lang::Throwable> cause) { return base_::new_object(reason, SQLState, failedProperties, cause); }
	static jni::ref<java::sql::SQLClientInfoException> new_object(jni::ref<java::lang::String> reason, jni::ref<java::lang::String> SQLState, jint vendorCode, jni::ref<java::util::Map> failedProperties) { return base_::new_object(reason, SQLState, vendorCode, failedProperties); }
	static jni::ref<java::sql::SQLClientInfoException> new_object(jni::ref<java::lang::String> reason, jni::ref<java::lang::String> SQLState, jint vendorCode, jni::ref<java::util::Map> failedProperties, jni::ref<java::lang::Throwable> cause) { return base_::new_object(reason, SQLState, vendorCode, failedProperties, cause); }
	jni::ref<java::util::Map> getFailedProperties() { return call_method<"getFailedProperties", jni::ref<java::util::Map>>(); }

protected:

	SQLClientInfoException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_SQLCLIENTINFOEXCEPTION
