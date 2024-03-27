// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/HeapLongBuffer.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_HEAPLONGBUFFERR_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_HEAPLONGBUFFERR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class HeapLongBufferR; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::HeapLongBufferR>
{
	static constexpr fixed_string class_name = "java/nio/HeapLongBufferR";
	using base_classes = std::tuple<scapix::java_api::java::nio::HeapLongBuffer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_HEAPLONGBUFFERR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_HEAPLONGBUFFERR)
#define SCAPIX_JAVA_API_JAVA_NIO_HEAPLONGBUFFERR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteOrder.h>
#include <scapix/java_api/java/nio/LongBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::HeapLongBufferR : public jni::object_base<"java/nio/HeapLongBufferR",
	java::nio::HeapLongBuffer>
{
public:

	jni::ref<java::nio::LongBuffer> slice() { return call_method<"slice", jni::ref<java::nio::LongBuffer>>(); }
	jni::ref<java::nio::LongBuffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::LongBuffer>>(); }
	jni::ref<java::nio::LongBuffer> asReadOnlyBuffer() { return call_method<"asReadOnlyBuffer", jni::ref<java::nio::LongBuffer>>(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<java::nio::LongBuffer> put(jlong p1) { return call_method<"put", jni::ref<java::nio::LongBuffer>>(p1); }
	jni::ref<java::nio::LongBuffer> put(jint p1, jlong p2) { return call_method<"put", jni::ref<java::nio::LongBuffer>>(p1, p2); }
	jni::ref<java::nio::LongBuffer> put(jni::ref<jni::array<jlong>> p1, jint p2, jint p3) { return call_method<"put", jni::ref<java::nio::LongBuffer>>(p1, p2, p3); }
	jni::ref<java::nio::LongBuffer> put(jni::ref<java::nio::LongBuffer> p1) { return call_method<"put", jni::ref<java::nio::LongBuffer>>(p1); }
	jni::ref<java::nio::LongBuffer> compact() { return call_method<"compact", jni::ref<java::nio::LongBuffer>>(); }
	jni::ref<java::nio::ByteOrder> order() { return call_method<"order", jni::ref<java::nio::ByteOrder>>(); }

protected:

	HeapLongBufferR(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_HEAPLONGBUFFERR
