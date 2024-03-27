// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/HandshakeConsumer.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SIGNATUREALGORITHMSEXTENSION_CRSIGNATURESCHEMESUPDATE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SIGNATUREALGORITHMSEXTENSION_CRSIGNATURESCHEMESUPDATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SignatureAlgorithmsExtension_CRSignatureSchemesUpdate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SignatureAlgorithmsExtension_CRSignatureSchemesUpdate>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SignatureAlgorithmsExtension$CRSignatureSchemesUpdate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::HandshakeConsumer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SIGNATUREALGORITHMSEXTENSION_CRSIGNATURESCHEMESUPDATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SIGNATUREALGORITHMSEXTENSION_CRSIGNATURESCHEMESUPDATE)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SIGNATUREALGORITHMSEXTENSION_CRSIGNATURESCHEMESUPDATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/ssl/ConnectionContext.h>
#include <scapix/java_api/sun/security/ssl/SSLHandshake_HandshakeMessage.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SignatureAlgorithmsExtension_CRSignatureSchemesUpdate : public jni::object_base<"sun/security/ssl/SignatureAlgorithmsExtension$CRSignatureSchemesUpdate",
	java::lang::Object,
	sun::security::ssl::HandshakeConsumer>
{
public:

	void consume(jni::ref<sun::security::ssl::ConnectionContext> context, jni::ref<sun::security::ssl::SSLHandshake_HandshakeMessage> message) { return call_method<"consume", void>(context, message); }

protected:

	SignatureAlgorithmsExtension_CRSignatureSchemesUpdate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SIGNATUREALGORITHMSEXTENSION_CRSIGNATURESCHEMESUPDATE
