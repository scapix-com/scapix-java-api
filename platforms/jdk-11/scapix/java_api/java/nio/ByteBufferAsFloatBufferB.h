// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/FloatBuffer.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASFLOATBUFFERB_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASFLOATBUFFERB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class ByteBufferAsFloatBufferB; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::ByteBufferAsFloatBufferB>
{
	static constexpr fixed_string class_name = "java/nio/ByteBufferAsFloatBufferB";
	using base_classes = std::tuple<scapix::java_api::java::nio::FloatBuffer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASFLOATBUFFERB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASFLOATBUFFERB)
#define SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASFLOATBUFFERB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteOrder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::ByteBufferAsFloatBufferB : public jni::object_base<"java/nio/ByteBufferAsFloatBufferB",
	java::nio::FloatBuffer>
{
public:

	jni::ref<java::nio::FloatBuffer> slice() { return call_method<"slice", jni::ref<java::nio::FloatBuffer>>(); }
	jni::ref<java::nio::FloatBuffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::FloatBuffer>>(); }
	jni::ref<java::nio::FloatBuffer> asReadOnlyBuffer() { return call_method<"asReadOnlyBuffer", jni::ref<java::nio::FloatBuffer>>(); }
	jfloat get() { return call_method<"get", jfloat>(); }
	jfloat get(jint i) { return call_method<"get", jfloat>(i); }
	jni::ref<java::nio::FloatBuffer> put(jfloat x) { return call_method<"put", jni::ref<java::nio::FloatBuffer>>(x); }
	jni::ref<java::nio::FloatBuffer> put(jint i, jfloat x) { return call_method<"put", jni::ref<java::nio::FloatBuffer>>(i, x); }
	jni::ref<java::nio::FloatBuffer> compact() { return call_method<"compact", jni::ref<java::nio::FloatBuffer>>(); }
	jboolean isDirect() { return call_method<"isDirect", jboolean>(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<java::nio::ByteOrder> order() { return call_method<"order", jni::ref<java::nio::ByteOrder>>(); }

protected:

	ByteBufferAsFloatBufferB(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASFLOATBUFFERB