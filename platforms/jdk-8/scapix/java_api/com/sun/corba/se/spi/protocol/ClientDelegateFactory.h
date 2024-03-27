// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PROTOCOL_CLIENTDELEGATEFACTORY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PROTOCOL_CLIENTDELEGATEFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::protocol { class ClientDelegateFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::protocol::ClientDelegateFactory>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/protocol/ClientDelegateFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PROTOCOL_CLIENTDELEGATEFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PROTOCOL_CLIENTDELEGATEFACTORY)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PROTOCOL_CLIENTDELEGATEFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/protocol/CorbaClientDelegate.h>
#include <scapix/java_api/com/sun/corba/se/spi/transport/CorbaContactInfoList.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::protocol::ClientDelegateFactory : public jni::object_base<"com/sun/corba/se/spi/protocol/ClientDelegateFactory",
	java::lang::Object>
{
public:

	jni::ref<com::sun::corba::se::spi::protocol::CorbaClientDelegate> create(jni::ref<com::sun::corba::se::spi::transport::CorbaContactInfoList> p1) { return call_method<"create", jni::ref<com::sun::corba::se::spi::protocol::CorbaClientDelegate>>(p1); }

protected:

	ClientDelegateFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PROTOCOL_CLIENTDELEGATEFACTORY