// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/sql/RowSet.h>
#include <scapix/java_api/javax/sql/rowset/Joinable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_JDBCROWSET_FWD
#define SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_JDBCROWSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sql::rowset { class JdbcRowSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sql::rowset::JdbcRowSet>
{
	static constexpr fixed_string class_name = "javax/sql/rowset/JdbcRowSet";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::sql::RowSet, scapix::java_api::javax::sql::rowset::Joinable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_JDBCROWSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_JDBCROWSET)
#define SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_JDBCROWSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/sql/Savepoint.h>
#include <scapix/java_api/javax/sql/rowset/RowSetWarning.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sql::rowset::JdbcRowSet : public jni::object_base<"javax/sql/rowset/JdbcRowSet",
	java::lang::Object,
	javax::sql::RowSet,
	javax::sql::rowset::Joinable>
{
public:

	jboolean getShowDeleted() { return call_method<"getShowDeleted", jboolean>(); }
	void setShowDeleted(jboolean p1) { return call_method<"setShowDeleted", void>(p1); }
	jni::ref<javax::sql::rowset::RowSetWarning> getRowSetWarnings() { return call_method<"getRowSetWarnings", jni::ref<javax::sql::rowset::RowSetWarning>>(); }
	void commit() { return call_method<"commit", void>(); }
	jboolean getAutoCommit() { return call_method<"getAutoCommit", jboolean>(); }
	void setAutoCommit(jboolean p1) { return call_method<"setAutoCommit", void>(p1); }
	void rollback() { return call_method<"rollback", void>(); }
	void rollback(jni::ref<java::sql::Savepoint> p1) { return call_method<"rollback", void>(p1); }

protected:

	JdbcRowSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_JDBCROWSET
