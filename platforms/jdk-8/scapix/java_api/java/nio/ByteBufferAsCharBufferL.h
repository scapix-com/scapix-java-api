// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/CharBuffer.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASCHARBUFFERL_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASCHARBUFFERL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class ByteBufferAsCharBufferL; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::ByteBufferAsCharBufferL>
{
	static constexpr fixed_string class_name = "java/nio/ByteBufferAsCharBufferL";
	using base_classes = std::tuple<scapix::java_api::java::nio::CharBuffer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASCHARBUFFERL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASCHARBUFFERL)
#define SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASCHARBUFFERL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteOrder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::ByteBufferAsCharBufferL : public jni::object_base<"java/nio/ByteBufferAsCharBufferL",
	java::nio::CharBuffer>
{
public:

	jni::ref<java::nio::CharBuffer> slice() { return call_method<"slice", jni::ref<java::nio::CharBuffer>>(); }
	jni::ref<java::nio::CharBuffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::CharBuffer>>(); }
	jni::ref<java::nio::CharBuffer> asReadOnlyBuffer() { return call_method<"asReadOnlyBuffer", jni::ref<java::nio::CharBuffer>>(); }
	jchar get() { return call_method<"get", jchar>(); }
	jchar get(jint p1) { return call_method<"get", jchar>(p1); }
	jni::ref<java::nio::CharBuffer> put(jchar p1) { return call_method<"put", jni::ref<java::nio::CharBuffer>>(p1); }
	jni::ref<java::nio::CharBuffer> put(jint p1, jchar p2) { return call_method<"put", jni::ref<java::nio::CharBuffer>>(p1, p2); }
	jni::ref<java::nio::CharBuffer> compact() { return call_method<"compact", jni::ref<java::nio::CharBuffer>>(); }
	jboolean isDirect() { return call_method<"isDirect", jboolean>(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<java::lang::String> toString(jint p1, jint p2) { return call_method<"toString", jni::ref<java::lang::String>>(p1, p2); }
	jni::ref<java::nio::CharBuffer> subSequence(jint p1, jint p2) { return call_method<"subSequence", jni::ref<java::nio::CharBuffer>>(p1, p2); }
	jni::ref<java::nio::ByteOrder> order() { return call_method<"order", jni::ref<java::nio::ByteOrder>>(); }

protected:

	ByteBufferAsCharBufferL(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_BYTEBUFFERASCHARBUFFERL
