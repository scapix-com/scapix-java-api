// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVANIOACCESS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVANIOACCESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::access { class JavaNioAccess; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::access::JavaNioAccess>
{
	static constexpr fixed_string class_name = "jdk/internal/access/JavaNioAccess";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVANIOACCESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVANIOACCESS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVANIOACCESS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/foreign/MemorySegment.h>
#include <scapix/java_api/java/nio/Buffer.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/jdk/internal/access/foreign/UnmapperProxy.h>
#include <scapix/java_api/jdk/internal/misc/VM_BufferPool.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::access::JavaNioAccess : public jni::object_base<"jdk/internal/access/JavaNioAccess",
	java::lang::Object>
{
public:

	jni::ref<jdk::internal::misc::VM_BufferPool> getDirectBufferPool() { return call_method<"getDirectBufferPool", jni::ref<jdk::internal::misc::VM_BufferPool>>(); }
	jni::ref<java::nio::ByteBuffer> newDirectByteBuffer(jlong p1, jint p2, jni::ref<java::lang::Object> p3, jni::ref<java::lang::foreign::MemorySegment> p4) { return call_method<"newDirectByteBuffer", jni::ref<java::nio::ByteBuffer>>(p1, p2, p3, p4); }
	jni::ref<java::nio::ByteBuffer> newMappedByteBuffer(jni::ref<jdk::internal::access::foreign::UnmapperProxy> p1, jlong p2, jint p3, jni::ref<java::lang::Object> p4, jni::ref<java::lang::foreign::MemorySegment> p5) { return call_method<"newMappedByteBuffer", jni::ref<java::nio::ByteBuffer>>(p1, p2, p3, p4, p5); }
	jni::ref<java::nio::ByteBuffer> newHeapByteBuffer(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3, jni::ref<java::lang::foreign::MemorySegment> p4) { return call_method<"newHeapByteBuffer", jni::ref<java::nio::ByteBuffer>>(p1, p2, p3, p4); }
	jni::ref<java::lang::Object> getBufferBase(jni::ref<java::nio::Buffer> p1) { return call_method<"getBufferBase", jni::ref<java::lang::Object>>(p1); }
	jlong getBufferAddress(jni::ref<java::nio::Buffer> p1) { return call_method<"getBufferAddress", jlong>(p1); }
	jni::ref<jdk::internal::access::foreign::UnmapperProxy> unmapper(jni::ref<java::nio::Buffer> p1) { return call_method<"unmapper", jni::ref<jdk::internal::access::foreign::UnmapperProxy>>(p1); }
	jni::ref<java::lang::foreign::MemorySegment> bufferSegment(jni::ref<java::nio::Buffer> p1) { return call_method<"bufferSegment", jni::ref<java::lang::foreign::MemorySegment>>(p1); }
	void acquireSession(jni::ref<java::nio::Buffer> p1) { return call_method<"acquireSession", void>(p1); }
	void releaseSession(jni::ref<java::nio::Buffer> p1) { return call_method<"releaseSession", void>(p1); }
	jboolean isThreadConfined(jni::ref<java::nio::Buffer> p1) { return call_method<"isThreadConfined", jboolean>(p1); }
	jboolean hasSession(jni::ref<java::nio::Buffer> p1) { return call_method<"hasSession", jboolean>(p1); }
	void force(jni::ref<java::io::FileDescriptor> p1, jlong p2, jboolean p3, jlong p4, jlong p5) { return call_method<"force", void>(p1, p2, p3, p4, p5); }
	void load(jlong p1, jboolean p2, jlong p3) { return call_method<"load", void>(p1, p2, p3); }
	void unload(jlong p1, jboolean p2, jlong p3) { return call_method<"unload", void>(p1, p2, p3); }
	jboolean isLoaded(jlong p1, jboolean p2, jlong p3) { return call_method<"isLoaded", jboolean>(p1, p2, p3); }
	void reserveMemory(jlong p1, jlong p2) { return call_method<"reserveMemory", void>(p1, p2); }
	void unreserveMemory(jlong p1, jlong p2) { return call_method<"unreserveMemory", void>(p1, p2); }
	jint pageSize() { return call_method<"pageSize", jint>(); }

protected:

	JavaNioAccess(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVANIOACCESS