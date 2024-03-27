// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/SSLHandshake_HandshakeMessage.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATESTATUS_CERTIFICATESTATUSMESSAGE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATESTATUS_CERTIFICATESTATUSMESSAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class CertificateStatus_CertificateStatusMessage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::CertificateStatus_CertificateStatusMessage>
{
	static constexpr fixed_string class_name = "sun/security/ssl/CertificateStatus$CertificateStatusMessage";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::SSLHandshake_HandshakeMessage>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATESTATUS_CERTIFICATESTATUSMESSAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATESTATUS_CERTIFICATESTATUSMESSAGE)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATESTATUS_CERTIFICATESTATUSMESSAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/security/ssl/HandshakeOutStream.h>
#include <scapix/java_api/sun/security/ssl/SSLHandshake.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::CertificateStatus_CertificateStatusMessage : public jni::object_base<"sun/security/ssl/CertificateStatus$CertificateStatusMessage",
	sun::security::ssl::SSLHandshake_HandshakeMessage>
{
public:

	jni::ref<sun::security::ssl::SSLHandshake> handshakeType() { return call_method<"handshakeType", jni::ref<sun::security::ssl::SSLHandshake>>(); }
	jint messageLength() { return call_method<"messageLength", jint>(); }
	void send(jni::ref<sun::security::ssl::HandshakeOutStream> s) { return call_method<"send", void>(s); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	CertificateStatus_CertificateStatusMessage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATESTATUS_CERTIFICATESTATUSMESSAGE
