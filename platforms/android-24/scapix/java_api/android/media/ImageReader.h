// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_IMAGEREADER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_IMAGEREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class ImageReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::ImageReader>
{
	static constexpr fixed_string class_name = "android/media/ImageReader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_IMAGEREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_IMAGEREADER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_IMAGEREADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/Image.h>
#include <scapix/java_api/android/media/ImageReader_OnImageAvailableListener.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/view/Surface.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::ImageReader : public jni::object_base<"android/media/ImageReader",
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	using OnImageAvailableListener = ImageReader_OnImageAvailableListener;

	static jni::ref<android::media::ImageReader> newInstance(jint width, jint height, jint format, jint maxImages) { return call_static_method<"newInstance", jni::ref<android::media::ImageReader>>(width, height, format, maxImages); }
	jint getWidth() { return call_method<"getWidth", jint>(); }
	jint getHeight() { return call_method<"getHeight", jint>(); }
	jint getImageFormat() { return call_method<"getImageFormat", jint>(); }
	jint getMaxImages() { return call_method<"getMaxImages", jint>(); }
	jni::ref<android::view::Surface> getSurface() { return call_method<"getSurface", jni::ref<android::view::Surface>>(); }
	jni::ref<android::media::Image> acquireLatestImage() { return call_method<"acquireLatestImage", jni::ref<android::media::Image>>(); }
	jni::ref<android::media::Image> acquireNextImage() { return call_method<"acquireNextImage", jni::ref<android::media::Image>>(); }
	void setOnImageAvailableListener(jni::ref<android::media::ImageReader_OnImageAvailableListener> listener, jni::ref<android::os::Handler> handler) { return call_method<"setOnImageAvailableListener", void>(listener, handler); }
	void close() { return call_method<"close", void>(); }

protected:

	ImageReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_IMAGEREADER
