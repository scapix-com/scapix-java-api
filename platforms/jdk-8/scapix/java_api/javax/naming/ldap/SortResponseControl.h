// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/naming/ldap/BasicControl.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_LDAP_SORTRESPONSECONTROL_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_LDAP_SORTRESPONSECONTROL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming::ldap { class SortResponseControl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::ldap::SortResponseControl>
{
	static constexpr fixed_string class_name = "javax/naming/ldap/SortResponseControl";
	using base_classes = std::tuple<scapix::java_api::javax::naming::ldap::BasicControl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_LDAP_SORTRESPONSECONTROL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_LDAP_SORTRESPONSECONTROL)
#define SCAPIX_JAVA_API_JAVAX_NAMING_LDAP_SORTRESPONSECONTROL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/naming/NamingException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::naming::ldap::SortResponseControl : public jni::object_base<"javax/naming/ldap/SortResponseControl",
	javax::naming::ldap::BasicControl>
{
public:

	static jni::ref<java::lang::String> OID() { return get_static_field<"OID", jni::ref<java::lang::String>>(); }

	static jni::ref<javax::naming::ldap::SortResponseControl> new_object(jni::ref<java::lang::String> p1, jboolean p2, jni::ref<jni::array<jbyte>> p3) { return base_::new_object(p1, p2, p3); }
	jboolean isSorted() { return call_method<"isSorted", jboolean>(); }
	jint getResultCode() { return call_method<"getResultCode", jint>(); }
	jni::ref<java::lang::String> getAttributeID() { return call_method<"getAttributeID", jni::ref<java::lang::String>>(); }
	jni::ref<javax::naming::NamingException> getException() { return call_method<"getException", jni::ref<javax::naming::NamingException>>(); }

protected:

	SortResponseControl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_LDAP_SORTRESPONSECONTROL