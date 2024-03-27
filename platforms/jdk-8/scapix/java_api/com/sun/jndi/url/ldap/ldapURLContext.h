// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jndi/toolkit/url/GenericURLDirContext.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_URL_LDAP_LDAPURLCONTEXT_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_URL_LDAP_LDAPURLCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::url::ldap { class ldapURLContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::url::ldap::ldapURLContext>
{
	static constexpr fixed_string class_name = "com/sun/jndi/url/ldap/ldapURLContext";
	using base_classes = std::tuple<scapix::java_api::com::sun::jndi::toolkit::url::GenericURLDirContext>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_URL_LDAP_LDAPURLCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_URL_LDAP_LDAPURLCONTEXT)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_URL_LDAP_LDAPURLCONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/naming/Context.h>
#include <scapix/java_api/javax/naming/Name.h>
#include <scapix/java_api/javax/naming/NameParser.h>
#include <scapix/java_api/javax/naming/NamingEnumeration.h>
#include <scapix/java_api/javax/naming/directory/Attributes.h>
#include <scapix/java_api/javax/naming/directory/DirContext.h>
#include <scapix/java_api/javax/naming/directory/ModificationItem.h>
#include <scapix/java_api/javax/naming/directory/SearchControls.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jndi::url::ldap::ldapURLContext : public jni::object_base<"com/sun/jndi/url/ldap/ldapURLContext",
	com::sun::jndi::toolkit::url::GenericURLDirContext>
{
public:

	jni::ref<java::lang::Object> lookup(jni::ref<java::lang::String> p1) { return call_method<"lookup", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> lookup(jni::ref<javax::naming::Name> p1) { return call_method<"lookup", jni::ref<java::lang::Object>>(p1); }
	void bind(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"bind", void>(p1, p2); }
	void bind(jni::ref<javax::naming::Name> p1, jni::ref<java::lang::Object> p2) { return call_method<"bind", void>(p1, p2); }
	void rebind(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"rebind", void>(p1, p2); }
	void rebind(jni::ref<javax::naming::Name> p1, jni::ref<java::lang::Object> p2) { return call_method<"rebind", void>(p1, p2); }
	void unbind(jni::ref<java::lang::String> p1) { return call_method<"unbind", void>(p1); }
	void unbind(jni::ref<javax::naming::Name> p1) { return call_method<"unbind", void>(p1); }
	void rename(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"rename", void>(p1, p2); }
	void rename(jni::ref<javax::naming::Name> p1, jni::ref<javax::naming::Name> p2) { return call_method<"rename", void>(p1, p2); }
	jni::ref<javax::naming::NamingEnumeration> list(jni::ref<java::lang::String> p1) { return call_method<"list", jni::ref<javax::naming::NamingEnumeration>>(p1); }
	jni::ref<javax::naming::NamingEnumeration> list(jni::ref<javax::naming::Name> p1) { return call_method<"list", jni::ref<javax::naming::NamingEnumeration>>(p1); }
	jni::ref<javax::naming::NamingEnumeration> listBindings(jni::ref<java::lang::String> p1) { return call_method<"listBindings", jni::ref<javax::naming::NamingEnumeration>>(p1); }
	jni::ref<javax::naming::NamingEnumeration> listBindings(jni::ref<javax::naming::Name> p1) { return call_method<"listBindings", jni::ref<javax::naming::NamingEnumeration>>(p1); }
	void destroySubcontext(jni::ref<java::lang::String> p1) { return call_method<"destroySubcontext", void>(p1); }
	void destroySubcontext(jni::ref<javax::naming::Name> p1) { return call_method<"destroySubcontext", void>(p1); }
	jni::ref<javax::naming::Context> createSubcontext(jni::ref<java::lang::String> p1) { return call_method<"createSubcontext", jni::ref<javax::naming::Context>>(p1); }
	jni::ref<javax::naming::Context> createSubcontext(jni::ref<javax::naming::Name> p1) { return call_method<"createSubcontext", jni::ref<javax::naming::Context>>(p1); }
	jni::ref<java::lang::Object> lookupLink(jni::ref<java::lang::String> p1) { return call_method<"lookupLink", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> lookupLink(jni::ref<javax::naming::Name> p1) { return call_method<"lookupLink", jni::ref<java::lang::Object>>(p1); }
	jni::ref<javax::naming::NameParser> getNameParser(jni::ref<java::lang::String> p1) { return call_method<"getNameParser", jni::ref<javax::naming::NameParser>>(p1); }
	jni::ref<javax::naming::NameParser> getNameParser(jni::ref<javax::naming::Name> p1) { return call_method<"getNameParser", jni::ref<javax::naming::NameParser>>(p1); }
	jni::ref<java::lang::String> composeName(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"composeName", jni::ref<java::lang::String>>(p1, p2); }
	jni::ref<javax::naming::Name> composeName(jni::ref<javax::naming::Name> p1, jni::ref<javax::naming::Name> p2) { return call_method<"composeName", jni::ref<javax::naming::Name>>(p1, p2); }
	jni::ref<javax::naming::directory::Attributes> getAttributes(jni::ref<java::lang::String> p1) { return call_method<"getAttributes", jni::ref<javax::naming::directory::Attributes>>(p1); }
	jni::ref<javax::naming::directory::Attributes> getAttributes(jni::ref<javax::naming::Name> p1) { return call_method<"getAttributes", jni::ref<javax::naming::directory::Attributes>>(p1); }
	jni::ref<javax::naming::directory::Attributes> getAttributes(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::String>> p2) { return call_method<"getAttributes", jni::ref<javax::naming::directory::Attributes>>(p1, p2); }
	jni::ref<javax::naming::directory::Attributes> getAttributes(jni::ref<javax::naming::Name> p1, jni::ref<jni::array<java::lang::String>> p2) { return call_method<"getAttributes", jni::ref<javax::naming::directory::Attributes>>(p1, p2); }
	void modifyAttributes(jni::ref<java::lang::String> p1, jint p2, jni::ref<javax::naming::directory::Attributes> p3) { return call_method<"modifyAttributes", void>(p1, p2, p3); }
	void modifyAttributes(jni::ref<javax::naming::Name> p1, jint p2, jni::ref<javax::naming::directory::Attributes> p3) { return call_method<"modifyAttributes", void>(p1, p2, p3); }
	void modifyAttributes(jni::ref<java::lang::String> p1, jni::ref<jni::array<javax::naming::directory::ModificationItem>> p2) { return call_method<"modifyAttributes", void>(p1, p2); }
	void modifyAttributes(jni::ref<javax::naming::Name> p1, jni::ref<jni::array<javax::naming::directory::ModificationItem>> p2) { return call_method<"modifyAttributes", void>(p1, p2); }
	void bind(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2, jni::ref<javax::naming::directory::Attributes> p3) { return call_method<"bind", void>(p1, p2, p3); }
	void bind(jni::ref<javax::naming::Name> p1, jni::ref<java::lang::Object> p2, jni::ref<javax::naming::directory::Attributes> p3) { return call_method<"bind", void>(p1, p2, p3); }
	void rebind(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2, jni::ref<javax::naming::directory::Attributes> p3) { return call_method<"rebind", void>(p1, p2, p3); }
	void rebind(jni::ref<javax::naming::Name> p1, jni::ref<java::lang::Object> p2, jni::ref<javax::naming::directory::Attributes> p3) { return call_method<"rebind", void>(p1, p2, p3); }
	jni::ref<javax::naming::directory::DirContext> createSubcontext(jni::ref<java::lang::String> p1, jni::ref<javax::naming::directory::Attributes> p2) { return call_method<"createSubcontext", jni::ref<javax::naming::directory::DirContext>>(p1, p2); }
	jni::ref<javax::naming::directory::DirContext> createSubcontext(jni::ref<javax::naming::Name> p1, jni::ref<javax::naming::directory::Attributes> p2) { return call_method<"createSubcontext", jni::ref<javax::naming::directory::DirContext>>(p1, p2); }
	jni::ref<javax::naming::directory::DirContext> getSchema(jni::ref<java::lang::String> p1) { return call_method<"getSchema", jni::ref<javax::naming::directory::DirContext>>(p1); }
	jni::ref<javax::naming::directory::DirContext> getSchema(jni::ref<javax::naming::Name> p1) { return call_method<"getSchema", jni::ref<javax::naming::directory::DirContext>>(p1); }
	jni::ref<javax::naming::directory::DirContext> getSchemaClassDefinition(jni::ref<java::lang::String> p1) { return call_method<"getSchemaClassDefinition", jni::ref<javax::naming::directory::DirContext>>(p1); }
	jni::ref<javax::naming::directory::DirContext> getSchemaClassDefinition(jni::ref<javax::naming::Name> p1) { return call_method<"getSchemaClassDefinition", jni::ref<javax::naming::directory::DirContext>>(p1); }
	jni::ref<javax::naming::NamingEnumeration> search(jni::ref<java::lang::String> p1, jni::ref<javax::naming::directory::Attributes> p2) { return call_method<"search", jni::ref<javax::naming::NamingEnumeration>>(p1, p2); }
	jni::ref<javax::naming::NamingEnumeration> search(jni::ref<javax::naming::Name> p1, jni::ref<javax::naming::directory::Attributes> p2) { return call_method<"search", jni::ref<javax::naming::NamingEnumeration>>(p1, p2); }
	jni::ref<javax::naming::NamingEnumeration> search(jni::ref<java::lang::String> p1, jni::ref<javax::naming::directory::Attributes> p2, jni::ref<jni::array<java::lang::String>> p3) { return call_method<"search", jni::ref<javax::naming::NamingEnumeration>>(p1, p2, p3); }
	jni::ref<javax::naming::NamingEnumeration> search(jni::ref<javax::naming::Name> p1, jni::ref<javax::naming::directory::Attributes> p2, jni::ref<jni::array<java::lang::String>> p3) { return call_method<"search", jni::ref<javax::naming::NamingEnumeration>>(p1, p2, p3); }
	jni::ref<javax::naming::NamingEnumeration> search(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<javax::naming::directory::SearchControls> p3) { return call_method<"search", jni::ref<javax::naming::NamingEnumeration>>(p1, p2, p3); }
	jni::ref<javax::naming::NamingEnumeration> search(jni::ref<javax::naming::Name> p1, jni::ref<java::lang::String> p2, jni::ref<javax::naming::directory::SearchControls> p3) { return call_method<"search", jni::ref<javax::naming::NamingEnumeration>>(p1, p2, p3); }
	jni::ref<javax::naming::NamingEnumeration> search(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::lang::Object>> p3, jni::ref<javax::naming::directory::SearchControls> p4) { return call_method<"search", jni::ref<javax::naming::NamingEnumeration>>(p1, p2, p3, p4); }
	jni::ref<javax::naming::NamingEnumeration> search(jni::ref<javax::naming::Name> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::lang::Object>> p3, jni::ref<javax::naming::directory::SearchControls> p4) { return call_method<"search", jni::ref<javax::naming::NamingEnumeration>>(p1, p2, p3, p4); }

protected:

	ldapURLContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_URL_LDAP_LDAPURLCONTEXT