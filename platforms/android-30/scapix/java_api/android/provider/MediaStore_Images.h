// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_IMAGES_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_IMAGES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class MediaStore_Images; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::MediaStore_Images>
{
	static constexpr fixed_string class_name = "android/provider/MediaStore$Images";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_IMAGES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_IMAGES)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_IMAGES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/provider/MediaStore_Images_Thumbnails.h>
#include <scapix/java_api/android/provider/MediaStore_Images_Media.h>
#include <scapix/java_api/android/provider/MediaStore_Images_ImageColumns.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::MediaStore_Images : public jni::object_base<"android/provider/MediaStore$Images",
	java::lang::Object>
{
public:

	using Thumbnails = MediaStore_Images_Thumbnails;
	using Media = MediaStore_Images_Media;
	using ImageColumns = MediaStore_Images_ImageColumns;

	static jni::ref<android::provider::MediaStore_Images> new_object() { return base_::new_object(); }

protected:

	MediaStore_Images(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_IMAGES
