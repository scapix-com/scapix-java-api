// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATION_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::orb { class Operation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::orb::Operation>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/orb/Operation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATION)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::orb::Operation : public jni::object_base<"com/sun/corba/se/spi/orb/Operation",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> operate(jni::ref<java::lang::Object> p1) { return call_method<"operate", jni::ref<java::lang::Object>>(p1); }

protected:

	Operation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATION
