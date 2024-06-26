// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/channels/FileChannel.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_FILECHANNELIMPL_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_FILECHANNELIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class FileChannelImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::FileChannelImpl>
{
	static constexpr fixed_string class_name = "sun/nio/ch/FileChannelImpl";
	using base_classes = std::tuple<scapix::java_api::java::nio::channels::FileChannel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_FILECHANNELIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_FILECHANNELIMPL)
#define SCAPIX_JAVA_API_SUN_NIO_CH_FILECHANNELIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/nio/MappedByteBuffer.h>
#include <scapix/java_api/java/nio/channels/FileChannel_MapMode.h>
#include <scapix/java_api/java/nio/channels/FileLock.h>
#include <scapix/java_api/java/nio/channels/ReadableByteChannel.h>
#include <scapix/java_api/java/nio/channels/WritableByteChannel.h>
#include <scapix/java_api/sun/misc/JavaNioAccess_BufferPool.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::ch::FileChannelImpl : public jni::object_base<"sun/nio/ch/FileChannelImpl",
	java::nio::channels::FileChannel>
{
public:

	static jni::ref<java::nio::channels::FileChannel> open(jni::ref<java::io::FileDescriptor> p1, jni::ref<java::lang::String> p2, jboolean p3, jboolean p4, jni::ref<java::lang::Object> p5) { return call_static_method<"open", jni::ref<java::nio::channels::FileChannel>>(p1, p2, p3, p4, p5); }
	static jni::ref<java::nio::channels::FileChannel> open(jni::ref<java::io::FileDescriptor> p1, jni::ref<java::lang::String> p2, jboolean p3, jboolean p4, jboolean p5, jni::ref<java::lang::Object> p6) { return call_static_method<"open", jni::ref<java::nio::channels::FileChannel>>(p1, p2, p3, p4, p5, p6); }
	jint read(jni::ref<java::nio::ByteBuffer> p1) { return call_method<"read", jint>(p1); }
	jlong read(jni::ref<jni::array<java::nio::ByteBuffer>> p1, jint p2, jint p3) { return call_method<"read", jlong>(p1, p2, p3); }
	jint write(jni::ref<java::nio::ByteBuffer> p1) { return call_method<"write", jint>(p1); }
	jlong write(jni::ref<jni::array<java::nio::ByteBuffer>> p1, jint p2, jint p3) { return call_method<"write", jlong>(p1, p2, p3); }
	jlong position() { return call_method<"position", jlong>(); }
	jni::ref<java::nio::channels::FileChannel> position(jlong p1) { return call_method<"position", jni::ref<java::nio::channels::FileChannel>>(p1); }
	jlong size() { return call_method<"size", jlong>(); }
	jni::ref<java::nio::channels::FileChannel> truncate(jlong p1) { return call_method<"truncate", jni::ref<java::nio::channels::FileChannel>>(p1); }
	void force(jboolean p1) { return call_method<"force", void>(p1); }
	jlong transferTo(jlong p1, jlong p2, jni::ref<java::nio::channels::WritableByteChannel> p3) { return call_method<"transferTo", jlong>(p1, p2, p3); }
	jlong transferFrom(jni::ref<java::nio::channels::ReadableByteChannel> p1, jlong p2, jlong p3) { return call_method<"transferFrom", jlong>(p1, p2, p3); }
	jint read(jni::ref<java::nio::ByteBuffer> p1, jlong p2) { return call_method<"read", jint>(p1, p2); }
	jint write(jni::ref<java::nio::ByteBuffer> p1, jlong p2) { return call_method<"write", jint>(p1, p2); }
	jni::ref<java::nio::MappedByteBuffer> map(jni::ref<java::nio::channels::FileChannel_MapMode> p1, jlong p2, jlong p3) { return call_method<"map", jni::ref<java::nio::MappedByteBuffer>>(p1, p2, p3); }
	static jni::ref<sun::misc::JavaNioAccess_BufferPool> getMappedBufferPool() { return call_static_method<"getMappedBufferPool", jni::ref<sun::misc::JavaNioAccess_BufferPool>>(); }
	jni::ref<java::nio::channels::FileLock> lock(jlong p1, jlong p2, jboolean p3) { return call_method<"lock", jni::ref<java::nio::channels::FileLock>>(p1, p2, p3); }
	jni::ref<java::nio::channels::FileLock> tryLock(jlong p1, jlong p2, jboolean p3) { return call_method<"tryLock", jni::ref<java::nio::channels::FileLock>>(p1, p2, p3); }

protected:

	FileChannelImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_FILECHANNELIMPL
