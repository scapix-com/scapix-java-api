// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/MediaStore_MediaColumns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_FILES_FILECOLUMNS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_FILES_FILECOLUMNS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class MediaStore_Files_FileColumns; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::MediaStore_Files_FileColumns>
{
	static constexpr fixed_string class_name = "android/provider/MediaStore$Files$FileColumns";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::provider::MediaStore_MediaColumns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_FILES_FILECOLUMNS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_FILES_FILECOLUMNS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_FILES_FILECOLUMNS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::MediaStore_Files_FileColumns : public jni::object_base<"android/provider/MediaStore$Files$FileColumns",
	java::lang::Object,
	android::provider::MediaStore_MediaColumns>
{
public:

	static jni::ref<java::lang::String> MEDIA_TYPE() { return get_static_field<"MEDIA_TYPE", jni::ref<java::lang::String>>(); }
	static jint MEDIA_TYPE_AUDIO() { return get_static_field<"MEDIA_TYPE_AUDIO", jint>(); }
	static jint MEDIA_TYPE_DOCUMENT() { return get_static_field<"MEDIA_TYPE_DOCUMENT", jint>(); }
	static jint MEDIA_TYPE_IMAGE() { return get_static_field<"MEDIA_TYPE_IMAGE", jint>(); }
	static jint MEDIA_TYPE_NONE() { return get_static_field<"MEDIA_TYPE_NONE", jint>(); }
	static jint MEDIA_TYPE_PLAYLIST() { return get_static_field<"MEDIA_TYPE_PLAYLIST", jint>(); }
	static jint MEDIA_TYPE_SUBTITLE() { return get_static_field<"MEDIA_TYPE_SUBTITLE", jint>(); }
	static jint MEDIA_TYPE_VIDEO() { return get_static_field<"MEDIA_TYPE_VIDEO", jint>(); }
	static jni::ref<java::lang::String> MIME_TYPE() { return get_static_field<"MIME_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PARENT() { return get_static_field<"PARENT", jni::ref<java::lang::String>>(); }


protected:

	MediaStore_Files_FileColumns(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_FILES_FILECOLUMNS
