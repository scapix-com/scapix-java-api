// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/channels/spi/AbstractSelectableChannel.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_SCTPMULTICHANNEL_FWD
#define SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_SCTPMULTICHANNEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::nio::sctp { class SctpMultiChannel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::nio::sctp::SctpMultiChannel>
{
	static constexpr fixed_string class_name = "com/sun/nio/sctp/SctpMultiChannel";
	using base_classes = std::tuple<scapix::java_api::java::nio::channels::spi::AbstractSelectableChannel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_SCTPMULTICHANNEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_SCTPMULTICHANNEL)
#define SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_SCTPMULTICHANNEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/nio/sctp/Association.h>
#include <scapix/java_api/com/sun/nio/sctp/MessageInfo.h>
#include <scapix/java_api/com/sun/nio/sctp/NotificationHandler.h>
#include <scapix/java_api/com/sun/nio/sctp/SctpChannel.h>
#include <scapix/java_api/com/sun/nio/sctp/SctpSocketOption.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/SocketAddress.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::nio::sctp::SctpMultiChannel : public jni::object_base<"com/sun/nio/sctp/SctpMultiChannel",
	java::nio::channels::spi::AbstractSelectableChannel>
{
public:

	static jni::ref<com::sun::nio::sctp::SctpMultiChannel> open() { return call_static_method<"open", jni::ref<com::sun::nio::sctp::SctpMultiChannel>>(); }
	jni::ref<java::util::Set> associations() { return call_method<"associations", jni::ref<java::util::Set>>(); }
	jni::ref<com::sun::nio::sctp::SctpMultiChannel> bind(jni::ref<java::net::SocketAddress> p1, jint p2) { return call_method<"bind", jni::ref<com::sun::nio::sctp::SctpMultiChannel>>(p1, p2); }
	jni::ref<com::sun::nio::sctp::SctpMultiChannel> bind(jni::ref<java::net::SocketAddress> p1) { return call_method<"bind", jni::ref<com::sun::nio::sctp::SctpMultiChannel>>(p1); }
	jni::ref<com::sun::nio::sctp::SctpMultiChannel> bindAddress(jni::ref<java::net::InetAddress> p1) { return call_method<"bindAddress", jni::ref<com::sun::nio::sctp::SctpMultiChannel>>(p1); }
	jni::ref<com::sun::nio::sctp::SctpMultiChannel> unbindAddress(jni::ref<java::net::InetAddress> p1) { return call_method<"unbindAddress", jni::ref<com::sun::nio::sctp::SctpMultiChannel>>(p1); }
	jni::ref<java::util::Set> getAllLocalAddresses() { return call_method<"getAllLocalAddresses", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> getRemoteAddresses(jni::ref<com::sun::nio::sctp::Association> p1) { return call_method<"getRemoteAddresses", jni::ref<java::util::Set>>(p1); }
	jni::ref<com::sun::nio::sctp::SctpMultiChannel> shutdown(jni::ref<com::sun::nio::sctp::Association> p1) { return call_method<"shutdown", jni::ref<com::sun::nio::sctp::SctpMultiChannel>>(p1); }
	jni::ref<java::lang::Object> getOption(jni::ref<com::sun::nio::sctp::SctpSocketOption> p1, jni::ref<com::sun::nio::sctp::Association> p2) { return call_method<"getOption", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<com::sun::nio::sctp::SctpMultiChannel> setOption(jni::ref<com::sun::nio::sctp::SctpSocketOption> p1, jni::ref<java::lang::Object> p2, jni::ref<com::sun::nio::sctp::Association> p3) { return call_method<"setOption", jni::ref<com::sun::nio::sctp::SctpMultiChannel>>(p1, p2, p3); }
	jni::ref<java::util::Set> supportedOptions() { return call_method<"supportedOptions", jni::ref<java::util::Set>>(); }
	jint validOps() { return call_method<"validOps", jint>(); }
	jni::ref<com::sun::nio::sctp::MessageInfo> receive(jni::ref<java::nio::ByteBuffer> p1, jni::ref<java::lang::Object> p2, jni::ref<com::sun::nio::sctp::NotificationHandler> p3) { return call_method<"receive", jni::ref<com::sun::nio::sctp::MessageInfo>>(p1, p2, p3); }
	jint send(jni::ref<java::nio::ByteBuffer> p1, jni::ref<com::sun::nio::sctp::MessageInfo> p2) { return call_method<"send", jint>(p1, p2); }
	jni::ref<com::sun::nio::sctp::SctpChannel> branch(jni::ref<com::sun::nio::sctp::Association> p1) { return call_method<"branch", jni::ref<com::sun::nio::sctp::SctpChannel>>(p1); }

protected:

	SctpMultiChannel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_SCTPMULTICHANNEL
