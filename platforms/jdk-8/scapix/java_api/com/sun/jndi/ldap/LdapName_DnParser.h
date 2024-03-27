// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_LDAPNAME_DNPARSER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_LDAPNAME_DNPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::ldap { class LdapName_DnParser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::ldap::LdapName_DnParser>
{
	static constexpr fixed_string class_name = "com/sun/jndi/ldap/LdapName$DnParser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_LDAPNAME_DNPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_LDAPNAME_DNPARSER)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_LDAPNAME_DNPARSER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jndi::ldap::LdapName_DnParser : public jni::object_base<"com/sun/jndi/ldap/LdapName$DnParser",
	java::lang::Object>
{
public:


protected:

	LdapName_DnParser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_LDAPNAME_DNPARSER
