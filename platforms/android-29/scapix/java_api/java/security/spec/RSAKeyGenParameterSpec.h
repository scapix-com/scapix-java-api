// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAKEYGENPARAMETERSPEC_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAKEYGENPARAMETERSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::spec { class RSAKeyGenParameterSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::spec::RSAKeyGenParameterSpec>
{
	static constexpr fixed_string class_name = "java/security/spec/RSAKeyGenParameterSpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::spec::AlgorithmParameterSpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAKEYGENPARAMETERSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAKEYGENPARAMETERSPEC)
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAKEYGENPARAMETERSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::spec::RSAKeyGenParameterSpec : public jni::object_base<"java/security/spec/RSAKeyGenParameterSpec",
	java::lang::Object,
	java::security::spec::AlgorithmParameterSpec>
{
public:

	static jni::ref<java::math::BigInteger> F0() { return get_static_field<"F0", jni::ref<java::math::BigInteger>>(); }
	static jni::ref<java::math::BigInteger> F4() { return get_static_field<"F4", jni::ref<java::math::BigInteger>>(); }

	static jni::ref<java::security::spec::RSAKeyGenParameterSpec> new_object(jint keysize, jni::ref<java::math::BigInteger> publicExponent) { return base_::new_object(keysize, publicExponent); }
	jint getKeysize() { return call_method<"getKeysize", jint>(); }
	jni::ref<java::math::BigInteger> getPublicExponent() { return call_method<"getPublicExponent", jni::ref<java::math::BigInteger>>(); }

protected:

	RSAKeyGenParameterSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAKEYGENPARAMETERSPEC
