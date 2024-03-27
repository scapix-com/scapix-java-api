// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/sql/SQLException.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_SQL_SQLWARNING_FWD
#define SCAPIX_JAVA_API_JAVA_SQL_SQLWARNING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::sql { class SQLWarning; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::sql::SQLWarning>
{
	static constexpr fixed_string class_name = "java/sql/SQLWarning";
	using base_classes = std::tuple<scapix::java_api::java::sql::SQLException, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_SQLWARNING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SQL_SQLWARNING)
#define SCAPIX_JAVA_API_JAVA_SQL_SQLWARNING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::sql::SQLWarning : public jni::object_base<"java/sql/SQLWarning",
	java::sql::SQLException,
	java::io::Serializable>
{
public:

	static jni::ref<java::sql::SQLWarning> new_object() { return base_::new_object(); }
	static jni::ref<java::sql::SQLWarning> new_object(jni::ref<java::lang::String> theReason) { return base_::new_object(theReason); }
	static jni::ref<java::sql::SQLWarning> new_object(jni::ref<java::lang::String> theReason, jni::ref<java::lang::String> theSQLState) { return base_::new_object(theReason, theSQLState); }
	static jni::ref<java::sql::SQLWarning> new_object(jni::ref<java::lang::String> theReason, jni::ref<java::lang::String> theSQLState, jint theErrorCode) { return base_::new_object(theReason, theSQLState, theErrorCode); }
	static jni::ref<java::sql::SQLWarning> new_object(jni::ref<java::lang::Throwable> cause) { return base_::new_object(cause); }
	static jni::ref<java::sql::SQLWarning> new_object(jni::ref<java::lang::String> reason, jni::ref<java::lang::Throwable> cause) { return base_::new_object(reason, cause); }
	static jni::ref<java::sql::SQLWarning> new_object(jni::ref<java::lang::String> reason, jni::ref<java::lang::String> SQLState, jni::ref<java::lang::Throwable> cause) { return base_::new_object(reason, SQLState, cause); }
	static jni::ref<java::sql::SQLWarning> new_object(jni::ref<java::lang::String> reason, jni::ref<java::lang::String> SQLState, jint vendorCode, jni::ref<java::lang::Throwable> cause) { return base_::new_object(reason, SQLState, vendorCode, cause); }
	jni::ref<java::sql::SQLWarning> getNextWarning() { return call_method<"getNextWarning", jni::ref<java::sql::SQLWarning>>(); }
	void setNextWarning(jni::ref<java::sql::SQLWarning> w) { return call_method<"setNextWarning", void>(w); }

protected:

	SQLWarning(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_SQLWARNING