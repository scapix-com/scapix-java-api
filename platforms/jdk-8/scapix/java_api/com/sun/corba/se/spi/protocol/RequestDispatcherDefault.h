// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PROTOCOL_REQUESTDISPATCHERDEFAULT_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PROTOCOL_REQUESTDISPATCHERDEFAULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::protocol { class RequestDispatcherDefault; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::protocol::RequestDispatcherDefault>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/protocol/RequestDispatcherDefault";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PROTOCOL_REQUESTDISPATCHERDEFAULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PROTOCOL_REQUESTDISPATCHERDEFAULT)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PROTOCOL_REQUESTDISPATCHERDEFAULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/pept/protocol/ClientRequestDispatcher.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/com/sun/corba/se/spi/protocol/CorbaServerRequestDispatcher.h>
#include <scapix/java_api/com/sun/corba/se/spi/protocol/LocalClientRequestDispatcherFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::protocol::RequestDispatcherDefault : public jni::object_base<"com/sun/corba/se/spi/protocol/RequestDispatcherDefault",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::corba::se::pept::protocol::ClientRequestDispatcher> makeClientRequestDispatcher() { return call_static_method<"makeClientRequestDispatcher", jni::ref<com::sun::corba::se::pept::protocol::ClientRequestDispatcher>>(); }
	static jni::ref<com::sun::corba::se::spi::protocol::CorbaServerRequestDispatcher> makeServerRequestDispatcher(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return call_static_method<"makeServerRequestDispatcher", jni::ref<com::sun::corba::se::spi::protocol::CorbaServerRequestDispatcher>>(p1); }
	static jni::ref<com::sun::corba::se::spi::protocol::CorbaServerRequestDispatcher> makeBootstrapServerRequestDispatcher(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return call_static_method<"makeBootstrapServerRequestDispatcher", jni::ref<com::sun::corba::se::spi::protocol::CorbaServerRequestDispatcher>>(p1); }
	static jni::ref<com::sun::corba::se::spi::protocol::CorbaServerRequestDispatcher> makeINSServerRequestDispatcher(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return call_static_method<"makeINSServerRequestDispatcher", jni::ref<com::sun::corba::se::spi::protocol::CorbaServerRequestDispatcher>>(p1); }
	static jni::ref<com::sun::corba::se::spi::protocol::LocalClientRequestDispatcherFactory> makeMinimalServantCacheLocalClientRequestDispatcherFactory(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return call_static_method<"makeMinimalServantCacheLocalClientRequestDispatcherFactory", jni::ref<com::sun::corba::se::spi::protocol::LocalClientRequestDispatcherFactory>>(p1); }
	static jni::ref<com::sun::corba::se::spi::protocol::LocalClientRequestDispatcherFactory> makeInfoOnlyServantCacheLocalClientRequestDispatcherFactory(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return call_static_method<"makeInfoOnlyServantCacheLocalClientRequestDispatcherFactory", jni::ref<com::sun::corba::se::spi::protocol::LocalClientRequestDispatcherFactory>>(p1); }
	static jni::ref<com::sun::corba::se::spi::protocol::LocalClientRequestDispatcherFactory> makeFullServantCacheLocalClientRequestDispatcherFactory(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return call_static_method<"makeFullServantCacheLocalClientRequestDispatcherFactory", jni::ref<com::sun::corba::se::spi::protocol::LocalClientRequestDispatcherFactory>>(p1); }
	static jni::ref<com::sun::corba::se::spi::protocol::LocalClientRequestDispatcherFactory> makeJIDLLocalClientRequestDispatcherFactory(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return call_static_method<"makeJIDLLocalClientRequestDispatcherFactory", jni::ref<com::sun::corba::se::spi::protocol::LocalClientRequestDispatcherFactory>>(p1); }
	static jni::ref<com::sun::corba::se::spi::protocol::LocalClientRequestDispatcherFactory> makePOALocalClientRequestDispatcherFactory(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return call_static_method<"makePOALocalClientRequestDispatcherFactory", jni::ref<com::sun::corba::se::spi::protocol::LocalClientRequestDispatcherFactory>>(p1); }

protected:

	RequestDispatcherDefault(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PROTOCOL_REQUESTDISPATCHERDEFAULT
