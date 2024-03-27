// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ALBUMCOLUMNS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ALBUMCOLUMNS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class MediaStore_Audio_AlbumColumns; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::MediaStore_Audio_AlbumColumns>
{
	static constexpr fixed_string class_name = "android/provider/MediaStore$Audio$AlbumColumns";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ALBUMCOLUMNS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ALBUMCOLUMNS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ALBUMCOLUMNS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::MediaStore_Audio_AlbumColumns : public jni::object_base<"android/provider/MediaStore$Audio$AlbumColumns",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ALBUM() { return get_static_field<"ALBUM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ALBUM_ART() { return get_static_field<"ALBUM_ART", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ALBUM_ID() { return get_static_field<"ALBUM_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ALBUM_KEY() { return get_static_field<"ALBUM_KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ARTIST() { return get_static_field<"ARTIST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ARTIST_ID() { return get_static_field<"ARTIST_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ARTIST_KEY() { return get_static_field<"ARTIST_KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FIRST_YEAR() { return get_static_field<"FIRST_YEAR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LAST_YEAR() { return get_static_field<"LAST_YEAR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NUMBER_OF_SONGS() { return get_static_field<"NUMBER_OF_SONGS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NUMBER_OF_SONGS_FOR_ARTIST() { return get_static_field<"NUMBER_OF_SONGS_FOR_ARTIST", jni::ref<java::lang::String>>(); }


protected:

	MediaStore_Audio_AlbumColumns(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ALBUMCOLUMNS
