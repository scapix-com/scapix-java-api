// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SQL_SQLTYPE_FWD
#define SCAPIX_JAVA_API_JAVA_SQL_SQLTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::sql { class SQLType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::sql::SQLType>
{
	static constexpr fixed_string class_name = "java/sql/SQLType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_SQLTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SQL_SQLTYPE)
#define SCAPIX_JAVA_API_JAVA_SQL_SQLTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::sql::SQLType : public jni::object_base<"java/sql/SQLType",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getVendor() { return call_method<"getVendor", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Integer> getVendorTypeNumber() { return call_method<"getVendorTypeNumber", jni::ref<java::lang::Integer>>(); }

protected:

	SQLType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_SQLTYPE
