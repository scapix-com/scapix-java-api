// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/SSLHandshake_HandshakeMessage.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_ECDHCLIENTKEYEXCHANGE_ECDHCLIENTKEYEXCHANGEMESSAGE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_ECDHCLIENTKEYEXCHANGE_ECDHCLIENTKEYEXCHANGEMESSAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class ECDHClientKeyExchange_ECDHClientKeyExchangeMessage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::ECDHClientKeyExchange_ECDHClientKeyExchangeMessage>
{
	static constexpr fixed_string class_name = "sun/security/ssl/ECDHClientKeyExchange$ECDHClientKeyExchangeMessage";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::SSLHandshake_HandshakeMessage>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_ECDHCLIENTKEYEXCHANGE_ECDHCLIENTKEYEXCHANGEMESSAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_ECDHCLIENTKEYEXCHANGE_ECDHCLIENTKEYEXCHANGEMESSAGE)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_ECDHCLIENTKEYEXCHANGE_ECDHCLIENTKEYEXCHANGEMESSAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/security/ssl/HandshakeOutStream.h>
#include <scapix/java_api/sun/security/ssl/SSLHandshake.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::ECDHClientKeyExchange_ECDHClientKeyExchangeMessage : public jni::object_base<"sun/security/ssl/ECDHClientKeyExchange$ECDHClientKeyExchangeMessage",
	sun::security::ssl::SSLHandshake_HandshakeMessage>
{
public:

	jni::ref<sun::security::ssl::SSLHandshake> handshakeType() { return call_method<"handshakeType", jni::ref<sun::security::ssl::SSLHandshake>>(); }
	jint messageLength() { return call_method<"messageLength", jint>(); }
	void send(jni::ref<sun::security::ssl::HandshakeOutStream> hos) { return call_method<"send", void>(hos); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ECDHClientKeyExchange_ECDHClientKeyExchangeMessage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_ECDHCLIENTKEYEXCHANGE_ECDHCLIENTKEYEXCHANGEMESSAGE
