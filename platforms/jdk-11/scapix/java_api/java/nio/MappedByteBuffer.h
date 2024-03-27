// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/ByteBuffer.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_MAPPEDBYTEBUFFER_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_MAPPEDBYTEBUFFER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class MappedByteBuffer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::MappedByteBuffer>
{
	static constexpr fixed_string class_name = "java/nio/MappedByteBuffer";
	using base_classes = std::tuple<scapix::java_api::java::nio::ByteBuffer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_MAPPEDBYTEBUFFER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_MAPPEDBYTEBUFFER)
#define SCAPIX_JAVA_API_JAVA_NIO_MAPPEDBYTEBUFFER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::MappedByteBuffer : public jni::object_base<"java/nio/MappedByteBuffer",
	java::nio::ByteBuffer>
{
public:

	jboolean isLoaded() { return call_method<"isLoaded", jboolean>(); }
	jni::ref<java::nio::MappedByteBuffer> load() { return call_method<"load", jni::ref<java::nio::MappedByteBuffer>>(); }
	jni::ref<java::nio::MappedByteBuffer> force() { return call_method<"force", jni::ref<java::nio::MappedByteBuffer>>(); }
	jni::ref<java::nio::MappedByteBuffer> position(jint newPosition) { return call_method<"position", jni::ref<java::nio::MappedByteBuffer>>(newPosition); }
	jni::ref<java::nio::MappedByteBuffer> limit(jint newLimit) { return call_method<"limit", jni::ref<java::nio::MappedByteBuffer>>(newLimit); }
	jni::ref<java::nio::MappedByteBuffer> mark() { return call_method<"mark", jni::ref<java::nio::MappedByteBuffer>>(); }
	jni::ref<java::nio::MappedByteBuffer> reset() { return call_method<"reset", jni::ref<java::nio::MappedByteBuffer>>(); }
	jni::ref<java::nio::MappedByteBuffer> clear() { return call_method<"clear", jni::ref<java::nio::MappedByteBuffer>>(); }
	jni::ref<java::nio::MappedByteBuffer> flip() { return call_method<"flip", jni::ref<java::nio::MappedByteBuffer>>(); }
	jni::ref<java::nio::MappedByteBuffer> rewind() { return call_method<"rewind", jni::ref<java::nio::MappedByteBuffer>>(); }

protected:

	MappedByteBuffer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_MAPPEDBYTEBUFFER
