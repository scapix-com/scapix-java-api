// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/Policy.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYFILE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYFILE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class PolicyFile; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::PolicyFile>
{
	static constexpr fixed_string class_name = "sun/security/provider/PolicyFile";
	using base_classes = std::tuple<scapix::java_api::java::security::Policy>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYFILE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYFILE)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYFILE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/security/CodeSource.h>
#include <scapix/java_api/java/security/Permission.h>
#include <scapix/java_api/java/security/PermissionCollection.h>
#include <scapix/java_api/java/security/ProtectionDomain.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::PolicyFile : public jni::object_base<"sun/security/provider/PolicyFile",
	java::security::Policy>
{
public:

	static jni::ref<sun::security::provider::PolicyFile> new_object() { return base_::new_object(); }
	static jni::ref<sun::security::provider::PolicyFile> new_object(jni::ref<java::net::URL> url) { return base_::new_object(url); }
	void refresh() { return call_method<"refresh", void>(); }
	jboolean implies(jni::ref<java::security::ProtectionDomain> pd, jni::ref<java::security::Permission> p) { return call_method<"implies", jboolean>(pd, p); }
	jni::ref<java::security::PermissionCollection> getPermissions(jni::ref<java::security::ProtectionDomain> domain) { return call_method<"getPermissions", jni::ref<java::security::PermissionCollection>>(domain); }
	jni::ref<java::security::PermissionCollection> getPermissions(jni::ref<java::security::CodeSource> codesource) { return call_method<"getPermissions", jni::ref<java::security::PermissionCollection>>(codesource); }

protected:

	PolicyFile(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYFILE
