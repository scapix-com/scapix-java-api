// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOSYNTHESIZERPROPERTYINFO_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOSYNTHESIZERPROPERTYINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class AudioSynthesizerPropertyInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::AudioSynthesizerPropertyInfo>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/AudioSynthesizerPropertyInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOSYNTHESIZERPROPERTYINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOSYNTHESIZERPROPERTYINFO)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOSYNTHESIZERPROPERTYINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::AudioSynthesizerPropertyInfo : public jni::object_base<"com/sun/media/sound/AudioSynthesizerPropertyInfo",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> name() { return get_field<"name", jni::ref<java::lang::String>>(); }
	void name(jni::ref<java::lang::String> v) { set_field<"name", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> description() { return get_field<"description", jni::ref<java::lang::String>>(); }
	void description(jni::ref<java::lang::String> v) { set_field<"description", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::Object> value() { return get_field<"value", jni::ref<java::lang::Object>>(); }
	void value(jni::ref<java::lang::Object> v) { set_field<"value", jni::ref<java::lang::Object>>(v); }
	jni::ref<java::lang::Class> valueClass() { return get_field<"valueClass", jni::ref<java::lang::Class>>(); }
	void valueClass(jni::ref<java::lang::Class> v) { set_field<"valueClass", jni::ref<java::lang::Class>>(v); }
	jni::ref<jni::array<java::lang::Object>> choices() { return get_field<"choices", jni::ref<jni::array<java::lang::Object>>>(); }
	void choices(jni::ref<jni::array<java::lang::Object>> v) { set_field<"choices", jni::ref<jni::array<java::lang::Object>>>(v); }

	static jni::ref<com::sun::media::sound::AudioSynthesizerPropertyInfo> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return base_::new_object(p1, p2); }

protected:

	AudioSynthesizerPropertyInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOSYNTHESIZERPROPERTYINFO