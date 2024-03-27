// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/nio/channels/AsynchronousChannel.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_ASYNCHRONOUSFILECHANNEL_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_ASYNCHRONOUSFILECHANNEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::channels { class AsynchronousFileChannel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::channels::AsynchronousFileChannel>
{
	static constexpr fixed_string class_name = "java/nio/channels/AsynchronousFileChannel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::nio::channels::AsynchronousChannel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_ASYNCHRONOUSFILECHANNEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_ASYNCHRONOUSFILECHANNEL)
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_ASYNCHRONOUSFILECHANNEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/nio/channels/CompletionHandler.h>
#include <scapix/java_api/java/nio/channels/FileLock.h>
#include <scapix/java_api/java/nio/file/OpenOption.h>
#include <scapix/java_api/java/nio/file/Path.h>
#include <scapix/java_api/java/nio/file/attribute/FileAttribute.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/concurrent/ExecutorService.h>
#include <scapix/java_api/java/util/concurrent/Future.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::channels::AsynchronousFileChannel : public jni::object_base<"java/nio/channels/AsynchronousFileChannel",
	java::lang::Object,
	java::nio::channels::AsynchronousChannel>
{
public:

	static jni::ref<java::nio::channels::AsynchronousFileChannel> open(jni::ref<java::nio::file::Path> file, jni::ref<java::util::Set> options, jni::ref<java::util::concurrent::ExecutorService> executor, jni::ref<jni::array<java::nio::file::attribute::FileAttribute>> attrs) { return call_static_method<"open", jni::ref<java::nio::channels::AsynchronousFileChannel>>(file, options, executor, attrs); }
	static jni::ref<java::nio::channels::AsynchronousFileChannel> open(jni::ref<java::nio::file::Path> file, jni::ref<jni::array<java::nio::file::OpenOption>> options) { return call_static_method<"open", jni::ref<java::nio::channels::AsynchronousFileChannel>>(file, options); }
	jlong size() { return call_method<"size", jlong>(); }
	jni::ref<java::nio::channels::AsynchronousFileChannel> truncate(jlong p1) { return call_method<"truncate", jni::ref<java::nio::channels::AsynchronousFileChannel>>(p1); }
	void force(jboolean p1) { return call_method<"force", void>(p1); }
	void lock(jlong p1, jlong p2, jboolean p3, jni::ref<java::lang::Object> p4, jni::ref<java::nio::channels::CompletionHandler> p5) { return call_method<"lock", void>(p1, p2, p3, p4, p5); }
	void lock(jni::ref<java::lang::Object> attachment, jni::ref<java::nio::channels::CompletionHandler> handler) { return call_method<"lock", void>(attachment, handler); }
	jni::ref<java::util::concurrent::Future> lock(jlong p1, jlong p2, jboolean p3) { return call_method<"lock", jni::ref<java::util::concurrent::Future>>(p1, p2, p3); }
	jni::ref<java::util::concurrent::Future> lock() { return call_method<"lock", jni::ref<java::util::concurrent::Future>>(); }
	jni::ref<java::nio::channels::FileLock> tryLock(jlong p1, jlong p2, jboolean p3) { return call_method<"tryLock", jni::ref<java::nio::channels::FileLock>>(p1, p2, p3); }
	jni::ref<java::nio::channels::FileLock> tryLock() { return call_method<"tryLock", jni::ref<java::nio::channels::FileLock>>(); }
	void read(jni::ref<java::nio::ByteBuffer> p1, jlong p2, jni::ref<java::lang::Object> p3, jni::ref<java::nio::channels::CompletionHandler> p4) { return call_method<"read", void>(p1, p2, p3, p4); }
	jni::ref<java::util::concurrent::Future> read(jni::ref<java::nio::ByteBuffer> p1, jlong p2) { return call_method<"read", jni::ref<java::util::concurrent::Future>>(p1, p2); }
	void write(jni::ref<java::nio::ByteBuffer> p1, jlong p2, jni::ref<java::lang::Object> p3, jni::ref<java::nio::channels::CompletionHandler> p4) { return call_method<"write", void>(p1, p2, p3, p4); }
	jni::ref<java::util::concurrent::Future> write(jni::ref<java::nio::ByteBuffer> p1, jlong p2) { return call_method<"write", jni::ref<java::util::concurrent::Future>>(p1, p2); }

protected:

	AsynchronousFileChannel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_ASYNCHRONOUSFILECHANNEL
