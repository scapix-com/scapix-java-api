// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_SERVICELOCATOR_SRVRECORD_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_SERVICELOCATOR_SRVRECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::ldap { class ServiceLocator_SrvRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::ldap::ServiceLocator_SrvRecord>
{
	static constexpr fixed_string class_name = "com/sun/jndi/ldap/ServiceLocator$SrvRecord";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_SERVICELOCATOR_SRVRECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_SERVICELOCATOR_SRVRECORD)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_SERVICELOCATOR_SRVRECORD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jndi::ldap::ServiceLocator_SrvRecord : public jni::object_base<"com/sun/jndi/ldap/ServiceLocator$SrvRecord",
	java::lang::Object,
	java::lang::Comparable>
{
public:

	jint compareTo(jni::ref<com::sun::jndi::ldap::ServiceLocator_SrvRecord> p1) { return call_method<"compareTo", jint>(p1); }

protected:

	ServiceLocator_SrvRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_SERVICELOCATOR_SRVRECORD
