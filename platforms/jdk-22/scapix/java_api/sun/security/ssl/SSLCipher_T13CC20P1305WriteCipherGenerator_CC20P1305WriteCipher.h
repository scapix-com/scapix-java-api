// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/SSLCipher_SSLWriteCipher.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T13CC20P1305WRITECIPHERGENERATOR_CC20P1305WRITECIPHER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T13CC20P1305WRITECIPHERGENERATOR_CC20P1305WRITECIPHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLCipher_T13CC20P1305WriteCipherGenerator_CC20P1305WriteCipher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLCipher_T13CC20P1305WriteCipherGenerator_CC20P1305WriteCipher>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLCipher$T13CC20P1305WriteCipherGenerator$CC20P1305WriteCipher";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::SSLCipher_SSLWriteCipher>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T13CC20P1305WRITECIPHERGENERATOR_CC20P1305WRITECIPHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T13CC20P1305WRITECIPHERGENERATOR_CC20P1305WRITECIPHER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T13CC20P1305WRITECIPHERGENERATOR_CC20P1305WRITECIPHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLCipher_T13CC20P1305WriteCipherGenerator_CC20P1305WriteCipher : public jni::object_base<"sun/security/ssl/SSLCipher$T13CC20P1305WriteCipherGenerator$CC20P1305WriteCipher",
	sun::security::ssl::SSLCipher_SSLWriteCipher>
{
public:

	jint encrypt(jbyte contentType, jni::ref<java::nio::ByteBuffer> bb) { return call_method<"encrypt", jint>(contentType, bb); }

protected:

	SSLCipher_T13CC20P1305WriteCipherGenerator_CC20P1305WriteCipher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_T13CC20P1305WRITECIPHERGENERATOR_CC20P1305WRITECIPHER
