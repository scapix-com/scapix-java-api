// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOMIXERATTRIBUTES_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOMIXERATTRIBUTES_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class AudioMixerAttributes_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::AudioMixerAttributes_Builder>
{
	static constexpr fixed_string class_name = "android/media/AudioMixerAttributes$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOMIXERATTRIBUTES_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOMIXERATTRIBUTES_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOMIXERATTRIBUTES_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/AudioFormat.h>
#include <scapix/java_api/android/media/AudioMixerAttributes.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::AudioMixerAttributes_Builder : public jni::object_base<"android/media/AudioMixerAttributes$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::media::AudioMixerAttributes_Builder> new_object(jni::ref<android::media::AudioFormat> format) { return base_::new_object(format); }
	jni::ref<android::media::AudioMixerAttributes> build() { return call_method<"build", jni::ref<android::media::AudioMixerAttributes>>(); }
	jni::ref<android::media::AudioMixerAttributes_Builder> setMixerBehavior(jint mixerBehavior) { return call_method<"setMixerBehavior", jni::ref<android::media::AudioMixerAttributes_Builder>>(mixerBehavior); }

protected:

	AudioMixerAttributes_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOMIXERATTRIBUTES_BUILDER