// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/ShortBuffer.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASSHORTBUFFERB_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASSHORTBUFFERB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class ByteBufferAsShortBufferB; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::ByteBufferAsShortBufferB>
{
	static constexpr fixed_string class_name = "java/nio/ByteBufferAsShortBufferB";
	using base_classes = std::tuple<scapix::java_api::java::nio::ShortBuffer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASSHORTBUFFERB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASSHORTBUFFERB)
#define SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASSHORTBUFFERB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteOrder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::ByteBufferAsShortBufferB : public jni::object_base<"java/nio/ByteBufferAsShortBufferB",
	java::nio::ShortBuffer>
{
public:

	jni::ref<java::nio::ShortBuffer> slice() { return call_method<"slice", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ShortBuffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ShortBuffer> asReadOnlyBuffer() { return call_method<"asReadOnlyBuffer", jni::ref<java::nio::ShortBuffer>>(); }
	jshort get() { return call_method<"get", jshort>(); }
	jshort get(jint p1) { return call_method<"get", jshort>(p1); }
	jni::ref<java::nio::ShortBuffer> put(jshort p1) { return call_method<"put", jni::ref<java::nio::ShortBuffer>>(p1); }
	jni::ref<java::nio::ShortBuffer> put(jint p1, jshort p2) { return call_method<"put", jni::ref<java::nio::ShortBuffer>>(p1, p2); }
	jni::ref<java::nio::ShortBuffer> compact() { return call_method<"compact", jni::ref<java::nio::ShortBuffer>>(); }
	jboolean isDirect() { return call_method<"isDirect", jboolean>(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<java::nio::ByteOrder> order() { return call_method<"order", jni::ref<java::nio::ByteOrder>>(); }

protected:

	ByteBufferAsShortBufferB(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASSHORTBUFFERB
