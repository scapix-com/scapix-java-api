// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_ECUTIL_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_ECUTIL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class ECUtil; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::ECUtil>
{
	static constexpr fixed_string class_name = "sun/security/util/ECUtil";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_ECUTIL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_ECUTIL)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_ECUTIL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/java/security/spec/ECParameterSpec.h>
#include <scapix/java_api/java/security/spec/ECPoint.h>
#include <scapix/java_api/java/security/spec/EllipticCurve.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::ECUtil : public jni::object_base<"sun/security/util/ECUtil",
	java::lang::Object>
{
public:

	static jni::ref<java::security::spec::ECPoint> decodePoint(jni::ref<jni::array<jbyte>> p1, jni::ref<java::security::spec::EllipticCurve> p2) { return call_static_method<"decodePoint", jni::ref<java::security::spec::ECPoint>>(p1, p2); }
	static jni::ref<jni::array<jbyte>> encodePoint(jni::ref<java::security::spec::ECPoint> p1, jni::ref<java::security::spec::EllipticCurve> p2) { return call_static_method<"encodePoint", jni::ref<jni::array<jbyte>>>(p1, p2); }
	static jni::ref<jni::array<jbyte>> trimZeroes(jni::ref<jni::array<jbyte>> p1) { return call_static_method<"trimZeroes", jni::ref<jni::array<jbyte>>>(p1); }
	static jni::ref<jni::array<jbyte>> encodeECParameterSpec(jni::ref<java::security::Provider> p1, jni::ref<java::security::spec::ECParameterSpec> p2) { return call_static_method<"encodeECParameterSpec", jni::ref<jni::array<jbyte>>>(p1, p2); }
	static jni::ref<java::security::spec::ECParameterSpec> getECParameterSpec(jni::ref<java::security::Provider> p1, jni::ref<java::security::spec::ECParameterSpec> p2) { return call_static_method<"getECParameterSpec", jni::ref<java::security::spec::ECParameterSpec>>(p1, p2); }
	static jni::ref<java::security::spec::ECParameterSpec> getECParameterSpec(jni::ref<java::security::Provider> p1, jni::ref<jni::array<jbyte>> p2) { return call_static_method<"getECParameterSpec", jni::ref<java::security::spec::ECParameterSpec>>(p1, p2); }
	static jni::ref<java::security::spec::ECParameterSpec> getECParameterSpec(jni::ref<java::security::Provider> p1, jni::ref<java::lang::String> p2) { return call_static_method<"getECParameterSpec", jni::ref<java::security::spec::ECParameterSpec>>(p1, p2); }
	static jni::ref<java::security::spec::ECParameterSpec> getECParameterSpec(jni::ref<java::security::Provider> p1, jint p2) { return call_static_method<"getECParameterSpec", jni::ref<java::security::spec::ECParameterSpec>>(p1, p2); }
	static jni::ref<java::lang::String> getCurveName(jni::ref<java::security::Provider> p1, jni::ref<java::security::spec::ECParameterSpec> p2) { return call_static_method<"getCurveName", jni::ref<java::lang::String>>(p1, p2); }
	static jboolean equals(jni::ref<java::security::spec::ECParameterSpec> p1, jni::ref<java::security::spec::ECParameterSpec> p2) { return call_static_method<"equals", jboolean>(p1, p2); }
	static jni::ref<jni::array<jbyte>> encodeSignature(jni::ref<jni::array<jbyte>> p1) { return call_static_method<"encodeSignature", jni::ref<jni::array<jbyte>>>(p1); }
	static jni::ref<jni::array<jbyte>> decodeSignature(jni::ref<jni::array<jbyte>> p1) { return call_static_method<"decodeSignature", jni::ref<jni::array<jbyte>>>(p1); }

protected:

	ECUtil(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_ECUTIL
