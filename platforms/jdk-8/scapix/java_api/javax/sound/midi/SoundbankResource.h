// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SOUNDBANKRESOURCE_FWD
#define SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SOUNDBANKRESOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sound::midi { class SoundbankResource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sound::midi::SoundbankResource>
{
	static constexpr fixed_string class_name = "javax/sound/midi/SoundbankResource";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SOUNDBANKRESOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SOUNDBANKRESOURCE)
#define SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SOUNDBANKRESOURCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/sound/midi/Soundbank.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sound::midi::SoundbankResource : public jni::object_base<"javax/sound/midi/SoundbankResource",
	java::lang::Object>
{
public:

	jni::ref<javax::sound::midi::Soundbank> getSoundbank() { return call_method<"getSoundbank", jni::ref<javax::sound::midi::Soundbank>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Class> getDataClass() { return call_method<"getDataClass", jni::ref<java::lang::Class>>(); }
	jni::ref<java::lang::Object> getData() { return call_method<"getData", jni::ref<java::lang::Object>>(); }

protected:

	SoundbankResource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SOUNDBANKRESOURCE
