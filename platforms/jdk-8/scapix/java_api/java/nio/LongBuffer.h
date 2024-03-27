// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/Buffer.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_LONGBUFFER_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_LONGBUFFER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class LongBuffer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::LongBuffer>
{
	static constexpr fixed_string class_name = "java/nio/LongBuffer";
	using base_classes = std::tuple<scapix::java_api::java::nio::Buffer, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_LONGBUFFER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_LONGBUFFER)
#define SCAPIX_JAVA_API_JAVA_NIO_LONGBUFFER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteOrder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::LongBuffer : public jni::object_base<"java/nio/LongBuffer",
	java::nio::Buffer,
	java::lang::Comparable>
{
public:

	static jni::ref<java::nio::LongBuffer> allocate(jint p1) { return call_static_method<"allocate", jni::ref<java::nio::LongBuffer>>(p1); }
	static jni::ref<java::nio::LongBuffer> wrap(jni::ref<jni::array<jlong>> p1, jint p2, jint p3) { return call_static_method<"wrap", jni::ref<java::nio::LongBuffer>>(p1, p2, p3); }
	static jni::ref<java::nio::LongBuffer> wrap(jni::ref<jni::array<jlong>> p1) { return call_static_method<"wrap", jni::ref<java::nio::LongBuffer>>(p1); }
	jni::ref<java::nio::LongBuffer> slice() { return call_method<"slice", jni::ref<java::nio::LongBuffer>>(); }
	jni::ref<java::nio::LongBuffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::LongBuffer>>(); }
	jni::ref<java::nio::LongBuffer> asReadOnlyBuffer() { return call_method<"asReadOnlyBuffer", jni::ref<java::nio::LongBuffer>>(); }
	jlong get() { return call_method<"get", jlong>(); }
	jni::ref<java::nio::LongBuffer> put(jlong p1) { return call_method<"put", jni::ref<java::nio::LongBuffer>>(p1); }
	jlong get(jint p1) { return call_method<"get", jlong>(p1); }
	jni::ref<java::nio::LongBuffer> put(jint p1, jlong p2) { return call_method<"put", jni::ref<java::nio::LongBuffer>>(p1, p2); }
	jni::ref<java::nio::LongBuffer> get(jni::ref<jni::array<jlong>> p1, jint p2, jint p3) { return call_method<"get", jni::ref<java::nio::LongBuffer>>(p1, p2, p3); }
	jni::ref<java::nio::LongBuffer> get(jni::ref<jni::array<jlong>> p1) { return call_method<"get", jni::ref<java::nio::LongBuffer>>(p1); }
	jni::ref<java::nio::LongBuffer> put(jni::ref<java::nio::LongBuffer> p1) { return call_method<"put", jni::ref<java::nio::LongBuffer>>(p1); }
	jni::ref<java::nio::LongBuffer> put(jni::ref<jni::array<jlong>> p1, jint p2, jint p3) { return call_method<"put", jni::ref<java::nio::LongBuffer>>(p1, p2, p3); }
	jni::ref<java::nio::LongBuffer> put(jni::ref<jni::array<jlong>> p1) { return call_method<"put", jni::ref<java::nio::LongBuffer>>(p1); }
	jboolean hasArray() { return call_method<"hasArray", jboolean>(); }
	jni::ref<jni::array<jlong>> array() { return call_method<"array", jni::ref<jni::array<jlong>>>(); }
	jint arrayOffset() { return call_method<"arrayOffset", jint>(); }
	jni::ref<java::nio::LongBuffer> compact() { return call_method<"compact", jni::ref<java::nio::LongBuffer>>(); }
	jboolean isDirect() { return call_method<"isDirect", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint compareTo(jni::ref<java::nio::LongBuffer> p1) { return call_method<"compareTo", jint>(p1); }
	jni::ref<java::nio::ByteOrder> order() { return call_method<"order", jni::ref<java::nio::ByteOrder>>(); }

protected:

	LongBuffer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_LONGBUFFER
