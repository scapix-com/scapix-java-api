// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_LEGACY_INTERCEPTOR_REQUESTINFOEXT_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_LEGACY_INTERCEPTOR_REQUESTINFOEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::legacy::interceptor { class RequestInfoExt; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::legacy::interceptor::RequestInfoExt>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/legacy/interceptor/RequestInfoExt";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_LEGACY_INTERCEPTOR_REQUESTINFOEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_LEGACY_INTERCEPTOR_REQUESTINFOEXT)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_LEGACY_INTERCEPTOR_REQUESTINFOEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/legacy/connection/Connection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::legacy::interceptor::RequestInfoExt : public jni::object_base<"com/sun/corba/se/spi/legacy/interceptor/RequestInfoExt",
	java::lang::Object>
{
public:

	jni::ref<com::sun::corba::se::spi::legacy::connection::Connection> connection() { return call_method<"connection", jni::ref<com::sun::corba::se::spi::legacy::connection::Connection>>(); }

protected:

	RequestInfoExt(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_LEGACY_INTERCEPTOR_REQUESTINFOEXT
