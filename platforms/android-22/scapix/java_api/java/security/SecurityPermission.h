// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/BasicPermission.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_SECURITYPERMISSION_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_SECURITYPERMISSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class SecurityPermission; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::SecurityPermission>
{
	static constexpr fixed_string class_name = "java/security/SecurityPermission";
	using base_classes = std::tuple<scapix::java_api::java::security::BasicPermission>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SECURITYPERMISSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_SECURITYPERMISSION)
#define SCAPIX_JAVA_API_JAVA_SECURITY_SECURITYPERMISSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Permission.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::SecurityPermission : public jni::object_base<"java/security/SecurityPermission",
	java::security::BasicPermission>
{
public:

	static jni::ref<java::security::SecurityPermission> new_object(jni::ref<java::lang::String> name) { return base_::new_object(name); }
	static jni::ref<java::security::SecurityPermission> new_object(jni::ref<java::lang::String> name, jni::ref<java::lang::String> action) { return base_::new_object(name, action); }
	jni::ref<java::lang::String> getActions() { return call_method<"getActions", jni::ref<java::lang::String>>(); }
	jboolean implies(jni::ref<java::security::Permission> permission) { return call_method<"implies", jboolean>(permission); }

protected:

	SecurityPermission(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SECURITYPERMISSION
