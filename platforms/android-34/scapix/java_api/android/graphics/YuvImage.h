// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_YUVIMAGE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_YUVIMAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class YuvImage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::YuvImage>
{
	static constexpr fixed_string class_name = "android/graphics/YuvImage";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_YUVIMAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_YUVIMAGE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_YUVIMAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/ColorSpace.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/java/io/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::YuvImage : public jni::object_base<"android/graphics/YuvImage",
	java::lang::Object>
{
public:

	static jni::ref<android::graphics::YuvImage> new_object(jni::ref<jni::array<jbyte>> yuv, jint format, jint width, jint height, jni::ref<jni::array<jint>> strides) { return base_::new_object(yuv, format, width, height, strides); }
	static jni::ref<android::graphics::YuvImage> new_object(jni::ref<jni::array<jbyte>> yuv, jint format, jint width, jint height, jni::ref<jni::array<jint>> strides, jni::ref<android::graphics::ColorSpace> colorSpace) { return base_::new_object(yuv, format, width, height, strides, colorSpace); }
	jboolean compressToJpeg(jni::ref<android::graphics::Rect> rectangle, jint quality, jni::ref<java::io::OutputStream> stream) { return call_method<"compressToJpeg", jboolean>(rectangle, quality, stream); }
	jboolean compressToJpegR(jni::ref<android::graphics::YuvImage> sdr, jint quality, jni::ref<java::io::OutputStream> stream) { return call_method<"compressToJpegR", jboolean>(sdr, quality, stream); }
	jni::ref<jni::array<jbyte>> getYuvData() { return call_method<"getYuvData", jni::ref<jni::array<jbyte>>>(); }
	jint getYuvFormat() { return call_method<"getYuvFormat", jint>(); }
	jni::ref<jni::array<jint>> getStrides() { return call_method<"getStrides", jni::ref<jni::array<jint>>>(); }
	jint getWidth() { return call_method<"getWidth", jint>(); }
	jint getHeight() { return call_method<"getHeight", jint>(); }
	jni::ref<android::graphics::ColorSpace> getColorSpace() { return call_method<"getColorSpace", jni::ref<android::graphics::ColorSpace>>(); }

protected:

	YuvImage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_YUVIMAGE
