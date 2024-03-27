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
	static jdouble toRadians(jdouble angdeg) { return call_static_method<"toRadians", jdouble>(angdeg); }
	static jdouble toDegrees(jdouble angrad) { return call_static_method<"toDegrees", jdouble>(angrad); }
	static jdouble exp(jdouble p1) { return call_static_method<"exp", jdouble>(p1); }
	static jdouble log(jdouble p1) { return call_static_method<"log", jdouble>(p1); }
	static jdouble log10(jdouble p1) { return call_static_method<"log10", jdouble>(p1); }
	static jdouble sqrt(jdouble p1) { return call_static_method<"sqrt", jdouble>(p1); }
	static jdouble cbrt(jdouble p1) { return call_static_method<"cbrt", jdouble>(p1); }
	static jdouble IEEEremainder(jdouble p1, jdouble p2) { return call_static_method<"IEEEremainder", jdouble>(p1, p2); }
	static jdouble ceil(jdouble a) { return call_static_method<"ceil", jdouble>(a); }
	static jdouble floor(jdouble a) { return call_static_method<"floor", jdouble>(a); }
	static jdouble rint(jdouble a) { return call_static_method<"rint", jdouble>(a); }
	static jdouble atan2(jdouble p1, jdouble p2) { return call_static_method<"atan2", jdouble>(p1, p2); }
	static jdouble pow(jdouble p1, jdouble p2) { return call_static_method<"pow", jdouble>(p1, p2); }
	static jint round(jfloat a) { return call_static_method<"round", jint>(a); }
	static jlong round(jdouble a) { return call_static_method<"round", jlong>(a); }
	static jdouble random() { return call_static_method<"random", jdouble>(); }
	static jint addExact(jint x, jint y) { return call_static_method<"addExact", jint>(x, y); }
	static jlong addExact(jlong x, jlong p2) { return call_static_method<"addExact", jlong>(x, p2); }
	static jint subtractExact(jint x, jint y) { return call_static_method<"subtractExact", jint>(x, y); }
	static jlong subtractExact(jlong x, jlong p2) { return call_static_method<"subtractExact", jlong>(x, p2); }
	static jint multiplyExact(jint x, jint y) { return call_static_method<"multiplyExact", jint>(x, y); }
	static jlong multiplyExact(jlong x, jlong p2) { return call_static_method<"multiplyExact", jlong>(x, p2); }
	static jint toIntExact(jlong value) { return call_static_method<"toIntExact", jint>(value); }
	static jint floorDiv(jint x, jint y) { return call_static_method<"floorDiv", jint>(x, y); }
	static jlong floorDiv(jlong x, jlong p2) { return call_static_method<"floorDiv", jlong>(x, p2); }
	static jint floorMod(jint x, jint y) { return call_static_method<"floorMod", jint>(x, y); }
	static jlong floorMod(jlong x, jlong p2) { return call_static_method<"floorMod", jlong>(x, p2); }
	static jint abs(jint a) { return call_static_method<"abs", jint>(a); }
	static jlong abs(jlong a) { return call_static_method<"abs", jlong>(a); }
	static jfloat abs(jfloat a) { return call_static_method<"abs", jfloat>(a); }
	static jdouble abs(jdouble a) { return call_static_method<"abs", jdouble>(a); }
	static jint max(jint a, jint b) { return call_static_method<"max", jint>(a, b); }
	static jlong max(jlong a, jlong p2) { return call_static_method<"max", jlong>(a, p2); }
	static jfloat max(jfloat a, jfloat b) { return call_static_method<"max", jfloat>(a, b); }
	static jdouble max(jdouble a, jdouble p2) { return call_static_method<"max", jdouble>(a, p2); }
	static jint min(jint a, jint b) { return call_static_method<"min", jint>(a, b); }
	static jlong min(jlong a, jlong p2) { return call_static_method<"min", jlong>(a, p2); }
	static jfloat min(jfloat a, jfloat b) { return call_static_method<"min", jfloat>(a, b); }
	static jdouble min(jdouble a, jdouble p2) { return call_static_method<"min", jdouble>(a, p2); }
	static jdouble ulp(jdouble d) { return call_static_method<"ulp", jdouble>(d); }
	static jfloat ulp(jfloat f) { return call_static_method<"ulp", jfloat>(f); }
	static jdouble signum(jdouble d) { return call_static_method<"signum", jdouble>(d); }
	static jfloat signum(jfloat f) { return call_static_method<"signum", jfloat>(f); }
	static jdouble sinh(jdouble p1) { return call_static_method<"sinh", jdouble>(p1); }
	static jdouble cosh(jdouble p1) { return call_static_method<"cosh", jdouble>(p1); }
	static jdouble tanh(jdouble p1) { return call_static_method<"tanh", jdouble>(p1); }
	static jdouble hypot(jdouble p1, jdouble p2) { return call_static_method<"hypot", jdouble>(p1, p2); }
	static jdouble expm1(jdouble p1) { return call_static_method<"expm1", jdouble>(p1); }
	static jdouble log1p(jdouble p1) { return call_static_method<"log1p", jdouble>(p1); }
	static jdouble copySign(jdouble magnitude, jdouble p2) { return call_static_method<"copySign", jdouble>(magnitude, p2); }
	static jfloat copySign(jfloat magnitude, jfloat sign) { return call_static_method<"copySign", jfloat>(magnitude, sign); }
	static jint getExponent(jfloat f) { return call_static_method<"getExponent", jint>(f); }
	static jint getExponent(jdouble d) { return call_static_method<"getExponent", jint>(d); }
	static jdouble nextAfter(jdouble start, jdouble p2) { return call_static_method<"nextAfter", jdouble>(start, p2); }
	static jfloat nextAfter(jfloat start, jdouble direction) { return call_static_method<"nextAfter", jfloat>(start, direction); }
	static jdouble nextUp(jdouble d) { return call_static_method<"nextUp", jdouble>(d); }
	static jfloat nextUp(jfloat f) { return call_static_method<"nextUp", jfloat>(f); }
	static jdouble nextDown(jdouble d) { return call_static_method<"nextDown", jdouble>(d); }
	static jfloat nextDown(jfloat f) { return call_static_method<"nextDown", jfloat>(f); }
	static jdouble scalb(jdouble d, jint p2) { return call_static_method<"scalb", jdouble>(d, p2); }
	static jfloat scalb(jfloat f, jint scaleFactor) { return call_static_method<"scalb", jfloat>(f, scaleFactor); }

protected:

	StrictMath(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STRICTMATH
