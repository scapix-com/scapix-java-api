// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/naming/NameClassPair.h>
#include <scapix/java_api/javax/naming/ldap/HasControls.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_NAMECLASSPAIRWITHCONTROLS_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_NAMECLASSPAIRWITHCONTROLS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::ldap { class NameClassPairWithControls; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::ldap::NameClassPairWithControls>
{
	static constexpr fixed_string class_name = "com/sun/jndi/ldap/NameClassPairWithControls";
	using base_classes = std::tuple<scapix::java_api::javax::naming::NameClassPair, scapix::java_api::javax::naming::ldap::HasControls>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_NAMECLASSPAIRWITHCONTROLS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_NAMECLASSPAIRWITHCONTROLS)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_NAMECLASSPAIRWITHCONTROLS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/naming/ldap/Control.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jndi::ldap::NameClassPairWithControls : public jni::object_base<"com/sun/jndi/ldap/NameClassPairWithControls",
	javax::naming::NameClassPair,
	javax::naming::ldap::HasControls>
{
public:

	static jni::ref<com::sun::jndi::ldap::NameClassPairWithControls> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<javax::naming::ldap::Control>> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<jni::array<javax::naming::ldap::Control>> getControls() { return call_method<"getControls", jni::ref<jni::array<javax::naming::ldap::Control>>>(); }

protected:

	NameClassPairWithControls(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_NAMECLASSPAIRWITHCONTROLS
