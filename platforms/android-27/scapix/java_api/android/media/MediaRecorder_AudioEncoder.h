// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_AUDIOENCODER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_AUDIOENCODER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaRecorder_AudioEncoder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaRecorder_AudioEncoder>
{
	static constexpr fixed_string class_name = "android/media/MediaRecorder$AudioEncoder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_AUDIOENCODER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_AUDIOENCODER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_AUDIOENCODER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaRecorder_AudioEncoder : public jni::object_base<"android/media/MediaRecorder$AudioEncoder",
	java::lang::Object>
{
public:

	static jint AAC() { return get_static_field<"AAC", jint>(); }
	static jint AAC_ELD() { return get_static_field<"AAC_ELD", jint>(); }
	static jint AMR_NB() { return get_static_field<"AMR_NB", jint>(); }
	static jint AMR_WB() { return get_static_field<"AMR_WB", jint>(); }
	static jint DEFAULT() { return get_static_field<"DEFAULT", jint>(); }
	static jint HE_AAC() { return get_static_field<"HE_AAC", jint>(); }
	static jint VORBIS() { return get_static_field<"VORBIS", jint>(); }


protected:

	MediaRecorder_AudioEncoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_AUDIOENCODER
