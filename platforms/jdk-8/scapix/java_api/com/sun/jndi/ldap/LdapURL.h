// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jndi/toolkit/url/Uri.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_LDAPURL_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_LDAPURL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::ldap { class LdapURL; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::ldap::LdapURL>
{
	static constexpr fixed_string class_name = "com/sun/jndi/ldap/LdapURL";
	using base_classes = std::tuple<scapix::java_api::com::sun::jndi::toolkit::url::Uri>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_LDAPURL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_LDAPURL)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_LDAPURL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jndi/toolkit/url/Uri_ParseMode.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jndi::ldap::LdapURL : public jni::object_base<"com/sun/jndi/ldap/LdapURL",
	com::sun::jndi::toolkit::url::Uri>
{
public:

	static jni::ref<com::sun::jndi::toolkit::url::Uri_ParseMode> PARSE_MODE() { return get_static_field<"PARSE_MODE", jni::ref<com::sun::jndi::toolkit::url::Uri_ParseMode>>(); }

	static jni::ref<com::sun::jndi::ldap::LdapURL> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jboolean useSsl() { return call_method<"useSsl", jboolean>(); }
	jni::ref<java::lang::String> getDN() { return call_method<"getDN", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getAttributes() { return call_method<"getAttributes", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getScope() { return call_method<"getScope", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getFilter() { return call_method<"getFilter", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getExtensions() { return call_method<"getExtensions", jni::ref<java::lang::String>>(); }
	static jni::ref<jni::array<java::lang::String>> fromList(jni::ref<java::lang::String> p1) { return call_static_method<"fromList", jni::ref<jni::array<java::lang::String>>>(p1); }
	static jboolean isLdapSchemeOnly(jni::ref<java::lang::String> p1) { return call_static_method<"isLdapSchemeOnly", jboolean>(p1); }
	static jni::ref<java::lang::String> validateURI(jni::ref<java::lang::String> p1) { return call_static_method<"validateURI", jni::ref<java::lang::String>>(p1); }
	static jboolean hasQueryComponents(jni::ref<java::lang::String> p1) { return call_static_method<"hasQueryComponents", jboolean>(p1); }

protected:

	LdapURL(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_LDAPURL
