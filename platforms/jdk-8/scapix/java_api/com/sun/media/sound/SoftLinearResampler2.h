// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/media/sound/SoftAbstractResampler.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTLINEARRESAMPLER2_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTLINEARRESAMPLER2_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class SoftLinearResampler2; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::SoftLinearResampler2>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/SoftLinearResampler2";
	using base_classes = std::tuple<scapix::java_api::com::sun::media::sound::SoftAbstractResampler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTLINEARRESAMPLER2_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTLINEARRESAMPLER2)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTLINEARRESAMPLER2

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::SoftLinearResampler2 : public jni::object_base<"com/sun/media/sound/SoftLinearResampler2",
	com::sun::media::sound::SoftAbstractResampler>
{
public:

	static jni::ref<com::sun::media::sound::SoftLinearResampler2> new_object() { return base_::new_object(); }
	jint getPadding() { return call_method<"getPadding", jint>(); }
	void interpolate(jni::ref<jni::array<jfloat>> p1, jni::ref<jni::array<jfloat>> p2, jfloat p3, jni::ref<jni::array<jfloat>> p4, jfloat p5, jni::ref<jni::array<jfloat>> p6, jni::ref<jni::array<jint>> p7, jint p8) { return call_method<"interpolate", void>(p1, p2, p3, p4, p5, p6, p7, p8); }

protected:

	SoftLinearResampler2(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTLINEARRESAMPLER2