// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/DoubleBuffer.h>
#include <scapix/java_api/sun/nio/ch/DirectBuffer.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_DIRECTDOUBLEBUFFERS_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_DIRECTDOUBLEBUFFERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class DirectDoubleBufferS; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::DirectDoubleBufferS>
{
	static constexpr fixed_string class_name = "java/nio/DirectDoubleBufferS";
	using base_classes = std::tuple<scapix::java_api::java::nio::DoubleBuffer, scapix::java_api::sun::nio::ch::DirectBuffer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_DIRECTDOUBLEBUFFERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_DIRECTDOUBLEBUFFERS)
#define SCAPIX_JAVA_API_JAVA_NIO_DIRECTDOUBLEBUFFERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/nio/ByteOrder.h>
#include <scapix/java_api/jdk/internal/ref/Cleaner.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::DirectDoubleBufferS : public jni::object_base<"java/nio/DirectDoubleBufferS",
	java::nio::DoubleBuffer,
	sun::nio::ch::DirectBuffer>
{
public:

	jni::ref<java::lang::Object> attachment() { return call_method<"attachment", jni::ref<java::lang::Object>>(); }
	jni::ref<jdk::internal::ref::Cleaner> cleaner() { return call_method<"cleaner", jni::ref<jdk::internal::ref::Cleaner>>(); }
	jni::ref<java::nio::DoubleBuffer> slice() { return call_method<"slice", jni::ref<java::nio::DoubleBuffer>>(); }
	jni::ref<java::nio::DoubleBuffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::DoubleBuffer>>(); }
	jni::ref<java::nio::DoubleBuffer> asReadOnlyBuffer() { return call_method<"asReadOnlyBuffer", jni::ref<java::nio::DoubleBuffer>>(); }
	jlong address() { return call_method<"address", jlong>(); }
	jdouble get() { return call_method<"get", jdouble>(); }
	jdouble get(jint i) { return call_method<"get", jdouble>(i); }
	jni::ref<java::nio::DoubleBuffer> get(jni::ref<jni::array<jdouble>> dst, jint offset, jint length) { return call_method<"get", jni::ref<java::nio::DoubleBuffer>>(dst, offset, length); }
	jni::ref<java::nio::DoubleBuffer> put(jdouble x) { return call_method<"put", jni::ref<java::nio::DoubleBuffer>>(x); }
	jni::ref<java::nio::DoubleBuffer> put(jint i, jdouble x) { return call_method<"put", jni::ref<java::nio::DoubleBuffer>>(i, x); }
	jni::ref<java::nio::DoubleBuffer> put(jni::ref<java::nio::DoubleBuffer> src) { return call_method<"put", jni::ref<java::nio::DoubleBuffer>>(src); }
	jni::ref<java::nio::DoubleBuffer> put(jni::ref<jni::array<jdouble>> src, jint offset, jint length) { return call_method<"put", jni::ref<java::nio::DoubleBuffer>>(src, offset, length); }
	jni::ref<java::nio::DoubleBuffer> compact() { return call_method<"compact", jni::ref<java::nio::DoubleBuffer>>(); }
	jboolean isDirect() { return call_method<"isDirect", jboolean>(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<java::nio::ByteOrder> order() { return call_method<"order", jni::ref<java::nio::ByteOrder>>(); }

protected:

	DirectDoubleBufferS(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_DIRECTDOUBLEBUFFERS