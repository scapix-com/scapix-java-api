// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/sound/sampled/Line.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_DATALINE_FWD
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_DATALINE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sound::sampled { class DataLine; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sound::sampled::DataLine>
{
	static constexpr fixed_string class_name = "javax/sound/sampled/DataLine";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::sound::sampled::Line>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_DATALINE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_DATALINE)
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_DATALINE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/sound/sampled/AudioFormat.h>
#include <scapix/java_api/javax/sound/sampled/DataLine_Info.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sound::sampled::DataLine : public jni::object_base<"javax/sound/sampled/DataLine",
	java::lang::Object,
	javax::sound::sampled::Line>
{
public:

	using Info = DataLine_Info;

	void drain() { return call_method<"drain", void>(); }
	void flush() { return call_method<"flush", void>(); }
	void start() { return call_method<"start", void>(); }
	void stop() { return call_method<"stop", void>(); }
	jboolean isRunning() { return call_method<"isRunning", jboolean>(); }
	jboolean isActive() { return call_method<"isActive", jboolean>(); }
	jni::ref<javax::sound::sampled::AudioFormat> getFormat() { return call_method<"getFormat", jni::ref<javax::sound::sampled::AudioFormat>>(); }
	jint getBufferSize() { return call_method<"getBufferSize", jint>(); }
	jint available() { return call_method<"available", jint>(); }
	jint getFramePosition() { return call_method<"getFramePosition", jint>(); }
	jlong getLongFramePosition() { return call_method<"getLongFramePosition", jlong>(); }
	jlong getMicrosecondPosition() { return call_method<"getMicrosecondPosition", jlong>(); }
	jfloat getLevel() { return call_method<"getLevel", jfloat>(); }

protected:

	DataLine(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_DATALINE
