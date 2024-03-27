// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/InputStream.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELBYTEBUFFERWAVETABLE_BUFFER8PLUSINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELBYTEBUFFERWAVETABLE_BUFFER8PLUSINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class ModelByteBufferWavetable_Buffer8PlusInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::ModelByteBufferWavetable_Buffer8PlusInputStream>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/ModelByteBufferWavetable$Buffer8PlusInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::InputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELBYTEBUFFERWAVETABLE_BUFFER8PLUSINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELBYTEBUFFERWAVETABLE_BUFFER8PLUSINPUTSTREAM)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELBYTEBUFFERWAVETABLE_BUFFER8PLUSINPUTSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::media::sound::ModelByteBufferWavetable_Buffer8PlusInputStream : public jni::object_base<"com/sun/media/sound/ModelByteBufferWavetable$Buffer8PlusInputStream",
	java::io::InputStream>
{
public:

	jint read(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"read", jint>(p1, p2, p3); }
	jlong skip(jlong p1) { return call_method<"skip", jlong>(p1); }
	jint read(jni::ref<jni::array<jbyte>> p1) { return call_method<"read", jint>(p1); }
	jint read() { return call_method<"read", jint>(); }
	jboolean markSupported() { return call_method<"markSupported", jboolean>(); }
	jint available() { return call_method<"available", jint>(); }
	void mark(jint p1) { return call_method<"mark", void>(p1); }
	void reset() { return call_method<"reset", void>(); }

protected:

	ModelByteBufferWavetable_Buffer8PlusInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELBYTEBUFFERWAVETABLE_BUFFER8PLUSINPUTSTREAM
