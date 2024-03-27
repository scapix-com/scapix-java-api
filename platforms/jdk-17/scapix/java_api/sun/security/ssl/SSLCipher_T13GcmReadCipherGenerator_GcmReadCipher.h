// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/SSLCipher_SSLReadCipher.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T13GCMREADCIPHERGENERATOR_GCMREADCIPHER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T13GCMREADCIPHERGENERATOR_GCMREADCIPHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLCipher_T13GcmReadCipherGenerator_GcmReadCipher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLCipher_T13GcmReadCipherGenerator_GcmReadCipher>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLCipher$T13GcmReadCipherGenerator$GcmReadCipher";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::SSLCipher_SSLReadCipher>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T13GCMREADCIPHERGENERATOR_GCMREADCIPHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T13GCMREADCIPHERGENERATOR_GCMREADCIPHER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T13GCMREADCIPHERGENERATOR_GCMREADCIPHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/sun/security/ssl/Plaintext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLCipher_T13GcmReadCipherGenerator_GcmReadCipher : public jni::object_base<"sun/security/ssl/SSLCipher$T13GcmReadCipherGenerator$GcmReadCipher",
	sun::security::ssl::SSLCipher_SSLReadCipher>
{
public:

	jni::ref<sun::security::ssl::Plaintext> decrypt(jbyte contentType, jni::ref<java::nio::ByteBuffer> bb, jni::ref<jni::array<jbyte>> sequence) { return call_method<"decrypt", jni::ref<sun::security::ssl::Plaintext>>(contentType, bb, sequence); }

protected:

	SSLCipher_T13GcmReadCipherGenerator_GcmReadCipher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T13GCMREADCIPHERGENERATOR_GCMREADCIPHER
