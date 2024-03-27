// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/cert/CertPathValidatorResult.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_CERT_PKIXCERTPATHVALIDATORRESULT_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_PKIXCERTPATHVALIDATORRESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::cert { class PKIXCertPathValidatorResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::cert::PKIXCertPathValidatorResult>
{
	static constexpr fixed_string class_name = "java/security/cert/PKIXCertPathValidatorResult";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::cert::CertPathValidatorResult>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_PKIXCERTPATHVALIDATORRESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_CERT_PKIXCERTPATHVALIDATORRESULT)
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_PKIXCERTPATHVALIDATORRESULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/PublicKey.h>
#include <scapix/java_api/java/security/cert/PolicyNode.h>
#include <scapix/java_api/java/security/cert/TrustAnchor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::cert::PKIXCertPathValidatorResult : public jni::object_base<"java/security/cert/PKIXCertPathValidatorResult",
	java::lang::Object,
	java::security::cert::CertPathValidatorResult>
{
public:

	static jni::ref<java::security::cert::PKIXCertPathValidatorResult> new_object(jni::ref<java::security::cert::TrustAnchor> trustAnchor, jni::ref<java::security::cert::PolicyNode> policyTree, jni::ref<java::security::PublicKey> subjectPublicKey) { return base_::new_object(trustAnchor, policyTree, subjectPublicKey); }
	jni::ref<java::security::cert::TrustAnchor> getTrustAnchor() { return call_method<"getTrustAnchor", jni::ref<java::security::cert::TrustAnchor>>(); }
	jni::ref<java::security::cert::PolicyNode> getPolicyTree() { return call_method<"getPolicyTree", jni::ref<java::security::cert::PolicyNode>>(); }
	jni::ref<java::security::PublicKey> getPublicKey() { return call_method<"getPublicKey", jni::ref<java::security::PublicKey>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	PKIXCertPathValidatorResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_PKIXCERTPATHVALIDATORRESULT
