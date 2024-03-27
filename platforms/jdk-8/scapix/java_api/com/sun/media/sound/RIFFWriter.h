// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/OutputStream.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_RIFFWRITER_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_RIFFWRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class RIFFWriter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::RIFFWriter>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/RIFFWriter";
	using base_classes = std::tuple<scapix::java_api::java::io::OutputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_RIFFWRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_RIFFWRITER)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_RIFFWRITER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::RIFFWriter : public jni::object_base<"com/sun/media/sound/RIFFWriter",
	java::io::OutputStream>
{
public:

	static jni::ref<com::sun::media::sound::RIFFWriter> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::media::sound::RIFFWriter> new_object(jni::ref<java::io::File> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::media::sound::RIFFWriter> new_object(jni::ref<java::io::OutputStream> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	void seek(jlong p1) { return call_method<"seek", void>(p1); }
	jlong getFilePointer() { return call_method<"getFilePointer", jlong>(); }
	void setWriteOverride(jboolean p1) { return call_method<"setWriteOverride", void>(p1); }
	jboolean getWriteOverride() { return call_method<"getWriteOverride", jboolean>(); }
	void close() { return call_method<"close", void>(); }
	void write(jint p1) { return call_method<"write", void>(p1); }
	void write(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"write", void>(p1, p2, p3); }
	jni::ref<com::sun::media::sound::RIFFWriter> writeList(jni::ref<java::lang::String> p1) { return call_method<"writeList", jni::ref<com::sun::media::sound::RIFFWriter>>(p1); }
	jni::ref<com::sun::media::sound::RIFFWriter> writeChunk(jni::ref<java::lang::String> p1) { return call_method<"writeChunk", jni::ref<com::sun::media::sound::RIFFWriter>>(p1); }
	void writeString(jni::ref<java::lang::String> p1) { return call_method<"writeString", void>(p1); }
	void writeString(jni::ref<java::lang::String> p1, jint p2) { return call_method<"writeString", void>(p1, p2); }
	void writeByte(jint p1) { return call_method<"writeByte", void>(p1); }
	void writeShort(jshort p1) { return call_method<"writeShort", void>(p1); }
	void writeInt(jint p1) { return call_method<"writeInt", void>(p1); }
	void writeLong(jlong p1) { return call_method<"writeLong", void>(p1); }
	void writeUnsignedByte(jint p1) { return call_method<"writeUnsignedByte", void>(p1); }
	void writeUnsignedShort(jint p1) { return call_method<"writeUnsignedShort", void>(p1); }
	void writeUnsignedInt(jlong p1) { return call_method<"writeUnsignedInt", void>(p1); }

protected:

	RIFFWriter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_RIFFWRITER
