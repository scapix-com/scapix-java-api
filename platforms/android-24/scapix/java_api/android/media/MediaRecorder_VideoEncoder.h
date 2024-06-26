// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_VIDEOENCODER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_VIDEOENCODER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaRecorder_VideoEncoder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaRecorder_VideoEncoder>
{
	static constexpr fixed_string class_name = "android/media/MediaRecorder$VideoEncoder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_VIDEOENCODER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_VIDEOENCODER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_VIDEOENCODER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaRecorder_VideoEncoder : public jni::object_base<"android/media/MediaRecorder$VideoEncoder",
	java::lang::Object>
{
public:

	static jint DEFAULT() { return get_static_field<"DEFAULT", jint>(); }
	static jint H263() { return get_static_field<"H263", jint>(); }
	static jint H264() { return get_static_field<"H264", jint>(); }
	static jint HEVC() { return get_static_field<"HEVC", jint>(); }
	static jint MPEG_4_SP() { return get_static_field<"MPEG_4_SP", jint>(); }
	static jint VP8() { return get_static_field<"VP8", jint>(); }


protected:

	MediaRecorder_VideoEncoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_VIDEOENCODER
