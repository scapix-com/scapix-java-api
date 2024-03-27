// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/crypto/provider/ChaCha20Cipher_ChaChaEngine.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_CHACHA20CIPHER_ENGINEAEADDEC_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_CHACHA20CIPHER_ENGINEAEADDEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class ChaCha20Cipher_EngineAEADDec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::ChaCha20Cipher_EngineAEADDec>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/ChaCha20Cipher$EngineAEADDec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::crypto::provider::ChaCha20Cipher_ChaChaEngine>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_CHACHA20CIPHER_ENGINEAEADDEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_CHACHA20CIPHER_ENGINEAEADDEC)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_CHACHA20CIPHER_ENGINEAEADDEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::crypto::provider::ChaCha20Cipher_EngineAEADDec : public jni::object_base<"com/sun/crypto/provider/ChaCha20Cipher$EngineAEADDec",
	java::lang::Object,
	com::sun::crypto::provider::ChaCha20Cipher_ChaChaEngine>
{
public:

	jint getOutputSize(jint inLen, jboolean isFinal) { return call_method<"getOutputSize", jint>(inLen, isFinal); }
	jint doUpdate(jni::ref<jni::array<jbyte>> in, jint inOff, jint inLen, jni::ref<jni::array<jbyte>> out, jint outOff) { return call_method<"doUpdate", jint>(in, inOff, inLen, out, outOff); }
	jint doUpdate(jni::ref<java::nio::ByteBuffer> input, jni::ref<java::nio::ByteBuffer> output) { return call_method<"doUpdate", jint>(input, output); }
	jint doFinal(jni::ref<jni::array<jbyte>> in, jint inOff, jint inLen, jni::ref<jni::array<jbyte>> out, jint outOff) { return call_method<"doFinal", jint>(in, inOff, inLen, out, outOff); }
	jint doFinal(jni::ref<java::nio::ByteBuffer> input, jni::ref<java::nio::ByteBuffer> output) { return call_method<"doFinal", jint>(input, output); }

protected:

	ChaCha20Cipher_EngineAEADDec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_CHACHA20CIPHER_ENGINEAEADDEC
