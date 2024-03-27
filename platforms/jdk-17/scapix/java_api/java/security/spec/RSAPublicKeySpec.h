// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/KeySpec.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAPUBLICKEYSPEC_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAPUBLICKEYSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::spec { class RSAPublicKeySpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::spec::RSAPublicKeySpec>
{
	static constexpr fixed_string class_name = "java/security/spec/RSAPublicKeySpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::spec::KeySpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAPUBLICKEYSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAPUBLICKEYSPEC)
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAPUBLICKEYSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::spec::RSAPublicKeySpec : public jni::object_base<"java/security/spec/RSAPublicKeySpec",
	java::lang::Object,
	java::security::spec::KeySpec>
{
public:

	static jni::ref<java::security::spec::RSAPublicKeySpec> new_object(jni::ref<java::math::BigInteger> modulus, jni::ref<java::math::BigInteger> publicExponent) { return base_::new_object(modulus, publicExponent); }
	static jni::ref<java::security::spec::RSAPublicKeySpec> new_object(jni::ref<java::math::BigInteger> modulus, jni::ref<java::math::BigInteger> publicExponent, jni::ref<java::security::spec::AlgorithmParameterSpec> params) { return base_::new_object(modulus, publicExponent, params); }
	jni::ref<java::math::BigInteger> getModulus() { return call_method<"getModulus", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getPublicExponent() { return call_method<"getPublicExponent", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::security::spec::AlgorithmParameterSpec> getParams() { return call_method<"getParams", jni::ref<java::security::spec::AlgorithmParameterSpec>>(); }

protected:

	RSAPublicKeySpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAPUBLICKEYSPEC