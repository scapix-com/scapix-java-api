// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/nio/channels/AsynchronousChannel.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_ASYNCHRONOUSBYTECHANNEL_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_ASYNCHRONOUSBYTECHANNEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::channels { class AsynchronousByteChannel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::channels::AsynchronousByteChannel>
{
	static constexpr fixed_string class_name = "java/nio/channels/AsynchronousByteChannel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::nio::channels::AsynchronousChannel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_ASYNCHRONOUSBYTECHANNEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_ASYNCHRONOUSBYTECHANNEL)
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_ASYNCHRONOUSBYTECHANNEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/nio/channels/CompletionHandler.h>
#include <scapix/java_api/java/util/concurrent/Future.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::channels::AsynchronousByteChannel : public jni::object_base<"java/nio/channels/AsynchronousByteChannel",
	java::lang::Object,
	java::nio::channels::AsynchronousChannel>
{
public:

	void read(jni::ref<java::nio::ByteBuffer> p1, jni::ref<java::lang::Object> p2, jni::ref<java::nio::channels::CompletionHandler> p3) { return call_method<"read", void>(p1, p2, p3); }
	jni::ref<java::util::concurrent::Future> read(jni::ref<java::nio::ByteBuffer> p1) { return call_method<"read", jni::ref<java::util::concurrent::Future>>(p1); }
	void write(jni::ref<java::nio::ByteBuffer> p1, jni::ref<java::lang::Object> p2, jni::ref<java::nio::channels::CompletionHandler> p3) { return call_method<"write", void>(p1, p2, p3); }
	jni::ref<java::util::concurrent::Future> write(jni::ref<java::nio::ByteBuffer> p1) { return call_method<"write", jni::ref<java::util::concurrent::Future>>(p1); }

protected:

	AsynchronousByteChannel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_ASYNCHRONOUSBYTECHANNEL
