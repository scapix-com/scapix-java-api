// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/media/tv/TvContract_BaseTvColumns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_RECORDEDPROGRAMS_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_RECORDEDPROGRAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv { class TvContract_RecordedPrograms; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::TvContract_RecordedPrograms>
{
	static constexpr fixed_string class_name = "android/media/tv/TvContract$RecordedPrograms";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::media::tv::TvContract_BaseTvColumns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_RECORDEDPROGRAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_RECORDEDPROGRAMS)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_RECORDEDPROGRAMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::TvContract_RecordedPrograms : public jni::object_base<"android/media/tv/TvContract$RecordedPrograms",
	java::lang::Object,
	android::media::tv::TvContract_BaseTvColumns>
{
public:

	static jni::ref<java::lang::String> COLUMN_AUDIO_LANGUAGE() { return get_static_field<"COLUMN_AUDIO_LANGUAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_BROADCAST_GENRE() { return get_static_field<"COLUMN_BROADCAST_GENRE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_CANONICAL_GENRE() { return get_static_field<"COLUMN_CANONICAL_GENRE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_CHANNEL_ID() { return get_static_field<"COLUMN_CHANNEL_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_CONTENT_RATING() { return get_static_field<"COLUMN_CONTENT_RATING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_END_TIME_UTC_MILLIS() { return get_static_field<"COLUMN_END_TIME_UTC_MILLIS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_EPISODE_DISPLAY_NUMBER() { return get_static_field<"COLUMN_EPISODE_DISPLAY_NUMBER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_EPISODE_TITLE() { return get_static_field<"COLUMN_EPISODE_TITLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_INPUT_ID() { return get_static_field<"COLUMN_INPUT_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_DATA() { return get_static_field<"COLUMN_INTERNAL_PROVIDER_DATA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_FLAG1() { return get_static_field<"COLUMN_INTERNAL_PROVIDER_FLAG1", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_FLAG2() { return get_static_field<"COLUMN_INTERNAL_PROVIDER_FLAG2", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_FLAG3() { return get_static_field<"COLUMN_INTERNAL_PROVIDER_FLAG3", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_FLAG4() { return get_static_field<"COLUMN_INTERNAL_PROVIDER_FLAG4", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_ID() { return get_static_field<"COLUMN_INTERNAL_PROVIDER_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_LONG_DESCRIPTION() { return get_static_field<"COLUMN_LONG_DESCRIPTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_MULTI_SERIES_ID() { return get_static_field<"COLUMN_MULTI_SERIES_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_POSTER_ART_URI() { return get_static_field<"COLUMN_POSTER_ART_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_RECORDING_DATA_BYTES() { return get_static_field<"COLUMN_RECORDING_DATA_BYTES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_RECORDING_DATA_URI() { return get_static_field<"COLUMN_RECORDING_DATA_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_RECORDING_DURATION_MILLIS() { return get_static_field<"COLUMN_RECORDING_DURATION_MILLIS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_RECORDING_EXPIRE_TIME_UTC_MILLIS() { return get_static_field<"COLUMN_RECORDING_EXPIRE_TIME_UTC_MILLIS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_REVIEW_RATING() { return get_static_field<"COLUMN_REVIEW_RATING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_REVIEW_RATING_STYLE() { return get_static_field<"COLUMN_REVIEW_RATING_STYLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_SEARCHABLE() { return get_static_field<"COLUMN_SEARCHABLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_SEASON_DISPLAY_NUMBER() { return get_static_field<"COLUMN_SEASON_DISPLAY_NUMBER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_SEASON_TITLE() { return get_static_field<"COLUMN_SEASON_TITLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_SERIES_ID() { return get_static_field<"COLUMN_SERIES_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_SHORT_DESCRIPTION() { return get_static_field<"COLUMN_SHORT_DESCRIPTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_SPLIT_ID() { return get_static_field<"COLUMN_SPLIT_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_START_TIME_UTC_MILLIS() { return get_static_field<"COLUMN_START_TIME_UTC_MILLIS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_THUMBNAIL_URI() { return get_static_field<"COLUMN_THUMBNAIL_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_TITLE() { return get_static_field<"COLUMN_TITLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_VERSION_NUMBER() { return get_static_field<"COLUMN_VERSION_NUMBER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_VIDEO_HEIGHT() { return get_static_field<"COLUMN_VIDEO_HEIGHT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_VIDEO_WIDTH() { return get_static_field<"COLUMN_VIDEO_WIDTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CONTENT_ITEM_TYPE() { return get_static_field<"CONTENT_ITEM_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CONTENT_TYPE() { return get_static_field<"CONTENT_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<android::net::Uri> CONTENT_URI() { return get_static_field<"CONTENT_URI", jni::ref<android::net::Uri>>(); }
	static jint REVIEW_RATING_STYLE_PERCENTAGE() { return get_static_field<"REVIEW_RATING_STYLE_PERCENTAGE", jint>(); }
	static jint REVIEW_RATING_STYLE_STARS() { return get_static_field<"REVIEW_RATING_STYLE_STARS", jint>(); }
	static jint REVIEW_RATING_STYLE_THUMBS_UP_DOWN() { return get_static_field<"REVIEW_RATING_STYLE_THUMBS_UP_DOWN", jint>(); }


protected:

	TvContract_RecordedPrograms(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_RECORDEDPROGRAMS
