// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/EventObject.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SQL_STATEMENTEVENT_FWD
#define SCAPIX_JAVA_API_JAVAX_SQL_STATEMENTEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sql { class StatementEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sql::StatementEvent>
{
	static constexpr fixed_string class_name = "javax/sql/StatementEvent";
	using base_classes = std::tuple<scapix::java_api::java::util::EventObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_STATEMENTEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SQL_STATEMENTEVENT)
#define SCAPIX_JAVA_API_JAVAX_SQL_STATEMENTEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/sql/PreparedStatement.h>
#include <scapix/java_api/java/sql/SQLException.h>
#include <scapix/java_api/javax/sql/PooledConnection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sql::StatementEvent : public jni::object_base<"javax/sql/StatementEvent",
	java::util::EventObject>
{
public:

	static jni::ref<javax::sql::StatementEvent> new_object(jni::ref<javax::sql::PooledConnection> con, jni::ref<java::sql::PreparedStatement> statement) { return base_::new_object(con, statement); }
	static jni::ref<javax::sql::StatementEvent> new_object(jni::ref<javax::sql::PooledConnection> con, jni::ref<java::sql::PreparedStatement> statement, jni::ref<java::sql::SQLException> exception) { return base_::new_object(con, statement, exception); }
	jni::ref<java::sql::PreparedStatement> getStatement() { return call_method<"getStatement", jni::ref<java::sql::PreparedStatement>>(); }
	jni::ref<java::sql::SQLException> getSQLException() { return call_method<"getSQLException", jni::ref<java::sql::SQLException>>(); }

protected:

	StatementEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_STATEMENTEVENT