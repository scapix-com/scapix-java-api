// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_OCSP_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_OCSP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider::certpath { class OCSP; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::certpath::OCSP>
{
	static constexpr fixed_string class_name = "sun/security/provider/certpath/OCSP";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_OCSP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_OCSP)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_OCSP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/java/security/cert/TrustAnchor.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/sun/security/provider/certpath/OCSP_RevocationStatus.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::certpath::OCSP : public jni::object_base<"sun/security/provider/certpath/OCSP",
	java::lang::Object>
{
public:

	using RevocationStatus = OCSP_RevocationStatus;

	static jni::ref<sun::security::provider::certpath::OCSP_RevocationStatus> check(jni::ref<java::security::cert::X509Certificate> cert, jni::ref<java::security::cert::X509Certificate> issuerCert, jni::ref<java::net::URI> responderURI, jni::ref<java::security::cert::X509Certificate> responderCert, jni::ref<java::util::Date> date) { return call_static_method<"check", jni::ref<sun::security::provider::certpath::OCSP_RevocationStatus>>(cert, issuerCert, responderURI, responderCert, date); }
	static jni::ref<sun::security::provider::certpath::OCSP_RevocationStatus> check(jni::ref<java::security::cert::X509Certificate> cert, jni::ref<java::security::cert::X509Certificate> issuerCert, jni::ref<java::net::URI> responderURI, jni::ref<java::security::cert::X509Certificate> responderCert, jni::ref<java::util::Date> date, jni::ref<java::util::List> extensions, jni::ref<java::lang::String> variant) { return call_static_method<"check", jni::ref<sun::security::provider::certpath::OCSP_RevocationStatus>>(cert, issuerCert, responderURI, responderCert, date, extensions, variant); }
	static jni::ref<sun::security::provider::certpath::OCSP_RevocationStatus> check(jni::ref<java::security::cert::X509Certificate> cert, jni::ref<java::net::URI> responderURI, jni::ref<java::security::cert::TrustAnchor> anchor, jni::ref<java::security::cert::X509Certificate> issuerCert, jni::ref<java::security::cert::X509Certificate> responderCert, jni::ref<java::util::Date> date, jni::ref<java::util::List> extensions, jni::ref<java::lang::String> variant) { return call_static_method<"check", jni::ref<sun::security::provider::certpath::OCSP_RevocationStatus>>(cert, responderURI, anchor, issuerCert, responderCert, date, extensions, variant); }
	static jni::ref<jni::array<jbyte>> getOCSPBytes(jni::ref<java::util::List> certIds, jni::ref<java::net::URI> responderURI, jni::ref<java::util::List> extensions) { return call_static_method<"getOCSPBytes", jni::ref<jni::array<jbyte>>>(certIds, responderURI, extensions); }
	static jni::ref<java::net::URI> getResponderURI(jni::ref<java::security::cert::X509Certificate> cert) { return call_static_method<"getResponderURI", jni::ref<java::net::URI>>(cert); }

protected:

	OCSP(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_OCSP
