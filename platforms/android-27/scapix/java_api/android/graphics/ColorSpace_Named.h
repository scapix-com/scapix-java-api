// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_NAMED_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_NAMED_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class ColorSpace_Named; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::ColorSpace_Named>
{
	static constexpr fixed_string class_name = "android/graphics/ColorSpace$Named";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_NAMED_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_NAMED)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_NAMED

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::ColorSpace_Named : public jni::object_base<"android/graphics/ColorSpace$Named",
	java::lang::Enum>
{
public:

	static jni::ref<android::graphics::ColorSpace_Named> ACES() { return get_static_field<"ACES", jni::ref<android::graphics::ColorSpace_Named>>(); }
	static jni::ref<android::graphics::ColorSpace_Named> ACESCG() { return get_static_field<"ACESCG", jni::ref<android::graphics::ColorSpace_Named>>(); }
	static jni::ref<android::graphics::ColorSpace_Named> ADOBE_RGB() { return get_static_field<"ADOBE_RGB", jni::ref<android::graphics::ColorSpace_Named>>(); }
	static jni::ref<android::graphics::ColorSpace_Named> BT2020() { return get_static_field<"BT2020", jni::ref<android::graphics::ColorSpace_Named>>(); }
	static jni::ref<android::graphics::ColorSpace_Named> BT709() { return get_static_field<"BT709", jni::ref<android::graphics::ColorSpace_Named>>(); }
	static jni::ref<android::graphics::ColorSpace_Named> CIE_LAB() { return get_static_field<"CIE_LAB", jni::ref<android::graphics::ColorSpace_Named>>(); }
	static jni::ref<android::graphics::ColorSpace_Named> CIE_XYZ() { return get_static_field<"CIE_XYZ", jni::ref<android::graphics::ColorSpace_Named>>(); }
	static jni::ref<android::graphics::ColorSpace_Named> DCI_P3() { return get_static_field<"DCI_P3", jni::ref<android::graphics::ColorSpace_Named>>(); }
	static jni::ref<android::graphics::ColorSpace_Named> DISPLAY_P3() { return get_static_field<"DISPLAY_P3", jni::ref<android::graphics::ColorSpace_Named>>(); }
	static jni::ref<android::graphics::ColorSpace_Named> EXTENDED_SRGB() { return get_static_field<"EXTENDED_SRGB", jni::ref<android::graphics::ColorSpace_Named>>(); }
	static jni::ref<android::graphics::ColorSpace_Named> LINEAR_EXTENDED_SRGB() { return get_static_field<"LINEAR_EXTENDED_SRGB", jni::ref<android::graphics::ColorSpace_Named>>(); }
	static jni::ref<android::graphics::ColorSpace_Named> LINEAR_SRGB() { return get_static_field<"LINEAR_SRGB", jni::ref<android::graphics::ColorSpace_Named>>(); }
	static jni::ref<android::graphics::ColorSpace_Named> NTSC_1953() { return get_static_field<"NTSC_1953", jni::ref<android::graphics::ColorSpace_Named>>(); }
	static jni::ref<android::graphics::ColorSpace_Named> PRO_PHOTO_RGB() { return get_static_field<"PRO_PHOTO_RGB", jni::ref<android::graphics::ColorSpace_Named>>(); }
	static jni::ref<android::graphics::ColorSpace_Named> SMPTE_C() { return get_static_field<"SMPTE_C", jni::ref<android::graphics::ColorSpace_Named>>(); }
	static jni::ref<android::graphics::ColorSpace_Named> SRGB() { return get_static_field<"SRGB", jni::ref<android::graphics::ColorSpace_Named>>(); }

	static jni::ref<jni::array<android::graphics::ColorSpace_Named>> values() { return call_static_method<"values", jni::ref<jni::array<android::graphics::ColorSpace_Named>>>(); }
	static jni::ref<android::graphics::ColorSpace_Named> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::graphics::ColorSpace_Named>>(name); }

protected:

	ColorSpace_Named(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_NAMED