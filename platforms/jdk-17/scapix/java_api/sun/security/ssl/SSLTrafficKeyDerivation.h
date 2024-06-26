// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>
#include <scapix/java_api/sun/security/ssl/SSLKeyDerivationGenerator.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRAFFICKEYDERIVATION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRAFFICKEYDERIVATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLTrafficKeyDerivation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLTrafficKeyDerivation>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLTrafficKeyDerivation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum, scapix::java_api::sun::security::ssl::SSLKeyDerivationGenerator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRAFFICKEYDERIVATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRAFFICKEYDERIVATION)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRAFFICKEYDERIVATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/crypto/SecretKey.h>
#include <scapix/java_api/sun/security/ssl/HandshakeContext.h>
#include <scapix/java_api/sun/security/ssl/SSLKeyDerivation.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLTrafficKeyDerivation : public jni::object_base<"sun/security/ssl/SSLTrafficKeyDerivation",
	java::lang::Enum,
	sun::security::ssl::SSLKeyDerivationGenerator>
{
public:

	static jni::ref<sun::security::ssl::SSLTrafficKeyDerivation> SSL30() { return get_static_field<"SSL30", jni::ref<sun::security::ssl::SSLTrafficKeyDerivation>>(); }
	static jni::ref<sun::security::ssl::SSLTrafficKeyDerivation> TLS10() { return get_static_field<"TLS10", jni::ref<sun::security::ssl::SSLTrafficKeyDerivation>>(); }
	static jni::ref<sun::security::ssl::SSLTrafficKeyDerivation> TLS12() { return get_static_field<"TLS12", jni::ref<sun::security::ssl::SSLTrafficKeyDerivation>>(); }
	static jni::ref<sun::security::ssl::SSLTrafficKeyDerivation> TLS13() { return get_static_field<"TLS13", jni::ref<sun::security::ssl::SSLTrafficKeyDerivation>>(); }

	static jni::ref<jni::array<sun::security::ssl::SSLTrafficKeyDerivation>> values() { return call_static_method<"values", jni::ref<jni::array<sun::security::ssl::SSLTrafficKeyDerivation>>>(); }
	static jni::ref<sun::security::ssl::SSLTrafficKeyDerivation> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<sun::security::ssl::SSLTrafficKeyDerivation>>(name); }
	jni::ref<sun::security::ssl::SSLKeyDerivation> createKeyDerivation(jni::ref<sun::security::ssl::HandshakeContext> context, jni::ref<javax::crypto::SecretKey> secretKey) { return call_method<"createKeyDerivation", jni::ref<sun::security::ssl::SSLKeyDerivation>>(context, secretKey); }

protected:

	SSLTrafficKeyDerivation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRAFFICKEYDERIVATION
