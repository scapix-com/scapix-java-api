// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/ByteBufferAsCharBufferB.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASCHARBUFFERRB_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASCHARBUFFERRB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class ByteBufferAsCharBufferRB; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::ByteBufferAsCharBufferRB>
{
	static constexpr fixed_string class_name = "java/nio/ByteBufferAsCharBufferRB";
	using base_classes = std::tuple<scapix::java_api::java::nio::ByteBufferAsCharBufferB>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASCHARBUFFERRB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASCHARBUFFERRB)
#define SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASCHARBUFFERRB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteOrder.h>
#include <scapix/java_api/java/nio/CharBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::ByteBufferAsCharBufferRB : public jni::object_base<"java/nio/ByteBufferAsCharBufferRB",
	java::nio::ByteBufferAsCharBufferB>
{
public:

	jni::ref<java::nio::CharBuffer> slice() { return call_method<"slice", jni::ref<java::nio::CharBuffer>>(); }
	jni::ref<java::nio::CharBuffer> slice(jint index, jint length) { return call_method<"slice", jni::ref<java::nio::CharBuffer>>(index, length); }
	jni::ref<java::nio::CharBuffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::CharBuffer>>(); }
	jni::ref<java::nio::CharBuffer> asReadOnlyBuffer() { return call_method<"asReadOnlyBuffer", jni::ref<java::nio::CharBuffer>>(); }
	jni::ref<java::nio::CharBuffer> put(jchar x) { return call_method<"put", jni::ref<java::nio::CharBuffer>>(x); }
	jni::ref<java::nio::CharBuffer> put(jint i, jchar x) { return call_method<"put", jni::ref<java::nio::CharBuffer>>(i, x); }
	jni::ref<java::nio::CharBuffer> compact() { return call_method<"compact", jni::ref<java::nio::CharBuffer>>(); }
	jboolean isDirect() { return call_method<"isDirect", jboolean>(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<java::lang::String> toString(jint start, jint end) { return call_method<"toString", jni::ref<java::lang::String>>(start, end); }
	jni::ref<java::nio::CharBuffer> subSequence(jint start, jint end) { return call_method<"subSequence", jni::ref<java::nio::CharBuffer>>(start, end); }
	jni::ref<java::nio::ByteOrder> order() { return call_method<"order", jni::ref<java::nio::ByteOrder>>(); }

protected:

	ByteBufferAsCharBufferRB(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASCHARBUFFERRB
