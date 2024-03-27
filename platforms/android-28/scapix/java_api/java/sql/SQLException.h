// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>
#include <scapix/java_api/java/lang/Iterable.h>

#ifndef SCAPIX_JAVA_API_JAVA_SQL_SQLEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_SQL_SQLEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::sql { class SQLException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::sql::SQLException>
{
	static constexpr fixed_string class_name = "java/sql/SQLException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception, scapix::java_api::java::lang::Iterable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_SQLEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SQL_SQLEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_SQL_SQLEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::sql::SQLException : public jni::object_base<"java/sql/SQLException",
	java::lang::Exception,
	java::lang::Iterable>
{
public:

	static jni::ref<java::sql::SQLException> new_object(jni::ref<java::lang::String> reason, jni::ref<java::lang::String> SQLState, jint vendorCode) { return base_::new_object(reason, SQLState, vendorCode); }
	static jni::ref<java::sql::SQLException> new_object(jni::ref<java::lang::String> reason, jni::ref<java::lang::String> SQLState) { return base_::new_object(reason, SQLState); }
	static jni::ref<java::sql::SQLException> new_object(jni::ref<java::lang::String> reason) { return base_::new_object(reason); }
	static jni::ref<java::sql::SQLException> new_object() { return base_::new_object(); }
	static jni::ref<java::sql::SQLException> new_object(jni::ref<java::lang::Throwable> cause) { return base_::new_object(cause); }
	static jni::ref<java::sql::SQLException> new_object(jni::ref<java::lang::String> reason, jni::ref<java::lang::Throwable> cause) { return base_::new_object(reason, cause); }
	static jni::ref<java::sql::SQLException> new_object(jni::ref<java::lang::String> reason, jni::ref<java::lang::String> sqlState, jni::ref<java::lang::Throwable> cause) { return base_::new_object(reason, sqlState, cause); }
	static jni::ref<java::sql::SQLException> new_object(jni::ref<java::lang::String> reason, jni::ref<java::lang::String> sqlState, jint vendorCode, jni::ref<java::lang::Throwable> cause) { return base_::new_object(reason, sqlState, vendorCode, cause); }
	jni::ref<java::lang::String> getSQLState() { return call_method<"getSQLState", jni::ref<java::lang::String>>(); }
	jint getErrorCode() { return call_method<"getErrorCode", jint>(); }
	jni::ref<java::sql::SQLException> getNextException() { return call_method<"getNextException", jni::ref<java::sql::SQLException>>(); }
	void setNextException(jni::ref<java::sql::SQLException> ex) { return call_method<"setNextException", void>(ex); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }

protected:

	SQLException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_SQLEXCEPTION