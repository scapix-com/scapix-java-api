// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/io/ObjectOutput.h>
#include <scapix/java_api/java/io/ObjectStreamConstants.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class ObjectOutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::ObjectOutputStream>
{
	static constexpr fixed_string class_name = "java/io/ObjectOutputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::OutputStream, scapix::java_api::java::io::ObjectOutput, scapix::java_api::java::io::ObjectStreamConstants>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/ObjectOutputStream_PutField.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::ObjectOutputStream : public jni::object_base<"java/io/ObjectOutputStream",
	java::io::OutputStream,
	java::io::ObjectOutput,
	java::io::ObjectStreamConstants>
{
public:

	using PutField = ObjectOutputStream_PutField;

	static jni::ref<java::io::ObjectOutputStream> new_object(jni::ref<java::io::OutputStream> out) { return base_::new_object(out); }
	void useProtocolVersion(jint version) { return call_method<"useProtocolVersion", void>(version); }
	void writeObject(jni::ref<java::lang::Object> obj) { return call_method<"writeObject", void>(obj); }
	void writeUnshared(jni::ref<java::lang::Object> obj) { return call_method<"writeUnshared", void>(obj); }
	void defaultWriteObject() { return call_method<"defaultWriteObject", void>(); }
	jni::ref<java::io::ObjectOutputStream_PutField> putFields() { return call_method<"putFields", jni::ref<java::io::ObjectOutputStream_PutField>>(); }
	void writeFields() { return call_method<"writeFields", void>(); }
	void reset() { return call_method<"reset", void>(); }
	void write(jint val) { return call_method<"write", void>(val); }
	void write(jni::ref<jni::array<jbyte>> buf) { return call_method<"write", void>(buf); }
	void write(jni::ref<jni::array<jbyte>> buf, jint off, jint len) { return call_method<"write", void>(buf, off, len); }
	void flush() { return call_method<"flush", void>(); }
	void close() { return call_method<"close", void>(); }
	void writeBoolean(jboolean val) { return call_method<"writeBoolean", void>(val); }
	void writeByte(jint val) { return call_method<"writeByte", void>(val); }
	void writeShort(jint val) { return call_method<"writeShort", void>(val); }
	void writeChar(jint val) { return call_method<"writeChar", void>(val); }
	void writeInt(jint val) { return call_method<"writeInt", void>(val); }
	void writeLong(jlong val) { return call_method<"writeLong", void>(val); }
	void writeFloat(jfloat val) { return call_method<"writeFloat", void>(val); }
	void writeDouble(jdouble val) { return call_method<"writeDouble", void>(val); }
	void writeBytes(jni::ref<java::lang::String> str) { return call_method<"writeBytes", void>(str); }
	void writeChars(jni::ref<java::lang::String> str) { return call_method<"writeChars", void>(str); }
	void writeUTF(jni::ref<java::lang::String> str) { return call_method<"writeUTF", void>(str); }

protected:

	ObjectOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM
