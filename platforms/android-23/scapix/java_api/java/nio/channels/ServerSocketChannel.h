// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/channels/spi/AbstractSelectableChannel.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::channels { class ServerSocketChannel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::channels::ServerSocketChannel>
{
	static constexpr fixed_string class_name = "java/nio/channels/ServerSocketChannel";
	using base_classes = std::tuple<scapix::java_api::java::nio::channels::spi::AbstractSelectableChannel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL)
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/ServerSocket.h>
#include <scapix/java_api/java/nio/channels/SocketChannel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::channels::ServerSocketChannel : public jni::object_base<"java/nio/channels/ServerSocketChannel",
	java::nio::channels::spi::AbstractSelectableChannel>
{
public:

	static jni::ref<java::nio::channels::ServerSocketChannel> open() { return call_static_method<"open", jni::ref<java::nio::channels::ServerSocketChannel>>(); }
	jint validOps() { return call_method<"validOps", jint>(); }
	jni::ref<java::net::ServerSocket> socket() { return call_method<"socket", jni::ref<java::net::ServerSocket>>(); }
	jni::ref<java::nio::channels::SocketChannel> accept() { return call_method<"accept", jni::ref<java::nio::channels::SocketChannel>>(); }

protected:

	ServerSocketChannel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL