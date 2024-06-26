// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/IntBuffer.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASINTBUFFERB_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASINTBUFFERB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class ByteBufferAsIntBufferB; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::ByteBufferAsIntBufferB>
{
	static constexpr fixed_string class_name = "java/nio/ByteBufferAsIntBufferB";
	using base_classes = std::tuple<scapix::java_api::java::nio::IntBuffer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASINTBUFFERB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASINTBUFFERB)
#define SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASINTBUFFERB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteOrder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::ByteBufferAsIntBufferB : public jni::object_base<"java/nio/ByteBufferAsIntBufferB",
	java::nio::IntBuffer>
{
public:

	jni::ref<java::nio::IntBuffer> slice() { return call_method<"slice", jni::ref<java::nio::IntBuffer>>(); }
	jni::ref<java::nio::IntBuffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::IntBuffer>>(); }
	jni::ref<java::nio::IntBuffer> asReadOnlyBuffer() { return call_method<"asReadOnlyBuffer", jni::ref<java::nio::IntBuffer>>(); }
	jint get() { return call_method<"get", jint>(); }
	jint get(jint i) { return call_method<"get", jint>(i); }
	jni::ref<java::nio::IntBuffer> put(jint x) { return call_method<"put", jni::ref<java::nio::IntBuffer>>(x); }
	jni::ref<java::nio::IntBuffer> put(jint i, jint x) { return call_method<"put", jni::ref<java::nio::IntBuffer>>(i, x); }
	jni::ref<java::nio::IntBuffer> compact() { return call_method<"compact", jni::ref<java::nio::IntBuffer>>(); }
	jboolean isDirect() { return call_method<"isDirect", jboolean>(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<java::nio::ByteOrder> order() { return call_method<"order", jni::ref<java::nio::ByteOrder>>(); }

protected:

	ByteBufferAsIntBufferB(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASINTBUFFERB
