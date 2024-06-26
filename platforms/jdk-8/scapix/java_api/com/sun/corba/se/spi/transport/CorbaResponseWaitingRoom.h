// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/ResponseWaitingRoom.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_CORBARESPONSEWAITINGROOM_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_CORBARESPONSEWAITINGROOM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::transport { class CorbaResponseWaitingRoom; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::transport::CorbaResponseWaitingRoom>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/transport/CorbaResponseWaitingRoom";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::pept::transport::ResponseWaitingRoom>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_CORBARESPONSEWAITINGROOM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_CORBARESPONSEWAITINGROOM)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_CORBARESPONSEWAITINGROOM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/pept/protocol/MessageMediator.h>
#include <scapix/java_api/org/omg/CORBA/SystemException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::transport::CorbaResponseWaitingRoom : public jni::object_base<"com/sun/corba/se/spi/transport/CorbaResponseWaitingRoom",
	java::lang::Object,
	com::sun::corba::se::pept::transport::ResponseWaitingRoom>
{
public:

	void signalExceptionToAllWaiters(jni::ref<org::omg::CORBA::SystemException> p1) { return call_method<"signalExceptionToAllWaiters", void>(p1); }
	jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> getMessageMediator(jint p1) { return call_method<"getMessageMediator", jni::ref<com::sun::corba::se::pept::protocol::MessageMediator>>(p1); }

protected:

	CorbaResponseWaitingRoom(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_CORBARESPONSEWAITINGROOM
