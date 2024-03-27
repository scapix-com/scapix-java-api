// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ARTISTCOLUMNS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ARTISTCOLUMNS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class MediaStore_Audio_ArtistColumns; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::MediaStore_Audio_ArtistColumns>
{
	static constexpr fixed_string class_name = "android/provider/MediaStore$Audio$ArtistColumns";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ARTISTCOLUMNS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ARTISTCOLUMNS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ARTISTCOLUMNS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::MediaStore_Audio_ArtistColumns : public jni::object_base<"android/provider/MediaStore$Audio$ArtistColumns",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ARTIST() { return get_static_field<"ARTIST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ARTIST_KEY() { return get_static_field<"ARTIST_KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NUMBER_OF_ALBUMS() { return get_static_field<"NUMBER_OF_ALBUMS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NUMBER_OF_TRACKS() { return get_static_field<"NUMBER_OF_TRACKS", jni::ref<java::lang::String>>(); }


protected:

	MediaStore_Audio_ArtistColumns(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ARTISTCOLUMNS
