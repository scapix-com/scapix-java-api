// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_LDAP_RDN_RDNENTRY_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_LDAP_RDN_RDNENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming::ldap { class Rdn_RdnEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::ldap::Rdn_RdnEntry>
{
	static constexpr fixed_string class_name = "javax/naming/ldap/Rdn$RdnEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_LDAP_RDN_RDNENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_LDAP_RDN_RDNENTRY)
#define SCAPIX_JAVA_API_JAVAX_NAMING_LDAP_RDN_RDNENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::naming::ldap::Rdn_RdnEntry : public jni::object_base<"javax/naming/ldap/Rdn$RdnEntry",
	java::lang::Object,
	java::lang::Comparable>
{
public:

	jint compareTo(jni::ref<javax::naming::ldap::Rdn_RdnEntry> p1) { return call_method<"compareTo", jint>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Rdn_RdnEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_LDAP_RDN_RDNENTRY
