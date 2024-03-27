// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>
#include <scapix/java_api/java/security/interfaces/DSAParams.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_DSAPARAMETERSPEC_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_DSAPARAMETERSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::spec { class DSAParameterSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::spec::DSAParameterSpec>
{
	static constexpr fixed_string class_name = "java/security/spec/DSAParameterSpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::spec::AlgorithmParameterSpec, scapix::java_api::java::security::interfaces::DSAParams>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_DSAPARAMETERSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_DSAPARAMETERSPEC)
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_DSAPARAMETERSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::spec::DSAParameterSpec : public jni::object_base<"java/security/spec/DSAParameterSpec",
	java::lang::Object,
	java::security::spec::AlgorithmParameterSpec,
	java::security::interfaces::DSAParams>
{
public:

	static jni::ref<java::security::spec::DSAParameterSpec> new_object(jni::ref<java::math::BigInteger> p1, jni::ref<java::math::BigInteger> p2, jni::ref<java::math::BigInteger> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<java::math::BigInteger> getP() { return call_method<"getP", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getQ() { return call_method<"getQ", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getG() { return call_method<"getG", jni::ref<java::math::BigInteger>>(); }

protected:

	DSAParameterSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_DSAPARAMETERSPEC
