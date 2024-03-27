// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/channels/DatagramChannel.h>
#include <scapix/java_api/sun/nio/ch/SelChImpl.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMCHANNELIMPL_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMCHANNELIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class DatagramChannelImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::DatagramChannelImpl>
{
	static constexpr fixed_string class_name = "sun/nio/ch/DatagramChannelImpl";
	using base_classes = std::tuple<scapix::java_api::java::nio::channels::DatagramChannel, scapix::java_api::sun::nio::ch::SelChImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMCHANNELIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMCHANNELIMPL)
#define SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMCHANNELIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/net/DatagramSocket.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/NetworkInterface.h>
#include <scapix/java_api/java/net/ProtocolFamily.h>
#include <scapix/java_api/java/net/SocketAddress.h>
#include <scapix/java_api/java/net/SocketOption.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/nio/channels/MembershipKey.h>
#include <scapix/java_api/java/nio/channels/spi/SelectorProvider.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/sun/nio/ch/SelectionKeyImpl.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::DatagramChannelImpl : public jni::object_base<"sun/nio/ch/DatagramChannelImpl",
	java::nio::channels::DatagramChannel,
	sun::nio::ch::SelChImpl>
{
public:

	static jni::ref<sun::nio::ch::DatagramChannelImpl> new_object(jni::ref<java::nio::channels::spi::SelectorProvider> sp) { return base_::new_object(sp); }
	static jni::ref<sun::nio::ch::DatagramChannelImpl> new_object(jni::ref<java::nio::channels::spi::SelectorProvider> sp, jni::ref<java::net::ProtocolFamily> family) { return base_::new_object(sp, family); }
	static jni::ref<sun::nio::ch::DatagramChannelImpl> new_object(jni::ref<java::nio::channels::spi::SelectorProvider> sp, jni::ref<java::io::FileDescriptor> fd) { return base_::new_object(sp, fd); }
	jni::ref<java::net::DatagramSocket> socket() { return call_method<"socket", jni::ref<java::net::DatagramSocket>>(); }
	jni::ref<java::net::SocketAddress> getLocalAddress() { return call_method<"getLocalAddress", jni::ref<java::net::SocketAddress>>(); }
	jni::ref<java::net::SocketAddress> getRemoteAddress() { return call_method<"getRemoteAddress", jni::ref<java::net::SocketAddress>>(); }
	jni::ref<java::nio::channels::DatagramChannel> setOption(jni::ref<java::net::SocketOption> name, jni::ref<java::lang::Object> value) { return call_method<"setOption", jni::ref<java::nio::channels::DatagramChannel>>(name, value); }
	jni::ref<java::lang::Object> getOption(jni::ref<java::net::SocketOption> name) { return call_method<"getOption", jni::ref<java::lang::Object>>(name); }
	jni::ref<java::util::Set> supportedOptions() { return call_method<"supportedOptions", jni::ref<java::util::Set>>(); }
	jni::ref<java::net::SocketAddress> receive(jni::ref<java::nio::ByteBuffer> dst) { return call_method<"receive", jni::ref<java::net::SocketAddress>>(dst); }
	jint send(jni::ref<java::nio::ByteBuffer> src, jni::ref<java::net::SocketAddress> target) { return call_method<"send", jint>(src, target); }
	jint read(jni::ref<java::nio::ByteBuffer> buf) { return call_method<"read", jint>(buf); }
	jlong read(jni::ref<jni::array<java::nio::ByteBuffer>> dsts, jint offset, jint length) { return call_method<"read", jlong>(dsts, offset, length); }
	jint write(jni::ref<java::nio::ByteBuffer> buf) { return call_method<"write", jint>(buf); }
	jlong write(jni::ref<jni::array<java::nio::ByteBuffer>> srcs, jint offset, jint length) { return call_method<"write", jlong>(srcs, offset, length); }
	jni::ref<java::nio::channels::DatagramChannel> bind(jni::ref<java::net::SocketAddress> local) { return call_method<"bind", jni::ref<java::nio::channels::DatagramChannel>>(local); }
	jboolean isConnected() { return call_method<"isConnected", jboolean>(); }
	jni::ref<java::nio::channels::DatagramChannel> connect(jni::ref<java::net::SocketAddress> sa) { return call_method<"connect", jni::ref<java::nio::channels::DatagramChannel>>(sa); }
	jni::ref<java::nio::channels::DatagramChannel> disconnect() { return call_method<"disconnect", jni::ref<java::nio::channels::DatagramChannel>>(); }
	jni::ref<java::nio::channels::MembershipKey> join(jni::ref<java::net::InetAddress> group, jni::ref<java::net::NetworkInterface> interf) { return call_method<"join", jni::ref<java::nio::channels::MembershipKey>>(group, interf); }
	jni::ref<java::nio::channels::MembershipKey> join(jni::ref<java::net::InetAddress> group, jni::ref<java::net::NetworkInterface> interf, jni::ref<java::net::InetAddress> source) { return call_method<"join", jni::ref<java::nio::channels::MembershipKey>>(group, interf, source); }
	void kill() { return call_method<"kill", void>(); }
	jboolean translateReadyOps(jint ops, jint initialOps, jni::ref<sun::nio::ch::SelectionKeyImpl> ski) { return call_method<"translateReadyOps", jboolean>(ops, initialOps, ski); }
	jboolean translateAndUpdateReadyOps(jint ops, jni::ref<sun::nio::ch::SelectionKeyImpl> ski) { return call_method<"translateAndUpdateReadyOps", jboolean>(ops, ski); }
	jboolean translateAndSetReadyOps(jint ops, jni::ref<sun::nio::ch::SelectionKeyImpl> ski) { return call_method<"translateAndSetReadyOps", jboolean>(ops, ski); }
	jint translateInterestOps(jint ops) { return call_method<"translateInterestOps", jint>(ops); }
	jni::ref<java::io::FileDescriptor> getFD() { return call_method<"getFD", jni::ref<java::io::FileDescriptor>>(); }
	jint getFDVal() { return call_method<"getFDVal", jint>(); }

protected:

	DatagramChannelImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMCHANNELIMPL
