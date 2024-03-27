// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/HeapShortBuffer.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_HEAPSHORTBUFFERR_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_HEAPSHORTBUFFERR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class HeapShortBufferR; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::HeapShortBufferR>
{
	static constexpr fixed_string class_name = "java/nio/HeapShortBufferR";
	using base_classes = std::tuple<scapix::java_api::java::nio::HeapShortBuffer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_HEAPSHORTBUFFERR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_HEAPSHORTBUFFERR)
#define SCAPIX_JAVA_API_JAVA_NIO_HEAPSHORTBUFFERR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteOrder.h>
#include <scapix/java_api/java/nio/ShortBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::HeapShortBufferR : public jni::object_base<"java/nio/HeapShortBufferR",
	java::nio::HeapShortBuffer>
{
public:

	jni::ref<java::nio::ShortBuffer> slice() { return call_method<"slice", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ShortBuffer> slice(jint index, jint length) { return call_method<"slice", jni::ref<java::nio::ShortBuffer>>(index, length); }
	jni::ref<java::nio::ShortBuffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ShortBuffer> asReadOnlyBuffer() { return call_method<"asReadOnlyBuffer", jni::ref<java::nio::ShortBuffer>>(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<java::nio::ShortBuffer> put(jshort x) { return call_method<"put", jni::ref<java::nio::ShortBuffer>>(x); }
	jni::ref<java::nio::ShortBuffer> put(jint i, jshort x) { return call_method<"put", jni::ref<java::nio::ShortBuffer>>(i, x); }
	jni::ref<java::nio::ShortBuffer> put(jni::ref<jni::array<jshort>> src, jint offset, jint length) { return call_method<"put", jni::ref<java::nio::ShortBuffer>>(src, offset, length); }
	jni::ref<java::nio::ShortBuffer> put(jni::ref<java::nio::ShortBuffer> src) { return call_method<"put", jni::ref<java::nio::ShortBuffer>>(src); }
	jni::ref<java::nio::ShortBuffer> put(jint index, jni::ref<java::nio::ShortBuffer> src, jint offset, jint length) { return call_method<"put", jni::ref<java::nio::ShortBuffer>>(index, src, offset, length); }
	jni::ref<java::nio::ShortBuffer> put(jint index, jni::ref<jni::array<jshort>> src, jint offset, jint length) { return call_method<"put", jni::ref<java::nio::ShortBuffer>>(index, src, offset, length); }
	jni::ref<java::nio::ShortBuffer> compact() { return call_method<"compact", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ByteOrder> order() { return call_method<"order", jni::ref<java::nio::ByteOrder>>(); }

protected:

	HeapShortBufferR(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_HEAPSHORTBUFFERR
