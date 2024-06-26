// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_IMAGEREADER_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_IMAGEREADER_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class ImageReader_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::ImageReader_Builder>
{
	static constexpr fixed_string class_name = "android/media/ImageReader$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_IMAGEREADER_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_IMAGEREADER_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_IMAGEREADER_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/ImageReader.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::ImageReader_Builder : public jni::object_base<"android/media/ImageReader$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::media::ImageReader_Builder> new_object(jint width, jint height) { return base_::new_object(width, height); }
	jni::ref<android::media::ImageReader_Builder> setMaxImages(jint maxImages) { return call_method<"setMaxImages", jni::ref<android::media::ImageReader_Builder>>(maxImages); }
	jni::ref<android::media::ImageReader_Builder> setUsage(jlong usage) { return call_method<"setUsage", jni::ref<android::media::ImageReader_Builder>>(usage); }
	jni::ref<android::media::ImageReader_Builder> setImageFormat(jint imageFormat) { return call_method<"setImageFormat", jni::ref<android::media::ImageReader_Builder>>(imageFormat); }
	jni::ref<android::media::ImageReader_Builder> setDefaultHardwareBufferFormat(jint hardwareBufferFormat) { return call_method<"setDefaultHardwareBufferFormat", jni::ref<android::media::ImageReader_Builder>>(hardwareBufferFormat); }
	jni::ref<android::media::ImageReader_Builder> setDefaultDataSpace(jint dataSpace) { return call_method<"setDefaultDataSpace", jni::ref<android::media::ImageReader_Builder>>(dataSpace); }
	jni::ref<android::media::ImageReader> build() { return call_method<"build", jni::ref<android::media::ImageReader>>(); }

protected:

	ImageReader_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_IMAGEREADER_BUILDER
