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

	static jni::ref<java::io::ObjectOutputStream> new_object(jni::ref<java::io::OutputStream> p1) { return base_::new_object(p1); }
	void useProtocolVersion(jint p1) { return call_method<"useProtocolVersion", void>(p1); }
	void writeObject(jni::ref<java::lang::Object> p1) { return call_method<"writeObject", void>(p1); }
	void writeUnshared(jni::ref<java::lang::Object> p1) { return call_method<"writeUnshared", void>(p1); }
	void defaultWriteObject() { return call_method<"defaultWriteObject", void>(); }
	jni::ref<java::io::ObjectOutputStream_PutField> putFields() { return call_method<"putFields", jni::ref<java::io::ObjectOutputStream_PutField>>(); }
	void writeFields() { return call_method<"writeFields", void>(); }
	void reset() { return call_method<"reset", void>(); }
	void write(jint p1) { return call_method<"write", void>(p1); }
	void write(jni::ref<jni::array<jbyte>> p1) { return call_method<"write", void>(p1); }
	void write(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"write", void>(p1, p2, p3); }
	void flush() { return call_method<"flush", void>(); }
	void close() { return call_method<"close", void>(); }
	void writeBoolean(jboolean p1) { return call_method<"writeBoolean", void>(p1); }
	void writeByte(jint p1) { return call_method<"writeByte", void>(p1); }
	void writeShort(jint p1) { return call_method<"writeShort", void>(p1); }
	void writeChar(jint p1) { return call_method<"writeChar", void>(p1); }
	void writeInt(jint p1) { return call_method<"writeInt", void>(p1); }
	void writeLong(jlong p1) { return call_method<"writeLong", void>(p1); }
	void writeFloat(jfloat p1) { return call_method<"writeFloat", void>(p1); }
	void writeDouble(jdouble p1) { return call_method<"writeDouble", void>(p1); }
	void writeBytes(jni::ref<java::lang::String> p1) { return call_method<"writeBytes", void>(p1); }
	void writeChars(jni::ref<java::lang::String> p1) { return call_method<"writeChars", void>(p1); }
	void writeUTF(jni::ref<java::lang::String> p1) { return call_method<"writeUTF", void>(p1); }

protected:

	ObjectOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM
