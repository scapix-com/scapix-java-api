// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/media/sound/InvalidDataException.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_RIFFINVALIDDATAEXCEPTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_RIFFINVALIDDATAEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class RIFFInvalidDataException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::RIFFInvalidDataException>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/RIFFInvalidDataException";
	using base_classes = std::tuple<scapix::java_api::com::sun::media::sound::InvalidDataException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_RIFFINVALIDDATAEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_RIFFINVALIDDATAEXCEPTION)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_RIFFINVALIDDATAEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::RIFFInvalidDataException : public jni::object_base<"com/sun/media/sound/RIFFInvalidDataException",
	com::sun::media::sound::InvalidDataException>
{
public:

	static jni::ref<com::sun::media::sound::RIFFInvalidDataException> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::media::sound::RIFFInvalidDataException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	RIFFInvalidDataException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_RIFFINVALIDDATAEXCEPTION
