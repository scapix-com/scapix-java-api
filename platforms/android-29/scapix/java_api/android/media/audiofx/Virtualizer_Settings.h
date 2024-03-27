// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_SETTINGS_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_SETTINGS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::audiofx { class Virtualizer_Settings; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::audiofx::Virtualizer_Settings>
{
	static constexpr fixed_string class_name = "android/media/audiofx/Virtualizer$Settings";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_SETTINGS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_SETTINGS)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_SETTINGS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::audiofx::Virtualizer_Settings : public jni::object_base<"android/media/audiofx/Virtualizer$Settings",
	java::lang::Object>
{
public:

	jshort strength() { return get_field<"strength", jshort>(); }
	void strength(jshort v) { set_field<"strength", jshort>(v); }

	static jni::ref<android::media::audiofx::Virtualizer_Settings> new_object() { return base_::new_object(); }
	static jni::ref<android::media::audiofx::Virtualizer_Settings> new_object(jni::ref<java::lang::String> settings) { return base_::new_object(settings); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Virtualizer_Settings(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_SETTINGS
