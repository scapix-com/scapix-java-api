// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/java/lang/Runnable.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_DIRECTBYTEBUFFER_DEALLOCATOR_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_DIRECTBYTEBUFFER_DEALLOCATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio { class DirectByteBuffer_Deallocator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::DirectByteBuffer_Deallocator>
{
	static constexpr fixed_string class_name = "java/nio/DirectByteBuffer$Deallocator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::java::lang::Runnable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_DIRECTBYTEBUFFER_DEALLOCATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_DIRECTBYTEBUFFER_DEALLOCATOR)
#define SCAPIX_JAVA_API_JAVA_NIO_DIRECTBYTEBUFFER_DEALLOCATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::DirectByteBuffer_Deallocator : public jni::object_base<"java/nio/DirectByteBuffer$Deallocator",
	java::lang::Record,
	java::lang::Runnable>
{
public:

	void run() { return call_method<"run", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jlong address() { return call_method<"address", jlong>(); }
	jlong size() { return call_method<"size", jlong>(); }
	jint capacity() { return call_method<"capacity", jint>(); }

protected:

	DirectByteBuffer_Deallocator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_DIRECTBYTEBUFFER_DEALLOCATOR
