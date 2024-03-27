// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/SSLCipher_SSLWriteCipher.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T11BLOCKWRITECIPHERGENERATOR_BLOCKWRITECIPHER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T11BLOCKWRITECIPHERGENERATOR_BLOCKWRITECIPHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLCipher_T11BlockWriteCipherGenerator_BlockWriteCipher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLCipher_T11BlockWriteCipherGenerator_BlockWriteCipher>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLCipher$T11BlockWriteCipherGenerator$BlockWriteCipher";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::SSLCipher_SSLWriteCipher>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T11BLOCKWRITECIPHERGENERATOR_BLOCKWRITECIPHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T11BLOCKWRITECIPHERGENERATOR_BLOCKWRITECIPHER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T11BLOCKWRITECIPHERGENERATOR_BLOCKWRITECIPHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLCipher_T11BlockWriteCipherGenerator_BlockWriteCipher : public jni::object_base<"sun/security/ssl/SSLCipher$T11BlockWriteCipherGenerator$BlockWriteCipher",
	sun::security::ssl::SSLCipher_SSLWriteCipher>
{
public:

	jint encrypt(jbyte contentType, jni::ref<java::nio::ByteBuffer> bb) { return call_method<"encrypt", jint>(contentType, bb); }

protected:

	SSLCipher_T11BlockWriteCipherGenerator_BlockWriteCipher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T11BLOCKWRITECIPHERGENERATOR_BLOCKWRITECIPHER