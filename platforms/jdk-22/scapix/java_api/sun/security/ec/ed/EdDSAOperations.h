// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAOPERATIONS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAOPERATIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ec::ed { class EdDSAOperations; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ec::ed::EdDSAOperations>
{
	static constexpr fixed_string class_name = "sun/security/ec/ed/EdDSAOperations";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAOPERATIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAOPERATIONS)
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAOPERATIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/SecureRandom.h>
#include <scapix/java_api/java/security/spec/EdDSAParameterSpec.h>
#include <scapix/java_api/java/security/spec/EdECPoint.h>
#include <scapix/java_api/java/util/function/Function.h>
#include <scapix/java_api/sun/security/ec/ed/EdDSAParameters.h>
#include <scapix/java_api/sun/security/ec/point/AffinePoint.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ec::ed::EdDSAOperations : public jni::object_base<"sun/security/ec/ed/EdDSAOperations",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::ec::ed::EdDSAOperations> new_object(jni::ref<sun::security::ec::ed::EdDSAParameters> params) { return base_::new_object(params); }
	jni::ref<sun::security::ec::ed::EdDSAParameters> getParameters() { return call_method<"getParameters", jni::ref<sun::security::ec::ed::EdDSAParameters>>(); }
	jni::ref<jni::array<jbyte>> generatePrivate(jni::ref<java::security::SecureRandom> random) { return call_method<"generatePrivate", jni::ref<jni::array<jbyte>>>(random); }
	jni::ref<java::security::spec::EdECPoint> computePublic(jni::ref<jni::array<jbyte>> privateKey) { return call_method<"computePublic", jni::ref<java::security::spec::EdECPoint>>(privateKey); }
	jni::ref<jni::array<jbyte>> sign(jni::ref<java::security::spec::EdDSAParameterSpec> sigParams, jni::ref<jni::array<jbyte>> privateKey, jni::ref<jni::array<jbyte>> message) { return call_method<"sign", jni::ref<jni::array<jbyte>>>(sigParams, privateKey, message); }
	jboolean verify(jni::ref<java::security::spec::EdDSAParameterSpec> sigParams, jni::ref<sun::security::ec::point::AffinePoint> affineA, jni::ref<jni::array<jbyte>> publicKey, jni::ref<jni::array<jbyte>> message, jni::ref<jni::array<jbyte>> signature) { return call_method<"verify", jboolean>(sigParams, affineA, publicKey, message, signature); }
	jboolean verify(jni::ref<java::security::spec::EdDSAParameterSpec> sigParams, jni::ref<jni::array<jbyte>> publicKey, jni::ref<jni::array<jbyte>> message, jni::ref<jni::array<jbyte>> signature) { return call_method<"verify", jboolean>(sigParams, publicKey, message, signature); }
	jni::ref<sun::security::ec::point::AffinePoint> decodeAffinePoint(jni::ref<java::util::function::Function> exception, jni::ref<jni::array<jbyte>> arr) { return call_method<"decodeAffinePoint", jni::ref<sun::security::ec::point::AffinePoint>>(exception, arr); }
	jni::ref<sun::security::ec::point::AffinePoint> decodeAffinePoint(jni::ref<java::util::function::Function> exception, jni::ref<java::security::spec::EdECPoint> point) { return call_method<"decodeAffinePoint", jni::ref<sun::security::ec::point::AffinePoint>>(exception, point); }

protected:

	EdDSAOperations(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAOPERATIONS
