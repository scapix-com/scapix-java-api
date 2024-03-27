// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_EVENTQUEUE_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_EVENTQUEUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::ldap { class EventQueue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::ldap::EventQueue>
{
	static constexpr fixed_string class_name = "com/sun/jndi/ldap/EventQueue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Runnable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_EVENTQUEUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_EVENTQUEUE)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_EVENTQUEUE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jndi::ldap::EventQueue : public jni::object_base<"com/sun/jndi/ldap/EventQueue",
	java::lang::Object,
	java::lang::Runnable>
{
public:

	void run() { return call_method<"run", void>(); }

protected:

	EventQueue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_EVENTQUEUE
