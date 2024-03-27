// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOPLAYBACKCAPTURECONFIGURATION_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOPLAYBACKCAPTURECONFIGURATION_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class AudioPlaybackCaptureConfiguration_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::AudioPlaybackCaptureConfiguration_Builder>
{
	static constexpr fixed_string class_name = "android/media/AudioPlaybackCaptureConfiguration$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOPLAYBACKCAPTURECONFIGURATION_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOPLAYBACKCAPTURECONFIGURATION_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOPLAYBACKCAPTURECONFIGURATION_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/AudioPlaybackCaptureConfiguration.h>
#include <scapix/java_api/android/media/projection/MediaProjection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::AudioPlaybackCaptureConfiguration_Builder : public jni::object_base<"android/media/AudioPlaybackCaptureConfiguration$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::media::AudioPlaybackCaptureConfiguration_Builder> new_object(jni::ref<android::media::projection::MediaProjection> projection) { return base_::new_object(projection); }
	jni::ref<android::media::AudioPlaybackCaptureConfiguration_Builder> addMatchingUsage(jint usage) { return call_method<"addMatchingUsage", jni::ref<android::media::AudioPlaybackCaptureConfiguration_Builder>>(usage); }
	jni::ref<android::media::AudioPlaybackCaptureConfiguration_Builder> addMatchingUid(jint uid) { return call_method<"addMatchingUid", jni::ref<android::media::AudioPlaybackCaptureConfiguration_Builder>>(uid); }
	jni::ref<android::media::AudioPlaybackCaptureConfiguration_Builder> excludeUsage(jint usage) { return call_method<"excludeUsage", jni::ref<android::media::AudioPlaybackCaptureConfiguration_Builder>>(usage); }
	jni::ref<android::media::AudioPlaybackCaptureConfiguration_Builder> excludeUid(jint uid) { return call_method<"excludeUid", jni::ref<android::media::AudioPlaybackCaptureConfiguration_Builder>>(uid); }
	jni::ref<android::media::AudioPlaybackCaptureConfiguration> build() { return call_method<"build", jni::ref<android::media::AudioPlaybackCaptureConfiguration>>(); }

protected:

	AudioPlaybackCaptureConfiguration_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOPLAYBACKCAPTURECONFIGURATION_BUILDER