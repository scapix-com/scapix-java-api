// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/Permission.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_UNRESOLVEDPERMISSION_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_UNRESOLVEDPERMISSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class UnresolvedPermission; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::UnresolvedPermission>
{
	static constexpr fixed_string class_name = "java/security/UnresolvedPermission";
	using base_classes = std::tuple<scapix::java_api::java::security::Permission, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_UNRESOLVEDPERMISSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_UNRESOLVEDPERMISSION)
#define SCAPIX_JAVA_API_JAVA_SECURITY_UNRESOLVEDPERMISSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/PermissionCollection.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::UnresolvedPermission : public jni::object_base<"java/security/UnresolvedPermission",
	java::security::Permission,
	java::io::Serializable>
{
public:

	static jni::ref<java::security::UnresolvedPermission> new_object(jni::ref<java::lang::String> type, jni::ref<java::lang::String> name, jni::ref<java::lang::String> actions, jni::ref<jni::array<java::security::cert::Certificate>> certs) { return base_::new_object(type, name, actions, certs); }
	jboolean implies(jni::ref<java::security::Permission> p) { return call_method<"implies", jboolean>(p); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> getActions() { return call_method<"getActions", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getUnresolvedType() { return call_method<"getUnresolvedType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getUnresolvedName() { return call_method<"getUnresolvedName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getUnresolvedActions() { return call_method<"getUnresolvedActions", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::security::cert::Certificate>> getUnresolvedCerts() { return call_method<"getUnresolvedCerts", jni::ref<jni::array<java::security::cert::Certificate>>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::security::PermissionCollection> newPermissionCollection() { return call_method<"newPermissionCollection", jni::ref<java::security::PermissionCollection>>(); }

protected:

	UnresolvedPermission(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_UNRESOLVEDPERMISSION