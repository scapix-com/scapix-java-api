// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_POOLEDCONNECTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_POOLEDCONNECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::ldap::pool { class PooledConnection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::ldap::pool::PooledConnection>
{
	static constexpr fixed_string class_name = "com/sun/jndi/ldap/pool/PooledConnection";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_POOLEDCONNECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_POOLEDCONNECTION)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_POOLEDCONNECTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jndi::ldap::pool::PooledConnection : public jni::object_base<"com/sun/jndi/ldap/pool/PooledConnection",
	java::lang::Object>
{
public:

	void closeConnection() { return call_method<"closeConnection", void>(); }

protected:

	PooledConnection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_POOLEDCONNECTION