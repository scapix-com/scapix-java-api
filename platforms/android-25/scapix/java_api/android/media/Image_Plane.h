// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_IMAGE_PLANE_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_IMAGE_PLANE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class Image_Plane; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::Image_Plane>
{
	static constexpr fixed_string class_name = "android/media/Image$Plane";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_IMAGE_PLANE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_IMAGE_PLANE)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_IMAGE_PLANE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::Image_Plane : public jni::object_base<"android/media/Image$Plane",
	java::lang::Object>
{
public:

	jint getRowStride() { return call_method<"getRowStride", jint>(); }
	jint getPixelStride() { return call_method<"getPixelStride", jint>(); }
	jni::ref<java::nio::ByteBuffer> getBuffer() { return call_method<"getBuffer", jni::ref<java::nio::ByteBuffer>>(); }

protected:

	Image_Plane(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_IMAGE_PLANE