// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_THUMBNAILUTILS_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_THUMBNAILUTILS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class ThumbnailUtils; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::ThumbnailUtils>
{
	static constexpr fixed_string class_name = "android/media/ThumbnailUtils";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_THUMBNAILUTILS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_THUMBNAILUTILS)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_THUMBNAILUTILS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::ThumbnailUtils : public jni::object_base<"android/media/ThumbnailUtils",
	java::lang::Object>
{
public:

	static jint OPTIONS_RECYCLE_INPUT() { return get_static_field<"OPTIONS_RECYCLE_INPUT", jint>(); }

	static jni::ref<android::media::ThumbnailUtils> new_object() { return base_::new_object(); }
	static jni::ref<android::graphics::Bitmap> createVideoThumbnail(jni::ref<java::lang::String> filePath, jint kind) { return call_static_method<"createVideoThumbnail", jni::ref<android::graphics::Bitmap>>(filePath, kind); }
	static jni::ref<android::graphics::Bitmap> extractThumbnail(jni::ref<android::graphics::Bitmap> source, jint width, jint height) { return call_static_method<"extractThumbnail", jni::ref<android::graphics::Bitmap>>(source, width, height); }
	static jni::ref<android::graphics::Bitmap> extractThumbnail(jni::ref<android::graphics::Bitmap> source, jint width, jint height, jint options) { return call_static_method<"extractThumbnail", jni::ref<android::graphics::Bitmap>>(source, width, height, options); }

protected:

	ThumbnailUtils(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_THUMBNAILUTILS
