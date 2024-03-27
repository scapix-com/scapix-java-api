// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_MATRIX_SCALETOFIT_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_MATRIX_SCALETOFIT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class Matrix_ScaleToFit; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::Matrix_ScaleToFit>
{
	static constexpr fixed_string class_name = "android/graphics/Matrix$ScaleToFit";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_MATRIX_SCALETOFIT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_MATRIX_SCALETOFIT)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_MATRIX_SCALETOFIT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::Matrix_ScaleToFit : public jni::object_base<"android/graphics/Matrix$ScaleToFit",
	java::lang::Enum>
{
public:

	static jni::ref<android::graphics::Matrix_ScaleToFit> CENTER() { return get_static_field<"CENTER", jni::ref<android::graphics::Matrix_ScaleToFit>>(); }
	static jni::ref<android::graphics::Matrix_ScaleToFit> END() { return get_static_field<"END", jni::ref<android::graphics::Matrix_ScaleToFit>>(); }
	static jni::ref<android::graphics::Matrix_ScaleToFit> FILL() { return get_static_field<"FILL", jni::ref<android::graphics::Matrix_ScaleToFit>>(); }
	static jni::ref<android::graphics::Matrix_ScaleToFit> START() { return get_static_field<"START", jni::ref<android::graphics::Matrix_ScaleToFit>>(); }

	static jni::ref<jni::array<android::graphics::Matrix_ScaleToFit>> values() { return call_static_method<"values", jni::ref<jni::array<android::graphics::Matrix_ScaleToFit>>>(); }
	static jni::ref<android::graphics::Matrix_ScaleToFit> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::graphics::Matrix_ScaleToFit>>(name); }

protected:

	Matrix_ScaleToFit(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_MATRIX_SCALETOFIT
