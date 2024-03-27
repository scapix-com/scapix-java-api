// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/transport/EventHandlerBase.h>
#include <scapix/java_api/com/sun/corba/se/spi/transport/CorbaAcceptor.h>
#include <scapix/java_api/com/sun/corba/se/spi/transport/SocketOrChannelAcceptor.h>
#include <scapix/java_api/com/sun/corba/se/spi/orbutil/threadpool/Work.h>
#include <scapix/java_api/com/sun/corba/se/spi/transport/SocketInfo.h>
#include <scapix/java_api/com/sun/corba/se/spi/legacy/connection/LegacyServerSocketEndPointInfo.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_SOCKETORCHANNELACCEPTORIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_SOCKETORCHANNELACCEPTORIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::transport { class SocketOrChannelAcceptorImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::transport::SocketOrChannelAcceptorImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/transport/SocketOrChannelAcceptorImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::transport::EventHandlerBase, scapix::java_api::com::sun::corba::se::spi::transport::CorbaAcceptor, scapix::java_api::com::sun::corba::se::spi::transport::SocketOrChannelAcceptor, scapix::java_api::com::sun::corba::se::spi::orbutil::threadpool::Work, scapix::java_api::com::sun::corba::se::spi::transport::SocketInfo, scapix::java_api::com::sun::corba::se::spi::legacy::connection::LegacyServerSocketEndPointInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_SOCKETORCHANNELACCEPTORIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_SOCKETORCHANNELACCEPTORIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_SOCKETORCHANNELACCEPTORIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/impl/oa/poa/Policies.h>
#include <scapix/java_api/com/sun/corba/se/pept/broker/Broker.h>
#include <scapix/java_api/com/sun/corba/se/pept/encoding/InputObject.h>
#include <scapix/java_api/com/sun/corba/se/pept/encoding/OutputObject.h>
#include <scapix/java_api/com/sun/corba/se/pept/protocol/MessageMediator.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/Acceptor.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/Connection.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/EventHandler.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/InboundConnectionCache.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/IORTemplate.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/ServerSocket.h>
#include <scapix/java_api/java/nio/channels/SelectableChannel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::transport::SocketOrChannelAcceptorImpl : public jni::object_base<"com/sun/corba/se/impl/transport/SocketOrChannelAcceptorImpl",
	com::sun::corba::se::impl::transport::EventHandlerBase,
	com::sun::corba::se::spi::transport::CorbaAcceptor,
	com::sun::corba::se::spi::transport::SocketOrChannelAcceptor,
	com::sun::corba::se::spi::orbutil::threadpool::Work,
	com::sun::corba::se::spi::transport::SocketInfo,
	com::sun::corba::se::spi::legacy::connection::LegacyServerSocketEndPointInfo>
{
public:

	static jni::ref<com::sun::corba::se::impl::transport::SocketOrChannelAcceptorImpl> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::corba::se::impl::transport::SocketOrChannelAcceptorImpl> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jint p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::corba::se::impl::transport::SocketOrChannelAcceptorImpl> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jint p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4) { return base_::new_object(p1, p2, p3, p4); }
	jboolean initialize() { return call_method<"initialize", jboolean>(); }
	jboolean initialized() { return call_method<"initialized", jboolean>(); }
	jni::ref<java::lang::String> getConnectionCacheType() { return call_method<"getConnectionCacheType", jni::ref<java::lang::String>>(); }
	void setConnectionCache(jni::ref<com::sun::corba::se::pept::transport::InboundConnectionCache> p1) { return call_method<"setConnectionCache", void>(p1); }
	jni::ref<com::sun::corba::se::pept::transport::InboundConnectionCache> getConnectionCache() { return call_method<"getConnectionCache", jni::ref<com::sun::corba::se::pept::transport::InboundConnectionCache>>(); }
	jboolean shouldRegisterAcceptEvent() { return call_method<"shouldRegisterAcceptEvent", jboolean>(); }
	void accept() { return call_method<"accept", void>(); }
	void close() { return call_method<"close", void>(); }
	jni::ref<com::sun::corba::se::pept::transport::EventHandler> getEventHandler() { return call_method<"getEventHandler", jni::ref<com::sun::corba::se::pept::transport::EventHandler>>(); }
	jni::ref<java::lang::String> getObjectAdapterId() { return call_method<"getObjectAdapterId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getObjectAdapterManagerId() { return call_method<"getObjectAdapterManagerId", jni::ref<java::lang::String>>(); }
	void addToIORTemplate(jni::ref<com::sun::corba::se::spi::ior::IORTemplate> p1, jni::ref<com::sun::corba::se::impl::oa::poa::Policies> p2, jni::ref<java::lang::String> p3) { return call_method<"addToIORTemplate", void>(p1, p2, p3); }
	jni::ref<java::lang::String> getMonitoringName() { return call_method<"getMonitoringName", jni::ref<java::lang::String>>(); }
	jni::ref<java::nio::channels::SelectableChannel> getChannel() { return call_method<"getChannel", jni::ref<java::nio::channels::SelectableChannel>>(); }
	jint getInterestOps() { return call_method<"getInterestOps", jint>(); }
	jni::ref<com::sun::corba::se::pept::transport::Acceptor> getAcceptor() { return call_method<"getAcceptor", jni::ref<com::sun::corba::se::pept::transport::Acceptor>>(); }
	jni::ref<com::sun::corba::se::pept::transport::Connection> getConnection() { return call_method<"getConnection", jni::ref<com::sun::corba::se::pept::transport::Connection>>(); }
	void doWork() { return call_method<"doWork", void>(); }
	void setEnqueueTime(jlong p1) { return call_method<"setEnqueueTime", void>(p1); }
	jlong getEnqueueTime() { return call_method<"getEnqueueTime", jlong>(); }
	jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> createMessageMediator(jni::ref<com::sun::corba::se::pept::broker::Broker> p1, jni::ref<com::sun::corba::se::pept::transport::Connection> p2) { return call_method<"createMessageMediator", jni::ref<com::sun::corba::se::pept::protocol::MessageMediator>>(p1, p2); }
	jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> finishCreatingMessageMediator(jni::ref<com::sun::corba::se::pept::broker::Broker> p1, jni::ref<com::sun::corba::se::pept::transport::Connection> p2, jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> p3) { return call_method<"finishCreatingMessageMediator", jni::ref<com::sun::corba::se::pept::protocol::MessageMediator>>(p1, p2, p3); }
	jni::ref<com::sun::corba::se::pept::encoding::InputObject> createInputObject(jni::ref<com::sun::corba::se::pept::broker::Broker> p1, jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> p2) { return call_method<"createInputObject", jni::ref<com::sun::corba::se::pept::encoding::InputObject>>(p1, p2); }
	jni::ref<com::sun::corba::se::pept::encoding::OutputObject> createOutputObject(jni::ref<com::sun::corba::se::pept::broker::Broker> p1, jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> p2) { return call_method<"createOutputObject", jni::ref<com::sun::corba::se::pept::encoding::OutputObject>>(p1, p2); }
	jni::ref<java::net::ServerSocket> getServerSocket() { return call_method<"getServerSocket", jni::ref<java::net::ServerSocket>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getType() { return call_method<"getType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getHostName() { return call_method<"getHostName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getHost() { return call_method<"getHost", jni::ref<java::lang::String>>(); }
	jint getPort() { return call_method<"getPort", jint>(); }
	jint getLocatorPort() { return call_method<"getLocatorPort", jint>(); }
	void setLocatorPort(jint p1) { return call_method<"setLocatorPort", void>(p1); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	SocketOrChannelAcceptorImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_SOCKETORCHANNELACCEPTORIMPL
