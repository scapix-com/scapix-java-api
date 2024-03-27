// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/SSLHandshake_HandshakeMessage.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATEREQUEST_T13CERTIFICATEREQUESTMESSAGE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATEREQUEST_T13CERTIFICATEREQUESTMESSAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class CertificateRequest_T13CertificateRequestMessage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::CertificateRequest_T13CertificateRequestMessage>
{
	static constexpr fixed_string class_name = "sun/security/ssl/CertificateRequest$T13CertificateRequestMessage";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::SSLHandshake_HandshakeMessage>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATEREQUEST_T13CERTIFICATEREQUESTMESSAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATEREQUEST_T13CERTIFICATEREQUESTMESSAGE)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATEREQUEST_T13CERTIFICATEREQUESTMESSAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::CertificateRequest_T13CertificateRequestMessage : public jni::object_base<"sun/security/ssl/CertificateRequest$T13CertificateRequestMessage",
	sun::security::ssl::SSLHandshake_HandshakeMessage>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	CertificateRequest_T13CertificateRequestMessage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATEREQUEST_T13CERTIFICATEREQUESTMESSAGE