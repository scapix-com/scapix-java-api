// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_INVALIDDATAEXCEPTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_INVALIDDATAEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class InvalidDataException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::InvalidDataException>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/InvalidDataException";
	using base_classes = std::tuple<scapix::java_api::java::io::IOException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_INVALIDDATAEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_INVALIDDATAEXCEPTION)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_INVALIDDATAEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::InvalidDataException : public jni::object_base<"com/sun/media/sound/InvalidDataException",
	java::io::IOException>
{
public:

	static jni::ref<com::sun::media::sound::InvalidDataException> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::media::sound::InvalidDataException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	InvalidDataException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_INVALIDDATAEXCEPTION
