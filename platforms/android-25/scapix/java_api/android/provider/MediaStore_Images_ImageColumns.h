// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/MediaStore_MediaColumns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_IMAGES_IMAGECOLUMNS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_IMAGES_IMAGECOLUMNS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class MediaStore_Images_ImageColumns; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::MediaStore_Images_ImageColumns>
{
	static constexpr fixed_string class_name = "android/provider/MediaStore$Images$ImageColumns";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::provider::MediaStore_MediaColumns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_IMAGES_IMAGECOLUMNS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_IMAGES_IMAGECOLUMNS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_IMAGES_IMAGECOLUMNS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::MediaStore_Images_ImageColumns : public jni::object_base<"android/provider/MediaStore$Images$ImageColumns",
	java::lang::Object,
	android::provider::MediaStore_MediaColumns>
{
public:

	static jni::ref<java::lang::String> BUCKET_DISPLAY_NAME() { return get_static_field<"BUCKET_DISPLAY_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BUCKET_ID() { return get_static_field<"BUCKET_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATE_TAKEN() { return get_static_field<"DATE_TAKEN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DESCRIPTION() { return get_static_field<"DESCRIPTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IS_PRIVATE() { return get_static_field<"IS_PRIVATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LATITUDE() { return get_static_field<"LATITUDE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LONGITUDE() { return get_static_field<"LONGITUDE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MINI_THUMB_MAGIC() { return get_static_field<"MINI_THUMB_MAGIC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ORIENTATION() { return get_static_field<"ORIENTATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PICASA_ID() { return get_static_field<"PICASA_ID", jni::ref<java::lang::String>>(); }


protected:

	MediaStore_Images_ImageColumns(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_IMAGES_IMAGECOLUMNS
