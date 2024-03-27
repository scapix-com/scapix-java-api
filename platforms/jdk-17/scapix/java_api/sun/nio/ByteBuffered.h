// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_BYTEBUFFERED_FWD
#define SCAPIX_JAVA_API_SUN_NIO_BYTEBUFFERED_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio { class ByteBuffered; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ByteBuffered>
{
	static constexpr fixed_string class_name = "sun/nio/ByteBuffered";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_BYTEBUFFERED_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_BYTEBUFFERED)
#define SCAPIX_JAVA_API_SUN_NIO_BYTEBUFFERED

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::ByteBuffered : public jni::object_base<"sun/nio/ByteBuffered",
	java::lang::Object>
{
public:

	jni::ref<java::nio::ByteBuffer> getByteBuffer() { return call_method<"getByteBuffer", jni::ref<java::nio::ByteBuffer>>(); }

protected:

	ByteBuffered(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_BYTEBUFFERED