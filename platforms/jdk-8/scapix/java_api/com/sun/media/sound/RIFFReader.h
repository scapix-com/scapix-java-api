// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/InputStream.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_RIFFREADER_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_RIFFREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class RIFFReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::RIFFReader>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/RIFFReader";
	using base_classes = std::tuple<scapix::java_api::java::io::InputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_RIFFREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_RIFFREADER)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_RIFFREADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::RIFFReader : public jni::object_base<"com/sun/media/sound/RIFFReader",
	java::io::InputStream>
{
public:

	static jni::ref<com::sun::media::sound::RIFFReader> new_object(jni::ref<java::io::InputStream> p1) { return base_::new_object(p1); }
	jlong getFilePointer() { return call_method<"getFilePointer", jlong>(); }
	jboolean hasNextChunk() { return call_method<"hasNextChunk", jboolean>(); }
	jni::ref<com::sun::media::sound::RIFFReader> nextChunk() { return call_method<"nextChunk", jni::ref<com::sun::media::sound::RIFFReader>>(); }
	jni::ref<java::lang::String> getFormat() { return call_method<"getFormat", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getType() { return call_method<"getType", jni::ref<java::lang::String>>(); }
	jlong getSize() { return call_method<"getSize", jlong>(); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"read", jint>(p1, p2, p3); }
	void readFully(jni::ref<jni::array<jbyte>> p1) { return call_method<"readFully", void>(p1); }
	void readFully(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"readFully", void>(p1, p2, p3); }
	jlong skip(jlong p1) { return call_method<"skip", jlong>(p1); }
	jint available() { return call_method<"available", jint>(); }
	void finish() { return call_method<"finish", void>(); }
	jni::ref<java::lang::String> readString(jint p1) { return call_method<"readString", jni::ref<java::lang::String>>(p1); }
	jbyte readByte() { return call_method<"readByte", jbyte>(); }
	jshort readShort() { return call_method<"readShort", jshort>(); }
	jint readInt() { return call_method<"readInt", jint>(); }
	jlong readLong() { return call_method<"readLong", jlong>(); }
	jint readUnsignedByte() { return call_method<"readUnsignedByte", jint>(); }
	jint readUnsignedShort() { return call_method<"readUnsignedShort", jint>(); }
	jlong readUnsignedInt() { return call_method<"readUnsignedInt", jlong>(); }
	void close() { return call_method<"close", void>(); }

protected:

	RIFFReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_RIFFREADER
