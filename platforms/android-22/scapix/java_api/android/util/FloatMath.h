// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_UTIL_FLOATMATH_FWD
#define SCAPIX_JAVA_API_ANDROID_UTIL_FLOATMATH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::util { class FloatMath; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::util::FloatMath>
{
	static constexpr fixed_string class_name = "android/util/FloatMath";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_FLOATMATH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_UTIL_FLOATMATH)
#define SCAPIX_JAVA_API_ANDROID_UTIL_FLOATMATH

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::util::FloatMath : public jni::object_base<"android/util/FloatMath",
	java::lang::Object>
{
public:

	static jfloat floor(jfloat p1) { return call_static_method<"floor", jfloat>(p1); }
	static jfloat ceil(jfloat p1) { return call_static_method<"ceil", jfloat>(p1); }
	static jfloat sin(jfloat p1) { return call_static_method<"sin", jfloat>(p1); }
	static jfloat cos(jfloat p1) { return call_static_method<"cos", jfloat>(p1); }
	static jfloat sqrt(jfloat p1) { return call_static_method<"sqrt", jfloat>(p1); }
	static jfloat exp(jfloat p1) { return call_static_method<"exp", jfloat>(p1); }
	static jfloat pow(jfloat p1, jfloat p2) { return call_static_method<"pow", jfloat>(p1, p2); }
	static jfloat hypot(jfloat p1, jfloat p2) { return call_static_method<"hypot", jfloat>(p1, p2); }

protected:

	FloatMath(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_FLOATMATH