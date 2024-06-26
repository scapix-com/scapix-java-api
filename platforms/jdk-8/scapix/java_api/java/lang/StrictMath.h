// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_STRICTMATH_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_STRICTMATH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class StrictMath; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::StrictMath>
{
	static constexpr fixed_string class_name = "java/lang/StrictMath";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STRICTMATH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_STRICTMATH)
#define SCAPIX_JAVA_API_JAVA_LANG_STRICTMATH

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::StrictMath : public jni::object_base<"java/lang/StrictMath",
	java::lang::Object>
{
public:

	static jdouble E() { return get_static_field<"E", jdouble>(); }
	static jdouble PI() { return get_static_field<"PI", jdouble>(); }

	static jdouble sin(jdouble p1) { return call_static_method<"sin", jdouble>(p1); }
	static jdouble cos(jdouble p1) { return call_static_method<"cos", jdouble>(p1); }
	static jdouble tan(jdouble p1) { return call_static_method<"tan", jdouble>(p1); }
	static jdouble asin(jdouble p1) { return call_static_method<"asin", jdouble>(p1); }
	static jdouble acos(jdouble p1) { return call_static_method<"acos", jdouble>(p1); }
	static jdouble atan(jdouble p1) { return call_static_method<"atan", jdouble>(p1); }
	static jdouble toRadians(jdouble p1) { return call_static_method<"toRadians", jdouble>(p1); }
	static jdouble toDegrees(jdouble p1) { return call_static_method<"toDegrees", jdouble>(p1); }
	static jdouble exp(jdouble p1) { return call_static_method<"exp", jdouble>(p1); }
	static jdouble log(jdouble p1) { return call_static_method<"log", jdouble>(p1); }
	static jdouble log10(jdouble p1) { return call_static_method<"log10", jdouble>(p1); }
	static jdouble sqrt(jdouble p1) { return call_static_method<"sqrt", jdouble>(p1); }
	static jdouble cbrt(jdouble p1) { return call_static_method<"cbrt", jdouble>(p1); }
	static jdouble IEEEremainder(jdouble p1, jdouble p2) { return call_static_method<"IEEEremainder", jdouble>(p1, p2); }
	static jdouble ceil(jdouble p1) { return call_static_method<"ceil", jdouble>(p1); }
	static jdouble floor(jdouble p1) { return call_static_method<"floor", jdouble>(p1); }
	static jdouble rint(jdouble p1) { return call_static_method<"rint", jdouble>(p1); }
	static jdouble atan2(jdouble p1, jdouble p2) { return call_static_method<"atan2", jdouble>(p1, p2); }
	static jdouble pow(jdouble p1, jdouble p2) { return call_static_method<"pow", jdouble>(p1, p2); }
	static jint round(jfloat p1) { return call_static_method<"round", jint>(p1); }
	static jlong round(jdouble p1) { return call_static_method<"round", jlong>(p1); }
	static jdouble random() { return call_static_method<"random", jdouble>(); }
	static jint addExact(jint p1, jint p2) { return call_static_method<"addExact", jint>(p1, p2); }
	static jlong addExact(jlong p1, jlong p2) { return call_static_method<"addExact", jlong>(p1, p2); }
	static jint subtractExact(jint p1, jint p2) { return call_static_method<"subtractExact", jint>(p1, p2); }
	static jlong subtractExact(jlong p1, jlong p2) { return call_static_method<"subtractExact", jlong>(p1, p2); }
	static jint multiplyExact(jint p1, jint p2) { return call_static_method<"multiplyExact", jint>(p1, p2); }
	static jlong multiplyExact(jlong p1, jlong p2) { return call_static_method<"multiplyExact", jlong>(p1, p2); }
	static jint toIntExact(jlong p1) { return call_static_method<"toIntExact", jint>(p1); }
	static jint floorDiv(jint p1, jint p2) { return call_static_method<"floorDiv", jint>(p1, p2); }
	static jlong floorDiv(jlong p1, jlong p2) { return call_static_method<"floorDiv", jlong>(p1, p2); }
	static jint floorMod(jint p1, jint p2) { return call_static_method<"floorMod", jint>(p1, p2); }
	static jlong floorMod(jlong p1, jlong p2) { return call_static_method<"floorMod", jlong>(p1, p2); }
	static jint abs(jint p1) { return call_static_method<"abs", jint>(p1); }
	static jlong abs(jlong p1) { return call_static_method<"abs", jlong>(p1); }
	static jfloat abs(jfloat p1) { return call_static_method<"abs", jfloat>(p1); }
	static jdouble abs(jdouble p1) { return call_static_method<"abs", jdouble>(p1); }
	static jint max(jint p1, jint p2) { return call_static_method<"max", jint>(p1, p2); }
	static jlong max(jlong p1, jlong p2) { return call_static_method<"max", jlong>(p1, p2); }
	static jfloat max(jfloat p1, jfloat p2) { return call_static_method<"max", jfloat>(p1, p2); }
	static jdouble max(jdouble p1, jdouble p2) { return call_static_method<"max", jdouble>(p1, p2); }
	static jint min(jint p1, jint p2) { return call_static_method<"min", jint>(p1, p2); }
	static jlong min(jlong p1, jlong p2) { return call_static_method<"min", jlong>(p1, p2); }
	static jfloat min(jfloat p1, jfloat p2) { return call_static_method<"min", jfloat>(p1, p2); }
	static jdouble min(jdouble p1, jdouble p2) { return call_static_method<"min", jdouble>(p1, p2); }
	static jdouble ulp(jdouble p1) { return call_static_method<"ulp", jdouble>(p1); }
	static jfloat ulp(jfloat p1) { return call_static_method<"ulp", jfloat>(p1); }
	static jdouble signum(jdouble p1) { return call_static_method<"signum", jdouble>(p1); }
	static jfloat signum(jfloat p1) { return call_static_method<"signum", jfloat>(p1); }
	static jdouble sinh(jdouble p1) { return call_static_method<"sinh", jdouble>(p1); }
	static jdouble cosh(jdouble p1) { return call_static_method<"cosh", jdouble>(p1); }
	static jdouble tanh(jdouble p1) { return call_static_method<"tanh", jdouble>(p1); }
	static jdouble hypot(jdouble p1, jdouble p2) { return call_static_method<"hypot", jdouble>(p1, p2); }
	static jdouble expm1(jdouble p1) { return call_static_method<"expm1", jdouble>(p1); }
	static jdouble log1p(jdouble p1) { return call_static_method<"log1p", jdouble>(p1); }
	static jdouble copySign(jdouble p1, jdouble p2) { return call_static_method<"copySign", jdouble>(p1, p2); }
	static jfloat copySign(jfloat p1, jfloat p2) { return call_static_method<"copySign", jfloat>(p1, p2); }
	static jint getExponent(jfloat p1) { return call_static_method<"getExponent", jint>(p1); }
	static jint getExponent(jdouble p1) { return call_static_method<"getExponent", jint>(p1); }
	static jdouble nextAfter(jdouble p1, jdouble p2) { return call_static_method<"nextAfter", jdouble>(p1, p2); }
	static jfloat nextAfter(jfloat p1, jdouble p2) { return call_static_method<"nextAfter", jfloat>(p1, p2); }
	static jdouble nextUp(jdouble p1) { return call_static_method<"nextUp", jdouble>(p1); }
	static jfloat nextUp(jfloat p1) { return call_static_method<"nextUp", jfloat>(p1); }
	static jdouble nextDown(jdouble p1) { return call_static_method<"nextDown", jdouble>(p1); }
	static jfloat nextDown(jfloat p1) { return call_static_method<"nextDown", jfloat>(p1); }
	static jdouble scalb(jdouble p1, jint p2) { return call_static_method<"scalb", jdouble>(p1, p2); }
	static jfloat scalb(jfloat p1, jint p2) { return call_static_method<"scalb", jfloat>(p1, p2); }

protected:

	StrictMath(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STRICTMATH
