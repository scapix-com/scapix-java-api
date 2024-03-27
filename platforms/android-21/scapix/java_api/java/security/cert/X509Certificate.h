// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/java/security/cert/X509Extension.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_CERT_X509CERTIFICATE_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_X509CERTIFICATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::cert { class X509Certificate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::cert::X509Certificate>
{
	static constexpr fixed_string class_name = "java/security/cert/X509Certificate";
	using base_classes = std::tuple<scapix::java_api::java::security::cert::Certificate, scapix::java_api::java::security::cert::X509Extension>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_X509CERTIFICATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_CERT_X509CERTIFICATE)
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_X509CERTIFICATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/Principal.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/javax/security/auth/x500/X500Principal.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::cert::X509Certificate : public jni::object_base<"java/security/cert/X509Certificate",
	java::security::cert::Certificate,
	java::security::cert::X509Extension>
{
public:

	void checkValidity() { return call_method<"checkValidity", void>(); }
	void checkValidity(jni::ref<java::util::Date> p1) { return call_method<"checkValidity", void>(p1); }
	jint getVersion() { return call_method<"getVersion", jint>(); }
	jni::ref<java::math::BigInteger> getSerialNumber() { return call_method<"getSerialNumber", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::security::Principal> getIssuerDN() { return call_method<"getIssuerDN", jni::ref<java::security::Principal>>(); }
	jni::ref<javax::security::auth::x500::X500Principal> getIssuerX500Principal() { return call_method<"getIssuerX500Principal", jni::ref<javax::security::auth::x500::X500Principal>>(); }
	jni::ref<java::security::Principal> getSubjectDN() { return call_method<"getSubjectDN", jni::ref<java::security::Principal>>(); }
	jni::ref<javax::security::auth::x500::X500Principal> getSubjectX500Principal() { return call_method<"getSubjectX500Principal", jni::ref<javax::security::auth::x500::X500Principal>>(); }
	jni::ref<java::util::Date> getNotBefore() { return call_method<"getNotBefore", jni::ref<java::util::Date>>(); }
	jni::ref<java::util::Date> getNotAfter() { return call_method<"getNotAfter", jni::ref<java::util::Date>>(); }
	jni::ref<jni::array<jbyte>> getTBSCertificate() { return call_method<"getTBSCertificate", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getSignature() { return call_method<"getSignature", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::String> getSigAlgName() { return call_method<"getSigAlgName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSigAlgOID() { return call_method<"getSigAlgOID", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<jbyte>> getSigAlgParams() { return call_method<"getSigAlgParams", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jboolean>> getIssuerUniqueID() { return call_method<"getIssuerUniqueID", jni::ref<jni::array<jboolean>>>(); }
	jni::ref<jni::array<jboolean>> getSubjectUniqueID() { return call_method<"getSubjectUniqueID", jni::ref<jni::array<jboolean>>>(); }
	jni::ref<jni::array<jboolean>> getKeyUsage() { return call_method<"getKeyUsage", jni::ref<jni::array<jboolean>>>(); }
	jni::ref<java::util::List> getExtendedKeyUsage() { return call_method<"getExtendedKeyUsage", jni::ref<java::util::List>>(); }
	jint getBasicConstraints() { return call_method<"getBasicConstraints", jint>(); }
	jni::ref<java::util::Collection> getSubjectAlternativeNames() { return call_method<"getSubjectAlternativeNames", jni::ref<java::util::Collection>>(); }
	jni::ref<java::util::Collection> getIssuerAlternativeNames() { return call_method<"getIssuerAlternativeNames", jni::ref<java::util::Collection>>(); }

protected:

	X509Certificate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_X509CERTIFICATE
