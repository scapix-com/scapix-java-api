// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_X509CERTINFO_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_X509CERTINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class X509CertInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::X509CertInfo>
{
	static constexpr fixed_string class_name = "sun/security/x509/X509CertInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_X509CERTINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_X509CERTINFO)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_X509CERTINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/security/util/DerOutputStream.h>
#include <scapix/java_api/sun/security/util/DerValue.h>
#include <scapix/java_api/sun/security/x509/CertificateAlgorithmId.h>
#include <scapix/java_api/sun/security/x509/CertificateExtensions.h>
#include <scapix/java_api/sun/security/x509/CertificateSerialNumber.h>
#include <scapix/java_api/sun/security/x509/CertificateValidity.h>
#include <scapix/java_api/sun/security/x509/CertificateVersion.h>
#include <scapix/java_api/sun/security/x509/CertificateX509Key.h>
#include <scapix/java_api/sun/security/x509/UniqueIdentity.h>
#include <scapix/java_api/sun/security/x509/X500Name.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::X509CertInfo : public jni::object_base<"sun/security/x509/X509CertInfo",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DN_NAME() { return get_static_field<"DN_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VERSION() { return get_static_field<"VERSION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SERIAL_NUMBER() { return get_static_field<"SERIAL_NUMBER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ALGORITHM_ID() { return get_static_field<"ALGORITHM_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ISSUER() { return get_static_field<"ISSUER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUBJECT() { return get_static_field<"SUBJECT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VALIDITY() { return get_static_field<"VALIDITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY() { return get_static_field<"KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ISSUER_ID() { return get_static_field<"ISSUER_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUBJECT_ID() { return get_static_field<"SUBJECT_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTENSIONS() { return get_static_field<"EXTENSIONS", jni::ref<java::lang::String>>(); }

	static jni::ref<sun::security::x509::X509CertInfo> new_object() { return base_::new_object(); }
	static jni::ref<sun::security::x509::X509CertInfo> new_object(jni::ref<jni::array<jbyte>> cert) { return base_::new_object(cert); }
	static jni::ref<sun::security::x509::X509CertInfo> new_object(jni::ref<sun::security::util::DerValue> derVal) { return base_::new_object(derVal); }
	void encode(jni::ref<sun::security::util::DerOutputStream> out) { return call_method<"encode", void>(out); }
	jni::ref<jni::array<jbyte>> getEncodedInfo() { return call_method<"getEncodedInfo", jni::ref<jni::array<jbyte>>>(); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jboolean equals(jni::ref<sun::security::x509::X509CertInfo> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<sun::security::x509::CertificateExtensions> getExtensions() { return call_method<"getExtensions", jni::ref<sun::security::x509::CertificateExtensions>>(); }
	jni::ref<sun::security::x509::UniqueIdentity> getIssuerUniqueId() { return call_method<"getIssuerUniqueId", jni::ref<sun::security::x509::UniqueIdentity>>(); }
	jni::ref<sun::security::x509::UniqueIdentity> getSubjectUniqueId() { return call_method<"getSubjectUniqueId", jni::ref<sun::security::x509::UniqueIdentity>>(); }
	jni::ref<sun::security::x509::X500Name> getIssuer() { return call_method<"getIssuer", jni::ref<sun::security::x509::X500Name>>(); }
	jni::ref<sun::security::x509::X500Name> getSubject() { return call_method<"getSubject", jni::ref<sun::security::x509::X500Name>>(); }
	void setVersion(jni::ref<sun::security::x509::CertificateVersion> val) { return call_method<"setVersion", void>(val); }
	jni::ref<sun::security::x509::CertificateVersion> getVersion() { return call_method<"getVersion", jni::ref<sun::security::x509::CertificateVersion>>(); }
	void setSerialNumber(jni::ref<sun::security::x509::CertificateSerialNumber> val) { return call_method<"setSerialNumber", void>(val); }
	jni::ref<sun::security::x509::CertificateSerialNumber> getSerialNumber() { return call_method<"getSerialNumber", jni::ref<sun::security::x509::CertificateSerialNumber>>(); }
	void setAlgorithmId(jni::ref<sun::security::x509::CertificateAlgorithmId> val) { return call_method<"setAlgorithmId", void>(val); }
	jni::ref<sun::security::x509::CertificateAlgorithmId> getAlgorithmId() { return call_method<"getAlgorithmId", jni::ref<sun::security::x509::CertificateAlgorithmId>>(); }
	void setIssuer(jni::ref<sun::security::x509::X500Name> val) { return call_method<"setIssuer", void>(val); }
	void setValidity(jni::ref<sun::security::x509::CertificateValidity> val) { return call_method<"setValidity", void>(val); }
	jni::ref<sun::security::x509::CertificateValidity> getValidity() { return call_method<"getValidity", jni::ref<sun::security::x509::CertificateValidity>>(); }
	void setSubject(jni::ref<sun::security::x509::X500Name> val) { return call_method<"setSubject", void>(val); }
	void setKey(jni::ref<sun::security::x509::CertificateX509Key> val) { return call_method<"setKey", void>(val); }
	jni::ref<sun::security::x509::CertificateX509Key> getKey() { return call_method<"getKey", jni::ref<sun::security::x509::CertificateX509Key>>(); }
	void setIssuerUniqueId(jni::ref<sun::security::x509::UniqueIdentity> val) { return call_method<"setIssuerUniqueId", void>(val); }
	void setSubjectUniqueId(jni::ref<sun::security::x509::UniqueIdentity> val) { return call_method<"setSubjectUniqueId", void>(val); }
	void setExtensions(jni::ref<sun::security::x509::CertificateExtensions> val) { return call_method<"setExtensions", void>(val); }

protected:

	X509CertInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_X509CERTINFO
