// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/naming/ldap/Control.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_BASICCONTROL_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_BASICCONTROL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::ldap { class BasicControl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::ldap::BasicControl>
{
	static constexpr fixed_string class_name = "com/sun/jndi/ldap/BasicControl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::naming::ldap::Control>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_BASICCONTROL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_BASICCONTROL)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_BASICCONTROL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jndi::ldap::BasicControl : public jni::object_base<"com/sun/jndi/ldap/BasicControl",
	java::lang::Object,
	javax::naming::ldap::Control>
{
public:

	static jni::ref<com::sun::jndi::ldap::BasicControl> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jndi::ldap::BasicControl> new_object(jni::ref<java::lang::String> p1, jboolean p2, jni::ref<jni::array<jbyte>> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<java::lang::String> getID() { return call_method<"getID", jni::ref<java::lang::String>>(); }
	jboolean isCritical() { return call_method<"isCritical", jboolean>(); }
	jni::ref<jni::array<jbyte>> getEncodedValue() { return call_method<"getEncodedValue", jni::ref<jni::array<jbyte>>>(); }

protected:

	BasicControl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_BASICCONTROL
