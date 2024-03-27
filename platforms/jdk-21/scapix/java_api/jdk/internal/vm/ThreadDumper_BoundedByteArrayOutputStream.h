// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/ByteArrayOutputStream.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_VM_THREADDUMPER_BOUNDEDBYTEARRAYOUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_THREADDUMPER_BOUNDEDBYTEARRAYOUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::vm { class ThreadDumper_BoundedByteArrayOutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::vm::ThreadDumper_BoundedByteArrayOutputStream>
{
	static constexpr fixed_string class_name = "jdk/internal/vm/ThreadDumper$BoundedByteArrayOutputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::ByteArrayOutputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_THREADDUMPER_BOUNDEDBYTEARRAYOUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_VM_THREADDUMPER_BOUNDEDBYTEARRAYOUTPUTSTREAM)
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_THREADDUMPER_BOUNDEDBYTEARRAYOUTPUTSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::vm::ThreadDumper_BoundedByteArrayOutputStream : public jni::object_base<"jdk/internal/vm/ThreadDumper$BoundedByteArrayOutputStream",
	java::io::ByteArrayOutputStream>
{
public:

	void write(jint b) { return call_method<"write", void>(b); }
	void write(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"write", void>(b, off, len); }
	void close() { return call_method<"close", void>(); }

protected:

	ThreadDumper_BoundedByteArrayOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_THREADDUMPER_BOUNDEDBYTEARRAYOUTPUTSTREAM