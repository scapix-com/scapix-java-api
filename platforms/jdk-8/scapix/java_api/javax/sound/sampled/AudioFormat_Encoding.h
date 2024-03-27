// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_AUDIOFORMAT_ENCODING_FWD
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_AUDIOFORMAT_ENCODING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sound::sampled { class AudioFormat_Encoding; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sound::sampled::AudioFormat_Encoding>
{
	static constexpr fixed_string class_name = "javax/sound/sampled/AudioFormat$Encoding";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_AUDIOFORMAT_ENCODING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_AUDIOFORMAT_ENCODING)
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_AUDIOFORMAT_ENCODING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sound::sampled::AudioFormat_Encoding : public jni::object_base<"javax/sound/sampled/AudioFormat$Encoding",
	java::lang::Object>
{
public:

	static jni::ref<javax::sound::sampled::AudioFormat_Encoding> PCM_SIGNED() { return get_static_field<"PCM_SIGNED", jni::ref<javax::sound::sampled::AudioFormat_Encoding>>(); }
	static jni::ref<javax::sound::sampled::AudioFormat_Encoding> PCM_UNSIGNED() { return get_static_field<"PCM_UNSIGNED", jni::ref<javax::sound::sampled::AudioFormat_Encoding>>(); }
	static jni::ref<javax::sound::sampled::AudioFormat_Encoding> PCM_FLOAT() { return get_static_field<"PCM_FLOAT", jni::ref<javax::sound::sampled::AudioFormat_Encoding>>(); }
	static jni::ref<javax::sound::sampled::AudioFormat_Encoding> ULAW() { return get_static_field<"ULAW", jni::ref<javax::sound::sampled::AudioFormat_Encoding>>(); }
	static jni::ref<javax::sound::sampled::AudioFormat_Encoding> ALAW() { return get_static_field<"ALAW", jni::ref<javax::sound::sampled::AudioFormat_Encoding>>(); }

	static jni::ref<javax::sound::sampled::AudioFormat_Encoding> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AudioFormat_Encoding(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_AUDIOFORMAT_ENCODING
