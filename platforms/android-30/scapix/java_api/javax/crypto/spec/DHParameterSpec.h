// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>

#ifndef SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_DHPARAMETERSPEC_FWD
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_DHPARAMETERSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::crypto::spec { class DHParameterSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::crypto::spec::DHParameterSpec>
{
	static constexpr fixed_string class_name = "javax/crypto/spec/DHParameterSpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::spec::AlgorithmParameterSpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_DHPARAMETERSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_DHPARAMETERSPEC)
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_DHPARAMETERSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::crypto::spec::DHParameterSpec : public jni::object_base<"javax/crypto/spec/DHParameterSpec",
	java::lang::Object,
	java::security::spec::AlgorithmParameterSpec>
{
public:

	static jni::ref<javax::crypto::spec::DHParameterSpec> new_object(jni::ref<java::math::BigInteger> p, jni::ref<java::math::BigInteger> g) { return base_::new_object(p, g); }
	static jni::ref<javax::crypto::spec::DHParameterSpec> new_object(jni::ref<java::math::BigInteger> p, jni::ref<java::math::BigInteger> g, jint l) { return base_::new_object(p, g, l); }
	jni::ref<java::math::BigInteger> getP() { return call_method<"getP", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getG() { return call_method<"getG", jni::ref<java::math::BigInteger>>(); }
	jint getL() { return call_method<"getL", jint>(); }

protected:

	DHParameterSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_DHPARAMETERSPEC