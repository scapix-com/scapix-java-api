// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/CharBuffer.h>
#include <scapix/java_api/sun/nio/ch/DirectBuffer.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_DIRECTCHARBUFFERU_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_DIRECTCHARBUFFERU_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class DirectCharBufferU; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::DirectCharBufferU>
{
	static constexpr fixed_string class_name = "java/nio/DirectCharBufferU";
	using base_classes = std::tuple<scapix::java_api::java::nio::CharBuffer, scapix::java_api::sun::nio::ch::DirectBuffer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_DIRECTCHARBUFFERU_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_DIRECTCHARBUFFERU)
#define SCAPIX_JAVA_API_JAVA_NIO_DIRECTCHARBUFFERU

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteOrder.h>
#include <scapix/java_api/jdk/internal/ref/Cleaner.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::DirectCharBufferU : public jni::object_base<"java/nio/DirectCharBufferU",
	java::nio::CharBuffer,
	sun::nio::ch::DirectBuffer>
{
public:

	jni::ref<java::lang::Object> attachment() { return call_method<"attachment", jni::ref<java::lang::Object>>(); }
	jni::ref<jdk::internal::ref::Cleaner> cleaner() { return call_method<"cleaner", jni::ref<jdk::internal::ref::Cleaner>>(); }
	jni::ref<java::nio::CharBuffer> slice() { return call_method<"slice", jni::ref<java::nio::CharBuffer>>(); }
	jni::ref<java::nio::CharBuffer> slice(jint index, jint length) { return call_method<"slice", jni::ref<java::nio::CharBuffer>>(index, length); }
	jni::ref<java::nio::CharBuffer> duplicate() { return call_method<"duplicate", jni::ref<java::nio::CharBuffer>>(); }
	jni::ref<java::nio::CharBuffer> asReadOnlyBuffer() { return call_method<"asReadOnlyBuffer", jni::ref<java::nio::CharBuffer>>(); }
	jlong address() { return call_method<"address", jlong>(); }
	jchar get() { return call_method<"get", jchar>(); }
	jchar get(jint i) { return call_method<"get", jchar>(i); }
	jni::ref<java::nio::CharBuffer> put(jchar x) { return call_method<"put", jni::ref<java::nio::CharBuffer>>(x); }
	jni::ref<java::nio::CharBuffer> put(jint i, jchar x) { return call_method<"put", jni::ref<java::nio::CharBuffer>>(i, x); }
	jni::ref<java::nio::CharBuffer> compact() { return call_method<"compact", jni::ref<java::nio::CharBuffer>>(); }
	jboolean isDirect() { return call_method<"isDirect", jboolean>(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<java::lang::String> toString(jint start, jint end) { return call_method<"toString", jni::ref<java::lang::String>>(start, end); }
	jni::ref<java::nio::CharBuffer> append(jni::ref<java::lang::CharSequence> csq) { return call_method<"append", jni::ref<java::nio::CharBuffer>>(csq); }
	jni::ref<java::nio::CharBuffer> append(jni::ref<java::lang::CharSequence> csq, jint start, jint end) { return call_method<"append", jni::ref<java::nio::CharBuffer>>(csq, start, end); }
	jni::ref<java::nio::CharBuffer> subSequence(jint start, jint end) { return call_method<"subSequence", jni::ref<java::nio::CharBuffer>>(start, end); }
	jni::ref<java::nio::ByteOrder> order() { return call_method<"order", jni::ref<java::nio::ByteOrder>>(); }

protected:

	DirectCharBufferU(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_DIRECTCHARBUFFERU
