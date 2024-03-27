// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSAOPERATIONS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSAOPERATIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ec { class ECDSAOperations; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ec::ECDSAOperations>
{
	static constexpr fixed_string class_name = "sun/security/ec/ECDSAOperations";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSAOPERATIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSAOPERATIONS)
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSAOPERATIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/spec/ECParameterSpec.h>
#include <scapix/java_api/java/security/spec/ECPoint.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/sun/security/ec/ECDSAOperations_Nonce.h>
#include <scapix/java_api/sun/security/ec/ECDSAOperations_Seed.h>
#include <scapix/java_api/sun/security/ec/ECOperations.h>
#include <scapix/java_api/sun/security/ec/point/AffinePoint.h>
#include <scapix/java_api/sun/security/util/math/ImmutableIntegerModuloP.h>
#include <scapix/java_api/sun/security/util/math/IntegerFieldModuloP.h>
#include <scapix/java_api/sun/security/util/math/IntegerModuloP.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ec::ECDSAOperations : public jni::object_base<"sun/security/ec/ECDSAOperations",
	java::lang::Object>
{
public:

	using Seed = ECDSAOperations_Seed;
	using Nonce = ECDSAOperations_Nonce;

	static jni::ref<sun::security::ec::ECDSAOperations> new_object(jni::ref<sun::security::ec::ECOperations> ecOps, jni::ref<java::security::spec::ECPoint> basePoint) { return base_::new_object(ecOps, basePoint); }
	jni::ref<sun::security::ec::ECOperations> getEcOperations() { return call_method<"getEcOperations", jni::ref<sun::security::ec::ECOperations>>(); }
	jni::ref<sun::security::ec::point::AffinePoint> basePointMultiply(jni::ref<jni::array<jbyte>> scalar) { return call_method<"basePointMultiply", jni::ref<sun::security::ec::point::AffinePoint>>(scalar); }
	static jni::ref<sun::security::ec::point::AffinePoint> toAffinePoint(jni::ref<java::security::spec::ECPoint> point, jni::ref<sun::security::util::math::IntegerFieldModuloP> field) { return call_static_method<"toAffinePoint", jni::ref<sun::security::ec::point::AffinePoint>>(point, field); }
	static jni::ref<java::util::Optional> forParameters(jni::ref<java::security::spec::ECParameterSpec> ecParams) { return call_static_method<"forParameters", jni::ref<java::util::Optional>>(ecParams); }
	jni::ref<jni::array<jbyte>> signDigest(jni::ref<jni::array<jbyte>> privateKey, jni::ref<jni::array<jbyte>> digest, jni::ref<sun::security::ec::ECDSAOperations_Seed> seed) { return call_method<"signDigest", jni::ref<jni::array<jbyte>>>(privateKey, digest, seed); }
	jni::ref<jni::array<jbyte>> signDigest(jni::ref<jni::array<jbyte>> privateKey, jni::ref<jni::array<jbyte>> digest, jni::ref<sun::security::ec::ECDSAOperations_Nonce> nonce) { return call_method<"signDigest", jni::ref<jni::array<jbyte>>>(privateKey, digest, nonce); }
	jboolean verifySignedDigest(jni::ref<jni::array<jbyte>> digest, jni::ref<jni::array<jbyte>> sig, jni::ref<java::security::spec::ECPoint> pp) { return call_method<"verifySignedDigest", jboolean>(digest, sig, pp); }
	static jni::ref<sun::security::util::math::ImmutableIntegerModuloP> b2a(jni::ref<sun::security::util::math::IntegerModuloP> b, jni::ref<sun::security::util::math::IntegerFieldModuloP> orderField, jni::ref<jni::array<jbyte>> temp1) { return call_static_method<"b2a", jni::ref<sun::security::util::math::ImmutableIntegerModuloP>>(b, orderField, temp1); }

protected:

	ECDSAOperations(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDSAOPERATIONS