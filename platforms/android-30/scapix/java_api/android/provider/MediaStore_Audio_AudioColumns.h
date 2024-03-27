// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/MediaStore_MediaColumns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_AUDIOCOLUMNS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_AUDIOCOLUMNS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class MediaStore_Audio_AudioColumns; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::MediaStore_Audio_AudioColumns>
{
	static constexpr fixed_string class_name = "android/provider/MediaStore$Audio$AudioColumns";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::provider::MediaStore_MediaColumns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_AUDIOCOLUMNS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_AUDIOCOLUMNS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_AUDIOCOLUMNS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::MediaStore_Audio_AudioColumns : public jni::object_base<"android/provider/MediaStore$Audio$AudioColumns",
	java::lang::Object,
	android::provider::MediaStore_MediaColumns>
{
public:

	static jni::ref<java::lang::String> ALBUM_ID() { return get_static_field<"ALBUM_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ALBUM_KEY() { return get_static_field<"ALBUM_KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ARTIST_ID() { return get_static_field<"ARTIST_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ARTIST_KEY() { return get_static_field<"ARTIST_KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BOOKMARK() { return get_static_field<"BOOKMARK", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GENRE() { return get_static_field<"GENRE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GENRE_ID() { return get_static_field<"GENRE_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GENRE_KEY() { return get_static_field<"GENRE_KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IS_ALARM() { return get_static_field<"IS_ALARM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IS_AUDIOBOOK() { return get_static_field<"IS_AUDIOBOOK", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IS_MUSIC() { return get_static_field<"IS_MUSIC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IS_NOTIFICATION() { return get_static_field<"IS_NOTIFICATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IS_PODCAST() { return get_static_field<"IS_PODCAST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IS_RINGTONE() { return get_static_field<"IS_RINGTONE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TITLE_KEY() { return get_static_field<"TITLE_KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TITLE_RESOURCE_URI() { return get_static_field<"TITLE_RESOURCE_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TRACK() { return get_static_field<"TRACK", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> YEAR() { return get_static_field<"YEAR", jni::ref<java::lang::String>>(); }


protected:

	MediaStore_Audio_AudioColumns(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_AUDIOCOLUMNS
