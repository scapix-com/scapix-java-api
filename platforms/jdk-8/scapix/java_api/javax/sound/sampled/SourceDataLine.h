// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/sound/sampled/DataLine.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_SOURCEDATALINE_FWD
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_SOURCEDATALINE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sound::sampled { class SourceDataLine; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sound::sampled::SourceDataLine>
{
	static constexpr fixed_string class_name = "javax/sound/sampled/SourceDataLine";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::sound::sampled::DataLine>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_SOURCEDATALINE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_SOURCEDATALINE)
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_SOURCEDATALINE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/sound/sampled/AudioFormat.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sound::sampled::SourceDataLine : public jni::object_base<"javax/sound/sampled/SourceDataLine",
	java::lang::Object,
	javax::sound::sampled::DataLine>
{
public:

	void open(jni::ref<javax::sound::sampled::AudioFormat> p1, jint p2) { return call_method<"open", void>(p1, p2); }
	void open(jni::ref<javax::sound::sampled::AudioFormat> p1) { return call_method<"open", void>(p1); }
	jint write(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"write", jint>(p1, p2, p3); }

protected:

	SourceDataLine(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_SOURCEDATALINE