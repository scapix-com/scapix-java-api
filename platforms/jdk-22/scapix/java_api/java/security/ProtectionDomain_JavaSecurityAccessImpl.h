// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/access/JavaSecurityAccess.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_PROTECTIONDOMAIN_JAVASECURITYACCESSIMPL_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_PROTECTIONDOMAIN_JAVASECURITYACCESSIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class ProtectionDomain_JavaSecurityAccessImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::ProtectionDomain_JavaSecurityAccessImpl>
{
	static constexpr fixed_string class_name = "java/security/ProtectionDomain$JavaSecurityAccessImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::access::JavaSecurityAccess>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_PROTECTIONDOMAIN_JAVASECURITYACCESSIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_PROTECTIONDOMAIN_JAVASECURITYACCESSIMPL)
#define SCAPIX_JAVA_API_JAVA_SECURITY_PROTECTIONDOMAIN_JAVASECURITYACCESSIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/AccessControlContext.h>
#include <scapix/java_api/java/security/PrivilegedAction.h>
#include <scapix/java_api/java/security/ProtectionDomain.h>
#include <scapix/java_api/jdk/internal/access/JavaSecurityAccess_ProtectionDomainCache.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::security::ProtectionDomain_JavaSecurityAccessImpl : public jni::object_base<"java/security/ProtectionDomain$JavaSecurityAccessImpl",
	java::lang::Object,
	jdk::internal::access::JavaSecurityAccess>
{
public:

	jni::ref<java::lang::Object> doIntersectionPrivilege(jni::ref<java::security::PrivilegedAction> action, jni::ref<java::security::AccessControlContext> stack, jni::ref<java::security::AccessControlContext> context) { return call_method<"doIntersectionPrivilege", jni::ref<java::lang::Object>>(action, stack, context); }
	jni::ref<java::lang::Object> doIntersectionPrivilege(jni::ref<java::security::PrivilegedAction> action, jni::ref<java::security::AccessControlContext> context) { return call_method<"doIntersectionPrivilege", jni::ref<java::lang::Object>>(action, context); }
	jni::ref<jni::array<java::security::ProtectionDomain>> getProtectDomains(jni::ref<java::security::AccessControlContext> context) { return call_method<"getProtectDomains", jni::ref<jni::array<java::security::ProtectionDomain>>>(context); }
	jni::ref<jdk::internal::access::JavaSecurityAccess_ProtectionDomainCache> getProtectionDomainCache() { return call_method<"getProtectionDomainCache", jni::ref<jdk::internal::access::JavaSecurityAccess_ProtectionDomainCache>>(); }

protected:

	ProtectionDomain_JavaSecurityAccessImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_PROTECTIONDOMAIN_JAVASECURITYACCESSIMPL
