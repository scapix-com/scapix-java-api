// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/naming/spi/ObjectFactory.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_URL_LDAP_LDAPURLCONTEXTFACTORY_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_URL_LDAP_LDAPURLCONTEXTFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::url::ldap { class ldapURLContextFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::url::ldap::ldapURLContextFactory>
{
	static constexpr fixed_string class_name = "com/sun/jndi/url/ldap/ldapURLContextFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::naming::spi::ObjectFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_URL_LDAP_LDAPURLCONTEXTFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_URL_LDAP_LDAPURLCONTEXTFACTORY)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_URL_LDAP_LDAPURLCONTEXTFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Hashtable.h>
#include <scapix/java_api/javax/naming/Context.h>
#include <scapix/java_api/javax/naming/Name.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jndi::url::ldap::ldapURLContextFactory : public jni::object_base<"com/sun/jndi/url/ldap/ldapURLContextFactory",
	java::lang::Object,
	javax::naming::spi::ObjectFactory>
{
public:

	static jni::ref<com::sun::jndi::url::ldap::ldapURLContextFactory> new_object() { return base_::new_object(); }
	jni::ref<java::lang::Object> getObjectInstance(jni::ref<java::lang::Object> p1, jni::ref<javax::naming::Name> p2, jni::ref<javax::naming::Context> p3, jni::ref<java::util::Hashtable> p4) { return call_method<"getObjectInstance", jni::ref<java::lang::Object>>(p1, p2, p3, p4); }

protected:

	ldapURLContextFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_URL_LDAP_LDAPURLCONTEXTFACTORY
