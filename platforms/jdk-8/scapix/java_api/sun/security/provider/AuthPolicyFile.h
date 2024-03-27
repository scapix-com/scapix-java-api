// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/security/auth/Policy.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_AUTHPOLICYFILE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_AUTHPOLICYFILE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class AuthPolicyFile; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::AuthPolicyFile>
{
	static constexpr fixed_string class_name = "sun/security/provider/AuthPolicyFile";
	using base_classes = std::tuple<scapix::java_api::javax::security::auth::Policy>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_AUTHPOLICYFILE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_AUTHPOLICYFILE)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_AUTHPOLICYFILE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/CodeSource.h>
#include <scapix/java_api/java/security/PermissionCollection.h>
#include <scapix/java_api/javax/security/auth/Subject.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::AuthPolicyFile : public jni::object_base<"sun/security/provider/AuthPolicyFile",
	javax::security::auth::Policy>
{
public:

	static jni::ref<sun::security::provider::AuthPolicyFile> new_object() { return base_::new_object(); }
	void refresh() { return call_method<"refresh", void>(); }
	jni::ref<java::security::PermissionCollection> getPermissions(jni::ref<javax::security::auth::Subject> p1, jni::ref<java::security::CodeSource> p2) { return call_method<"getPermissions", jni::ref<java::security::PermissionCollection>>(p1, p2); }

protected:

	AuthPolicyFile(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_AUTHPOLICYFILE