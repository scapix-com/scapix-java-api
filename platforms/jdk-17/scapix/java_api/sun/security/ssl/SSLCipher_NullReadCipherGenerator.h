// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLCipher_ReadCipherGenerator.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_NULLREADCIPHERGENERATOR_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_NULLREADCIPHERGENERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLCipher_NullReadCipherGenerator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLCipher_NullReadCipherGenerator>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLCipher$NullReadCipherGenerator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLCipher_ReadCipherGenerator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_NULLREADCIPHERGENERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_NULLREADCIPHERGENERATOR)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_NULLREADCIPHERGENERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Key.h>
#include <scapix/java_api/java/security/SecureRandom.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>
#include <scapix/java_api/sun/security/ssl/Authenticator.h>
#include <scapix/java_api/sun/security/ssl/ProtocolVersion.h>
#include <scapix/java_api/sun/security/ssl/SSLCipher.h>
#include <scapix/java_api/sun/security/ssl/SSLCipher_SSLReadCipher.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLCipher_NullReadCipherGenerator : public jni::object_base<"sun/security/ssl/SSLCipher$NullReadCipherGenerator",
	java::lang::Object,
	sun::security::ssl::SSLCipher_ReadCipherGenerator>
{
public:

	jni::ref<sun::security::ssl::SSLCipher_SSLReadCipher> createCipher(jni::ref<sun::security::ssl::SSLCipher> sslCipher, jni::ref<sun::security::ssl::Authenticator> authenticator, jni::ref<sun::security::ssl::ProtocolVersion> protocolVersion, jni::ref<java::lang::String> algorithm, jni::ref<java::security::Key> key, jni::ref<java::security::spec::AlgorithmParameterSpec> params, jni::ref<java::security::SecureRandom> random) { return call_method<"createCipher", jni::ref<sun::security::ssl::SSLCipher_SSLReadCipher>>(sslCipher, authenticator, protocolVersion, algorithm, key, params, random); }

protected:

	SSLCipher_NullReadCipherGenerator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_NULLREADCIPHERGENERATOR
