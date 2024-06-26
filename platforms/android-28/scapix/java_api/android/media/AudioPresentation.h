// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOPRESENTATION_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOPRESENTATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class AudioPresentation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::AudioPresentation>
{
	static constexpr fixed_string class_name = "android/media/AudioPresentation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOPRESENTATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOPRESENTATION)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOPRESENTATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::AudioPresentation : public jni::object_base<"android/media/AudioPresentation",
	java::lang::Object>
{
public:

	static jint MASTERED_FOR_3D() { return get_static_field<"MASTERED_FOR_3D", jint>(); }
	static jint MASTERED_FOR_HEADPHONE() { return get_static_field<"MASTERED_FOR_HEADPHONE", jint>(); }
	static jint MASTERED_FOR_STEREO() { return get_static_field<"MASTERED_FOR_STEREO", jint>(); }
	static jint MASTERED_FOR_SURROUND() { return get_static_field<"MASTERED_FOR_SURROUND", jint>(); }
	static jint MASTERING_NOT_INDICATED() { return get_static_field<"MASTERING_NOT_INDICATED", jint>(); }

	jni::ref<java::util::Map> getLabels() { return call_method<"getLabels", jni::ref<java::util::Map>>(); }
	jni::ref<java::util::Locale> getLocale() { return call_method<"getLocale", jni::ref<java::util::Locale>>(); }
	jint getMasteringIndication() { return call_method<"getMasteringIndication", jint>(); }
	jboolean hasAudioDescription() { return call_method<"hasAudioDescription", jboolean>(); }
	jboolean hasSpokenSubtitles() { return call_method<"hasSpokenSubtitles", jboolean>(); }
	jboolean hasDialogueEnhancement() { return call_method<"hasDialogueEnhancement", jboolean>(); }

protected:

	AudioPresentation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOPRESENTATION
