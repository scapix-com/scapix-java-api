// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_OUTPUTFORMAT_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_OUTPUTFORMAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaRecorder_OutputFormat; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaRecorder_OutputFormat>
{
	static constexpr fixed_string class_name = "android/media/MediaRecorder$OutputFormat";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_OUTPUTFORMAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_OUTPUTFORMAT)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_OUTPUTFORMAT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaRecorder_OutputFormat : public jni::object_base<"android/media/MediaRecorder$OutputFormat",
	java::lang::Object>
{
public:

	static jint AAC_ADTS() { return get_static_field<"AAC_ADTS", jint>(); }
	static jint AMR_NB() { return get_static_field<"AMR_NB", jint>(); }
	static jint AMR_WB() { return get_static_field<"AMR_WB", jint>(); }
	static jint DEFAULT() { return get_static_field<"DEFAULT", jint>(); }
	static jint MPEG_2_TS() { return get_static_field<"MPEG_2_TS", jint>(); }
	static jint MPEG_4() { return get_static_field<"MPEG_4", jint>(); }
	static jint RAW_AMR() { return get_static_field<"RAW_AMR", jint>(); }
	static jint THREE_GPP() { return get_static_field<"THREE_GPP", jint>(); }
	static jint WEBM() { return get_static_field<"WEBM", jint>(); }


protected:

	MediaRecorder_OutputFormat(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_OUTPUTFORMAT
