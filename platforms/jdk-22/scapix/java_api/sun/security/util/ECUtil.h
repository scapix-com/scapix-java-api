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
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/AlgorithmParameters.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/java/security/interfaces/ECPrivateKey.h>
#include <scapix/java_api/java/security/interfaces/ECPublicKey.h>
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

	static jni::ref<jni::array<jbyte>> sArray(jni::ref<java::math::BigInteger> s, jni::ref<java::security::spec::ECParameterSpec> params) { return call_static_method<"sArray", jni::ref<jni::array<jbyte>>>(s, params); }
	static jni::ref<java::security::spec::ECPoint> decodePoint(jni::ref<jni::array<jbyte>> data, jni::ref<java::security::spec::EllipticCurve> curve) { return call_static_method<"decodePoint", jni::ref<java::security::spec::ECPoint>>(data, curve); }
	static jni::ref<jni::array<jbyte>> encodePoint(jni::ref<java::security::spec::ECPoint> point, jni::ref<java::security::spec::EllipticCurve> curve) { return call_static_method<"encodePoint", jni::ref<jni::array<jbyte>>>(point, curve); }
	static jni::ref<jni::array<jbyte>> trimZeroes(jni::ref<jni::array<jbyte>> b) { return call_static_method<"trimZeroes", jni::ref<jni::array<jbyte>>>(b); }
	static jni::ref<java::security::interfaces::ECPublicKey> decodeX509ECPublicKey(jni::ref<jni::array<jbyte>> encoded) { return call_static_method<"decodeX509ECPublicKey", jni::ref<java::security::interfaces::ECPublicKey>>(encoded); }
	static jni::ref<jni::array<jbyte>> x509EncodeECPublicKey(jni::ref<java::security::spec::ECPoint> w, jni::ref<java::security::spec::ECParameterSpec> params) { return call_static_method<"x509EncodeECPublicKey", jni::ref<jni::array<jbyte>>>(w, params); }
	static jni::ref<java::security::interfaces::ECPrivateKey> decodePKCS8ECPrivateKey(jni::ref<jni::array<jbyte>> encoded) { return call_static_method<"decodePKCS8ECPrivateKey", jni::ref<java::security::interfaces::ECPrivateKey>>(encoded); }
	static jni::ref<java::security::interfaces::ECPrivateKey> generateECPrivateKey(jni::ref<java::math::BigInteger> s, jni::ref<java::security::spec::ECParameterSpec> params) { return call_static_method<"generateECPrivateKey", jni::ref<java::security::interfaces::ECPrivateKey>>(s, params); }
	static jni::ref<java::security::AlgorithmParameters> getECParameters(jni::ref<java::security::Provider> p) { return call_static_method<"getECParameters", jni::ref<java::security::AlgorithmParameters>>(p); }
	static jni::ref<jni::array<jbyte>> encodeECParameterSpec(jni::ref<java::security::Provider> p, jni::ref<java::security::spec::ECParameterSpec> spec) { return call_static_method<"encodeECParameterSpec", jni::ref<jni::array<jbyte>>>(p, spec); }
	static jni::ref<java::security::spec::ECParameterSpec> getECParameterSpec(jni::ref<java::security::Provider> p, jni::ref<java::security::spec::ECParameterSpec> spec) { return call_static_method<"getECParameterSpec", jni::ref<java::security::spec::ECParameterSpec>>(p, spec); }
	static jni::ref<java::security::spec::ECParameterSpec> getECParameterSpec(jni::ref<java::security::Provider> p, jni::ref<jni::array<jbyte>> params) { return call_static_method<"getECParameterSpec", jni::ref<java::security::spec::ECParameterSpec>>(p, params); }
	static jni::ref<java::security::spec::ECParameterSpec> getECParameterSpec(jni::ref<java::security::Provider> p, jni::ref<java::lang::String> name) { return call_static_method<"getECParameterSpec", jni::ref<java::security::spec::ECParameterSpec>>(p, name); }
	static jni::ref<java::security::spec::ECParameterSpec> getECParameterSpec(jni::ref<java::security::Provider> p, jint keySize) { return call_static_method<"getECParameterSpec", jni::ref<java::security::spec::ECParameterSpec>>(p, keySize); }
	static jni::ref<java::lang::String> getCurveName(jni::ref<java::security::Provider> p, jni::ref<java::security::spec::ECParameterSpec> spec) { return call_static_method<"getCurveName", jni::ref<java::lang::String>>(p, spec); }
	static jboolean equals(jni::ref<java::security::spec::ECParameterSpec> spec1, jni::ref<java::security::spec::ECParameterSpec> spec2) { return call_static_method<"equals", jboolean>(spec1, spec2); }
	static jni::ref<jni::array<jbyte>> encodeSignature(jni::ref<jni::array<jbyte>> signature) { return call_static_method<"encodeSignature", jni::ref<jni::array<jbyte>>>(signature); }
	static jni::ref<jni::array<jbyte>> decodeSignature(jni::ref<jni::array<jbyte>> sig) { return call_static_method<"decodeSignature", jni::ref<jni::array<jbyte>>>(sig); }
	static jni::ref<java::security::interfaces::ECPrivateKey> checkPrivateKey(jni::ref<java::security::interfaces::ECPrivateKey> prv) { return call_static_method<"checkPrivateKey", jni::ref<java::security::interfaces::ECPrivateKey>>(prv); }
	static void validatePublicKey(jni::ref<java::security::spec::ECPoint> point, jni::ref<java::security::spec::ECParameterSpec> spec) { return call_static_method<"validatePublicKey", void>(point, spec); }

protected:

	ECUtil(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_ECUTIL
