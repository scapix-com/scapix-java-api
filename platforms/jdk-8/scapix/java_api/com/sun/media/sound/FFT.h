// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_FFT_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_FFT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class FFT; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::FFT>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/FFT";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_FFT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_FFT)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_FFT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::FFT : public jni::object_base<"com/sun/media/sound/FFT",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::media::sound::FFT> new_object(jint p1, jint p2) { return base_::new_object(p1, p2); }
	void transform(jni::ref<jni::array<jdouble>> p1) { return call_method<"transform", void>(p1); }

protected:

	FFT(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_FFT
