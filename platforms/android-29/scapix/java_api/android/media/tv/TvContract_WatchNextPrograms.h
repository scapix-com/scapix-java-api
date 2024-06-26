// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/media/tv/TvContract_BaseTvColumns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_WATCHNEXTPROGRAMS_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_WATCHNEXTPROGRAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv { class TvContract_WatchNextPrograms; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::TvContract_WatchNextPrograms>
{
	static constexpr fixed_string class_name = "android/media/tv/TvContract$WatchNextPrograms";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::media::tv::TvContract_BaseTvColumns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_WATCHNEXTPROGRAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_WATCHNEXTPROGRAMS)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_WATCHNEXTPROGRAMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::TvContract_WatchNextPrograms : public jni::object_base<"android/media/tv/TvContract$WatchNextPrograms",
	java::lang::Object,
	android::media::tv::TvContract_BaseTvColumns>
{
public:

	static jint ASPECT_RATIO_16_9() { return get_static_field<"ASPECT_RATIO_16_9", jint>(); }
	static jint ASPECT_RATIO_1_1() { return get_static_field<"ASPECT_RATIO_1_1", jint>(); }
	static jint ASPECT_RATIO_2_3() { return get_static_field<"ASPECT_RATIO_2_3", jint>(); }
	static jint ASPECT_RATIO_3_2() { return get_static_field<"ASPECT_RATIO_3_2", jint>(); }
	static jint ASPECT_RATIO_4_3() { return get_static_field<"ASPECT_RATIO_4_3", jint>(); }
	static jint AVAILABILITY_AVAILABLE() { return get_static_field<"AVAILABILITY_AVAILABLE", jint>(); }
	static jint AVAILABILITY_FREE_WITH_SUBSCRIPTION() { return get_static_field<"AVAILABILITY_FREE_WITH_SUBSCRIPTION", jint>(); }
	static jint AVAILABILITY_PAID_CONTENT() { return get_static_field<"AVAILABILITY_PAID_CONTENT", jint>(); }
	static jni::ref<java::lang::String> COLUMN_AUDIO_LANGUAGE() { return get_static_field<"COLUMN_AUDIO_LANGUAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_AUTHOR() { return get_static_field<"COLUMN_AUTHOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_AVAILABILITY() { return get_static_field<"COLUMN_AVAILABILITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_BROWSABLE() { return get_static_field<"COLUMN_BROWSABLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_CANONICAL_GENRE() { return get_static_field<"COLUMN_CANONICAL_GENRE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_CONTENT_ID() { return get_static_field<"COLUMN_CONTENT_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_CONTENT_RATING() { return get_static_field<"COLUMN_CONTENT_RATING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_DURATION_MILLIS() { return get_static_field<"COLUMN_DURATION_MILLIS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_EPISODE_DISPLAY_NUMBER() { return get_static_field<"COLUMN_EPISODE_DISPLAY_NUMBER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_EPISODE_TITLE() { return get_static_field<"COLUMN_EPISODE_TITLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_INTENT_URI() { return get_static_field<"COLUMN_INTENT_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_INTERACTION_COUNT() { return get_static_field<"COLUMN_INTERACTION_COUNT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_INTERACTION_TYPE() { return get_static_field<"COLUMN_INTERACTION_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_DATA() { return get_static_field<"COLUMN_INTERNAL_PROVIDER_DATA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_FLAG1() { return get_static_field<"COLUMN_INTERNAL_PROVIDER_FLAG1", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_FLAG2() { return get_static_field<"COLUMN_INTERNAL_PROVIDER_FLAG2", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_FLAG3() { return get_static_field<"COLUMN_INTERNAL_PROVIDER_FLAG3", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_FLAG4() { return get_static_field<"COLUMN_INTERNAL_PROVIDER_FLAG4", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_ID() { return get_static_field<"COLUMN_INTERNAL_PROVIDER_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_ITEM_COUNT() { return get_static_field<"COLUMN_ITEM_COUNT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_LAST_ENGAGEMENT_TIME_UTC_MILLIS() { return get_static_field<"COLUMN_LAST_ENGAGEMENT_TIME_UTC_MILLIS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_LAST_PLAYBACK_POSITION_MILLIS() { return get_static_field<"COLUMN_LAST_PLAYBACK_POSITION_MILLIS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_LIVE() { return get_static_field<"COLUMN_LIVE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_LOGO_URI() { return get_static_field<"COLUMN_LOGO_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_LONG_DESCRIPTION() { return get_static_field<"COLUMN_LONG_DESCRIPTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_OFFER_PRICE() { return get_static_field<"COLUMN_OFFER_PRICE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_POSTER_ART_ASPECT_RATIO() { return get_static_field<"COLUMN_POSTER_ART_ASPECT_RATIO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_POSTER_ART_URI() { return get_static_field<"COLUMN_POSTER_ART_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_PREVIEW_VIDEO_URI() { return get_static_field<"COLUMN_PREVIEW_VIDEO_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_RELEASE_DATE() { return get_static_field<"COLUMN_RELEASE_DATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_REVIEW_RATING() { return get_static_field<"COLUMN_REVIEW_RATING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_REVIEW_RATING_STYLE() { return get_static_field<"COLUMN_REVIEW_RATING_STYLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_SEARCHABLE() { return get_static_field<"COLUMN_SEARCHABLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_SEASON_DISPLAY_NUMBER() { return get_static_field<"COLUMN_SEASON_DISPLAY_NUMBER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_SEASON_TITLE() { return get_static_field<"COLUMN_SEASON_TITLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_SERIES_ID() { return get_static_field<"COLUMN_SERIES_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_SHORT_DESCRIPTION() { return get_static_field<"COLUMN_SHORT_DESCRIPTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_STARTING_PRICE() { return get_static_field<"COLUMN_STARTING_PRICE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_THUMBNAIL_ASPECT_RATIO() { return get_static_field<"COLUMN_THUMBNAIL_ASPECT_RATIO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_THUMBNAIL_URI() { return get_static_field<"COLUMN_THUMBNAIL_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_TITLE() { return get_static_field<"COLUMN_TITLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_TRANSIENT() { return get_static_field<"COLUMN_TRANSIENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_TYPE() { return get_static_field<"COLUMN_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_VERSION_NUMBER() { return get_static_field<"COLUMN_VERSION_NUMBER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_VIDEO_HEIGHT() { return get_static_field<"COLUMN_VIDEO_HEIGHT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_VIDEO_WIDTH() { return get_static_field<"COLUMN_VIDEO_WIDTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLUMN_WATCH_NEXT_TYPE() { return get_static_field<"COLUMN_WATCH_NEXT_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CONTENT_ITEM_TYPE() { return get_static_field<"CONTENT_ITEM_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CONTENT_TYPE() { return get_static_field<"CONTENT_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<android::net::Uri> CONTENT_URI() { return get_static_field<"CONTENT_URI", jni::ref<android::net::Uri>>(); }
	static jint INTERACTION_TYPE_FANS() { return get_static_field<"INTERACTION_TYPE_FANS", jint>(); }
	static jint INTERACTION_TYPE_FOLLOWERS() { return get_static_field<"INTERACTION_TYPE_FOLLOWERS", jint>(); }
	static jint INTERACTION_TYPE_LIKES() { return get_static_field<"INTERACTION_TYPE_LIKES", jint>(); }
	static jint INTERACTION_TYPE_LISTENS() { return get_static_field<"INTERACTION_TYPE_LISTENS", jint>(); }
	static jint INTERACTION_TYPE_THUMBS() { return get_static_field<"INTERACTION_TYPE_THUMBS", jint>(); }
	static jint INTERACTION_TYPE_VIEWERS() { return get_static_field<"INTERACTION_TYPE_VIEWERS", jint>(); }
	static jint INTERACTION_TYPE_VIEWS() { return get_static_field<"INTERACTION_TYPE_VIEWS", jint>(); }
	static jint REVIEW_RATING_STYLE_PERCENTAGE() { return get_static_field<"REVIEW_RATING_STYLE_PERCENTAGE", jint>(); }
	static jint REVIEW_RATING_STYLE_STARS() { return get_static_field<"REVIEW_RATING_STYLE_STARS", jint>(); }
	static jint REVIEW_RATING_STYLE_THUMBS_UP_DOWN() { return get_static_field<"REVIEW_RATING_STYLE_THUMBS_UP_DOWN", jint>(); }
	static jint TYPE_ALBUM() { return get_static_field<"TYPE_ALBUM", jint>(); }
	static jint TYPE_ARTIST() { return get_static_field<"TYPE_ARTIST", jint>(); }
	static jint TYPE_CHANNEL() { return get_static_field<"TYPE_CHANNEL", jint>(); }
	static jint TYPE_CLIP() { return get_static_field<"TYPE_CLIP", jint>(); }
	static jint TYPE_EVENT() { return get_static_field<"TYPE_EVENT", jint>(); }
	static jint TYPE_MOVIE() { return get_static_field<"TYPE_MOVIE", jint>(); }
	static jint TYPE_PLAYLIST() { return get_static_field<"TYPE_PLAYLIST", jint>(); }
	static jint TYPE_STATION() { return get_static_field<"TYPE_STATION", jint>(); }
	static jint TYPE_TRACK() { return get_static_field<"TYPE_TRACK", jint>(); }
	static jint TYPE_TV_EPISODE() { return get_static_field<"TYPE_TV_EPISODE", jint>(); }
	static jint TYPE_TV_SEASON() { return get_static_field<"TYPE_TV_SEASON", jint>(); }
	static jint TYPE_TV_SERIES() { return get_static_field<"TYPE_TV_SERIES", jint>(); }
	static jint WATCH_NEXT_TYPE_CONTINUE() { return get_static_field<"WATCH_NEXT_TYPE_CONTINUE", jint>(); }
	static jint WATCH_NEXT_TYPE_NEW() { return get_static_field<"WATCH_NEXT_TYPE_NEW", jint>(); }
	static jint WATCH_NEXT_TYPE_NEXT() { return get_static_field<"WATCH_NEXT_TYPE_NEXT", jint>(); }
	static jint WATCH_NEXT_TYPE_WATCHLIST() { return get_static_field<"WATCH_NEXT_TYPE_WATCHLIST", jint>(); }


protected:

	TvContract_WatchNextPrograms(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_WATCHNEXTPROGRAMS
