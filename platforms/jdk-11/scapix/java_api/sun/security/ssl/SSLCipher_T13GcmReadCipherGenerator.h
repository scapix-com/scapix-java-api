// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLCipher_ReadCipherGenerator.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T13GCMREADCIPHERGENERATOR_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T13GCMREADCIPHERGENERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLCipher_T13GcmReadCipherGenerator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLCipher_T13GcmReadCipherGenerator>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLCipher$T13GcmReadCipherGenerator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLCipher_ReadCipherGenerator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T13GCMREADCIPHERGENERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T13GCMREADCIPHERGENERATOR)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T13GCMREADCIPHERGENERATOR

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
class sun::security::ssl::SSLCipher_T13GcmReadCipherGenerator : public jni::object_base<"sun/security/ssl/SSLCipher$T13GcmReadCipherGenerator",
	java::lang::Object,
	sun::security::ssl::SSLCipher_ReadCipherGenerator>
{
public:

	jni::ref<sun::security::ssl::SSLCipher_SSLReadCipher> createCipher(jni::ref<sun::security::ssl::SSLCipher> sslCipher, jni::ref<sun::security::ssl::Authenticator> authenticator, jni::ref<sun::security::ssl::ProtocolVersion> protocolVersion, jni::ref<java::lang::String> algorithm, jni::ref<java::security::Key> key, jni::ref<java::security::spec::AlgorithmParameterSpec> params, jni::ref<java::security::SecureRandom> random) { return call_method<"createCipher", jni::ref<sun::security::ssl::SSLCipher_SSLReadCipher>>(sslCipher, authenticator, protocolVersion, algorithm, key, params, random); }

protected:

	SSLCipher_T13GcmReadCipherGenerator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T13GCMREADCIPHERGENERATOR
