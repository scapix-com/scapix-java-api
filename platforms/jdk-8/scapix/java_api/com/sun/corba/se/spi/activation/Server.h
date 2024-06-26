// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/activation/ServerOperations.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/IDLEntity.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_SERVER_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_SERVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::activation { class Server; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::activation::Server>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/activation/Server";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::activation::ServerOperations, scapix::java_api::org::omg::CORBA::Object, scapix::java_api::org::omg::CORBA::portable::IDLEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_SERVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_SERVER)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_SERVER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::activation::Server : public jni::object_base<"com/sun/corba/se/spi/activation/Server",
	java::lang::Object,
	com::sun::corba::se::spi::activation::ServerOperations,
	org::omg::CORBA::Object,
	org::omg::CORBA::portable::IDLEntity>
{
public:


protected:

	Server(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_SERVER
