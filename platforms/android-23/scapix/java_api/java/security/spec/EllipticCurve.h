// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ELLIPTICCURVE_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ELLIPTICCURVE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::spec { class EllipticCurve; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::spec::EllipticCurve>
{
	static constexpr fixed_string class_name = "java/security/spec/EllipticCurve";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ELLIPTICCURVE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ELLIPTICCURVE)
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ELLIPTICCURVE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/spec/ECField.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::spec::EllipticCurve : public jni::object_base<"java/security/spec/EllipticCurve",
	java::lang::Object>
{
public:

	static jni::ref<java::security::spec::EllipticCurve> new_object(jni::ref<java::security::spec::ECField> field, jni::ref<java::math::BigInteger> a, jni::ref<java::math::BigInteger> b, jni::ref<jni::array<jbyte>> seed) { return base_::new_object(field, a, b, seed); }
	static jni::ref<java::security::spec::EllipticCurve> new_object(jni::ref<java::security::spec::ECField> field, jni::ref<java::math::BigInteger> a, jni::ref<java::math::BigInteger> b) { return base_::new_object(field, a, b); }
	jni::ref<java::math::BigInteger> getA() { return call_method<"getA", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getB() { return call_method<"getB", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::security::spec::ECField> getField() { return call_method<"getField", jni::ref<java::security::spec::ECField>>(); }
	jni::ref<jni::array<jbyte>> getSeed() { return call_method<"getSeed", jni::ref<jni::array<jbyte>>>(); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	EllipticCurve(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ELLIPTICCURVE
