// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterOutputStream.h>
#include <scapix/java_api/java/io/DataOutput.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_DATAOUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_IO_DATAOUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class DataOutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::DataOutputStream>
{
	static constexpr fixed_string class_name = "java/io/DataOutputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterOutputStream, scapix::java_api::java::io::DataOutput>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_DATAOUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_DATAOUTPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_IO_DATAOUTPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::DataOutputStream : public jni::object_base<"java/io/DataOutputStream",
	java::io::FilterOutputStream,
	java::io::DataOutput>
{
public:

	static jni::ref<java::io::DataOutputStream> new_object(jni::ref<java::io::OutputStream> out) { return base_::new_object(out); }
	void flush() { return call_method<"flush", void>(); }
	jint size() { return call_method<"size", jint>(); }
	void write(jni::ref<jni::array<jbyte>> buffer, jint offset, jint count) { return call_method<"write", void>(buffer, offset, count); }
	void write(jint oneByte) { return call_method<"write", void>(oneByte); }
	void writeBoolean(jboolean val) { return call_method<"writeBoolean", void>(val); }
	void writeByte(jint val) { return call_method<"writeByte", void>(val); }
	void writeBytes(jni::ref<java::lang::String> str) { return call_method<"writeBytes", void>(str); }
	void writeChar(jint val) { return call_method<"writeChar", void>(val); }
	void writeChars(jni::ref<java::lang::String> str) { return call_method<"writeChars", void>(str); }
	void writeDouble(jdouble val) { return call_method<"writeDouble", void>(val); }
	void writeFloat(jfloat val) { return call_method<"writeFloat", void>(val); }
	void writeInt(jint val) { return call_method<"writeInt", void>(val); }
	void writeLong(jlong val) { return call_method<"writeLong", void>(val); }
	void writeShort(jint val) { return call_method<"writeShort", void>(val); }
	void writeUTF(jni::ref<java::lang::String> str) { return call_method<"writeUTF", void>(str); }

protected:

	DataOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_DATAOUTPUTSTREAM
