// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/HeapFloatBuffer.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_HEAPFLOATBUFFERR_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_HEAPFLOATBUFFERR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class HeapFloatBufferR; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::HeapFloatBufferR>
{
	static constexpr fixed_string class_name = "java/nio/HeapFloatBufferR";
	using base_classes = std::tuple<scapix::java_api::java::nio::HeapFloatBuffer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_HEAPFLOATBUFFERR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_HEAPFLOATBUFFERR)
#define SCAPIX_JAVA_API_JAVA_NIO_HEAPFLOATBUFFERR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteOrder.h>
#include <scapix/java_api/java/nio/FloatBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::HeapFloatBufferR : public jni::object_base<"java/nio/HeapFloatBufferR",
	java::nio::HeapFloatBuffer>
{
public:

	jni::ref<java::nio::FloatBuffer> slice() { return call_method<"slice", jni::ref<java::nio::FloatBuffer>>(); }
	jni::ref<java::nio::FloatBuffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::FloatBuffer>>(); }
	jni::ref<java::nio::FloatBuffer> asReadOnlyBuffer() { return call_method<"asReadOnlyBuffer", jni::ref<java::nio::FloatBuffer>>(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<java::nio::FloatBuffer> put(jfloat p1) { return call_method<"put", jni::ref<java::nio::FloatBuffer>>(p1); }
	jni::ref<java::nio::FloatBuffer> put(jint p1, jfloat p2) { return call_method<"put", jni::ref<java::nio::FloatBuffer>>(p1, p2); }
	jni::ref<java::nio::FloatBuffer> put(jni::ref<jni::array<jfloat>> p1, jint p2, jint p3) { return call_method<"put", jni::ref<java::nio::FloatBuffer>>(p1, p2, p3); }
	jni::ref<java::nio::FloatBuffer> put(jni::ref<java::nio::FloatBuffer> p1) { return call_method<"put", jni::ref<java::nio::FloatBuffer>>(p1); }
	jni::ref<java::nio::FloatBuffer> compact() { return call_method<"compact", jni::ref<java::nio::FloatBuffer>>(); }
	jni::ref<java::nio::ByteOrder> order() { return call_method<"order", jni::ref<java::nio::ByteOrder>>(); }

protected:

	HeapFloatBufferR(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_HEAPFLOATBUFFERR
