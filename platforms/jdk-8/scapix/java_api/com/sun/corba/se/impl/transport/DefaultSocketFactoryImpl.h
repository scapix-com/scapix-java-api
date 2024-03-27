// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/transport/ORBSocketFactory.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_DEFAULTSOCKETFACTORYIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_DEFAULTSOCKETFACTORYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::transport { class DefaultSocketFactoryImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::transport::DefaultSocketFactoryImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/transport/DefaultSocketFactoryImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::transport::ORBSocketFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_DEFAULTSOCKETFACTORYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_DEFAULTSOCKETFACTORYIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_DEFAULTSOCKETFACTORYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/pept/transport/Acceptor.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetSocketAddress.h>
#include <scapix/java_api/java/net/ServerSocket.h>
#include <scapix/java_api/java/net/Socket.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::transport::DefaultSocketFactoryImpl : public jni::object_base<"com/sun/corba/se/impl/transport/DefaultSocketFactoryImpl",
	java::lang::Object,
	com::sun::corba::se::spi::transport::ORBSocketFactory>
{
public:

	static jni::ref<com::sun::corba::se::impl::transport::DefaultSocketFactoryImpl> new_object() { return base_::new_object(); }
	void setORB(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return call_method<"setORB", void>(p1); }
	jni::ref<java::net::ServerSocket> createServerSocket(jni::ref<java::lang::String> p1, jni::ref<java::net::InetSocketAddress> p2) { return call_method<"createServerSocket", jni::ref<java::net::ServerSocket>>(p1, p2); }
	jni::ref<java::net::Socket> createSocket(jni::ref<java::lang::String> p1, jni::ref<java::net::InetSocketAddress> p2) { return call_method<"createSocket", jni::ref<java::net::Socket>>(p1, p2); }
	void setAcceptedSocketOptions(jni::ref<com::sun::corba::se::pept::transport::Acceptor> p1, jni::ref<java::net::ServerSocket> p2, jni::ref<java::net::Socket> p3) { return call_method<"setAcceptedSocketOptions", void>(p1, p2, p3); }

protected:

	DefaultSocketFactoryImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_DEFAULTSOCKETFACTORYIMPL
