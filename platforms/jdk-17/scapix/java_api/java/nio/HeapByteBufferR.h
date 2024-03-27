// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/HeapByteBuffer.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_HEAPBYTEBUFFERR_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_HEAPBYTEBUFFERR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class HeapByteBufferR; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::HeapByteBufferR>
{
	static constexpr fixed_string class_name = "java/nio/HeapByteBufferR";
	using base_classes = std::tuple<scapix::java_api::java::nio::HeapByteBuffer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_HEAPBYTEBUFFERR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_HEAPBYTEBUFFERR)
#define SCAPIX_JAVA_API_JAVA_NIO_HEAPBYTEBUFFERR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/nio/CharBuffer.h>
#include <scapix/java_api/java/nio/DoubleBuffer.h>
#include <scapix/java_api/java/nio/FloatBuffer.h>
#include <scapix/java_api/java/nio/IntBuffer.h>
#include <scapix/java_api/java/nio/LongBuffer.h>
#include <scapix/java_api/java/nio/ShortBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::HeapByteBufferR : public jni::object_base<"java/nio/HeapByteBufferR",
	java::nio::HeapByteBuffer>
{
public:

	jni::ref<java::nio::ByteBuffer> slice() { return call_method<"slice", jni::ref<java::nio::ByteBuffer>>(); }
	jni::ref<java::nio::ByteBuffer> slice(jint index, jint length) { return call_method<"slice", jni::ref<java::nio::ByteBuffer>>(index, length); }
	jni::ref<java::nio::ByteBuffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::ByteBuffer>>(); }
	jni::ref<java::nio::ByteBuffer> asReadOnlyBuffer() { return call_method<"asReadOnlyBuffer", jni::ref<java::nio::ByteBuffer>>(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<java::nio::ByteBuffer> put(jbyte x) { return call_method<"put", jni::ref<java::nio::ByteBuffer>>(x); }
	jni::ref<java::nio::ByteBuffer> put(jint i, jbyte x) { return call_method<"put", jni::ref<java::nio::ByteBuffer>>(i, x); }
	jni::ref<java::nio::ByteBuffer> put(jni::ref<jni::array<jbyte>> src, jint offset, jint length) { return call_method<"put", jni::ref<java::nio::ByteBuffer>>(src, offset, length); }
	jni::ref<java::nio::ByteBuffer> put(jni::ref<java::nio::ByteBuffer> src) { return call_method<"put", jni::ref<java::nio::ByteBuffer>>(src); }
	jni::ref<java::nio::ByteBuffer> put(jint index, jni::ref<java::nio::ByteBuffer> src, jint offset, jint length) { return call_method<"put", jni::ref<java::nio::ByteBuffer>>(index, src, offset, length); }
	jni::ref<java::nio::ByteBuffer> put(jint index, jni::ref<jni::array<jbyte>> src, jint offset, jint length) { return call_method<"put", jni::ref<java::nio::ByteBuffer>>(index, src, offset, length); }
	jni::ref<java::nio::ByteBuffer> compact() { return call_method<"compact", jni::ref<java::nio::ByteBuffer>>(); }
	jni::ref<java::nio::ByteBuffer> putChar(jchar x) { return call_method<"putChar", jni::ref<java::nio::ByteBuffer>>(x); }
	jni::ref<java::nio::ByteBuffer> putChar(jint i, jchar x) { return call_method<"putChar", jni::ref<java::nio::ByteBuffer>>(i, x); }
	jni::ref<java::nio::CharBuffer> asCharBuffer() { return call_method<"asCharBuffer", jni::ref<java::nio::CharBuffer>>(); }
	jni::ref<java::nio::ByteBuffer> putShort(jshort x) { return call_method<"putShort", jni::ref<java::nio::ByteBuffer>>(x); }
	jni::ref<java::nio::ByteBuffer> putShort(jint i, jshort x) { return call_method<"putShort", jni::ref<java::nio::ByteBuffer>>(i, x); }
	jni::ref<java::nio::ShortBuffer> asShortBuffer() { return call_method<"asShortBuffer", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ByteBuffer> putInt(jint x) { return call_method<"putInt", jni::ref<java::nio::ByteBuffer>>(x); }
	jni::ref<java::nio::ByteBuffer> putInt(jint i, jint x) { return call_method<"putInt", jni::ref<java::nio::ByteBuffer>>(i, x); }
	jni::ref<java::nio::IntBuffer> asIntBuffer() { return call_method<"asIntBuffer", jni::ref<java::nio::IntBuffer>>(); }
	jni::ref<java::nio::ByteBuffer> putLong(jlong x) { return call_method<"putLong", jni::ref<java::nio::ByteBuffer>>(x); }
	jni::ref<java::nio::ByteBuffer> putLong(jint i, jlong x) { return call_method<"putLong", jni::ref<java::nio::ByteBuffer>>(i, x); }
	jni::ref<java::nio::LongBuffer> asLongBuffer() { return call_method<"asLongBuffer", jni::ref<java::nio::LongBuffer>>(); }
	jni::ref<java::nio::ByteBuffer> putFloat(jfloat x) { return call_method<"putFloat", jni::ref<java::nio::ByteBuffer>>(x); }
	jni::ref<java::nio::ByteBuffer> putFloat(jint i, jfloat x) { return call_method<"putFloat", jni::ref<java::nio::ByteBuffer>>(i, x); }
	jni::ref<java::nio::FloatBuffer> asFloatBuffer() { return call_method<"asFloatBuffer", jni::ref<java::nio::FloatBuffer>>(); }
	jni::ref<java::nio::ByteBuffer> putDouble(jdouble x) { return call_method<"putDouble", jni::ref<java::nio::ByteBuffer>>(x); }
	jni::ref<java::nio::ByteBuffer> putDouble(jint i, jdouble x) { return call_method<"putDouble", jni::ref<java::nio::ByteBuffer>>(i, x); }
	jni::ref<java::nio::DoubleBuffer> asDoubleBuffer() { return call_method<"asDoubleBuffer", jni::ref<java::nio::DoubleBuffer>>(); }

protected:

	HeapByteBufferR(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_HEAPBYTEBUFFERR
