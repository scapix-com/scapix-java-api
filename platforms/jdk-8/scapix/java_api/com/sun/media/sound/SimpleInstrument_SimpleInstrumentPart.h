// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SIMPLEINSTRUMENT_SIMPLEINSTRUMENTPART_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SIMPLEINSTRUMENT_SIMPLEINSTRUMENTPART_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class SimpleInstrument_SimpleInstrumentPart; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::SimpleInstrument_SimpleInstrumentPart>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/SimpleInstrument$SimpleInstrumentPart";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SIMPLEINSTRUMENT_SIMPLEINSTRUMENTPART_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SIMPLEINSTRUMENT_SIMPLEINSTRUMENTPART)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SIMPLEINSTRUMENT_SIMPLEINSTRUMENTPART

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::media::sound::SimpleInstrument_SimpleInstrumentPart : public jni::object_base<"com/sun/media/sound/SimpleInstrument$SimpleInstrumentPart",
	java::lang::Object>
{
public:


protected:

	SimpleInstrument_SimpleInstrumentPart(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SIMPLEINSTRUMENT_SIMPLEINSTRUMENTPART
