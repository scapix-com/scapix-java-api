// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/Buffer.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_SHORTBUFFER_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_SHORTBUFFER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class ShortBuffer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::ShortBuffer>
{
	static constexpr fixed_string class_name = "java/nio/ShortBuffer";
	using base_classes = std::tuple<scapix::java_api::java::nio::Buffer, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_SHORTBUFFER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_SHORTBUFFER)
#define SCAPIX_JAVA_API_JAVA_NIO_SHORTBUFFER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteOrder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::ShortBuffer : public jni::object_base<"java/nio/ShortBuffer",
	java::nio::Buffer,
	java::lang::Comparable>
{
public:

	static jni::ref<java::nio::ShortBuffer> allocate(jint capacity) { return call_static_method<"allocate", jni::ref<java::nio::ShortBuffer>>(capacity); }
	static jni::ref<java::nio::ShortBuffer> wrap(jni::ref<jni::array<jshort>> array, jint offset, jint length) { return call_static_method<"wrap", jni::ref<java::nio::ShortBuffer>>(array, offset, length); }
	static jni::ref<java::nio::ShortBuffer> wrap(jni::ref<jni::array<jshort>> array) { return call_static_method<"wrap", jni::ref<java::nio::ShortBuffer>>(array); }
	jni::ref<java::nio::ShortBuffer> slice() { return call_method<"slice", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ShortBuffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ShortBuffer> asReadOnlyBuffer() { return call_method<"asReadOnlyBuffer", jni::ref<java::nio::ShortBuffer>>(); }
	jshort get() { return call_method<"get", jshort>(); }
	jni::ref<java::nio::ShortBuffer> put(jshort p1) { return call_method<"put", jni::ref<java::nio::ShortBuffer>>(p1); }
	jshort get(jint p1) { return call_method<"get", jshort>(p1); }
	jni::ref<java::nio::ShortBuffer> put(jint p1, jshort p2) { return call_method<"put", jni::ref<java::nio::ShortBuffer>>(p1, p2); }
	jni::ref<java::nio::ShortBuffer> get(jni::ref<jni::array<jshort>> dst, jint offset, jint length) { return call_method<"get", jni::ref<java::nio::ShortBuffer>>(dst, offset, length); }
	jni::ref<java::nio::ShortBuffer> get(jni::ref<jni::array<jshort>> dst) { return call_method<"get", jni::ref<java::nio::ShortBuffer>>(dst); }
	jni::ref<java::nio::ShortBuffer> put(jni::ref<java::nio::ShortBuffer> src) { return call_method<"put", jni::ref<java::nio::ShortBuffer>>(src); }
	jni::ref<java::nio::ShortBuffer> put(jni::ref<jni::array<jshort>> src, jint offset, jint length) { return call_method<"put", jni::ref<java::nio::ShortBuffer>>(src, offset, length); }
	jni::ref<java::nio::ShortBuffer> put(jni::ref<jni::array<jshort>> src) { return call_method<"put", jni::ref<java::nio::ShortBuffer>>(src); }
	jboolean hasArray() { return call_method<"hasArray", jboolean>(); }
	jni::ref<jni::array<jshort>> array() { return call_method<"array", jni::ref<jni::array<jshort>>>(); }
	jint arrayOffset() { return call_method<"arrayOffset", jint>(); }
	jni::ref<java::nio::ShortBuffer> position(jint newPosition) { return call_method<"position", jni::ref<java::nio::ShortBuffer>>(newPosition); }
	jni::ref<java::nio::ShortBuffer> limit(jint newLimit) { return call_method<"limit", jni::ref<java::nio::ShortBuffer>>(newLimit); }
	jni::ref<java::nio::ShortBuffer> mark() { return call_method<"mark", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ShortBuffer> reset() { return call_method<"reset", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ShortBuffer> clear() { return call_method<"clear", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ShortBuffer> flip() { return call_method<"flip", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ShortBuffer> rewind() { return call_method<"rewind", jni::ref<java::nio::ShortBuffer>>(); }
	jni::ref<java::nio::ShortBuffer> compact() { return call_method<"compact", jni::ref<java::nio::ShortBuffer>>(); }
	jboolean isDirect() { return call_method<"isDirect", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> ob) { return call_method<"equals", jboolean>(ob); }
	jint compareTo(jni::ref<java::nio::ShortBuffer> that) { return call_method<"compareTo", jint>(that); }
	jint mismatch(jni::ref<java::nio::ShortBuffer> that) { return call_method<"mismatch", jint>(that); }
	jni::ref<java::nio::ByteOrder> order() { return call_method<"order", jni::ref<java::nio::ByteOrder>>(); }

protected:

	ShortBuffer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_SHORTBUFFER
