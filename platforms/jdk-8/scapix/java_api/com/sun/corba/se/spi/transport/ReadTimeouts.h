// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_READTIMEOUTS_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_READTIMEOUTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::transport { class ReadTimeouts; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::transport::ReadTimeouts>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/transport/ReadTimeouts";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_READTIMEOUTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_READTIMEOUTS)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_READTIMEOUTS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::transport::ReadTimeouts : public jni::object_base<"com/sun/corba/se/spi/transport/ReadTimeouts",
	java::lang::Object>
{
public:

	jint get_initial_time_to_wait() { return call_method<"get_initial_time_to_wait", jint>(); }
	jint get_max_time_to_wait() { return call_method<"get_max_time_to_wait", jint>(); }
	jdouble get_backoff_factor() { return call_method<"get_backoff_factor", jdouble>(); }
	jint get_max_giop_header_time_to_wait() { return call_method<"get_max_giop_header_time_to_wait", jint>(); }

protected:

	ReadTimeouts(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_TRANSPORT_READTIMEOUTS
