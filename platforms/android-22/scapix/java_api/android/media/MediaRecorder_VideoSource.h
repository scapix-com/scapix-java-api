// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_VIDEOSOURCE_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_VIDEOSOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaRecorder_VideoSource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaRecorder_VideoSource>
{
	static constexpr fixed_string class_name = "android/media/MediaRecorder$VideoSource";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_VIDEOSOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_VIDEOSOURCE)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_VIDEOSOURCE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaRecorder_VideoSource : public jni::object_base<"android/media/MediaRecorder$VideoSource",
	java::lang::Object>
{
public:

	static jint CAMERA() { return get_static_field<"CAMERA", jint>(); }
	static jint DEFAULT() { return get_static_field<"DEFAULT", jint>(); }
	static jint SURFACE() { return get_static_field<"SURFACE", jint>(); }


protected:

	MediaRecorder_VideoSource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_VIDEOSOURCE
