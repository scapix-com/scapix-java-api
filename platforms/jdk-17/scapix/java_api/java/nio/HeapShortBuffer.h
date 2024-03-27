// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/ShortBuffer.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_HEAPSHORTBUFFER_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_HEAPSHORTBUFFER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class HeapShortBuffer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::HeapShortBuffer>
{
	static constexpr fixed_string class_name = "java/nio/HeapShortBuffer";
	using base_classes = std::tuple<scapix::java_api::java::nio::ShortBuffer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_HEAPSHORTBUFFER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_HEAPSHORTBUFFER)
#define SCAPIX_JAVA_API_JAVA_NIO_HEAPSHORTBUFFER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteOrder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::HeapShortBuffer : public jni::object_base<"java/nio/HeapShortBuffer",
	java::nio::ShortBuffer>
{
public:

	jni::ref<java::nio::ShortBuffer> slice() { return call_method<"slice", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ShortBuffer> slice(jint index, jint length) { return call_method<"slice", jni::ref<java::nio::ShortBuffer>>(index, length); }
	jni::ref<java::nio::ShortBuffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ShortBuffer> asReadOnlyBuffer() { return call_method<"asReadOnlyBuffer", jni::ref<java::nio::ShortBuffer>>(); }
	jshort get() { return call_method<"get", jshort>(); }
	jshort get(jint i) { return call_method<"get", jshort>(i); }
	jni::ref<java::nio::ShortBuffer> get(jni::ref<jni::array<jshort>> dst, jint offset, jint length) { return call_method<"get", jni::ref<java::nio::ShortBuffer>>(dst, offset, length); }
	jni::ref<java::nio::ShortBuffer> get(jint index, jni::ref<jni::array<jshort>> dst, jint offset, jint length) { return call_method<"get", jni::ref<java::nio::ShortBuffer>>(index, dst, offset, length); }
	jboolean isDirect() { return call_method<"isDirect", jboolean>(); }
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

	HeapShortBuffer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_HEAPSHORTBUFFER
