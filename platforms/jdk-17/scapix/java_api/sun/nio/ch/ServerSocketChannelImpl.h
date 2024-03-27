// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/channels/ServerSocketChannel.h>
#include <scapix/java_api/sun/nio/ch/SelChImpl.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_SERVERSOCKETCHANNELIMPL_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_SERVERSOCKETCHANNELIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class ServerSocketChannelImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::ServerSocketChannelImpl>
{
	static constexpr fixed_string class_name = "sun/nio/ch/ServerSocketChannelImpl";
	using base_classes = std::tuple<scapix::java_api::java::nio::channels::ServerSocketChannel, scapix::java_api::sun::nio::ch::SelChImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_SERVERSOCKETCHANNELIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_SERVERSOCKETCHANNELIMPL)
#define SCAPIX_JAVA_API_SUN_NIO_CH_SERVERSOCKETCHANNELIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/ServerSocket.h>
#include <scapix/java_api/java/net/SocketAddress.h>
#include <scapix/java_api/java/net/SocketOption.h>
#include <scapix/java_api/java/nio/channels/SocketChannel.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/sun/nio/ch/SelectionKeyImpl.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::ServerSocketChannelImpl : public jni::object_base<"sun/nio/ch/ServerSocketChannelImpl",
	java::nio::channels::ServerSocketChannel,
	sun::nio::ch::SelChImpl>
{
public:

	jni::ref<java::net::ServerSocket> socket() { return call_method<"socket", jni::ref<java::net::ServerSocket>>(); }
	jni::ref<java::net::SocketAddress> getLocalAddress() { return call_method<"getLocalAddress", jni::ref<java::net::SocketAddress>>(); }
	jni::ref<java::nio::channels::ServerSocketChannel> setOption(jni::ref<java::net::SocketOption> name, jni::ref<java::lang::Object> value) { return call_method<"setOption", jni::ref<java::nio::channels::ServerSocketChannel>>(name, value); }
	jni::ref<java::lang::Object> getOption(jni::ref<java::net::SocketOption> name) { return call_method<"getOption", jni::ref<java::lang::Object>>(name); }
	jni::ref<java::util::Set> supportedOptions() { return call_method<"supportedOptions", jni::ref<java::util::Set>>(); }
	jni::ref<java::nio::channels::ServerSocketChannel> bind(jni::ref<java::net::SocketAddress> local, jint backlog) { return call_method<"bind", jni::ref<java::nio::channels::ServerSocketChannel>>(local, backlog); }
	jni::ref<java::nio::channels::SocketChannel> accept() { return call_method<"accept", jni::ref<java::nio::channels::SocketChannel>>(); }
	void kill() { return call_method<"kill", void>(); }
	jboolean translateReadyOps(jint ops, jint initialOps, jni::ref<sun::nio::ch::SelectionKeyImpl> ski) { return call_method<"translateReadyOps", jboolean>(ops, initialOps, ski); }
	jboolean translateAndUpdateReadyOps(jint ops, jni::ref<sun::nio::ch::SelectionKeyImpl> ski) { return call_method<"translateAndUpdateReadyOps", jboolean>(ops, ski); }
	jboolean translateAndSetReadyOps(jint ops, jni::ref<sun::nio::ch::SelectionKeyImpl> ski) { return call_method<"translateAndSetReadyOps", jboolean>(ops, ski); }
	jint translateInterestOps(jint ops) { return call_method<"translateInterestOps", jint>(ops); }
	jni::ref<java::io::FileDescriptor> getFD() { return call_method<"getFD", jni::ref<java::io::FileDescriptor>>(); }
	jint getFDVal() { return call_method<"getFDVal", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ServerSocketChannelImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_SERVERSOCKETCHANNELIMPL
