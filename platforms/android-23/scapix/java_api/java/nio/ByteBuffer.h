// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/Buffer.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFER_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class ByteBuffer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::ByteBuffer>
{
	static constexpr fixed_string class_name = "java/nio/ByteBuffer";
	using base_classes = std::tuple<scapix::java_api::java::nio::Buffer, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFER)
#define SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/nio/ByteOrder.h>
#include <scapix/java_api/java/nio/CharBuffer.h>
#include <scapix/java_api/java/nio/DoubleBuffer.h>
#include <scapix/java_api/java/nio/FloatBuffer.h>
#include <scapix/java_api/java/nio/IntBuffer.h>
#include <scapix/java_api/java/nio/LongBuffer.h>
#include <scapix/java_api/java/nio/ShortBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::ByteBuffer : public jni::object_base<"java/nio/ByteBuffer",
	java::nio::Buffer,
	java::lang::Comparable>
{
public:

	static jni::ref<java::nio::ByteBuffer> allocate(jint capacity) { return call_static_method<"allocate", jni::ref<java::nio::ByteBuffer>>(capacity); }
	static jni::ref<java::nio::ByteBuffer> allocateDirect(jint capacity) { return call_static_method<"allocateDirect", jni::ref<java::nio::ByteBuffer>>(capacity); }
	static jni::ref<java::nio::ByteBuffer> wrap(jni::ref<jni::array<jbyte>> array) { return call_static_method<"wrap", jni::ref<java::nio::ByteBuffer>>(array); }
	static jni::ref<java::nio::ByteBuffer> wrap(jni::ref<jni::array<jbyte>> array, jint start, jint byteCount) { return call_static_method<"wrap", jni::ref<java::nio::ByteBuffer>>(array, start, byteCount); }
	jni::ref<jni::array<jbyte>> array() { return call_method<"array", jni::ref<jni::array<jbyte>>>(); }
	jint arrayOffset() { return call_method<"arrayOffset", jint>(); }
	jni::ref<java::nio::CharBuffer> asCharBuffer() { return call_method<"asCharBuffer", jni::ref<java::nio::CharBuffer>>(); }
	jni::ref<java::nio::DoubleBuffer> asDoubleBuffer() { return call_method<"asDoubleBuffer", jni::ref<java::nio::DoubleBuffer>>(); }
	jni::ref<java::nio::FloatBuffer> asFloatBuffer() { return call_method<"asFloatBuffer", jni::ref<java::nio::FloatBuffer>>(); }
	jni::ref<java::nio::IntBuffer> asIntBuffer() { return call_method<"asIntBuffer", jni::ref<java::nio::IntBuffer>>(); }
	jni::ref<java::nio::LongBuffer> asLongBuffer() { return call_method<"asLongBuffer", jni::ref<java::nio::LongBuffer>>(); }
	jni::ref<java::nio::ByteBuffer> asReadOnlyBuffer() { return call_method<"asReadOnlyBuffer", jni::ref<java::nio::ByteBuffer>>(); }
	jni::ref<java::nio::ShortBuffer> asShortBuffer() { return call_method<"asShortBuffer", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ByteBuffer> compact() { return call_method<"compact", jni::ref<java::nio::ByteBuffer>>(); }
	jint compareTo(jni::ref<java::nio::ByteBuffer> otherBuffer) { return call_method<"compareTo", jint>(otherBuffer); }
	jni::ref<java::nio::ByteBuffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::ByteBuffer>>(); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jbyte get() { return call_method<"get", jbyte>(); }
	jni::ref<java::nio::ByteBuffer> get(jni::ref<jni::array<jbyte>> dst) { return call_method<"get", jni::ref<java::nio::ByteBuffer>>(dst); }
	jni::ref<java::nio::ByteBuffer> get(jni::ref<jni::array<jbyte>> dst, jint dstOffset, jint byteCount) { return call_method<"get", jni::ref<java::nio::ByteBuffer>>(dst, dstOffset, byteCount); }
	jbyte get(jint p1) { return call_method<"get", jbyte>(p1); }
	jchar getChar() { return call_method<"getChar", jchar>(); }
	jchar getChar(jint p1) { return call_method<"getChar", jchar>(p1); }
	jdouble getDouble() { return call_method<"getDouble", jdouble>(); }
	jdouble getDouble(jint p1) { return call_method<"getDouble", jdouble>(p1); }
	jfloat getFloat() { return call_method<"getFloat", jfloat>(); }
	jfloat getFloat(jint p1) { return call_method<"getFloat", jfloat>(p1); }
	jint getInt() { return call_method<"getInt", jint>(); }
	jint getInt(jint p1) { return call_method<"getInt", jint>(p1); }
	jlong getLong() { return call_method<"getLong", jlong>(); }
	jlong getLong(jint p1) { return call_method<"getLong", jlong>(p1); }
	jshort getShort() { return call_method<"getShort", jshort>(); }
	jshort getShort(jint p1) { return call_method<"getShort", jshort>(p1); }
	jboolean hasArray() { return call_method<"hasArray", jboolean>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean isDirect() { return call_method<"isDirect", jboolean>(); }
	jni::ref<java::nio::ByteOrder> order() { return call_method<"order", jni::ref<java::nio::ByteOrder>>(); }
	jni::ref<java::nio::ByteBuffer> order(jni::ref<java::nio::ByteOrder> byteOrder) { return call_method<"order", jni::ref<java::nio::ByteBuffer>>(byteOrder); }
	jni::ref<java::nio::ByteBuffer> put(jbyte p1) { return call_method<"put", jni::ref<java::nio::ByteBuffer>>(p1); }
	jni::ref<java::nio::ByteBuffer> put(jni::ref<jni::array<jbyte>> src) { return call_method<"put", jni::ref<java::nio::ByteBuffer>>(src); }
	jni::ref<java::nio::ByteBuffer> put(jni::ref<jni::array<jbyte>> src, jint srcOffset, jint byteCount) { return call_method<"put", jni::ref<java::nio::ByteBuffer>>(src, srcOffset, byteCount); }
	jni::ref<java::nio::ByteBuffer> put(jni::ref<java::nio::ByteBuffer> src) { return call_method<"put", jni::ref<java::nio::ByteBuffer>>(src); }
	jni::ref<java::nio::ByteBuffer> put(jint p1, jbyte p2) { return call_method<"put", jni::ref<java::nio::ByteBuffer>>(p1, p2); }
	jni::ref<java::nio::ByteBuffer> putChar(jchar p1) { return call_method<"putChar", jni::ref<java::nio::ByteBuffer>>(p1); }
	jni::ref<java::nio::ByteBuffer> putChar(jint p1, jchar p2) { return call_method<"putChar", jni::ref<java::nio::ByteBuffer>>(p1, p2); }
	jni::ref<java::nio::ByteBuffer> putDouble(jdouble p1) { return call_method<"putDouble", jni::ref<java::nio::ByteBuffer>>(p1); }
	jni::ref<java::nio::ByteBuffer> putDouble(jint p1, jdouble p2) { return call_method<"putDouble", jni::ref<java::nio::ByteBuffer>>(p1, p2); }
	jni::ref<java::nio::ByteBuffer> putFloat(jfloat p1) { return call_method<"putFloat", jni::ref<java::nio::ByteBuffer>>(p1); }
	jni::ref<java::nio::ByteBuffer> putFloat(jint p1, jfloat p2) { return call_method<"putFloat", jni::ref<java::nio::ByteBuffer>>(p1, p2); }
	jni::ref<java::nio::ByteBuffer> putInt(jint p1) { return call_method<"putInt", jni::ref<java::nio::ByteBuffer>>(p1); }
	jni::ref<java::nio::ByteBuffer> putInt(jint p1, jint p2) { return call_method<"putInt", jni::ref<java::nio::ByteBuffer>>(p1, p2); }
	jni::ref<java::nio::ByteBuffer> putLong(jlong p1) { return call_method<"putLong", jni::ref<java::nio::ByteBuffer>>(p1); }
	jni::ref<java::nio::ByteBuffer> putLong(jint p1, jlong p2) { return call_method<"putLong", jni::ref<java::nio::ByteBuffer>>(p1, p2); }
	jni::ref<java::nio::ByteBuffer> putShort(jshort p1) { return call_method<"putShort", jni::ref<java::nio::ByteBuffer>>(p1); }
	jni::ref<java::nio::ByteBuffer> putShort(jint p1, jshort p2) { return call_method<"putShort", jni::ref<java::nio::ByteBuffer>>(p1, p2); }
	jni::ref<java::nio::ByteBuffer> slice() { return call_method<"slice", jni::ref<java::nio::ByteBuffer>>(); }

protected:

	ByteBuffer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFER