// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/EventObject.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SQL_CONNECTIONEVENT_FWD
#define SCAPIX_JAVA_API_JAVAX_SQL_CONNECTIONEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sql { class ConnectionEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sql::ConnectionEvent>
{
	static constexpr fixed_string class_name = "javax/sql/ConnectionEvent";
	using base_classes = std::tuple<scapix::java_api::java::util::EventObject, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_CONNECTIONEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SQL_CONNECTIONEVENT)
#define SCAPIX_JAVA_API_JAVAX_SQL_CONNECTIONEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/sql/SQLException.h>
#include <scapix/java_api/javax/sql/PooledConnection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sql::ConnectionEvent : public jni::object_base<"javax/sql/ConnectionEvent",
	java::util::EventObject,
	java::io::Serializable>
{
public:

	static jni::ref<javax::sql::ConnectionEvent> new_object(jni::ref<javax::sql::PooledConnection> theConnection) { return base_::new_object(theConnection); }
	static jni::ref<javax::sql::ConnectionEvent> new_object(jni::ref<javax::sql::PooledConnection> theConnection, jni::ref<java::sql::SQLException> theException) { return base_::new_object(theConnection, theException); }
	jni::ref<java::sql::SQLException> getSQLException() { return call_method<"getSQLException", jni::ref<java::sql::SQLException>>(); }

protected:

	ConnectionEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_CONNECTIONEVENT
