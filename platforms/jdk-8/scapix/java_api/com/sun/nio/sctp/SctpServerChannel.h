// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/channels/spi/AbstractSelectableChannel.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_SCTPSERVERCHANNEL_FWD
#define SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_SCTPSERVERCHANNEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::nio::sctp { class SctpServerChannel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::nio::sctp::SctpServerChannel>
{
	static constexpr fixed_string class_name = "com/sun/nio/sctp/SctpServerChannel";
	using base_classes = std::tuple<scapix::java_api::java::nio::channels::spi::AbstractSelectableChannel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_SCTPSERVERCHANNEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_SCTPSERVERCHANNEL)
#define SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_SCTPSERVERCHANNEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/nio/sctp/SctpChannel.h>
#include <scapix/java_api/com/sun/nio/sctp/SctpSocketOption.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/SocketAddress.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::nio::sctp::SctpServerChannel : public jni::object_base<"com/sun/nio/sctp/SctpServerChannel",
	java::nio::channels::spi::AbstractSelectableChannel>
{
public:

	static jni::ref<com::sun::nio::sctp::SctpServerChannel> open() { return call_static_method<"open", jni::ref<com::sun::nio::sctp::SctpServerChannel>>(); }
	jni::ref<com::sun::nio::sctp::SctpChannel> accept() { return call_method<"accept", jni::ref<com::sun::nio::sctp::SctpChannel>>(); }
	jni::ref<com::sun::nio::sctp::SctpServerChannel> bind(jni::ref<java::net::SocketAddress> p1) { return call_method<"bind", jni::ref<com::sun::nio::sctp::SctpServerChannel>>(p1); }
	jni::ref<com::sun::nio::sctp::SctpServerChannel> bind(jni::ref<java::net::SocketAddress> p1, jint p2) { return call_method<"bind", jni::ref<com::sun::nio::sctp::SctpServerChannel>>(p1, p2); }
	jni::ref<com::sun::nio::sctp::SctpServerChannel> bindAddress(jni::ref<java::net::InetAddress> p1) { return call_method<"bindAddress", jni::ref<com::sun::nio::sctp::SctpServerChannel>>(p1); }
	jni::ref<com::sun::nio::sctp::SctpServerChannel> unbindAddress(jni::ref<java::net::InetAddress> p1) { return call_method<"unbindAddress", jni::ref<com::sun::nio::sctp::SctpServerChannel>>(p1); }
	jni::ref<java::util::Set> getAllLocalAddresses() { return call_method<"getAllLocalAddresses", jni::ref<java::util::Set>>(); }
	jni::ref<java::lang::Object> getOption(jni::ref<com::sun::nio::sctp::SctpSocketOption> p1) { return call_method<"getOption", jni::ref<java::lang::Object>>(p1); }
	jni::ref<com::sun::nio::sctp::SctpServerChannel> setOption(jni::ref<com::sun::nio::sctp::SctpSocketOption> p1, jni::ref<java::lang::Object> p2) { return call_method<"setOption", jni::ref<com::sun::nio::sctp::SctpServerChannel>>(p1, p2); }
	jni::ref<java::util::Set> supportedOptions() { return call_method<"supportedOptions", jni::ref<java::util::Set>>(); }
	jint validOps() { return call_method<"validOps", jint>(); }

protected:

	SctpServerChannel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NIO_SCTP_SCTPSERVERCHANNEL