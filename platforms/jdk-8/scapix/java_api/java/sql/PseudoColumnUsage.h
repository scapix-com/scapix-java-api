// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_SQL_PSEUDOCOLUMNUSAGE_FWD
#define SCAPIX_JAVA_API_JAVA_SQL_PSEUDOCOLUMNUSAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::sql { class PseudoColumnUsage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::sql::PseudoColumnUsage>
{
	static constexpr fixed_string class_name = "java/sql/PseudoColumnUsage";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_PSEUDOCOLUMNUSAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SQL_PSEUDOCOLUMNUSAGE)
#define SCAPIX_JAVA_API_JAVA_SQL_PSEUDOCOLUMNUSAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::sql::PseudoColumnUsage : public jni::object_base<"java/sql/PseudoColumnUsage",
	java::lang::Enum>
{
public:

	static jni::ref<java::sql::PseudoColumnUsage> SELECT_LIST_ONLY() { return get_static_field<"SELECT_LIST_ONLY", jni::ref<java::sql::PseudoColumnUsage>>(); }
	static jni::ref<java::sql::PseudoColumnUsage> WHERE_CLAUSE_ONLY() { return get_static_field<"WHERE_CLAUSE_ONLY", jni::ref<java::sql::PseudoColumnUsage>>(); }
	static jni::ref<java::sql::PseudoColumnUsage> NO_USAGE_RESTRICTIONS() { return get_static_field<"NO_USAGE_RESTRICTIONS", jni::ref<java::sql::PseudoColumnUsage>>(); }
	static jni::ref<java::sql::PseudoColumnUsage> USAGE_UNKNOWN() { return get_static_field<"USAGE_UNKNOWN", jni::ref<java::sql::PseudoColumnUsage>>(); }

	static jni::ref<jni::array<java::sql::PseudoColumnUsage>> values() { return call_static_method<"values", jni::ref<jni::array<java::sql::PseudoColumnUsage>>>(); }
	static jni::ref<java::sql::PseudoColumnUsage> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<java::sql::PseudoColumnUsage>>(p1); }

protected:

	PseudoColumnUsage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_PSEUDOCOLUMNUSAGE
