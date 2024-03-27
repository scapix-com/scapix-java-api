// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/DirectLongBufferS.h>
#include <scapix/java_api/sun/nio/ch/DirectBuffer.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_DIRECTLONGBUFFERRS_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_DIRECTLONGBUFFERRS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class DirectLongBufferRS; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::DirectLongBufferRS>
{
	static constexpr fixed_string class_name = "java/nio/DirectLongBufferRS";
	using base_classes = std::tuple<scapix::java_api::java::nio::DirectLongBufferS, scapix::java_api::sun::nio::ch::DirectBuffer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_DIRECTLONGBUFFERRS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_DIRECTLONGBUFFERRS)
#define SCAPIX_JAVA_API_JAVA_NIO_DIRECTLONGBUFFERRS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteOrder.h>
#include <scapix/java_api/java/nio/LongBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::DirectLongBufferRS : public jni::object_base<"java/nio/DirectLongBufferRS",
	java::nio::DirectLongBufferS,
	sun::nio::ch::DirectBuffer>
{
public:

	jni::ref<java::nio::LongBuffer> slice() { return call_method<"slice", jni::ref<java::nio::LongBuffer>>(); }
	jni::ref<java::nio::LongBuffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::LongBuffer>>(); }
	jni::ref<java::nio::LongBuffer> asReadOnlyBuffer() { return call_method<"asReadOnlyBuffer", jni::ref<java::nio::LongBuffer>>(); }
	jni::ref<java::nio::LongBuffer> put(jlong x) { return call_method<"put", jni::ref<java::nio::LongBuffer>>(x); }
	jni::ref<java::nio::LongBuffer> put(jint i, jlong x) { return call_method<"put", jni::ref<java::nio::LongBuffer>>(i, x); }
	jni::ref<java::nio::LongBuffer> put(jni::ref<java::nio::LongBuffer> src) { return call_method<"put", jni::ref<java::nio::LongBuffer>>(src); }
	jni::ref<java::nio::LongBuffer> put(jni::ref<jni::array<jlong>> src, jint offset, jint length) { return call_method<"put", jni::ref<java::nio::LongBuffer>>(src, offset, length); }
	jni::ref<java::nio::LongBuffer> compact() { return call_method<"compact", jni::ref<java::nio::LongBuffer>>(); }
	jboolean isDirect() { return call_method<"isDirect", jboolean>(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<java::nio::ByteOrder> order() { return call_method<"order", jni::ref<java::nio::ByteOrder>>(); }

protected:

	DirectLongBufferRS(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_DIRECTLONGBUFFERRS
