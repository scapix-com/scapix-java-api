// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_ONERRORLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_ONERRORLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaRecorder_OnErrorListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaRecorder_OnErrorListener>
{
	static constexpr fixed_string class_name = "android/media/MediaRecorder$OnErrorListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_ONERRORLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_ONERRORLISTENER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_ONERRORLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/MediaRecorder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaRecorder_OnErrorListener : public jni::object_base<"android/media/MediaRecorder$OnErrorListener",
	java::lang::Object>
{
public:

	void onError(jni::ref<android::media::MediaRecorder> p1, jint p2, jint p3) { return call_method<"onError", void>(p1, p2, p3); }

protected:

	MediaRecorder_OnErrorListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_ONERRORLISTENER
