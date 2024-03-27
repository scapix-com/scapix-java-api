// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_CONNECTIONDESC_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_CONNECTIONDESC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::ldap::pool { class ConnectionDesc; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::ldap::pool::ConnectionDesc>
{
	static constexpr fixed_string class_name = "com/sun/jndi/ldap/pool/ConnectionDesc";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_CONNECTIONDESC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_CONNECTIONDESC)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_CONNECTIONDESC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jndi::ldap::pool::ConnectionDesc : public jni::object_base<"com/sun/jndi/ldap/pool/ConnectionDesc",
	java::lang::Object>
{
public:

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ConnectionDesc(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_POOL_CONNECTIONDESC
