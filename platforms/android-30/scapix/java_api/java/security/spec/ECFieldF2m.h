// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/ECField.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ECFIELDF2M_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ECFIELDF2M_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::spec { class ECFieldF2m; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::spec::ECFieldF2m>
{
	static constexpr fixed_string class_name = "java/security/spec/ECFieldF2m";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::spec::ECField>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ECFIELDF2M_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ECFIELDF2M)
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ECFIELDF2M

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::spec::ECFieldF2m : public jni::object_base<"java/security/spec/ECFieldF2m",
	java::lang::Object,
	java::security::spec::ECField>
{
public:

	static jni::ref<java::security::spec::ECFieldF2m> new_object(jint m) { return base_::new_object(m); }
	static jni::ref<java::security::spec::ECFieldF2m> new_object(jint m, jni::ref<java::math::BigInteger> rp) { return base_::new_object(m, rp); }
	static jni::ref<java::security::spec::ECFieldF2m> new_object(jint m, jni::ref<jni::array<jint>> ks) { return base_::new_object(m, ks); }
	jint getFieldSize() { return call_method<"getFieldSize", jint>(); }
	jint getM() { return call_method<"getM", jint>(); }
	jni::ref<java::math::BigInteger> getReductionPolynomial() { return call_method<"getReductionPolynomial", jni::ref<java::math::BigInteger>>(); }
	jni::ref<jni::array<jint>> getMidTermsOfReductionPolynomial() { return call_method<"getMidTermsOfReductionPolynomial", jni::ref<jni::array<jint>>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	ECFieldF2m(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ECFIELDF2M
