// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/DirectDoubleBufferS.h>
#include <scapix/java_api/sun/nio/ch/DirectBuffer.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_DIRECTDOUBLEBUFFERRS_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_DIRECTDOUBLEBUFFERRS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class DirectDoubleBufferRS; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::DirectDoubleBufferRS>
{
	static constexpr fixed_string class_name = "java/nio/DirectDoubleBufferRS";
	using base_classes = std::tuple<scapix::java_api::java::nio::DirectDoubleBufferS, scapix::java_api::sun::nio::ch::DirectBuffer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_DIRECTDOUBLEBUFFERRS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_DIRECTDOUBLEBUFFERRS)
#define SCAPIX_JAVA_API_JAVA_NIO_DIRECTDOUBLEBUFFERRS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteOrder.h>
#include <scapix/java_api/java/nio/DoubleBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::DirectDoubleBufferRS : public jni::object_base<"java/nio/DirectDoubleBufferRS",
	java::nio::DirectDoubleBufferS,
	sun::nio::ch::DirectBuffer>
{
public:

	jni::ref<java::nio::DoubleBuffer> slice() { return call_method<"slice", jni::ref<java::nio::DoubleBuffer>>(); }
	jni::ref<java::nio::DoubleBuffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::DoubleBuffer>>(); }
	jni::ref<java::nio::DoubleBuffer> asReadOnlyBuffer() { return call_method<"asReadOnlyBuffer", jni::ref<java::nio::DoubleBuffer>>(); }
	jni::ref<java::nio::DoubleBuffer> put(jdouble p1) { return call_method<"put", jni::ref<java::nio::DoubleBuffer>>(p1); }
	jni::ref<java::nio::DoubleBuffer> put(jint p1, jdouble p2) { return call_method<"put", jni::ref<java::nio::DoubleBuffer>>(p1, p2); }
	jni::ref<java::nio::DoubleBuffer> put(jni::ref<java::nio::DoubleBuffer> p1) { return call_method<"put", jni::ref<java::nio::DoubleBuffer>>(p1); }
	jni::ref<java::nio::DoubleBuffer> put(jni::ref<jni::array<jdouble>> p1, jint p2, jint p3) { return call_method<"put", jni::ref<java::nio::DoubleBuffer>>(p1, p2, p3); }
	jni::ref<java::nio::DoubleBuffer> compact() { return call_method<"compact", jni::ref<java::nio::DoubleBuffer>>(); }
	jboolean isDirect() { return call_method<"isDirect", jboolean>(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<java::nio::ByteOrder> order() { return call_method<"order", jni::ref<java::nio::ByteOrder>>(); }

protected:

	DirectDoubleBufferRS(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_DIRECTDOUBLEBUFFERRS
