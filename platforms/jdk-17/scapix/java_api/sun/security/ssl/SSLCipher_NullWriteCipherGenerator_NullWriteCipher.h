// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/SSLCipher_SSLWriteCipher.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_NULLWRITECIPHERGENERATOR_NULLWRITECIPHER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_NULLWRITECIPHERGENERATOR_NULLWRITECIPHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLCipher_NullWriteCipherGenerator_NullWriteCipher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLCipher_NullWriteCipherGenerator_NullWriteCipher>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLCipher$NullWriteCipherGenerator$NullWriteCipher";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::SSLCipher_SSLWriteCipher>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_NULLWRITECIPHERGENERATOR_NULLWRITECIPHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_NULLWRITECIPHERGENERATOR_NULLWRITECIPHER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_NULLWRITECIPHERGENERATOR_NULLWRITECIPHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLCipher_NullWriteCipherGenerator_NullWriteCipher : public jni::object_base<"sun/security/ssl/SSLCipher$NullWriteCipherGenerator$NullWriteCipher",
	sun::security::ssl::SSLCipher_SSLWriteCipher>
{
public:

	jint encrypt(jbyte contentType, jni::ref<java::nio::ByteBuffer> bb) { return call_method<"encrypt", jint>(contentType, bb); }

protected:

	SSLCipher_NullWriteCipherGenerator_NullWriteCipher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCIPHER_NULLWRITECIPHERGENERATOR_NULLWRITECIPHER
