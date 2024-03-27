// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <scapix/java_api/java/nio/channels/SeekableByteChannel.h>
#include <scapix/java_api/java/nio/channels/GatheringByteChannel.h>
#include <scapix/java_api/java/nio/channels/ScatteringByteChannel.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_FILECHANNEL_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_FILECHANNEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::channels { class FileChannel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::channels::FileChannel>
{
	static constexpr fixed_string class_name = "java/nio/channels/FileChannel";
	using base_classes = std::tuple<scapix::java_api::java::nio::channels::spi::AbstractInterruptibleChannel, scapix::java_api::java::nio::channels::SeekableByteChannel, scapix::java_api::java::nio::channels::GatheringByteChannel, scapix::java_api::java::nio::channels::ScatteringByteChannel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_FILECHANNEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_FILECHANNEL)
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_FILECHANNEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/nio/MappedByteBuffer.h>
#include <scapix/java_api/java/nio/channels/FileChannel_MapMode.h>
#include <scapix/java_api/java/nio/channels/FileLock.h>
#include <scapix/java_api/java/nio/channels/ReadableByteChannel.h>
#include <scapix/java_api/java/nio/channels/WritableByteChannel.h>
#include <scapix/java_api/java/nio/file/OpenOption.h>
#include <scapix/java_api/java/nio/file/Path.h>
#include <scapix/java_api/java/nio/file/attribute/FileAttribute.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::channels::FileChannel : public jni::object_base<"java/nio/channels/FileChannel",
	java::nio::channels::spi::AbstractInterruptibleChannel,
	java::nio::channels::SeekableByteChannel,
	java::nio::channels::GatheringByteChannel,
	java::nio::channels::ScatteringByteChannel>
{
public:

	using MapMode = FileChannel_MapMode;

	static jni::ref<java::nio::channels::FileChannel> open(jni::ref<java::nio::file::Path> path, jni::ref<java::util::Set> options, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> attrs) { return call_static_method<"open", jni::ref<java::nio::channels::FileChannel>>(path, options, attrs); }
	static jni::ref<java::nio::channels::FileChannel> open(jni::ref<java::nio::file::Path> path, jni::ref<jni::array<java::nio::file::OpenOption>> options) { return call_static_method<"open", jni::ref<java::nio::channels::FileChannel>>(path, options); }
	jint read(jni::ref<java::nio::ByteBuffer> p1) { return call_method<"read", jint>(p1); }
	jlong read(jni::ref<jni::array<java::nio::ByteBuffer>> p1, jint p2, jint p3) { return call_method<"read", jlong>(p1, p2, p3); }
	jlong read(jni::ref<jni::array<java::nio::ByteBuffer>> dsts) { return call_method<"read", jlong>(dsts); }
	jint write(jni::ref<java::nio::ByteBuffer> p1) { return call_method<"write", jint>(p1); }
	jlong write(jni::ref<jni::array<java::nio::ByteBuffer>> p1, jint p2, jint p3) { return call_method<"write", jlong>(p1, p2, p3); }
	jlong write(jni::ref<jni::array<java::nio::ByteBuffer>> srcs) { return call_method<"write", jlong>(srcs); }
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
	jni::ref<java::nio::channels::FileLock> lock(jlong p1, jlong p2, jboolean p3) { return call_method<"lock", jni::ref<java::nio::channels::FileLock>>(p1, p2, p3); }
	jni::ref<java::nio::channels::FileLock> lock() { return call_method<"lock", jni::ref<java::nio::channels::FileLock>>(); }
	jni::ref<java::nio::channels::FileLock> tryLock(jlong p1, jlong p2, jboolean p3) { return call_method<"tryLock", jni::ref<java::nio::channels::FileLock>>(p1, p2, p3); }
	jni::ref<java::nio::channels::FileLock> tryLock() { return call_method<"tryLock", jni::ref<java::nio::channels::FileLock>>(); }

protected:

	FileChannel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_FILECHANNEL