// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEPOLICYMAP_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEPOLICYMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class CertificatePolicyMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::CertificatePolicyMap>
{
	static constexpr fixed_string class_name = "sun/security/x509/CertificatePolicyMap";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEPOLICYMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEPOLICYMAP)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEPOLICYMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/security/util/DerOutputStream.h>
#include <scapix/java_api/sun/security/util/DerValue.h>
#include <scapix/java_api/sun/security/x509/CertificatePolicyId.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::CertificatePolicyMap : public jni::object_base<"sun/security/x509/CertificatePolicyMap",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::x509::CertificatePolicyMap> new_object(jni::ref<sun::security::x509::CertificatePolicyId> p1, jni::ref<sun::security::x509::CertificatePolicyId> p2) { return base_::new_object(p1, p2); }
	static jni::ref<sun::security::x509::CertificatePolicyMap> new_object(jni::ref<sun::security::util::DerValue> p1) { return base_::new_object(p1); }
	jni::ref<sun::security::x509::CertificatePolicyId> getIssuerIdentifier() { return call_method<"getIssuerIdentifier", jni::ref<sun::security::x509::CertificatePolicyId>>(); }
	jni::ref<sun::security::x509::CertificatePolicyId> getSubjectIdentifier() { return call_method<"getSubjectIdentifier", jni::ref<sun::security::x509::CertificatePolicyId>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void encode(jni::ref<sun::security::util::DerOutputStream> p1) { return call_method<"encode", void>(p1); }

protected:

	CertificatePolicyMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_CERTIFICATEPOLICYMAP