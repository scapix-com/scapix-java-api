// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_EQUALIZER_SETTINGS_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_EQUALIZER_SETTINGS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::audiofx { class Equalizer_Settings; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::audiofx::Equalizer_Settings>
{
	static constexpr fixed_string class_name = "android/media/audiofx/Equalizer$Settings";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_EQUALIZER_SETTINGS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_EQUALIZER_SETTINGS)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_EQUALIZER_SETTINGS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::audiofx::Equalizer_Settings : public jni::object_base<"android/media/audiofx/Equalizer$Settings",
	java::lang::Object>
{
public:

	jni::ref<jni::array<jshort>> bandLevels() { return get_field<"bandLevels", jni::ref<jni::array<jshort>>>(); }
	void bandLevels(jni::ref<jni::array<jshort>> v) { set_field<"bandLevels", jni::ref<jni::array<jshort>>>(v); }
	jshort curPreset() { return get_field<"curPreset", jshort>(); }
	void curPreset(jshort v) { set_field<"curPreset", jshort>(v); }
	jshort numBands() { return get_field<"numBands", jshort>(); }
	void numBands(jshort v) { set_field<"numBands", jshort>(v); }

	static jni::ref<android::media::audiofx::Equalizer_Settings> new_object() { return base_::new_object(); }
	static jni::ref<android::media::audiofx::Equalizer_Settings> new_object(jni::ref<java::lang::String> settings) { return base_::new_object(settings); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Equalizer_Settings(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_EQUALIZER_SETTINGS
