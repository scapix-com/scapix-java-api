// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/DataInput.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_OBJECTINPUTSTREAM_BLOCKDATAINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTINPUTSTREAM_BLOCKDATAINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class ObjectInputStream_BlockDataInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::ObjectInputStream_BlockDataInputStream>
{
	static constexpr fixed_string class_name = "java/io/ObjectInputStream$BlockDataInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::InputStream, scapix::java_api::java::io::DataInput>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTINPUTSTREAM_BLOCKDATAINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_OBJECTINPUTSTREAM_BLOCKDATAINPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTINPUTSTREAM_BLOCKDATAINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::ObjectInputStream_BlockDataInputStream : public jni::object_base<"java/io/ObjectInputStream$BlockDataInputStream",
	java::io::InputStream,
	java::io::DataInput>
{
public:

	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"read", jint>(b, off, len); }
	jlong skip(jlong len) { return call_method<"skip", jlong>(len); }
	jint available() { return call_method<"available", jint>(); }
	void close() { return call_method<"close", void>(); }
	void readFully(jni::ref<jni::array<jbyte>> b) { return call_method<"readFully", void>(b); }
	void readFully(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"readFully", void>(b, off, len); }
	void readFully(jni::ref<jni::array<jbyte>> b, jint off, jint len, jboolean copy) { return call_method<"readFully", void>(b, off, len, copy); }
	jint skipBytes(jint n) { return call_method<"skipBytes", jint>(n); }
	jboolean readBoolean() { return call_method<"readBoolean", jboolean>(); }
	jbyte readByte() { return call_method<"readByte", jbyte>(); }
	jint readUnsignedByte() { return call_method<"readUnsignedByte", jint>(); }
	jchar readChar() { return call_method<"readChar", jchar>(); }
	jshort readShort() { return call_method<"readShort", jshort>(); }
	jint readUnsignedShort() { return call_method<"readUnsignedShort", jint>(); }
	jint readInt() { return call_method<"readInt", jint>(); }
	jfloat readFloat() { return call_method<"readFloat", jfloat>(); }
	jlong readLong() { return call_method<"readLong", jlong>(); }
	jdouble readDouble() { return call_method<"readDouble", jdouble>(); }
	jni::ref<java::lang::String> readUTF() { return call_method<"readUTF", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> readLine() { return call_method<"readLine", jni::ref<java::lang::String>>(); }

protected:

	ObjectInputStream_BlockDataInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTINPUTSTREAM_BLOCKDATAINPUTSTREAM
