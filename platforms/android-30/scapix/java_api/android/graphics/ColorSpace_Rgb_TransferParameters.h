// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_RGB_TRANSFERPARAMETERS_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_RGB_TRANSFERPARAMETERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class ColorSpace_Rgb_TransferParameters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::ColorSpace_Rgb_TransferParameters>
{
	static constexpr fixed_string class_name = "android/graphics/ColorSpace$Rgb$TransferParameters";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_RGB_TRANSFERPARAMETERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_RGB_TRANSFERPARAMETERS)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_RGB_TRANSFERPARAMETERS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::ColorSpace_Rgb_TransferParameters : public jni::object_base<"android/graphics/ColorSpace$Rgb$TransferParameters",
	java::lang::Object>
{
public:

	jdouble a() { return get_field<"a", jdouble>(); }
	jdouble b() { return get_field<"b", jdouble>(); }
	jdouble c() { return get_field<"c", jdouble>(); }
	jdouble d() { return get_field<"d", jdouble>(); }
	jdouble e() { return get_field<"e", jdouble>(); }
	jdouble f() { return get_field<"f", jdouble>(); }
	jdouble g() { return get_field<"g", jdouble>(); }

	static jni::ref<android::graphics::ColorSpace_Rgb_TransferParameters> new_object(jdouble a, jdouble p2, jdouble b, jdouble p4, jdouble c) { return base_::new_object(a, p2, b, p4, c); }
	static jni::ref<android::graphics::ColorSpace_Rgb_TransferParameters> new_object(jdouble a, jdouble p2, jdouble b, jdouble p4, jdouble c, jdouble p6, jdouble d) { return base_::new_object(a, p2, b, p4, c, p6, d); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	ColorSpace_Rgb_TransferParameters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_RGB_TRANSFERPARAMETERS
