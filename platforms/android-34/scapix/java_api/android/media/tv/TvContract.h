// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv { class TvContract; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::TvContract>
{
	static constexpr fixed_string class_name = "android/media/tv/TvContract";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/media/tv/TvContract_WatchNextPrograms.h>
#include <scapix/java_api/android/media/tv/TvContract_RecordedPrograms.h>
#include <scapix/java_api/android/media/tv/TvContract_Programs.h>
#include <scapix/java_api/android/media/tv/TvContract_PreviewPrograms.h>
#include <scapix/java_api/android/media/tv/TvContract_Channels.h>
#include <scapix/java_api/android/media/tv/TvContract_BaseTvColumns.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::TvContract : public jni::object_base<"android/media/tv/TvContract",
	java::lang::Object>
{
public:

	using WatchNextPrograms = TvContract_WatchNextPrograms;
	using RecordedPrograms = TvContract_RecordedPrograms;
	using Programs = TvContract_Programs;
	using PreviewPrograms = TvContract_PreviewPrograms;
	using Channels = TvContract_Channels;
	using BaseTvColumns = TvContract_BaseTvColumns;

	static jni::ref<java::lang::String> ACTION_INITIALIZE_PROGRAMS() { return get_static_field<"ACTION_INITIALIZE_PROGRAMS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_PREVIEW_PROGRAM_ADDED_TO_WATCH_NEXT() { return get_static_field<"ACTION_PREVIEW_PROGRAM_ADDED_TO_WATCH_NEXT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_PREVIEW_PROGRAM_BROWSABLE_DISABLED() { return get_static_field<"ACTION_PREVIEW_PROGRAM_BROWSABLE_DISABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_REQUEST_CHANNEL_BROWSABLE() { return get_static_field<"ACTION_REQUEST_CHANNEL_BROWSABLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_WATCH_NEXT_PROGRAM_BROWSABLE_DISABLED() { return get_static_field<"ACTION_WATCH_NEXT_PROGRAM_BROWSABLE_DISABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> AUTHORITY() { return get_static_field<"AUTHORITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_CHANNEL_ID() { return get_static_field<"EXTRA_CHANNEL_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_PREVIEW_PROGRAM_ID() { return get_static_field<"EXTRA_PREVIEW_PROGRAM_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_WATCH_NEXT_PROGRAM_ID() { return get_static_field<"EXTRA_WATCH_NEXT_PROGRAM_ID", jni::ref<java::lang::String>>(); }

	static jni::ref<java::lang::String> buildInputId(jni::ref<android::content::ComponentName> name) { return call_static_method<"buildInputId", jni::ref<java::lang::String>>(name); }
	static jni::ref<android::net::Uri> buildChannelUri(jlong channelId) { return call_static_method<"buildChannelUri", jni::ref<android::net::Uri>>(channelId); }
	static jni::ref<android::net::Uri> buildChannelUriForPassthroughInput(jni::ref<java::lang::String> inputId) { return call_static_method<"buildChannelUriForPassthroughInput", jni::ref<android::net::Uri>>(inputId); }
	static jni::ref<android::net::Uri> buildChannelLogoUri(jlong channelId) { return call_static_method<"buildChannelLogoUri", jni::ref<android::net::Uri>>(channelId); }
	static jni::ref<android::net::Uri> buildChannelLogoUri(jni::ref<android::net::Uri> channelUri) { return call_static_method<"buildChannelLogoUri", jni::ref<android::net::Uri>>(channelUri); }
	static jni::ref<android::net::Uri> buildChannelsUriForInput(jni::ref<java::lang::String> inputId) { return call_static_method<"buildChannelsUriForInput", jni::ref<android::net::Uri>>(inputId); }
	static jni::ref<android::net::Uri> buildProgramUri(jlong programId) { return call_static_method<"buildProgramUri", jni::ref<android::net::Uri>>(programId); }
	static jni::ref<android::net::Uri> buildProgramsUriForChannel(jlong channelId) { return call_static_method<"buildProgramsUriForChannel", jni::ref<android::net::Uri>>(channelId); }
	static jni::ref<android::net::Uri> buildProgramsUriForChannel(jni::ref<android::net::Uri> channelUri) { return call_static_method<"buildProgramsUriForChannel", jni::ref<android::net::Uri>>(channelUri); }
	static jni::ref<android::net::Uri> buildProgramsUriForChannel(jlong channelId, jlong p2, jlong startTime) { return call_static_method<"buildProgramsUriForChannel", jni::ref<android::net::Uri>>(channelId, p2, startTime); }
	static jni::ref<android::net::Uri> buildProgramsUriForChannel(jni::ref<android::net::Uri> channelUri, jlong startTime, jlong p3) { return call_static_method<"buildProgramsUriForChannel", jni::ref<android::net::Uri>>(channelUri, startTime, p3); }
	static jni::ref<android::net::Uri> buildRecordedProgramUri(jlong recordedProgramId) { return call_static_method<"buildRecordedProgramUri", jni::ref<android::net::Uri>>(recordedProgramId); }
	static jni::ref<android::net::Uri> buildPreviewProgramUri(jlong previewProgramId) { return call_static_method<"buildPreviewProgramUri", jni::ref<android::net::Uri>>(previewProgramId); }
	static jni::ref<android::net::Uri> buildPreviewProgramsUriForChannel(jlong channelId) { return call_static_method<"buildPreviewProgramsUriForChannel", jni::ref<android::net::Uri>>(channelId); }
	static jni::ref<android::net::Uri> buildPreviewProgramsUriForChannel(jni::ref<android::net::Uri> channelUri) { return call_static_method<"buildPreviewProgramsUriForChannel", jni::ref<android::net::Uri>>(channelUri); }
	static jni::ref<android::net::Uri> buildWatchNextProgramUri(jlong watchNextProgramId) { return call_static_method<"buildWatchNextProgramUri", jni::ref<android::net::Uri>>(watchNextProgramId); }
	static jboolean isChannelUri(jni::ref<android::net::Uri> uri) { return call_static_method<"isChannelUri", jboolean>(uri); }
	static jboolean isChannelUriForTunerInput(jni::ref<android::net::Uri> uri) { return call_static_method<"isChannelUriForTunerInput", jboolean>(uri); }
	static jboolean isChannelUriForPassthroughInput(jni::ref<android::net::Uri> uri) { return call_static_method<"isChannelUriForPassthroughInput", jboolean>(uri); }
	static jboolean isProgramUri(jni::ref<android::net::Uri> uri) { return call_static_method<"isProgramUri", jboolean>(uri); }
	static jboolean isRecordedProgramUri(jni::ref<android::net::Uri> uri) { return call_static_method<"isRecordedProgramUri", jboolean>(uri); }
	static void requestChannelBrowsable(jni::ref<android::content::Context> context, jlong channelId) { return call_static_method<"requestChannelBrowsable", void>(context, channelId); }

protected:

	TvContract(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT
