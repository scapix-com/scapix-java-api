// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/sql/Clob.h>

#ifndef SCAPIX_JAVA_API_JAVA_SQL_NCLOB_FWD
#define SCAPIX_JAVA_API_JAVA_SQL_NCLOB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::sql { class NClob; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::sql::NClob>
{
	static constexpr fixed_string class_name = "java/sql/NClob";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::sql::Clob>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_NCLOB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SQL_NCLOB)
#define SCAPIX_JAVA_API_JAVA_SQL_NCLOB

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::sql::NClob : public jni::object_base<"java/sql/NClob",
	java::lang::Object,
	java::sql::Clob>
{
public:


protected:

	NClob(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_NCLOB
