// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jndi/ldap/AbstractLdapNamingEnumeration.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_LDAPSEARCHENUMERATION_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_LDAPSEARCHENUMERATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::ldap { class LdapSearchEnumeration; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::ldap::LdapSearchEnumeration>
{
	static constexpr fixed_string class_name = "com/sun/jndi/ldap/LdapSearchEnumeration";
	using base_classes = std::tuple<scapix::java_api::com::sun::jndi::ldap::AbstractLdapNamingEnumeration>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_LDAPSEARCHENUMERATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_LDAPSEARCHENUMERATION)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_LDAPSEARCHENUMERATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jndi/ldap/LdapReferralException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jndi::ldap::LdapSearchEnumeration : public jni::object_base<"com/sun/jndi/ldap/LdapSearchEnumeration",
	com::sun::jndi::ldap::AbstractLdapNamingEnumeration>
{
public:

	void appendUnprocessedReferrals(jni::ref<com::sun::jndi::ldap::LdapReferralException> p1) { return call_method<"appendUnprocessedReferrals", void>(p1); }

protected:

	LdapSearchEnumeration(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_LDAPSEARCHENUMERATION
