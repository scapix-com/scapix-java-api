// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/BasicPermission.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_KERBEROS_DELEGATIONPERMISSION_FWD
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_KERBEROS_DELEGATIONPERMISSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::security::auth::kerberos { class DelegationPermission; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::security::auth::kerberos::DelegationPermission>
{
	static constexpr fixed_string class_name = "javax/security/auth/kerberos/DelegationPermission";
	using base_classes = std::tuple<scapix::java_api::java::security::BasicPermission, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_KERBEROS_DELEGATIONPERMISSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_KERBEROS_DELEGATIONPERMISSION)
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_KERBEROS_DELEGATIONPERMISSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Permission.h>
#include <scapix/java_api/java/security/PermissionCollection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::security::auth::kerberos::DelegationPermission : public jni::object_base<"javax/security/auth/kerberos/DelegationPermission",
	java::security::BasicPermission,
	java::io::Serializable>
{
public:

	static jni::ref<javax::security::auth::kerberos::DelegationPermission> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::security::auth::kerberos::DelegationPermission> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	jboolean implies(jni::ref<java::security::Permission> p1) { return call_method<"implies", jboolean>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::security::PermissionCollection> newPermissionCollection() { return call_method<"newPermissionCollection", jni::ref<java::security::PermissionCollection>>(); }

protected:

	DelegationPermission(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_KERBEROS_DELEGATIONPERMISSION