// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/DirectShortBufferU.h>
#include <scapix/java_api/sun/nio/ch/DirectBuffer.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_DIRECTSHORTBUFFERRU_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_DIRECTSHORTBUFFERRU_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class DirectShortBufferRU; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::DirectShortBufferRU>
{
	static constexpr fixed_string class_name = "java/nio/DirectShortBufferRU";
	using base_classes = std::tuple<scapix::java_api::java::nio::DirectShortBufferU, scapix::java_api::sun::nio::ch::DirectBuffer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_DIRECTSHORTBUFFERRU_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_DIRECTSHORTBUFFERRU)
#define SCAPIX_JAVA_API_JAVA_NIO_DIRECTSHORTBUFFERRU

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteOrder.h>
#include <scapix/java_api/java/nio/ShortBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::DirectShortBufferRU : public jni::object_base<"java/nio/DirectShortBufferRU",
	java::nio::DirectShortBufferU,
	sun::nio::ch::DirectBuffer>
{
public:

	jni::ref<java::nio::ShortBuffer> slice() { return call_method<"slice", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ShortBuffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ShortBuffer> asReadOnlyBuffer() { return call_method<"asReadOnlyBuffer", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ShortBuffer> put(jshort p1) { return call_method<"put", jni::ref<java::nio::ShortBuffer>>(p1); }
	jni::ref<java::nio::ShortBuffer> put(jint p1, jshort p2) { return call_method<"put", jni::ref<java::nio::ShortBuffer>>(p1, p2); }
	jni::ref<java::nio::ShortBuffer> put(jni::ref<java::nio::ShortBuffer> p1) { return call_method<"put", jni::ref<java::nio::ShortBuffer>>(p1); }
	jni::ref<java::nio::ShortBuffer> put(jni::ref<jni::array<jshort>> p1, jint p2, jint p3) { return call_method<"put", jni::ref<java::nio::ShortBuffer>>(p1, p2, p3); }
	jni::ref<java::nio::ShortBuffer> compact() { return call_method<"compact", jni::ref<java::nio::ShortBuffer>>(); }
	jboolean isDirect() { return call_method<"isDirect", jboolean>(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<java::nio::ByteOrder> order() { return call_method<"order", jni::ref<java::nio::ByteOrder>>(); }

protected:

	DirectShortBufferRU(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_DIRECTSHORTBUFFERRU
