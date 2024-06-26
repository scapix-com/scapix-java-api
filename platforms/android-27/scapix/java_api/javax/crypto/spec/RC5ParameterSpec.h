// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>

#ifndef SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_RC5PARAMETERSPEC_FWD
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_RC5PARAMETERSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::crypto::spec { class RC5ParameterSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::crypto::spec::RC5ParameterSpec>
{
	static constexpr fixed_string class_name = "javax/crypto/spec/RC5ParameterSpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::spec::AlgorithmParameterSpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_RC5PARAMETERSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_RC5PARAMETERSPEC)
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_RC5PARAMETERSPEC

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::crypto::spec::RC5ParameterSpec : public jni::object_base<"javax/crypto/spec/RC5ParameterSpec",
	java::lang::Object,
	java::security::spec::AlgorithmParameterSpec>
{
public:

	static jni::ref<javax::crypto::spec::RC5ParameterSpec> new_object(jint version, jint rounds, jint wordSize) { return base_::new_object(version, rounds, wordSize); }
	static jni::ref<javax::crypto::spec::RC5ParameterSpec> new_object(jint version, jint rounds, jint wordSize, jni::ref<jni::array<jbyte>> iv) { return base_::new_object(version, rounds, wordSize, iv); }
	static jni::ref<javax::crypto::spec::RC5ParameterSpec> new_object(jint version, jint rounds, jint wordSize, jni::ref<jni::array<jbyte>> iv, jint offset) { return base_::new_object(version, rounds, wordSize, iv, offset); }
	jint getVersion() { return call_method<"getVersion", jint>(); }
	jint getRounds() { return call_method<"getRounds", jint>(); }
	jint getWordSize() { return call_method<"getWordSize", jint>(); }
	jni::ref<jni::array<jbyte>> getIV() { return call_method<"getIV", jni::ref<jni::array<jbyte>>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	RC5ParameterSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_RC5PARAMETERSPEC
