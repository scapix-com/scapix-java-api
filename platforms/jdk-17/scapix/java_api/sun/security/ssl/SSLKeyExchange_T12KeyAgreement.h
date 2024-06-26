// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>
#include <scapix/java_api/sun/security/ssl/SSLKeyAgreement.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLKEYEXCHANGE_T12KEYAGREEMENT_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLKEYEXCHANGE_T12KEYAGREEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLKeyExchange_T12KeyAgreement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLKeyExchange_T12KeyAgreement>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLKeyExchange$T12KeyAgreement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum, scapix::java_api::sun::security::ssl::SSLKeyAgreement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLKEYEXCHANGE_T12KEYAGREEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLKEYEXCHANGE_T12KEYAGREEMENT)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLKEYEXCHANGE_T12KEYAGREEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map_Entry.h>
#include <scapix/java_api/sun/security/ssl/HandshakeContext.h>
#include <scapix/java_api/sun/security/ssl/SSLHandshake.h>
#include <scapix/java_api/sun/security/ssl/SSLKeyDerivation.h>
#include <scapix/java_api/sun/security/ssl/SSLPossession.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLKeyExchange_T12KeyAgreement : public jni::object_base<"sun/security/ssl/SSLKeyExchange$T12KeyAgreement",
	java::lang::Enum,
	sun::security::ssl::SSLKeyAgreement>
{
public:

	static jni::ref<sun::security::ssl::SSLKeyExchange_T12KeyAgreement> RSA() { return get_static_field<"RSA", jni::ref<sun::security::ssl::SSLKeyExchange_T12KeyAgreement>>(); }
	static jni::ref<sun::security::ssl::SSLKeyExchange_T12KeyAgreement> RSA_EXPORT() { return get_static_field<"RSA_EXPORT", jni::ref<sun::security::ssl::SSLKeyExchange_T12KeyAgreement>>(); }
	static jni::ref<sun::security::ssl::SSLKeyExchange_T12KeyAgreement> DHE() { return get_static_field<"DHE", jni::ref<sun::security::ssl::SSLKeyExchange_T12KeyAgreement>>(); }
	static jni::ref<sun::security::ssl::SSLKeyExchange_T12KeyAgreement> DHE_EXPORT() { return get_static_field<"DHE_EXPORT", jni::ref<sun::security::ssl::SSLKeyExchange_T12KeyAgreement>>(); }
	static jni::ref<sun::security::ssl::SSLKeyExchange_T12KeyAgreement> ECDH() { return get_static_field<"ECDH", jni::ref<sun::security::ssl::SSLKeyExchange_T12KeyAgreement>>(); }
	static jni::ref<sun::security::ssl::SSLKeyExchange_T12KeyAgreement> ECDHE() { return get_static_field<"ECDHE", jni::ref<sun::security::ssl::SSLKeyExchange_T12KeyAgreement>>(); }

	static jni::ref<jni::array<sun::security::ssl::SSLKeyExchange_T12KeyAgreement>> values() { return call_static_method<"values", jni::ref<jni::array<sun::security::ssl::SSLKeyExchange_T12KeyAgreement>>>(); }
	static jni::ref<sun::security::ssl::SSLKeyExchange_T12KeyAgreement> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<sun::security::ssl::SSLKeyExchange_T12KeyAgreement>>(name); }
	jni::ref<sun::security::ssl::SSLPossession> createPossession(jni::ref<sun::security::ssl::HandshakeContext> context) { return call_method<"createPossession", jni::ref<sun::security::ssl::SSLPossession>>(context); }
	jni::ref<sun::security::ssl::SSLKeyDerivation> createKeyDerivation(jni::ref<sun::security::ssl::HandshakeContext> context) { return call_method<"createKeyDerivation", jni::ref<sun::security::ssl::SSLKeyDerivation>>(context); }
	jni::ref<jni::array<sun::security::ssl::SSLHandshake>> getRelatedHandshakers(jni::ref<sun::security::ssl::HandshakeContext> handshakeContext) { return call_method<"getRelatedHandshakers", jni::ref<jni::array<sun::security::ssl::SSLHandshake>>>(handshakeContext); }
	jni::ref<jni::array<java::util::Map_Entry>> getHandshakeProducers(jni::ref<sun::security::ssl::HandshakeContext> handshakeContext) { return call_method<"getHandshakeProducers", jni::ref<jni::array<java::util::Map_Entry>>>(handshakeContext); }
	jni::ref<jni::array<java::util::Map_Entry>> getHandshakeConsumers(jni::ref<sun::security::ssl::HandshakeContext> handshakeContext) { return call_method<"getHandshakeConsumers", jni::ref<jni::array<java::util::Map_Entry>>>(handshakeContext); }

protected:

	SSLKeyExchange_T12KeyAgreement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLKEYEXCHANGE_T12KEYAGREEMENT
