// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ec/ed/EdECOperations.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_ED448OPERATIONS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_ED448OPERATIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ec::ed { class Ed448Operations; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ec::ed::Ed448Operations>
{
	static constexpr fixed_string class_name = "sun/security/ec/ed/Ed448Operations";
	using base_classes = std::tuple<scapix::java_api::sun::security::ec::ed::EdECOperations>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_ED448OPERATIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_ED448OPERATIONS)
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_ED448OPERATIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/util/function/Function.h>
#include <scapix/java_api/sun/security/ec/point/AffinePoint.h>
#include <scapix/java_api/sun/security/ec/point/Point.h>
#include <scapix/java_api/sun/security/ec/point/ProjectivePoint_Immutable.h>
#include <scapix/java_api/sun/security/util/math/ImmutableIntegerModuloP.h>
#include <scapix/java_api/sun/security/util/math/IntegerModuloP.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ec::ed::Ed448Operations : public jni::object_base<"sun/security/ec/ed/Ed448Operations",
	sun::security::ec::ed::EdECOperations>
{
public:

	static jni::ref<sun::security::ec::ed::Ed448Operations> new_object(jni::ref<sun::security::util::math::ImmutableIntegerModuloP> d, jni::ref<java::math::BigInteger> baseX, jni::ref<java::math::BigInteger> baseY) { return base_::new_object(d, baseX, baseY); }
	jni::ref<sun::security::ec::point::Point> basePointMultiply(jni::ref<jni::array<jbyte>> scalar) { return call_method<"basePointMultiply", jni::ref<sun::security::ec::point::Point>>(scalar); }
	jni::ref<sun::security::ec::point::ProjectivePoint_Immutable> of(jni::ref<sun::security::ec::point::AffinePoint> p) { return call_method<"of", jni::ref<sun::security::ec::point::ProjectivePoint_Immutable>>(p); }
	jni::ref<sun::security::ec::point::AffinePoint> decodeAffinePoint(jni::ref<java::util::function::Function> exception, jint xLSB, jni::ref<sun::security::util::math::IntegerModuloP> y) { return call_method<"decodeAffinePoint", jni::ref<sun::security::ec::point::AffinePoint>>(exception, xLSB, y); }

protected:

	Ed448Operations(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_ED448OPERATIONS