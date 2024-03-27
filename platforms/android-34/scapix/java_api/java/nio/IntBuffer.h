// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/Buffer.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_INTBUFFER_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_INTBUFFER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class IntBuffer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::IntBuffer>
{
	static constexpr fixed_string class_name = "java/nio/IntBuffer";
	using base_classes = std::tuple<scapix::java_api::java::nio::Buffer, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_INTBUFFER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_INTBUFFER)
#define SCAPIX_JAVA_API_JAVA_NIO_INTBUFFER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteOrder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::IntBuffer : public jni::object_base<"java/nio/IntBuffer",
	java::nio::Buffer,
	java::lang::Comparable>
{
public:

	static jni::ref<java::nio::IntBuffer> allocate(jint capacity) { return call_static_method<"allocate", jni::ref<java::nio::IntBuffer>>(capacity); }
	static jni::ref<java::nio::IntBuffer> wrap(jni::ref<jni::array<jint>> array, jint offset, jint length) { return call_static_method<"wrap", jni::ref<java::nio::IntBuffer>>(array, offset, length); }
	static jni::ref<java::nio::IntBuffer> wrap(jni::ref<jni::array<jint>> array) { return call_static_method<"wrap", jni::ref<java::nio::IntBuffer>>(array); }
	jni::ref<java::nio::IntBuffer> slice() { return call_method<"slice", jni::ref<java::nio::IntBuffer>>(); }
	jni::ref<java::nio::IntBuffer> slice(jint p1, jint p2) { return call_method<"slice", jni::ref<java::nio::IntBuffer>>(p1, p2); }
	jni::ref<java::nio::IntBuffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::IntBuffer>>(); }
	jni::ref<java::nio::IntBuffer> asReadOnlyBuffer() { return call_method<"asReadOnlyBuffer", jni::ref<java::nio::IntBuffer>>(); }
	jint get() { return call_method<"get", jint>(); }
	jni::ref<java::nio::IntBuffer> put(jint p1) { return call_method<"put", jni::ref<java::nio::IntBuffer>>(p1); }
	jint get(jint p1) { return call_method<"get", jint>(p1); }
	jni::ref<java::nio::IntBuffer> put(jint p1, jint p2) { return call_method<"put", jni::ref<java::nio::IntBuffer>>(p1, p2); }
	jni::ref<java::nio::IntBuffer> get(jni::ref<jni::array<jint>> dst, jint offset, jint length) { return call_method<"get", jni::ref<java::nio::IntBuffer>>(dst, offset, length); }
	jni::ref<java::nio::IntBuffer> get(jni::ref<jni::array<jint>> dst) { return call_method<"get", jni::ref<java::nio::IntBuffer>>(dst); }
	jni::ref<java::nio::IntBuffer> put(jni::ref<java::nio::IntBuffer> src) { return call_method<"put", jni::ref<java::nio::IntBuffer>>(src); }
	jni::ref<java::nio::IntBuffer> put(jni::ref<jni::array<jint>> src, jint offset, jint length) { return call_method<"put", jni::ref<java::nio::IntBuffer>>(src, offset, length); }
	jni::ref<java::nio::IntBuffer> put(jni::ref<jni::array<jint>> src) { return call_method<"put", jni::ref<java::nio::IntBuffer>>(src); }
	jboolean hasArray() { return call_method<"hasArray", jboolean>(); }
	jni::ref<jni::array<jint>> array() { return call_method<"array", jni::ref<jni::array<jint>>>(); }
	jint arrayOffset() { return call_method<"arrayOffset", jint>(); }
	jni::ref<java::nio::Buffer> position(jint newPosition) { return call_method<"position", jni::ref<java::nio::Buffer>>(newPosition); }
	jni::ref<java::nio::Buffer> limit(jint newLimit) { return call_method<"limit", jni::ref<java::nio::Buffer>>(newLimit); }
	jni::ref<java::nio::Buffer> mark() { return call_method<"mark", jni::ref<java::nio::Buffer>>(); }
	jni::ref<java::nio::Buffer> reset() { return call_method<"reset", jni::ref<java::nio::Buffer>>(); }
	jni::ref<java::nio::Buffer> clear() { return call_method<"clear", jni::ref<java::nio::Buffer>>(); }
	jni::ref<java::nio::Buffer> flip() { return call_method<"flip", jni::ref<java::nio::Buffer>>(); }
	jni::ref<java::nio::Buffer> rewind() { return call_method<"rewind", jni::ref<java::nio::Buffer>>(); }
	jni::ref<java::nio::IntBuffer> compact() { return call_method<"compact", jni::ref<java::nio::IntBuffer>>(); }
	jboolean isDirect() { return call_method<"isDirect", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> ob) { return call_method<"equals", jboolean>(ob); }
	jint compareTo(jni::ref<java::nio::IntBuffer> that) { return call_method<"compareTo", jint>(that); }
	jint mismatch(jni::ref<java::nio::IntBuffer> that) { return call_method<"mismatch", jint>(that); }
	jni::ref<java::nio::ByteOrder> order() { return call_method<"order", jni::ref<java::nio::ByteOrder>>(); }

protected:

	IntBuffer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_INTBUFFER
