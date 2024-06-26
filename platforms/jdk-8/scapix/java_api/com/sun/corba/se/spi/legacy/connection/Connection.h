// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_LEGACY_CONNECTION_CONNECTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_LEGACY_CONNECTION_CONNECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::legacy::connection { class Connection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::legacy::connection::Connection>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/legacy/connection/Connection";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_LEGACY_CONNECTION_CONNECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_LEGACY_CONNECTION_CONNECTION)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_LEGACY_CONNECTION_CONNECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/Socket.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::legacy::connection::Connection : public jni::object_base<"com/sun/corba/se/spi/legacy/connection/Connection",
	java::lang::Object>
{
public:

	jni::ref<java::net::Socket> getSocket() { return call_method<"getSocket", jni::ref<java::net::Socket>>(); }

protected:

	Connection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_LEGACY_CONNECTION_CONNECTION
