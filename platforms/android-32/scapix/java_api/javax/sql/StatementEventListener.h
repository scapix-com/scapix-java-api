// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/EventListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SQL_STATEMENTEVENTLISTENER_FWD
#define SCAPIX_JAVA_API_JAVAX_SQL_STATEMENTEVENTLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sql { class StatementEventListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sql::StatementEventListener>
{
	static constexpr fixed_string class_name = "javax/sql/StatementEventListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::EventListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_STATEMENTEVENTLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SQL_STATEMENTEVENTLISTENER)
#define SCAPIX_JAVA_API_JAVAX_SQL_STATEMENTEVENTLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/sql/StatementEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sql::StatementEventListener : public jni::object_base<"javax/sql/StatementEventListener",
	java::lang::Object,
	java::util::EventListener>
{
public:

	void statementClosed(jni::ref<javax::sql::StatementEvent> p1) { return call_method<"statementClosed", void>(p1); }
	void statementErrorOccurred(jni::ref<javax::sql::StatementEvent> p1) { return call_method<"statementErrorOccurred", void>(p1); }

protected:

	StatementEventListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_STATEMENTEVENTLISTENER
