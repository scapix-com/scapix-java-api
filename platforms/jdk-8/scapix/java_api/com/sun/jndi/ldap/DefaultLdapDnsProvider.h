// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_DEFAULTLDAPDNSPROVIDER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_DEFAULTLDAPDNSPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::ldap { class DefaultLdapDnsProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::ldap::DefaultLdapDnsProvider>
{
	static constexpr fixed_string class_name = "com/sun/jndi/ldap/DefaultLdapDnsProvider";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_DEFAULTLDAPDNSPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_DEFAULTLDAPDNSPROVIDER)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_DEFAULTLDAPDNSPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Optional.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jndi::ldap::DefaultLdapDnsProvider : public jni::object_base<"com/sun/jndi/ldap/DefaultLdapDnsProvider",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::jndi::ldap::DefaultLdapDnsProvider> new_object() { return base_::new_object(); }
	jni::ref<java::util::Optional> lookupEndpoints(jni::ref<java::lang::String> p1, jni::ref<java::util::Map> p2) { return call_method<"lookupEndpoints", jni::ref<java::util::Optional>>(p1, p2); }

protected:

	DefaultLdapDnsProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_DEFAULTLDAPDNSPROVIDER
