// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_IMAGEFORMAT_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_IMAGEFORMAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class ImageFormat; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::ImageFormat>
{
	static constexpr fixed_string class_name = "android/graphics/ImageFormat";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_IMAGEFORMAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_IMAGEFORMAT)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_IMAGEFORMAT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::ImageFormat : public jni::object_base<"android/graphics/ImageFormat",
	java::lang::Object>
{
public:

	static jint DEPTH16() { return get_static_field<"DEPTH16", jint>(); }
	static jint DEPTH_JPEG() { return get_static_field<"DEPTH_JPEG", jint>(); }
	static jint DEPTH_POINT_CLOUD() { return get_static_field<"DEPTH_POINT_CLOUD", jint>(); }
	static jint FLEX_RGBA_8888() { return get_static_field<"FLEX_RGBA_8888", jint>(); }
	static jint FLEX_RGB_888() { return get_static_field<"FLEX_RGB_888", jint>(); }
	static jint HEIC() { return get_static_field<"HEIC", jint>(); }
	static jint JPEG() { return get_static_field<"JPEG", jint>(); }
	static jint NV16() { return get_static_field<"NV16", jint>(); }
	static jint NV21() { return get_static_field<"NV21", jint>(); }
	static jint PRIVATE() { return get_static_field<"PRIVATE", jint>(); }
	static jint RAW10() { return get_static_field<"RAW10", jint>(); }
	static jint RAW12() { return get_static_field<"RAW12", jint>(); }
	static jint RAW_PRIVATE() { return get_static_field<"RAW_PRIVATE", jint>(); }
	static jint RAW_SENSOR() { return get_static_field<"RAW_SENSOR", jint>(); }
	static jint RGB_565() { return get_static_field<"RGB_565", jint>(); }
	static jint UNKNOWN() { return get_static_field<"UNKNOWN", jint>(); }
	static jint Y8() { return get_static_field<"Y8", jint>(); }
	static jint YCBCR_P010() { return get_static_field<"YCBCR_P010", jint>(); }
	static jint YUV_420_888() { return get_static_field<"YUV_420_888", jint>(); }
	static jint YUV_422_888() { return get_static_field<"YUV_422_888", jint>(); }
	static jint YUV_444_888() { return get_static_field<"YUV_444_888", jint>(); }
	static jint YUY2() { return get_static_field<"YUY2", jint>(); }
	static jint YV12() { return get_static_field<"YV12", jint>(); }

	static jni::ref<android::graphics::ImageFormat> new_object() { return base_::new_object(); }
	static jint getBitsPerPixel(jint format) { return call_static_method<"getBitsPerPixel", jint>(format); }

protected:

	ImageFormat(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_IMAGEFORMAT
