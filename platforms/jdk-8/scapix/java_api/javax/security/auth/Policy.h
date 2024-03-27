// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_POLICY_FWD
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_POLICY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::security::auth { class Policy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::security::auth::Policy>
{
	static constexpr fixed_string class_name = "javax/security/auth/Policy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_POLICY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_POLICY)
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_POLICY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/CodeSource.h>
#include <scapix/java_api/java/security/PermissionCollection.h>
#include <scapix/java_api/javax/security/auth/Subject.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::security::auth::Policy : public jni::object_base<"javax/security/auth/Policy",
	java::lang::Object>
{
public:

	static jni::ref<javax::security::auth::Policy> getPolicy() { return call_static_method<"getPolicy", jni::ref<javax::security::auth::Policy>>(); }
	static void setPolicy(jni::ref<javax::security::auth::Policy> p1) { return call_static_method<"setPolicy", void>(p1); }
	jni::ref<java::security::PermissionCollection> getPermissions(jni::ref<javax::security::auth::Subject> p1, jni::ref<java::security::CodeSource> p2) { return call_method<"getPermissions", jni::ref<java::security::PermissionCollection>>(p1, p2); }
	void refresh() { return call_method<"refresh", void>(); }

protected:

	Policy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_POLICY
