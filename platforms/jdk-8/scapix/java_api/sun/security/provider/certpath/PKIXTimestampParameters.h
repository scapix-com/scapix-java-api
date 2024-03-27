// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/cert/PKIXBuilderParameters.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_PKIXTIMESTAMPPARAMETERS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_PKIXTIMESTAMPPARAMETERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider::certpath { class PKIXTimestampParameters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::certpath::PKIXTimestampParameters>
{
	static constexpr fixed_string class_name = "sun/security/provider/certpath/PKIXTimestampParameters";
	using base_classes = std::tuple<scapix::java_api::java::security::cert::PKIXBuilderParameters>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_PKIXTIMESTAMPPARAMETERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_PKIXTIMESTAMPPARAMETERS)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_PKIXTIMESTAMPPARAMETERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Timestamp.h>
#include <scapix/java_api/java/security/cert/CertSelector.h>
#include <scapix/java_api/java/security/cert/CertStore.h>
#include <scapix/java_api/java/security/cert/PKIXCertPathChecker.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::certpath::PKIXTimestampParameters : public jni::object_base<"sun/security/provider/certpath/PKIXTimestampParameters",
	java::security::cert::PKIXBuilderParameters>
{
public:

	static jni::ref<sun::security::provider::certpath::PKIXTimestampParameters> new_object(jni::ref<java::security::cert::PKIXBuilderParameters> p1, jni::ref<java::security::Timestamp> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::security::Timestamp> getTimestamp() { return call_method<"getTimestamp", jni::ref<java::security::Timestamp>>(); }
	void setTimestamp(jni::ref<java::security::Timestamp> p1) { return call_method<"setTimestamp", void>(p1); }
	void setDate(jni::ref<java::util::Date> p1) { return call_method<"setDate", void>(p1); }
	void addCertPathChecker(jni::ref<java::security::cert::PKIXCertPathChecker> p1) { return call_method<"addCertPathChecker", void>(p1); }
	void setMaxPathLength(jint p1) { return call_method<"setMaxPathLength", void>(p1); }
	jint getMaxPathLength() { return call_method<"getMaxPathLength", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::Set> getTrustAnchors() { return call_method<"getTrustAnchors", jni::ref<java::util::Set>>(); }
	void setTrustAnchors(jni::ref<java::util::Set> p1) { return call_method<"setTrustAnchors", void>(p1); }
	jni::ref<java::util::Set> getInitialPolicies() { return call_method<"getInitialPolicies", jni::ref<java::util::Set>>(); }
	void setInitialPolicies(jni::ref<java::util::Set> p1) { return call_method<"setInitialPolicies", void>(p1); }
	void setCertStores(jni::ref<java::util::List> p1) { return call_method<"setCertStores", void>(p1); }
	void addCertStore(jni::ref<java::security::cert::CertStore> p1) { return call_method<"addCertStore", void>(p1); }
	jni::ref<java::util::List> getCertStores() { return call_method<"getCertStores", jni::ref<java::util::List>>(); }
	void setRevocationEnabled(jboolean p1) { return call_method<"setRevocationEnabled", void>(p1); }
	jboolean isRevocationEnabled() { return call_method<"isRevocationEnabled", jboolean>(); }
	void setExplicitPolicyRequired(jboolean p1) { return call_method<"setExplicitPolicyRequired", void>(p1); }
	jboolean isExplicitPolicyRequired() { return call_method<"isExplicitPolicyRequired", jboolean>(); }
	void setPolicyMappingInhibited(jboolean p1) { return call_method<"setPolicyMappingInhibited", void>(p1); }
	jboolean isPolicyMappingInhibited() { return call_method<"isPolicyMappingInhibited", jboolean>(); }
	void setAnyPolicyInhibited(jboolean p1) { return call_method<"setAnyPolicyInhibited", void>(p1); }
	jboolean isAnyPolicyInhibited() { return call_method<"isAnyPolicyInhibited", jboolean>(); }
	void setPolicyQualifiersRejected(jboolean p1) { return call_method<"setPolicyQualifiersRejected", void>(p1); }
	jboolean getPolicyQualifiersRejected() { return call_method<"getPolicyQualifiersRejected", jboolean>(); }
	jni::ref<java::util::Date> getDate() { return call_method<"getDate", jni::ref<java::util::Date>>(); }
	void setCertPathCheckers(jni::ref<java::util::List> p1) { return call_method<"setCertPathCheckers", void>(p1); }
	jni::ref<java::util::List> getCertPathCheckers() { return call_method<"getCertPathCheckers", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::String> getSigProvider() { return call_method<"getSigProvider", jni::ref<java::lang::String>>(); }
	void setSigProvider(jni::ref<java::lang::String> p1) { return call_method<"setSigProvider", void>(p1); }
	jni::ref<java::security::cert::CertSelector> getTargetCertConstraints() { return call_method<"getTargetCertConstraints", jni::ref<java::security::cert::CertSelector>>(); }
	void setTargetCertConstraints(jni::ref<java::security::cert::CertSelector> p1) { return call_method<"setTargetCertConstraints", void>(p1); }

protected:

	PKIXTimestampParameters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_PKIXTIMESTAMPPARAMETERS
