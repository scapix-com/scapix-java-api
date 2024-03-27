// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_BUFFER_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_BUFFER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class Buffer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::Buffer>
{
	static constexpr fixed_string class_name = "java/nio/Buffer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_BUFFER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_BUFFER)
#define SCAPIX_JAVA_API_JAVA_NIO_BUFFER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::Buffer : public jni::object_base<"java/nio/Buffer",
	java::lang::Object>
{
public:

	jint capacity() { return call_method<"capacity", jint>(); }
	jint position() { return call_method<"position", jint>(); }
	jni::ref<java::nio::Buffer> position(jint newPosition) { return call_method<"position", jni::ref<java::nio::Buffer>>(newPosition); }
	jint limit() { return call_method<"limit", jint>(); }
	jni::ref<java::nio::Buffer> limit(jint newLimit) { return call_method<"limit", jni::ref<java::nio::Buffer>>(newLimit); }
	jni::ref<java::nio::Buffer> mark() { return call_method<"mark", jni::ref<java::nio::Buffer>>(); }
	jni::ref<java::nio::Buffer> reset() { return call_method<"reset", jni::ref<java::nio::Buffer>>(); }
	jni::ref<java::nio::Buffer> clear() { return call_method<"clear", jni::ref<java::nio::Buffer>>(); }
	jni::ref<java::nio::Buffer> flip() { return call_method<"flip", jni::ref<java::nio::Buffer>>(); }
	jni::ref<java::nio::Buffer> rewind() { return call_method<"rewind", jni::ref<java::nio::Buffer>>(); }
	jint remaining() { return call_method<"remaining", jint>(); }
	jboolean hasRemaining() { return call_method<"hasRemaining", jboolean>(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jboolean hasArray() { return call_method<"hasArray", jboolean>(); }
	jni::ref<java::lang::Object> array() { return call_method<"array", jni::ref<java::lang::Object>>(); }
	jint arrayOffset() { return call_method<"arrayOffset", jint>(); }
	jboolean isDirect() { return call_method<"isDirect", jboolean>(); }
	jni::ref<java::nio::Buffer> slice() { return call_method<"slice", jni::ref<java::nio::Buffer>>(); }
	jni::ref<java::nio::Buffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::Buffer>>(); }

protected:

	Buffer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_BUFFER
