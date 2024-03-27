// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/cert/X509Certificate.h>
#include <scapix/java_api/sun/security/util/DerEncoder.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_X509CERTIMPL_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_X509CERTIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class X509CertImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::X509CertImpl>
{
	static constexpr fixed_string class_name = "sun/security/x509/X509CertImpl";
	using base_classes = std::tuple<scapix::java_api::java::security::cert::X509Certificate, scapix::java_api::sun::security::util::DerEncoder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_X509CERTIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_X509CERTIMPL)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_X509CERTIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/Principal.h>
#include <scapix/java_api/java/security/PrivateKey.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/java/security/PublicKey.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/javax/security/auth/x500/X500Principal.h>
#include <scapix/java_api/sun/security/util/DerValue.h>
#include <scapix/java_api/sun/security/util/ObjectIdentifier.h>
#include <scapix/java_api/sun/security/x509/AuthorityInfoAccessExtension.h>
#include <scapix/java_api/sun/security/x509/AuthorityKeyIdentifierExtension.h>
#include <scapix/java_api/sun/security/x509/BasicConstraintsExtension.h>
#include <scapix/java_api/sun/security/x509/CRLDistributionPointsExtension.h>
#include <scapix/java_api/sun/security/x509/CertificatePoliciesExtension.h>
#include <scapix/java_api/sun/security/x509/ExtendedKeyUsageExtension.h>
#include <scapix/java_api/sun/security/x509/Extension.h>
#include <scapix/java_api/sun/security/x509/IssuerAlternativeNameExtension.h>
#include <scapix/java_api/sun/security/x509/KeyIdentifier.h>
#include <scapix/java_api/sun/security/x509/NameConstraintsExtension.h>
#include <scapix/java_api/sun/security/x509/PolicyConstraintsExtension.h>
#include <scapix/java_api/sun/security/x509/PolicyMappingsExtension.h>
#include <scapix/java_api/sun/security/x509/PrivateKeyUsageExtension.h>
#include <scapix/java_api/sun/security/x509/SerialNumber.h>
#include <scapix/java_api/sun/security/x509/SubjectAlternativeNameExtension.h>
#include <scapix/java_api/sun/security/x509/SubjectKeyIdentifierExtension.h>
#include <scapix/java_api/sun/security/x509/X509CertInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::X509CertImpl : public jni::object_base<"sun/security/x509/X509CertImpl",
	java::security::cert::X509Certificate,
	sun::security::util::DerEncoder>
{
public:

	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INFO() { return get_static_field<"INFO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ALG_ID() { return get_static_field<"ALG_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SIGNATURE() { return get_static_field<"SIGNATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SIGNED_CERT() { return get_static_field<"SIGNED_CERT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUBJECT_DN() { return get_static_field<"SUBJECT_DN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ISSUER_DN() { return get_static_field<"ISSUER_DN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SERIAL_ID() { return get_static_field<"SERIAL_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PUBLIC_KEY() { return get_static_field<"PUBLIC_KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VERSION() { return get_static_field<"VERSION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SIG_ALG() { return get_static_field<"SIG_ALG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SIG() { return get_static_field<"SIG", jni::ref<java::lang::String>>(); }

	static jni::ref<sun::security::x509::X509CertImpl> new_object() { return base_::new_object(); }
	static jni::ref<sun::security::x509::X509CertImpl> new_object(jni::ref<jni::array<jbyte>> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::x509::X509CertImpl> new_object(jni::ref<java::io::InputStream> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::x509::X509CertImpl> new_object(jni::ref<sun::security::x509::X509CertInfo> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::x509::X509CertImpl> new_object(jni::ref<sun::security::util::DerValue> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::x509::X509CertImpl> newX509CertImpl(jni::ref<jni::array<jbyte>> p1) { return call_static_method<"newX509CertImpl", jni::ref<sun::security::x509::X509CertImpl>>(p1); }
	void encode(jni::ref<java::io::OutputStream> p1) { return call_method<"encode", void>(p1); }
	void derEncode(jni::ref<java::io::OutputStream> p1) { return call_method<"derEncode", void>(p1); }
	jni::ref<jni::array<jbyte>> getEncoded() { return call_method<"getEncoded", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getEncodedInternal() { return call_method<"getEncodedInternal", jni::ref<jni::array<jbyte>>>(); }
	void verify(jni::ref<java::security::PublicKey> p1) { return call_method<"verify", void>(p1); }
	void verify(jni::ref<java::security::PublicKey> p1, jni::ref<java::lang::String> p2) { return call_method<"verify", void>(p1, p2); }
	void verify(jni::ref<java::security::PublicKey> p1, jni::ref<java::security::Provider> p2) { return call_method<"verify", void>(p1, p2); }
	void sign(jni::ref<java::security::PrivateKey> p1, jni::ref<java::lang::String> p2) { return call_method<"sign", void>(p1, p2); }
	void sign(jni::ref<java::security::PrivateKey> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"sign", void>(p1, p2, p3); }
	void sign(jni::ref<java::security::PrivateKey> p1, jni::ref<java::security::spec::AlgorithmParameterSpec> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4) { return call_method<"sign", void>(p1, p2, p3, p4); }
	void checkValidity() { return call_method<"checkValidity", void>(); }
	void checkValidity(jni::ref<java::util::Date> p1) { return call_method<"checkValidity", void>(p1); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::String> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	void set(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"set", void>(p1, p2); }
	void delete_(jni::ref<java::lang::String> p1) { return call_method<"delete", void>(p1); }
	jni::ref<java::util::Enumeration> getElements() { return call_method<"getElements", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::security::PublicKey> getPublicKey() { return call_method<"getPublicKey", jni::ref<java::security::PublicKey>>(); }
	jint getVersion() { return call_method<"getVersion", jint>(); }
	jni::ref<java::math::BigInteger> getSerialNumber() { return call_method<"getSerialNumber", jni::ref<java::math::BigInteger>>(); }
	jni::ref<sun::security::x509::SerialNumber> getSerialNumberObject() { return call_method<"getSerialNumberObject", jni::ref<sun::security::x509::SerialNumber>>(); }
	jni::ref<java::security::Principal> getSubjectDN() { return call_method<"getSubjectDN", jni::ref<java::security::Principal>>(); }
	jni::ref<javax::security::auth::x500::X500Principal> getSubjectX500Principal() { return call_method<"getSubjectX500Principal", jni::ref<javax::security::auth::x500::X500Principal>>(); }
	jni::ref<java::security::Principal> getIssuerDN() { return call_method<"getIssuerDN", jni::ref<java::security::Principal>>(); }
	jni::ref<javax::security::auth::x500::X500Principal> getIssuerX500Principal() { return call_method<"getIssuerX500Principal", jni::ref<javax::security::auth::x500::X500Principal>>(); }
	jni::ref<java::util::Date> getNotBefore() { return call_method<"getNotBefore", jni::ref<java::util::Date>>(); }
	jni::ref<java::util::Date> getNotAfter() { return call_method<"getNotAfter", jni::ref<java::util::Date>>(); }
	jni::ref<jni::array<jbyte>> getTBSCertificate() { return call_method<"getTBSCertificate", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getSignature() { return call_method<"getSignature", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::String> getSigAlgName() { return call_method<"getSigAlgName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSigAlgOID() { return call_method<"getSigAlgOID", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<jbyte>> getSigAlgParams() { return call_method<"getSigAlgParams", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jboolean>> getIssuerUniqueID() { return call_method<"getIssuerUniqueID", jni::ref<jni::array<jboolean>>>(); }
	jni::ref<jni::array<jboolean>> getSubjectUniqueID() { return call_method<"getSubjectUniqueID", jni::ref<jni::array<jboolean>>>(); }
	jni::ref<sun::security::x509::KeyIdentifier> getAuthKeyId() { return call_method<"getAuthKeyId", jni::ref<sun::security::x509::KeyIdentifier>>(); }
	jni::ref<sun::security::x509::KeyIdentifier> getSubjectKeyId() { return call_method<"getSubjectKeyId", jni::ref<sun::security::x509::KeyIdentifier>>(); }
	jni::ref<sun::security::x509::AuthorityKeyIdentifierExtension> getAuthorityKeyIdentifierExtension() { return call_method<"getAuthorityKeyIdentifierExtension", jni::ref<sun::security::x509::AuthorityKeyIdentifierExtension>>(); }
	jni::ref<sun::security::x509::BasicConstraintsExtension> getBasicConstraintsExtension() { return call_method<"getBasicConstraintsExtension", jni::ref<sun::security::x509::BasicConstraintsExtension>>(); }
	jni::ref<sun::security::x509::CertificatePoliciesExtension> getCertificatePoliciesExtension() { return call_method<"getCertificatePoliciesExtension", jni::ref<sun::security::x509::CertificatePoliciesExtension>>(); }
	jni::ref<sun::security::x509::ExtendedKeyUsageExtension> getExtendedKeyUsageExtension() { return call_method<"getExtendedKeyUsageExtension", jni::ref<sun::security::x509::ExtendedKeyUsageExtension>>(); }
	jni::ref<sun::security::x509::IssuerAlternativeNameExtension> getIssuerAlternativeNameExtension() { return call_method<"getIssuerAlternativeNameExtension", jni::ref<sun::security::x509::IssuerAlternativeNameExtension>>(); }
	jni::ref<sun::security::x509::NameConstraintsExtension> getNameConstraintsExtension() { return call_method<"getNameConstraintsExtension", jni::ref<sun::security::x509::NameConstraintsExtension>>(); }
	jni::ref<sun::security::x509::PolicyConstraintsExtension> getPolicyConstraintsExtension() { return call_method<"getPolicyConstraintsExtension", jni::ref<sun::security::x509::PolicyConstraintsExtension>>(); }
	jni::ref<sun::security::x509::PolicyMappingsExtension> getPolicyMappingsExtension() { return call_method<"getPolicyMappingsExtension", jni::ref<sun::security::x509::PolicyMappingsExtension>>(); }
	jni::ref<sun::security::x509::PrivateKeyUsageExtension> getPrivateKeyUsageExtension() { return call_method<"getPrivateKeyUsageExtension", jni::ref<sun::security::x509::PrivateKeyUsageExtension>>(); }
	jni::ref<sun::security::x509::SubjectAlternativeNameExtension> getSubjectAlternativeNameExtension() { return call_method<"getSubjectAlternativeNameExtension", jni::ref<sun::security::x509::SubjectAlternativeNameExtension>>(); }
	jni::ref<sun::security::x509::SubjectKeyIdentifierExtension> getSubjectKeyIdentifierExtension() { return call_method<"getSubjectKeyIdentifierExtension", jni::ref<sun::security::x509::SubjectKeyIdentifierExtension>>(); }
	jni::ref<sun::security::x509::CRLDistributionPointsExtension> getCRLDistributionPointsExtension() { return call_method<"getCRLDistributionPointsExtension", jni::ref<sun::security::x509::CRLDistributionPointsExtension>>(); }
	jboolean hasUnsupportedCriticalExtension() { return call_method<"hasUnsupportedCriticalExtension", jboolean>(); }
	jni::ref<java::util::Set> getCriticalExtensionOIDs() { return call_method<"getCriticalExtensionOIDs", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> getNonCriticalExtensionOIDs() { return call_method<"getNonCriticalExtensionOIDs", jni::ref<java::util::Set>>(); }
	jni::ref<sun::security::x509::Extension> getExtension(jni::ref<sun::security::util::ObjectIdentifier> p1) { return call_method<"getExtension", jni::ref<sun::security::x509::Extension>>(p1); }
	jni::ref<sun::security::x509::Extension> getUnparseableExtension(jni::ref<sun::security::util::ObjectIdentifier> p1) { return call_method<"getUnparseableExtension", jni::ref<sun::security::x509::Extension>>(p1); }
	jni::ref<jni::array<jbyte>> getExtensionValue(jni::ref<java::lang::String> p1) { return call_method<"getExtensionValue", jni::ref<jni::array<jbyte>>>(p1); }
	jni::ref<jni::array<jboolean>> getKeyUsage() { return call_method<"getKeyUsage", jni::ref<jni::array<jboolean>>>(); }
	jni::ref<java::util::List> getExtendedKeyUsage() { return call_method<"getExtendedKeyUsage", jni::ref<java::util::List>>(); }
	static jni::ref<java::util::List> getExtendedKeyUsage(jni::ref<java::security::cert::X509Certificate> p1) { return call_static_method<"getExtendedKeyUsage", jni::ref<java::util::List>>(p1); }
	jint getBasicConstraints() { return call_method<"getBasicConstraints", jint>(); }
	jni::ref<java::util::Collection> getSubjectAlternativeNames() { return call_method<"getSubjectAlternativeNames", jni::ref<java::util::Collection>>(); }
	static jni::ref<java::util::Collection> getSubjectAlternativeNames(jni::ref<java::security::cert::X509Certificate> p1) { return call_static_method<"getSubjectAlternativeNames", jni::ref<java::util::Collection>>(p1); }
	jni::ref<java::util::Collection> getIssuerAlternativeNames() { return call_method<"getIssuerAlternativeNames", jni::ref<java::util::Collection>>(); }
	static jni::ref<java::util::Collection> getIssuerAlternativeNames(jni::ref<java::security::cert::X509Certificate> p1) { return call_static_method<"getIssuerAlternativeNames", jni::ref<java::util::Collection>>(p1); }
	jni::ref<sun::security::x509::AuthorityInfoAccessExtension> getAuthorityInfoAccessExtension() { return call_method<"getAuthorityInfoAccessExtension", jni::ref<sun::security::x509::AuthorityInfoAccessExtension>>(); }
	static jni::ref<javax::security::auth::x500::X500Principal> getSubjectX500Principal(jni::ref<java::security::cert::X509Certificate> p1) { return call_static_method<"getSubjectX500Principal", jni::ref<javax::security::auth::x500::X500Principal>>(p1); }
	static jni::ref<javax::security::auth::x500::X500Principal> getIssuerX500Principal(jni::ref<java::security::cert::X509Certificate> p1) { return call_static_method<"getIssuerX500Principal", jni::ref<javax::security::auth::x500::X500Principal>>(p1); }
	static jni::ref<jni::array<jbyte>> getEncodedInternal(jni::ref<java::security::cert::Certificate> p1) { return call_static_method<"getEncodedInternal", jni::ref<jni::array<jbyte>>>(p1); }
	static jni::ref<sun::security::x509::X509CertImpl> toImpl(jni::ref<java::security::cert::X509Certificate> p1) { return call_static_method<"toImpl", jni::ref<sun::security::x509::X509CertImpl>>(p1); }
	static jboolean isSelfIssued(jni::ref<java::security::cert::X509Certificate> p1) { return call_static_method<"isSelfIssued", jboolean>(p1); }
	static jboolean isSelfSigned(jni::ref<java::security::cert::X509Certificate> p1, jni::ref<java::lang::String> p2) { return call_static_method<"isSelfSigned", jboolean>(p1, p2); }
	jni::ref<java::lang::String> getFingerprint(jni::ref<java::lang::String> p1) { return call_method<"getFingerprint", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> getFingerprint(jni::ref<java::lang::String> p1, jni::ref<java::security::cert::X509Certificate> p2) { return call_static_method<"getFingerprint", jni::ref<java::lang::String>>(p1, p2); }

protected:

	X509CertImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_X509CERTIMPL