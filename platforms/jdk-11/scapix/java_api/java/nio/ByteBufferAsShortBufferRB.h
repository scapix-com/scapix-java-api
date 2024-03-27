// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/ByteBufferAsShortBufferB.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASSHORTBUFFERRB_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASSHORTBUFFERRB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class ByteBufferAsShortBufferRB; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::ByteBufferAsShortBufferRB>
{
	static constexpr fixed_string class_name = "java/nio/ByteBufferAsShortBufferRB";
	using base_classes = std::tuple<scapix::java_api::java::nio::ByteBufferAsShortBufferB>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASSHORTBUFFERRB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASSHORTBUFFERRB)
#define SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASSHORTBUFFERRB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteOrder.h>
#include <scapix/java_api/java/nio/ShortBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::ByteBufferAsShortBufferRB : public jni::object_base<"java/nio/ByteBufferAsShortBufferRB",
	java::nio::ByteBufferAsShortBufferB>
{
public:

	jni::ref<java::nio::ShortBuffer> slice() { return call_method<"slice", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ShortBuffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ShortBuffer> asReadOnlyBuffer() { return call_method<"asReadOnlyBuffer", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ShortBuffer> put(jshort x) { return call_method<"put", jni::ref<java::nio::ShortBuffer>>(x); }
	jni::ref<java::nio::ShortBuffer> put(jint i, jshort x) { return call_method<"put", jni::ref<java::nio::ShortBuffer>>(i, x); }
	jni::ref<java::nio::ShortBuffer> compact() { return call_method<"compact", jni::ref<java::nio::ShortBuffer>>(); }
	jboolean isDirect() { return call_method<"isDirect", jboolean>(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<java::nio::ByteOrder> order() { return call_method<"order", jni::ref<java::nio::ByteOrder>>(); }

protected:

	ByteBufferAsShortBufferRB(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASSHORTBUFFERRB