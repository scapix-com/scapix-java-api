// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PLATFORM_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PLATFORM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class Platform; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::Platform>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/Platform";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PLATFORM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PLATFORM)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PLATFORM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::media::sound::Platform : public jni::object_base<"com/sun/media/sound/Platform",
	java::lang::Object>
{
public:

	static jint LIB_MAIN() { return get_static_field<"LIB_MAIN", jint>(); }
	static jint LIB_ALSA() { return get_static_field<"LIB_ALSA", jint>(); }
	static jint LIB_DSOUND() { return get_static_field<"LIB_DSOUND", jint>(); }
	static jint FEATURE_MIDIIO() { return get_static_field<"FEATURE_MIDIIO", jint>(); }
	static jint FEATURE_PORTS() { return get_static_field<"FEATURE_PORTS", jint>(); }
	static jint FEATURE_DIRECT_AUDIO() { return get_static_field<"FEATURE_DIRECT_AUDIO", jint>(); }


protected:

	Platform(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PLATFORM
