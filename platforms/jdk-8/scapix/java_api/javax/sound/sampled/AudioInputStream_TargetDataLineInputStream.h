// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/InputStream.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_AUDIOINPUTSTREAM_TARGETDATALINEINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_AUDIOINPUTSTREAM_TARGETDATALINEINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sound::sampled { class AudioInputStream_TargetDataLineInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sound::sampled::AudioInputStream_TargetDataLineInputStream>
{
	static constexpr fixed_string class_name = "javax/sound/sampled/AudioInputStream$TargetDataLineInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::InputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_AUDIOINPUTSTREAM_TARGETDATALINEINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_AUDIOINPUTSTREAM_TARGETDATALINEINPUTSTREAM)
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_AUDIOINPUTSTREAM_TARGETDATALINEINPUTSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::sound::sampled::AudioInputStream_TargetDataLineInputStream : public jni::object_base<"javax/sound/sampled/AudioInputStream$TargetDataLineInputStream",
	java::io::InputStream>
{
public:

	jint available() { return call_method<"available", jint>(); }
	void close() { return call_method<"close", void>(); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"read", jint>(p1, p2, p3); }

protected:

	AudioInputStream_TargetDataLineInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_AUDIOINPUTSTREAM_TARGETDATALINEINPUTSTREAM