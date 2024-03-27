// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/sound/sampled/Line_Info.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_DATALINE_INFO_FWD
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_DATALINE_INFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sound::sampled { class DataLine_Info; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sound::sampled::DataLine_Info>
{
	static constexpr fixed_string class_name = "javax/sound/sampled/DataLine$Info";
	using base_classes = std::tuple<scapix::java_api::javax::sound::sampled::Line_Info>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_DATALINE_INFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_DATALINE_INFO)
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_DATALINE_INFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/sound/sampled/AudioFormat.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sound::sampled::DataLine_Info : public jni::object_base<"javax/sound/sampled/DataLine$Info",
	javax::sound::sampled::Line_Info>
{
public:

	static jni::ref<javax::sound::sampled::DataLine_Info> new_object(jni::ref<java::lang::Class> p1, jni::ref<jni::array<javax::sound::sampled::AudioFormat>> p2, jint p3, jint p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<javax::sound::sampled::DataLine_Info> new_object(jni::ref<java::lang::Class> p1, jni::ref<javax::sound::sampled::AudioFormat> p2, jint p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::sound::sampled::DataLine_Info> new_object(jni::ref<java::lang::Class> p1, jni::ref<javax::sound::sampled::AudioFormat> p2) { return base_::new_object(p1, p2); }
	jni::ref<jni::array<javax::sound::sampled::AudioFormat>> getFormats() { return call_method<"getFormats", jni::ref<jni::array<javax::sound::sampled::AudioFormat>>>(); }
	jboolean isFormatSupported(jni::ref<javax::sound::sampled::AudioFormat> p1) { return call_method<"isFormatSupported", jboolean>(p1); }
	jint getMinBufferSize() { return call_method<"getMinBufferSize", jint>(); }
	jint getMaxBufferSize() { return call_method<"getMaxBufferSize", jint>(); }
	jboolean matches(jni::ref<javax::sound::sampled::Line_Info> p1) { return call_method<"matches", jboolean>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	DataLine_Info(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_DATALINE_INFO