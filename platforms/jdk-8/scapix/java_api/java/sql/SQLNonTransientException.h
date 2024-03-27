// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/sql/SQLException.h>

#ifndef SCAPIX_JAVA_API_JAVA_SQL_SQLNONTRANSIENTEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_SQL_SQLNONTRANSIENTEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::sql { class SQLNonTransientException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::sql::SQLNonTransientException>
{
	static constexpr fixed_string class_name = "java/sql/SQLNonTransientException";
	using base_classes = std::tuple<scapix::java_api::java::sql::SQLException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_SQLNONTRANSIENTEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SQL_SQLNONTRANSIENTEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_SQL_SQLNONTRANSIENTEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::sql::SQLNonTransientException : public jni::object_base<"java/sql/SQLNonTransientException",
	java::sql::SQLException>
{
public:

	static jni::ref<java::sql::SQLNonTransientException> new_object() { return base_::new_object(); }
	static jni::ref<java::sql::SQLNonTransientException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<java::sql::SQLNonTransientException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::sql::SQLNonTransientException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jint p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<java::sql::SQLNonTransientException> new_object(jni::ref<java::lang::Throwable> p1) { return base_::new_object(p1); }
	static jni::ref<java::sql::SQLNonTransientException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Throwable> p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::sql::SQLNonTransientException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Throwable> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<java::sql::SQLNonTransientException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jint p3, jni::ref<java::lang::Throwable> p4) { return base_::new_object(p1, p2, p3, p4); }

protected:

	SQLNonTransientException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_SQLNONTRANSIENTEXCEPTION
