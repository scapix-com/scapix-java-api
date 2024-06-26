// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/BaseColumns.h>
#include <scapix/java_api/android/provider/MediaStore_Audio_AlbumColumns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ARTISTS_ALBUMS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ARTISTS_ALBUMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class MediaStore_Audio_Artists_Albums; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::MediaStore_Audio_Artists_Albums>
{
	static constexpr fixed_string class_name = "android/provider/MediaStore$Audio$Artists$Albums";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::provider::BaseColumns, scapix::java_api::android::provider::MediaStore_Audio_AlbumColumns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ARTISTS_ALBUMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ARTISTS_ALBUMS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ARTISTS_ALBUMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::MediaStore_Audio_Artists_Albums : public jni::object_base<"android/provider/MediaStore$Audio$Artists$Albums",
	java::lang::Object,
	android::provider::BaseColumns,
	android::provider::MediaStore_Audio_AlbumColumns>
{
public:

	static jni::ref<android::provider::MediaStore_Audio_Artists_Albums> new_object() { return base_::new_object(); }
	static jni::ref<android::net::Uri> getContentUri(jni::ref<java::lang::String> volumeName, jlong artistId) { return call_static_method<"getContentUri", jni::ref<android::net::Uri>>(volumeName, artistId); }

protected:

	MediaStore_Audio_Artists_Albums(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ARTISTS_ALBUMS
