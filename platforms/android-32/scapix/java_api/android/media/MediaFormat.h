// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAFORMAT_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAFORMAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaFormat; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaFormat>
{
	static constexpr fixed_string class_name = "android/media/MediaFormat";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAFORMAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAFORMAT)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAFORMAT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaFormat : public jni::object_base<"android/media/MediaFormat",
	java::lang::Object>
{
public:

	static jint COLOR_RANGE_FULL() { return get_static_field<"COLOR_RANGE_FULL", jint>(); }
	static jint COLOR_RANGE_LIMITED() { return get_static_field<"COLOR_RANGE_LIMITED", jint>(); }
	static jint COLOR_STANDARD_BT2020() { return get_static_field<"COLOR_STANDARD_BT2020", jint>(); }
	static jint COLOR_STANDARD_BT601_NTSC() { return get_static_field<"COLOR_STANDARD_BT601_NTSC", jint>(); }
	static jint COLOR_STANDARD_BT601_PAL() { return get_static_field<"COLOR_STANDARD_BT601_PAL", jint>(); }
	static jint COLOR_STANDARD_BT709() { return get_static_field<"COLOR_STANDARD_BT709", jint>(); }
	static jint COLOR_TRANSFER_HLG() { return get_static_field<"COLOR_TRANSFER_HLG", jint>(); }
	static jint COLOR_TRANSFER_LINEAR() { return get_static_field<"COLOR_TRANSFER_LINEAR", jint>(); }
	static jint COLOR_TRANSFER_SDR_VIDEO() { return get_static_field<"COLOR_TRANSFER_SDR_VIDEO", jint>(); }
	static jint COLOR_TRANSFER_ST2084() { return get_static_field<"COLOR_TRANSFER_ST2084", jint>(); }
	static jni::ref<java::lang::String> KEY_AAC_DRC_ALBUM_MODE() { return get_static_field<"KEY_AAC_DRC_ALBUM_MODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_AAC_DRC_ATTENUATION_FACTOR() { return get_static_field<"KEY_AAC_DRC_ATTENUATION_FACTOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_AAC_DRC_BOOST_FACTOR() { return get_static_field<"KEY_AAC_DRC_BOOST_FACTOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_AAC_DRC_EFFECT_TYPE() { return get_static_field<"KEY_AAC_DRC_EFFECT_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_AAC_DRC_HEAVY_COMPRESSION() { return get_static_field<"KEY_AAC_DRC_HEAVY_COMPRESSION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_AAC_DRC_OUTPUT_LOUDNESS() { return get_static_field<"KEY_AAC_DRC_OUTPUT_LOUDNESS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_AAC_DRC_TARGET_REFERENCE_LEVEL() { return get_static_field<"KEY_AAC_DRC_TARGET_REFERENCE_LEVEL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_AAC_ENCODED_TARGET_LEVEL() { return get_static_field<"KEY_AAC_ENCODED_TARGET_LEVEL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_AAC_MAX_OUTPUT_CHANNEL_COUNT() { return get_static_field<"KEY_AAC_MAX_OUTPUT_CHANNEL_COUNT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_AAC_PROFILE() { return get_static_field<"KEY_AAC_PROFILE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_AAC_SBR_MODE() { return get_static_field<"KEY_AAC_SBR_MODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ALLOW_FRAME_DROP() { return get_static_field<"KEY_ALLOW_FRAME_DROP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_AUDIO_SESSION_ID() { return get_static_field<"KEY_AUDIO_SESSION_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_BITRATE_MODE() { return get_static_field<"KEY_BITRATE_MODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_BIT_RATE() { return get_static_field<"KEY_BIT_RATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CAPTION_SERVICE_NUMBER() { return get_static_field<"KEY_CAPTION_SERVICE_NUMBER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CAPTURE_RATE() { return get_static_field<"KEY_CAPTURE_RATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CHANNEL_COUNT() { return get_static_field<"KEY_CHANNEL_COUNT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CHANNEL_MASK() { return get_static_field<"KEY_CHANNEL_MASK", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CODECS_STRING() { return get_static_field<"KEY_CODECS_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_COLOR_FORMAT() { return get_static_field<"KEY_COLOR_FORMAT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_COLOR_RANGE() { return get_static_field<"KEY_COLOR_RANGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_COLOR_STANDARD() { return get_static_field<"KEY_COLOR_STANDARD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_COLOR_TRANSFER() { return get_static_field<"KEY_COLOR_TRANSFER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_COLOR_TRANSFER_REQUEST() { return get_static_field<"KEY_COLOR_TRANSFER_REQUEST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_COMPLEXITY() { return get_static_field<"KEY_COMPLEXITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CREATE_INPUT_SURFACE_SUSPENDED() { return get_static_field<"KEY_CREATE_INPUT_SURFACE_SUSPENDED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_DURATION() { return get_static_field<"KEY_DURATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ENCODER_DELAY() { return get_static_field<"KEY_ENCODER_DELAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ENCODER_PADDING() { return get_static_field<"KEY_ENCODER_PADDING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_FLAC_COMPRESSION_LEVEL() { return get_static_field<"KEY_FLAC_COMPRESSION_LEVEL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_FRAME_RATE() { return get_static_field<"KEY_FRAME_RATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_GRID_COLUMNS() { return get_static_field<"KEY_GRID_COLUMNS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_GRID_ROWS() { return get_static_field<"KEY_GRID_ROWS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_HAPTIC_CHANNEL_COUNT() { return get_static_field<"KEY_HAPTIC_CHANNEL_COUNT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_HARDWARE_AV_SYNC_ID() { return get_static_field<"KEY_HARDWARE_AV_SYNC_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_HDR10_PLUS_INFO() { return get_static_field<"KEY_HDR10_PLUS_INFO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_HDR_STATIC_INFO() { return get_static_field<"KEY_HDR_STATIC_INFO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_HEIGHT() { return get_static_field<"KEY_HEIGHT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_INTRA_REFRESH_PERIOD() { return get_static_field<"KEY_INTRA_REFRESH_PERIOD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_IS_ADTS() { return get_static_field<"KEY_IS_ADTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_IS_AUTOSELECT() { return get_static_field<"KEY_IS_AUTOSELECT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_IS_DEFAULT() { return get_static_field<"KEY_IS_DEFAULT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_IS_FORCED_SUBTITLE() { return get_static_field<"KEY_IS_FORCED_SUBTITLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_I_FRAME_INTERVAL() { return get_static_field<"KEY_I_FRAME_INTERVAL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_LANGUAGE() { return get_static_field<"KEY_LANGUAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_LATENCY() { return get_static_field<"KEY_LATENCY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_LEVEL() { return get_static_field<"KEY_LEVEL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_LOW_LATENCY() { return get_static_field<"KEY_LOW_LATENCY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MAX_B_FRAMES() { return get_static_field<"KEY_MAX_B_FRAMES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MAX_FPS_TO_ENCODER() { return get_static_field<"KEY_MAX_FPS_TO_ENCODER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MAX_HEIGHT() { return get_static_field<"KEY_MAX_HEIGHT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MAX_INPUT_SIZE() { return get_static_field<"KEY_MAX_INPUT_SIZE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MAX_OUTPUT_CHANNEL_COUNT() { return get_static_field<"KEY_MAX_OUTPUT_CHANNEL_COUNT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MAX_PTS_GAP_TO_ENCODER() { return get_static_field<"KEY_MAX_PTS_GAP_TO_ENCODER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MAX_WIDTH() { return get_static_field<"KEY_MAX_WIDTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MIME() { return get_static_field<"KEY_MIME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MPEGH_COMPATIBLE_SETS() { return get_static_field<"KEY_MPEGH_COMPATIBLE_SETS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MPEGH_PROFILE_LEVEL_INDICATION() { return get_static_field<"KEY_MPEGH_PROFILE_LEVEL_INDICATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MPEGH_REFERENCE_CHANNEL_LAYOUT() { return get_static_field<"KEY_MPEGH_REFERENCE_CHANNEL_LAYOUT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_OPERATING_RATE() { return get_static_field<"KEY_OPERATING_RATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_OUTPUT_REORDER_DEPTH() { return get_static_field<"KEY_OUTPUT_REORDER_DEPTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_PCM_ENCODING() { return get_static_field<"KEY_PCM_ENCODING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_PIXEL_ASPECT_RATIO_HEIGHT() { return get_static_field<"KEY_PIXEL_ASPECT_RATIO_HEIGHT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_PIXEL_ASPECT_RATIO_WIDTH() { return get_static_field<"KEY_PIXEL_ASPECT_RATIO_WIDTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_PREPEND_HEADER_TO_SYNC_FRAMES() { return get_static_field<"KEY_PREPEND_HEADER_TO_SYNC_FRAMES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_PRIORITY() { return get_static_field<"KEY_PRIORITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_PROFILE() { return get_static_field<"KEY_PROFILE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_PUSH_BLANK_BUFFERS_ON_STOP() { return get_static_field<"KEY_PUSH_BLANK_BUFFERS_ON_STOP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_QUALITY() { return get_static_field<"KEY_QUALITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_REPEAT_PREVIOUS_FRAME_AFTER() { return get_static_field<"KEY_REPEAT_PREVIOUS_FRAME_AFTER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ROTATION() { return get_static_field<"KEY_ROTATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_SAMPLE_RATE() { return get_static_field<"KEY_SAMPLE_RATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_SLICE_HEIGHT() { return get_static_field<"KEY_SLICE_HEIGHT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_SLOW_MOTION_MARKERS() { return get_static_field<"KEY_SLOW_MOTION_MARKERS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_STRIDE() { return get_static_field<"KEY_STRIDE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_TEMPORAL_LAYERING() { return get_static_field<"KEY_TEMPORAL_LAYERING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_TILE_HEIGHT() { return get_static_field<"KEY_TILE_HEIGHT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_TILE_WIDTH() { return get_static_field<"KEY_TILE_WIDTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_TRACK_ID() { return get_static_field<"KEY_TRACK_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VIDEO_QP_B_MAX() { return get_static_field<"KEY_VIDEO_QP_B_MAX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VIDEO_QP_B_MIN() { return get_static_field<"KEY_VIDEO_QP_B_MIN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VIDEO_QP_I_MAX() { return get_static_field<"KEY_VIDEO_QP_I_MAX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VIDEO_QP_I_MIN() { return get_static_field<"KEY_VIDEO_QP_I_MIN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VIDEO_QP_MAX() { return get_static_field<"KEY_VIDEO_QP_MAX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VIDEO_QP_MIN() { return get_static_field<"KEY_VIDEO_QP_MIN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VIDEO_QP_P_MAX() { return get_static_field<"KEY_VIDEO_QP_P_MAX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VIDEO_QP_P_MIN() { return get_static_field<"KEY_VIDEO_QP_P_MIN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_WIDTH() { return get_static_field<"KEY_WIDTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_AUDIO_AAC() { return get_static_field<"MIMETYPE_AUDIO_AAC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_AUDIO_AC3() { return get_static_field<"MIMETYPE_AUDIO_AC3", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_AUDIO_AC4() { return get_static_field<"MIMETYPE_AUDIO_AC4", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_AUDIO_AMR_NB() { return get_static_field<"MIMETYPE_AUDIO_AMR_NB", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_AUDIO_AMR_WB() { return get_static_field<"MIMETYPE_AUDIO_AMR_WB", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_AUDIO_EAC3() { return get_static_field<"MIMETYPE_AUDIO_EAC3", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_AUDIO_EAC3_JOC() { return get_static_field<"MIMETYPE_AUDIO_EAC3_JOC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_AUDIO_FLAC() { return get_static_field<"MIMETYPE_AUDIO_FLAC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_AUDIO_G711_ALAW() { return get_static_field<"MIMETYPE_AUDIO_G711_ALAW", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_AUDIO_G711_MLAW() { return get_static_field<"MIMETYPE_AUDIO_G711_MLAW", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_AUDIO_MPEG() { return get_static_field<"MIMETYPE_AUDIO_MPEG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_AUDIO_MPEGH_MHA1() { return get_static_field<"MIMETYPE_AUDIO_MPEGH_MHA1", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_AUDIO_MPEGH_MHM1() { return get_static_field<"MIMETYPE_AUDIO_MPEGH_MHM1", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_AUDIO_MSGSM() { return get_static_field<"MIMETYPE_AUDIO_MSGSM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_AUDIO_OPUS() { return get_static_field<"MIMETYPE_AUDIO_OPUS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_AUDIO_QCELP() { return get_static_field<"MIMETYPE_AUDIO_QCELP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_AUDIO_RAW() { return get_static_field<"MIMETYPE_AUDIO_RAW", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_AUDIO_SCRAMBLED() { return get_static_field<"MIMETYPE_AUDIO_SCRAMBLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_AUDIO_VORBIS() { return get_static_field<"MIMETYPE_AUDIO_VORBIS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_IMAGE_ANDROID_HEIC() { return get_static_field<"MIMETYPE_IMAGE_ANDROID_HEIC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_TEXT_CEA_608() { return get_static_field<"MIMETYPE_TEXT_CEA_608", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_TEXT_CEA_708() { return get_static_field<"MIMETYPE_TEXT_CEA_708", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_TEXT_SUBRIP() { return get_static_field<"MIMETYPE_TEXT_SUBRIP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_TEXT_VTT() { return get_static_field<"MIMETYPE_TEXT_VTT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_VIDEO_AV1() { return get_static_field<"MIMETYPE_VIDEO_AV1", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_VIDEO_AVC() { return get_static_field<"MIMETYPE_VIDEO_AVC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_VIDEO_DOLBY_VISION() { return get_static_field<"MIMETYPE_VIDEO_DOLBY_VISION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_VIDEO_H263() { return get_static_field<"MIMETYPE_VIDEO_H263", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_VIDEO_HEVC() { return get_static_field<"MIMETYPE_VIDEO_HEVC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_VIDEO_MPEG2() { return get_static_field<"MIMETYPE_VIDEO_MPEG2", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_VIDEO_MPEG4() { return get_static_field<"MIMETYPE_VIDEO_MPEG4", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_VIDEO_RAW() { return get_static_field<"MIMETYPE_VIDEO_RAW", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_VIDEO_SCRAMBLED() { return get_static_field<"MIMETYPE_VIDEO_SCRAMBLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_VIDEO_VP8() { return get_static_field<"MIMETYPE_VIDEO_VP8", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE_VIDEO_VP9() { return get_static_field<"MIMETYPE_VIDEO_VP9", jni::ref<java::lang::String>>(); }
	static jint TYPE_BYTE_BUFFER() { return get_static_field<"TYPE_BYTE_BUFFER", jint>(); }
	static jint TYPE_FLOAT() { return get_static_field<"TYPE_FLOAT", jint>(); }
	static jint TYPE_INTEGER() { return get_static_field<"TYPE_INTEGER", jint>(); }
	static jint TYPE_LONG() { return get_static_field<"TYPE_LONG", jint>(); }
	static jint TYPE_NULL() { return get_static_field<"TYPE_NULL", jint>(); }
	static jint TYPE_STRING() { return get_static_field<"TYPE_STRING", jint>(); }

	static jni::ref<android::media::MediaFormat> new_object() { return base_::new_object(); }
	static jni::ref<android::media::MediaFormat> new_object(jni::ref<android::media::MediaFormat> other) { return base_::new_object(other); }
	jboolean containsKey(jni::ref<java::lang::String> name) { return call_method<"containsKey", jboolean>(name); }
	jboolean containsFeature(jni::ref<java::lang::String> name) { return call_method<"containsFeature", jboolean>(name); }
	jint getValueTypeForKey(jni::ref<java::lang::String> name) { return call_method<"getValueTypeForKey", jint>(name); }
	jni::ref<java::lang::Number> getNumber(jni::ref<java::lang::String> name) { return call_method<"getNumber", jni::ref<java::lang::Number>>(name); }
	jni::ref<java::lang::Number> getNumber(jni::ref<java::lang::String> name, jni::ref<java::lang::Number> defaultValue) { return call_method<"getNumber", jni::ref<java::lang::Number>>(name, defaultValue); }
	jint getInteger(jni::ref<java::lang::String> name) { return call_method<"getInteger", jint>(name); }
	jint getInteger(jni::ref<java::lang::String> name, jint defaultValue) { return call_method<"getInteger", jint>(name, defaultValue); }
	jlong getLong(jni::ref<java::lang::String> name) { return call_method<"getLong", jlong>(name); }
	jlong getLong(jni::ref<java::lang::String> name, jlong defaultValue) { return call_method<"getLong", jlong>(name, defaultValue); }
	jfloat getFloat(jni::ref<java::lang::String> name) { return call_method<"getFloat", jfloat>(name); }
	jfloat getFloat(jni::ref<java::lang::String> name, jfloat defaultValue) { return call_method<"getFloat", jfloat>(name, defaultValue); }
	jni::ref<java::lang::String> getString(jni::ref<java::lang::String> name) { return call_method<"getString", jni::ref<java::lang::String>>(name); }
	jni::ref<java::lang::String> getString(jni::ref<java::lang::String> name, jni::ref<java::lang::String> defaultValue) { return call_method<"getString", jni::ref<java::lang::String>>(name, defaultValue); }
	jni::ref<java::nio::ByteBuffer> getByteBuffer(jni::ref<java::lang::String> name) { return call_method<"getByteBuffer", jni::ref<java::nio::ByteBuffer>>(name); }
	jni::ref<java::nio::ByteBuffer> getByteBuffer(jni::ref<java::lang::String> name, jni::ref<java::nio::ByteBuffer> defaultValue) { return call_method<"getByteBuffer", jni::ref<java::nio::ByteBuffer>>(name, defaultValue); }
	jboolean getFeatureEnabled(jni::ref<java::lang::String> feature) { return call_method<"getFeatureEnabled", jboolean>(feature); }
	void setInteger(jni::ref<java::lang::String> name, jint value) { return call_method<"setInteger", void>(name, value); }
	void setLong(jni::ref<java::lang::String> name, jlong value) { return call_method<"setLong", void>(name, value); }
	void setFloat(jni::ref<java::lang::String> name, jfloat value) { return call_method<"setFloat", void>(name, value); }
	void setString(jni::ref<java::lang::String> name, jni::ref<java::lang::String> value) { return call_method<"setString", void>(name, value); }
	void setByteBuffer(jni::ref<java::lang::String> name, jni::ref<java::nio::ByteBuffer> bytes) { return call_method<"setByteBuffer", void>(name, bytes); }
	void removeKey(jni::ref<java::lang::String> name) { return call_method<"removeKey", void>(name); }
	void removeFeature(jni::ref<java::lang::String> name) { return call_method<"removeFeature", void>(name); }
	jni::ref<java::util::Set> getKeys() { return call_method<"getKeys", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> getFeatures() { return call_method<"getFeatures", jni::ref<java::util::Set>>(); }
	void setFeatureEnabled(jni::ref<java::lang::String> feature, jboolean enabled) { return call_method<"setFeatureEnabled", void>(feature, enabled); }
	static jni::ref<android::media::MediaFormat> createAudioFormat(jni::ref<java::lang::String> mime, jint sampleRate, jint channelCount) { return call_static_method<"createAudioFormat", jni::ref<android::media::MediaFormat>>(mime, sampleRate, channelCount); }
	static jni::ref<android::media::MediaFormat> createSubtitleFormat(jni::ref<java::lang::String> mime, jni::ref<java::lang::String> language) { return call_static_method<"createSubtitleFormat", jni::ref<android::media::MediaFormat>>(mime, language); }
	static jni::ref<android::media::MediaFormat> createVideoFormat(jni::ref<java::lang::String> mime, jint width, jint height) { return call_static_method<"createVideoFormat", jni::ref<android::media::MediaFormat>>(mime, width, height); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	MediaFormat(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAFORMAT