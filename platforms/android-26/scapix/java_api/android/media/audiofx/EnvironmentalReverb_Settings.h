// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_ENVIRONMENTALREVERB_SETTINGS_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_ENVIRONMENTALREVERB_SETTINGS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::audiofx { class EnvironmentalReverb_Settings; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::audiofx::EnvironmentalReverb_Settings>
{
	static constexpr fixed_string class_name = "android/media/audiofx/EnvironmentalReverb$Settings";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_ENVIRONMENTALREVERB_SETTINGS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_ENVIRONMENTALREVERB_SETTINGS)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_ENVIRONMENTALREVERB_SETTINGS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::audiofx::EnvironmentalReverb_Settings : public jni::object_base<"android/media/audiofx/EnvironmentalReverb$Settings",
	java::lang::Object>
{
public:

	jshort decayHFRatio() { return get_field<"decayHFRatio", jshort>(); }
	void decayHFRatio(jshort v) { set_field<"decayHFRatio", jshort>(v); }
	jint decayTime() { return get_field<"decayTime", jint>(); }
	void decayTime(jint v) { set_field<"decayTime", jint>(v); }
	jshort density() { return get_field<"density", jshort>(); }
	void density(jshort v) { set_field<"density", jshort>(v); }
	jshort diffusion() { return get_field<"diffusion", jshort>(); }
	void diffusion(jshort v) { set_field<"diffusion", jshort>(v); }
	jint reflectionsDelay() { return get_field<"reflectionsDelay", jint>(); }
	void reflectionsDelay(jint v) { set_field<"reflectionsDelay", jint>(v); }
	jshort reflectionsLevel() { return get_field<"reflectionsLevel", jshort>(); }
	void reflectionsLevel(jshort v) { set_field<"reflectionsLevel", jshort>(v); }
	jint reverbDelay() { return get_field<"reverbDelay", jint>(); }
	void reverbDelay(jint v) { set_field<"reverbDelay", jint>(v); }
	jshort reverbLevel() { return get_field<"reverbLevel", jshort>(); }
	void reverbLevel(jshort v) { set_field<"reverbLevel", jshort>(v); }
	jshort roomHFLevel() { return get_field<"roomHFLevel", jshort>(); }
	void roomHFLevel(jshort v) { set_field<"roomHFLevel", jshort>(v); }
	jshort roomLevel() { return get_field<"roomLevel", jshort>(); }
	void roomLevel(jshort v) { set_field<"roomLevel", jshort>(v); }

	static jni::ref<android::media::audiofx::EnvironmentalReverb_Settings> new_object() { return base_::new_object(); }
	static jni::ref<android::media::audiofx::EnvironmentalReverb_Settings> new_object(jni::ref<java::lang::String> settings) { return base_::new_object(settings); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	EnvironmentalReverb_Settings(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_ENVIRONMENTALREVERB_SETTINGS