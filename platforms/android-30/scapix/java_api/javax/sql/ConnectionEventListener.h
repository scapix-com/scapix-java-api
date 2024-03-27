// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/EventListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SQL_CONNECTIONEVENTLISTENER_FWD
#define SCAPIX_JAVA_API_JAVAX_SQL_CONNECTIONEVENTLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sql { class ConnectionEventListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sql::ConnectionEventListener>
{
	static constexpr fixed_string class_name = "javax/sql/ConnectionEventListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::EventListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_CONNECTIONEVENTLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SQL_CONNECTIONEVENTLISTENER)
#define SCAPIX_JAVA_API_JAVAX_SQL_CONNECTIONEVENTLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/sql/ConnectionEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sql::ConnectionEventListener : public jni::object_base<"javax/sql/ConnectionEventListener",
	java::lang::Object,
	java::util::EventListener>
{
public:

	void connectionClosed(jni::ref<javax::sql::ConnectionEvent> p1) { return call_method<"connectionClosed", void>(p1); }
	void connectionErrorOccurred(jni::ref<javax::sql::ConnectionEvent> p1) { return call_method<"connectionErrorOccurred", void>(p1); }

protected:

	ConnectionEventListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_CONNECTIONEVENTLISTENER
