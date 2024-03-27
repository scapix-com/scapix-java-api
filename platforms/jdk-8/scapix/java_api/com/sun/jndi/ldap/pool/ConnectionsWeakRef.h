// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ref/WeakReference.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_CONNECTIONSWEAKREF_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_CONNECTIONSWEAKREF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::ldap::pool { class ConnectionsWeakRef; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::ldap::pool::ConnectionsWeakRef>
{
	static constexpr fixed_string class_name = "com/sun/jndi/ldap/pool/ConnectionsWeakRef";
	using base_classes = std::tuple<scapix::java_api::java::lang::ref::WeakReference>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_CONNECTIONSWEAKREF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_CONNECTIONSWEAKREF)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_CONNECTIONSWEAKREF

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jndi::ldap::pool::ConnectionsWeakRef : public jni::object_base<"com/sun/jndi/ldap/pool/ConnectionsWeakRef",
	java::lang::ref::WeakReference>
{
public:


protected:

	ConnectionsWeakRef(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_CONNECTIONSWEAKREF