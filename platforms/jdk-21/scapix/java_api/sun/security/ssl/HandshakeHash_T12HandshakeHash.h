// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/HandshakeHash_TranscriptHash.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_HANDSHAKEHASH_T12HANDSHAKEHASH_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_HANDSHAKEHASH_T12HANDSHAKEHASH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class HandshakeHash_T12HandshakeHash; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::HandshakeHash_T12HandshakeHash>
{
	static constexpr fixed_string class_name = "sun/security/ssl/HandshakeHash$T12HandshakeHash";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::HandshakeHash_TranscriptHash>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_HANDSHAKEHASH_T12HANDSHAKEHASH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_HANDSHAKEHASH_T12HANDSHAKEHASH)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_HANDSHAKEHASH_T12HANDSHAKEHASH

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::HandshakeHash_T12HandshakeHash : public jni::object_base<"sun/security/ssl/HandshakeHash$T12HandshakeHash",
	java::lang::Object,
	sun::security::ssl::HandshakeHash_TranscriptHash>
{
public:

	void update(jni::ref<jni::array<jbyte>> input, jint offset, jint length) { return call_method<"update", void>(input, offset, length); }
	jni::ref<jni::array<jbyte>> digest() { return call_method<"digest", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> archived() { return call_method<"archived", jni::ref<jni::array<jbyte>>>(); }

protected:

	HandshakeHash_T12HandshakeHash(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_HANDSHAKEHASH_T12HANDSHAKEHASH
