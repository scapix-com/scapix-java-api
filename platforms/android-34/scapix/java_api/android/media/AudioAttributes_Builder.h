// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOATTRIBUTES_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOATTRIBUTES_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class AudioAttributes_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::AudioAttributes_Builder>
{
	static constexpr fixed_string class_name = "android/media/AudioAttributes$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOATTRIBUTES_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOATTRIBUTES_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOATTRIBUTES_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/AudioAttributes.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::AudioAttributes_Builder : public jni::object_base<"android/media/AudioAttributes$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::media::AudioAttributes_Builder> new_object() { return base_::new_object(); }
	static jni::ref<android::media::AudioAttributes_Builder> new_object(jni::ref<android::media::AudioAttributes> aa) { return base_::new_object(aa); }
	jni::ref<android::media::AudioAttributes> build() { return call_method<"build", jni::ref<android::media::AudioAttributes>>(); }
	jni::ref<android::media::AudioAttributes_Builder> setUsage(jint usage) { return call_method<"setUsage", jni::ref<android::media::AudioAttributes_Builder>>(usage); }
	jni::ref<android::media::AudioAttributes_Builder> setContentType(jint contentType) { return call_method<"setContentType", jni::ref<android::media::AudioAttributes_Builder>>(contentType); }
	jni::ref<android::media::AudioAttributes_Builder> setFlags(jint flags) { return call_method<"setFlags", jni::ref<android::media::AudioAttributes_Builder>>(flags); }
	jni::ref<android::media::AudioAttributes_Builder> setAllowedCapturePolicy(jint capturePolicy) { return call_method<"setAllowedCapturePolicy", jni::ref<android::media::AudioAttributes_Builder>>(capturePolicy); }
	jni::ref<android::media::AudioAttributes_Builder> setIsContentSpatialized(jboolean isSpatialized) { return call_method<"setIsContentSpatialized", jni::ref<android::media::AudioAttributes_Builder>>(isSpatialized); }
	jni::ref<android::media::AudioAttributes_Builder> setSpatializationBehavior(jint sb) { return call_method<"setSpatializationBehavior", jni::ref<android::media::AudioAttributes_Builder>>(sb); }
	jni::ref<android::media::AudioAttributes_Builder> setLegacyStreamType(jint streamType) { return call_method<"setLegacyStreamType", jni::ref<android::media::AudioAttributes_Builder>>(streamType); }
	jni::ref<android::media::AudioAttributes_Builder> setHapticChannelsMuted(jboolean muted) { return call_method<"setHapticChannelsMuted", jni::ref<android::media::AudioAttributes_Builder>>(muted); }

protected:

	AudioAttributes_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOATTRIBUTES_BUILDER
