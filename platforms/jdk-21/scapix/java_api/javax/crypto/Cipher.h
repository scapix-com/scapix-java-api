// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_CRYPTO_CIPHER_FWD
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_CIPHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::crypto { class Cipher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::crypto::Cipher>
{
	static constexpr fixed_string class_name = "javax/crypto/Cipher";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_CIPHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_CRYPTO_CIPHER)
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_CIPHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/security/AlgorithmParameters.h>
#include <scapix/java_api/java/security/Key.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/java/security/SecureRandom.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>
#include <scapix/java_api/javax/crypto/ExemptionMechanism.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::crypto::Cipher : public jni::object_base<"javax/crypto/Cipher",
	java::lang::Object>
{
public:

	static jint ENCRYPT_MODE() { return get_static_field<"ENCRYPT_MODE", jint>(); }
	static jint DECRYPT_MODE() { return get_static_field<"DECRYPT_MODE", jint>(); }
	static jint WRAP_MODE() { return get_static_field<"WRAP_MODE", jint>(); }
	static jint UNWRAP_MODE() { return get_static_field<"UNWRAP_MODE", jint>(); }
	static jint PUBLIC_KEY() { return get_static_field<"PUBLIC_KEY", jint>(); }
	static jint PRIVATE_KEY() { return get_static_field<"PRIVATE_KEY", jint>(); }
	static jint SECRET_KEY() { return get_static_field<"SECRET_KEY", jint>(); }

	static jni::ref<javax::crypto::Cipher> getInstance(jni::ref<java::lang::String> transformation) { return call_static_method<"getInstance", jni::ref<javax::crypto::Cipher>>(transformation); }
	static jni::ref<javax::crypto::Cipher> getInstance(jni::ref<java::lang::String> transformation, jni::ref<java::lang::String> provider) { return call_static_method<"getInstance", jni::ref<javax::crypto::Cipher>>(transformation, provider); }
	static jni::ref<javax::crypto::Cipher> getInstance(jni::ref<java::lang::String> transformation, jni::ref<java::security::Provider> provider) { return call_static_method<"getInstance", jni::ref<javax::crypto::Cipher>>(transformation, provider); }
	jni::ref<java::security::Provider> getProvider() { return call_method<"getProvider", jni::ref<java::security::Provider>>(); }
	jni::ref<java::lang::String> getAlgorithm() { return call_method<"getAlgorithm", jni::ref<java::lang::String>>(); }
	jint getBlockSize() { return call_method<"getBlockSize", jint>(); }
	jint getOutputSize(jint inputLen) { return call_method<"getOutputSize", jint>(inputLen); }
	jni::ref<jni::array<jbyte>> getIV() { return call_method<"getIV", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::security::AlgorithmParameters> getParameters() { return call_method<"getParameters", jni::ref<java::security::AlgorithmParameters>>(); }
	jni::ref<javax::crypto::ExemptionMechanism> getExemptionMechanism() { return call_method<"getExemptionMechanism", jni::ref<javax::crypto::ExemptionMechanism>>(); }
	void init(jint opmode, jni::ref<java::security::Key> key) { return call_method<"init", void>(opmode, key); }
	void init(jint opmode, jni::ref<java::security::Key> key, jni::ref<java::security::SecureRandom> random) { return call_method<"init", void>(opmode, key, random); }
	void init(jint opmode, jni::ref<java::security::Key> key, jni::ref<java::security::spec::AlgorithmParameterSpec> params) { return call_method<"init", void>(opmode, key, params); }
	void init(jint opmode, jni::ref<java::security::Key> key, jni::ref<java::security::spec::AlgorithmParameterSpec> params, jni::ref<java::security::SecureRandom> random) { return call_method<"init", void>(opmode, key, params, random); }
	void init(jint opmode, jni::ref<java::security::Key> key, jni::ref<java::security::AlgorithmParameters> params) { return call_method<"init", void>(opmode, key, params); }
	void init(jint opmode, jni::ref<java::security::Key> key, jni::ref<java::security::AlgorithmParameters> params, jni::ref<java::security::SecureRandom> random) { return call_method<"init", void>(opmode, key, params, random); }
	void init(jint opmode, jni::ref<java::security::cert::Certificate> certificate) { return call_method<"init", void>(opmode, certificate); }
	void init(jint opmode, jni::ref<java::security::cert::Certificate> certificate, jni::ref<java::security::SecureRandom> random) { return call_method<"init", void>(opmode, certificate, random); }
	jni::ref<jni::array<jbyte>> update(jni::ref<jni::array<jbyte>> input) { return call_method<"update", jni::ref<jni::array<jbyte>>>(input); }
	jni::ref<jni::array<jbyte>> update(jni::ref<jni::array<jbyte>> input, jint inputOffset, jint inputLen) { return call_method<"update", jni::ref<jni::array<jbyte>>>(input, inputOffset, inputLen); }
	jint update(jni::ref<jni::array<jbyte>> input, jint inputOffset, jint inputLen, jni::ref<jni::array<jbyte>> output) { return call_method<"update", jint>(input, inputOffset, inputLen, output); }
	jint update(jni::ref<jni::array<jbyte>> input, jint inputOffset, jint inputLen, jni::ref<jni::array<jbyte>> output, jint outputOffset) { return call_method<"update", jint>(input, inputOffset, inputLen, output, outputOffset); }
	jint update(jni::ref<java::nio::ByteBuffer> input, jni::ref<java::nio::ByteBuffer> output) { return call_method<"update", jint>(input, output); }
	jni::ref<jni::array<jbyte>> doFinal() { return call_method<"doFinal", jni::ref<jni::array<jbyte>>>(); }
	jint doFinal(jni::ref<jni::array<jbyte>> output, jint outputOffset) { return call_method<"doFinal", jint>(output, outputOffset); }
	jni::ref<jni::array<jbyte>> doFinal(jni::ref<jni::array<jbyte>> input) { return call_method<"doFinal", jni::ref<jni::array<jbyte>>>(input); }
	jni::ref<jni::array<jbyte>> doFinal(jni::ref<jni::array<jbyte>> input, jint inputOffset, jint inputLen) { return call_method<"doFinal", jni::ref<jni::array<jbyte>>>(input, inputOffset, inputLen); }
	jint doFinal(jni::ref<jni::array<jbyte>> input, jint inputOffset, jint inputLen, jni::ref<jni::array<jbyte>> output) { return call_method<"doFinal", jint>(input, inputOffset, inputLen, output); }
	jint doFinal(jni::ref<jni::array<jbyte>> input, jint inputOffset, jint inputLen, jni::ref<jni::array<jbyte>> output, jint outputOffset) { return call_method<"doFinal", jint>(input, inputOffset, inputLen, output, outputOffset); }
	jint doFinal(jni::ref<java::nio::ByteBuffer> input, jni::ref<java::nio::ByteBuffer> output) { return call_method<"doFinal", jint>(input, output); }
	jni::ref<jni::array<jbyte>> wrap(jni::ref<java::security::Key> key) { return call_method<"wrap", jni::ref<jni::array<jbyte>>>(key); }
	jni::ref<java::security::Key> unwrap(jni::ref<jni::array<jbyte>> wrappedKey, jni::ref<java::lang::String> wrappedKeyAlgorithm, jint wrappedKeyType) { return call_method<"unwrap", jni::ref<java::security::Key>>(wrappedKey, wrappedKeyAlgorithm, wrappedKeyType); }
	static jint getMaxAllowedKeyLength(jni::ref<java::lang::String> transformation) { return call_static_method<"getMaxAllowedKeyLength", jint>(transformation); }
	static jni::ref<java::security::spec::AlgorithmParameterSpec> getMaxAllowedParameterSpec(jni::ref<java::lang::String> transformation) { return call_static_method<"getMaxAllowedParameterSpec", jni::ref<java::security::spec::AlgorithmParameterSpec>>(transformation); }
	void updateAAD(jni::ref<jni::array<jbyte>> src) { return call_method<"updateAAD", void>(src); }
	void updateAAD(jni::ref<jni::array<jbyte>> src, jint offset, jint len) { return call_method<"updateAAD", void>(src, offset, len); }
	void updateAAD(jni::ref<java::nio::ByteBuffer> src) { return call_method<"updateAAD", void>(src); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Cipher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_CIPHER
