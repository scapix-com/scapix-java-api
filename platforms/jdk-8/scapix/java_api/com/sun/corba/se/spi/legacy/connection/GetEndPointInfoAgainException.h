// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_LEGACY_CONNECTION_GETENDPOINTINFOAGAINEXCEPTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_LEGACY_CONNECTION_GETENDPOINTINFOAGAINEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::legacy::connection { class GetEndPointInfoAgainException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::legacy::connection::GetEndPointInfoAgainException>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/legacy/connection/GetEndPointInfoAgainException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_LEGACY_CONNECTION_GETENDPOINTINFOAGAINEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_LEGACY_CONNECTION_GETENDPOINTINFOAGAINEXCEPTION)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_LEGACY_CONNECTION_GETENDPOINTINFOAGAINEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/transport/SocketInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::legacy::connection::GetEndPointInfoAgainException : public jni::object_base<"com/sun/corba/se/spi/legacy/connection/GetEndPointInfoAgainException",
	java::lang::Exception>
{
public:

	static jni::ref<com::sun::corba::se::spi::legacy::connection::GetEndPointInfoAgainException> new_object(jni::ref<com::sun::corba::se::spi::transport::SocketInfo> p1) { return base_::new_object(p1); }
	jni::ref<com::sun::corba::se::spi::transport::SocketInfo> getEndPointInfo() { return call_method<"getEndPointInfo", jni::ref<com::sun::corba::se::spi::transport::SocketInfo>>(); }

protected:

	GetEndPointInfoAgainException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_LEGACY_CONNECTION_GETENDPOINTINFOAGAINEXCEPTION
