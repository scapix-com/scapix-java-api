// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_POOLCLEANER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_POOLCLEANER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::ldap::pool { class PoolCleaner; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::ldap::pool::PoolCleaner>
{
	static constexpr fixed_string class_name = "com/sun/jndi/ldap/pool/PoolCleaner";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Runnable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_POOLCLEANER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_POOLCLEANER)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_POOLCLEANER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jndi/ldap/pool/Pool.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jndi::ldap::pool::PoolCleaner : public jni::object_base<"com/sun/jndi/ldap/pool/PoolCleaner",
	java::lang::Object,
	java::lang::Runnable>
{
public:

	static jni::ref<com::sun::jndi::ldap::pool::PoolCleaner> new_object(jlong p1, jni::ref<jni::array<com::sun::jndi::ldap::pool::Pool>> p2) { return base_::new_object(p1, p2); }
	void run() { return call_method<"run", void>(); }

protected:

	PoolCleaner(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_POOLCLEANER
