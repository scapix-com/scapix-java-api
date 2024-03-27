// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ECPARAMETERSPEC_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ECPARAMETERSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::spec { class ECParameterSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::spec::ECParameterSpec>
{
	static constexpr fixed_string class_name = "java/security/spec/ECParameterSpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::spec::AlgorithmParameterSpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ECPARAMETERSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ECPARAMETERSPEC)
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ECPARAMETERSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/spec/ECPoint.h>
#include <scapix/java_api/java/security/spec/EllipticCurve.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::spec::ECParameterSpec : public jni::object_base<"java/security/spec/ECParameterSpec",
	java::lang::Object,
	java::security::spec::AlgorithmParameterSpec>
{
public:

	static jni::ref<java::security::spec::ECParameterSpec> new_object(jni::ref<java::security::spec::EllipticCurve> curve, jni::ref<java::security::spec::ECPoint> generator, jni::ref<java::math::BigInteger> order, jint cofactor) { return base_::new_object(curve, generator, order, cofactor); }
	jint getCofactor() { return call_method<"getCofactor", jint>(); }
	jni::ref<java::security::spec::EllipticCurve> getCurve() { return call_method<"getCurve", jni::ref<java::security::spec::EllipticCurve>>(); }
	jni::ref<java::security::spec::ECPoint> getGenerator() { return call_method<"getGenerator", jni::ref<java::security::spec::ECPoint>>(); }
	jni::ref<java::math::BigInteger> getOrder() { return call_method<"getOrder", jni::ref<java::math::BigInteger>>(); }

protected:

	ECParameterSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ECPARAMETERSPEC
