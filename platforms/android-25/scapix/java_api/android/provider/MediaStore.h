// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class MediaStore; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::MediaStore>
{
	static constexpr fixed_string class_name = "android/provider/MediaStore";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/provider/MediaStore_Video.h>
#include <scapix/java_api/android/provider/MediaStore_Audio.h>
#include <scapix/java_api/android/provider/MediaStore_Images.h>
#include <scapix/java_api/android/provider/MediaStore_Files.h>
#include <scapix/java_api/android/provider/MediaStore_MediaColumns.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::MediaStore : public jni::object_base<"android/provider/MediaStore",
	java::lang::Object>
{
public:

	using Video = MediaStore_Video;
	using Audio = MediaStore_Audio;
	using Images = MediaStore_Images;
	using Files = MediaStore_Files;
	using MediaColumns = MediaStore_MediaColumns;

	static jni::ref<java::lang::String> ACTION_IMAGE_CAPTURE() { return get_static_field<"ACTION_IMAGE_CAPTURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_IMAGE_CAPTURE_SECURE() { return get_static_field<"ACTION_IMAGE_CAPTURE_SECURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_VIDEO_CAPTURE() { return get_static_field<"ACTION_VIDEO_CAPTURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> AUTHORITY() { return get_static_field<"AUTHORITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_DURATION_LIMIT() { return get_static_field<"EXTRA_DURATION_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_FINISH_ON_COMPLETION() { return get_static_field<"EXTRA_FINISH_ON_COMPLETION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_FULL_SCREEN() { return get_static_field<"EXTRA_FULL_SCREEN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_MEDIA_ALBUM() { return get_static_field<"EXTRA_MEDIA_ALBUM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_MEDIA_ARTIST() { return get_static_field<"EXTRA_MEDIA_ARTIST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_MEDIA_FOCUS() { return get_static_field<"EXTRA_MEDIA_FOCUS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_MEDIA_GENRE() { return get_static_field<"EXTRA_MEDIA_GENRE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_MEDIA_PLAYLIST() { return get_static_field<"EXTRA_MEDIA_PLAYLIST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_MEDIA_RADIO_CHANNEL() { return get_static_field<"EXTRA_MEDIA_RADIO_CHANNEL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_MEDIA_TITLE() { return get_static_field<"EXTRA_MEDIA_TITLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_OUTPUT() { return get_static_field<"EXTRA_OUTPUT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_SCREEN_ORIENTATION() { return get_static_field<"EXTRA_SCREEN_ORIENTATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_SHOW_ACTION_ICONS() { return get_static_field<"EXTRA_SHOW_ACTION_ICONS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_SIZE_LIMIT() { return get_static_field<"EXTRA_SIZE_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_VIDEO_QUALITY() { return get_static_field<"EXTRA_VIDEO_QUALITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INTENT_ACTION_MEDIA_PLAY_FROM_SEARCH() { return get_static_field<"INTENT_ACTION_MEDIA_PLAY_FROM_SEARCH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INTENT_ACTION_MEDIA_SEARCH() { return get_static_field<"INTENT_ACTION_MEDIA_SEARCH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INTENT_ACTION_MUSIC_PLAYER() { return get_static_field<"INTENT_ACTION_MUSIC_PLAYER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INTENT_ACTION_STILL_IMAGE_CAMERA() { return get_static_field<"INTENT_ACTION_STILL_IMAGE_CAMERA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INTENT_ACTION_STILL_IMAGE_CAMERA_SECURE() { return get_static_field<"INTENT_ACTION_STILL_IMAGE_CAMERA_SECURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INTENT_ACTION_TEXT_OPEN_FROM_SEARCH() { return get_static_field<"INTENT_ACTION_TEXT_OPEN_FROM_SEARCH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INTENT_ACTION_VIDEO_CAMERA() { return get_static_field<"INTENT_ACTION_VIDEO_CAMERA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INTENT_ACTION_VIDEO_PLAY_FROM_SEARCH() { return get_static_field<"INTENT_ACTION_VIDEO_PLAY_FROM_SEARCH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MEDIA_IGNORE_FILENAME() { return get_static_field<"MEDIA_IGNORE_FILENAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MEDIA_SCANNER_VOLUME() { return get_static_field<"MEDIA_SCANNER_VOLUME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> META_DATA_STILL_IMAGE_CAMERA_PREWARM_SERVICE() { return get_static_field<"META_DATA_STILL_IMAGE_CAMERA_PREWARM_SERVICE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> UNKNOWN_STRING() { return get_static_field<"UNKNOWN_STRING", jni::ref<java::lang::String>>(); }

	static jni::ref<android::provider::MediaStore> new_object() { return base_::new_object(); }
	static jni::ref<android::net::Uri> getMediaScannerUri() { return call_static_method<"getMediaScannerUri", jni::ref<android::net::Uri>>(); }
	static jni::ref<java::lang::String> getVersion(jni::ref<android::content::Context> context) { return call_static_method<"getVersion", jni::ref<java::lang::String>>(context); }

protected:

	MediaStore(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE
